#include <iostream>
#include <regex>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
    string str = "/repos/:owner/:repo/";
    regex reg("\\w+");
    
    sregex_iterator pos(str.cbegin(), str.cend(), reg);
    decltype(pos) end;

    for(; pos != end; ++pos)
    {
        cout << pos -> str() << endl;
    }

    return 0;
}
