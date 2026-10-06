#include <iostream>


void CandyDevider (int N, int M)
{
    int mladsii;
    mladsii = N/M+(N%M);
    int others;
    others = N/M;
    std :: cout << others << std::endl;
    std :: cout << mladsii << std::endl;
}



int main ()
{
   CandyDevider (10,3);
}