#include <iostream>

int  Compile (int lineCount)
{
    int res;
    res=lineCount/2+lineCount%2;
    return res;
}

int main()
{
    int s = Compile(35);
    Compile(s);

    std::cout << s;
}