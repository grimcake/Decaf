#ifndef MYENUM_H
#define MYENUM_H

enum Tag
{

    TK_ID,  //标识符

    TK_PLUS,   //+
    TK_MINUS,  //-
    TK_STAR,   //*
    TK_DIVIDE, ///
    TK_MOD,    //%
    TK_ASSIGN,  //=
    TK_EQ,     //==
    TK_NEQ,    //!=
    TK_GT,     //>
    TK_GEQ,    //>=
    TK_LT,     //<
    TK_LEQ,    //<=
    TK_POINTTO, //->
    TK_DOT,    //.
    TK_AND,    //&
    TK_LS,     //(
    TK_RS,     //)
    TK_LM,     //[
    TK_RM,     //]
    TK_LL,     //{
    TK_RL,     //}
    TK_SEMICOLON, //;
    TK_COMMA,  //,

    //关键字
    KW_BOOL,
    KW_BREAK,
    KW_CLASS,
    KW_ELSE,
    KW_EXTENDS,
    KW_FOR,
    KW_IF,
    KW_INT,
    KW_NEW,
    KW_NULL,
    KW_RETURN,
    KW_STRING,
    KW_THIS,
    KW_VOID,
    KW_WHILE,
    KW_STATIC,
    KW_PRINT,
    KW_READINTEGER,
    KW_READLINE,
    KW_INSTANCEOF
};


#endif // MYENUM_H
