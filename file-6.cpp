#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, product = 1;

    while (n!=0)
    {

        int digit = n % 10;
        product = product * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int answr = product - sum;
    return answr;
}
