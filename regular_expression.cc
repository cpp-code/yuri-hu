#include <iostream>
#include <regex>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
    string str = "123@qq.vip.com,456@gmail.com,789@163.com,abcd@my.com";
    regex reg("\\w+@\\w+(\\.\\w+)+");
    
    sregex_iterator pos(str.cbegin(), str.cend(), reg);
    decltype(pos) end;

    for(; pos != end; ++pos)
    {
        cout << pos -> str() << endl;
    }

    return 0;
}
