#include "lexer.h"

Lexer::Lexer(char *filename)
{
    fd = fopen(filename, "rb");
}

void Lexer::getToken()
{
    wd = getc(fd);
}

void Lexer::deal_token()
{
    tmp_wd.clear();
    deal_unormal_token();

    if((wd >= 'a' && wd <= 'z') || (wd >= 'A' || wd <= 'Z') || wd == '_')
    {
        tmp_wd += wd;
        deal_keyword_id();
    }

}

void Lexer::deal_unormal_token()
{
    if(wd == ' ' || wd == '\n' || wd == '\r')
    {
        deal_space();
    }
}

void Lexer::deal_space()
{
    for(;;)
    {
        getToken();
        if(wd == '\n' || wd == '\r' || wd == ' ')
        {
            continue;
        }
        else break;
    }
}

void Lexer::deal_keyword_id()
{
    for(;;)
    {
        getToken();
        if((wd >= 'a' && wd <= 'z') || (wd >= 'A' || wd <= 'Z') || wd == '_')
        {
            tmp_wd += wd;
        }
        else break;
    }
}
