#ifndef LEXER_H
#define LEXER_H
#include <unistd.h>
#include <stdio.h>
#include <string>
#include "keywords.h"

using namespace std;

class Lexer
{
public:
    Lexer(char *filename);
    void getToken();
    void deal_token();
    void deal_unormal_token();
    void deal_space();
    void deal_keyword_id();  //解析关键字或标识符
private:
    FILE *fd;
    char wd;
    string tmp_wd;
    Keywords key_token;
    int token_id;  //符号在enum中的id

};


#endif // LEXER_H
