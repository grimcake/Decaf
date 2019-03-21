#include "keywords.h"
#include "myenum.h"

Keywords::Keywords()
{
    keywords["bool"] = KW_BOOL;
    keywords["break"] = KW_BREAK;
    keywords["class"] = KW_CLASS;
    keywords["else"] = KW_ELSE;
    keywords["extends"] = KW_EXTENDS;
    keywords["for"] = KW_FOR;
    keywords["if"] = KW_IF;
    keywords["int"] = KW_INT;
    keywords["new"] = KW_NEW;
    keywords["null"] = KW_NULL;
    keywords["return"] = KW_RETURN;
    keywords["string"] = KW_STRING;
    keywords["this"] = KW_THIS;
    keywords["void"] = KW_VOID;
    keywords["while"] = KW_WHILE;
    keywords["static"] = KW_STATIC;
    keywords["Print"] = KW_PRINT;
    keywords["ReadInteger"] = KW_READINTEGER;
    keywords["ReadLine"] = KW_READLINE;
    keywords["instanceof"] = KW_INSTANCEOF;
}

Tag Keywords::is_kw(string n)
{
    if(keywords[n] <= KW_INSTANCEOF && keywords[n] >= KW_BOOL)
    {
        return (Tag)keywords[n];
    }
    else return TK_ID;
}
