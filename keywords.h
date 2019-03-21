#ifndef KEYWORDS_H
#define KEYWORDS_H

#include <map>
#include "myenum.h"
using namespace std;

class Keywords
{
public:
    Keywords();
private:
    map<string, int> keywords;
    Tag is_kw(string n);
};

#endif // KEYWORDS_H
