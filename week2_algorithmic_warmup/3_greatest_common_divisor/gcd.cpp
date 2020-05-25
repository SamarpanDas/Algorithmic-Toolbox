#include <iostream>
using namespace std;

void gcd(long a, long b)
{
    while(b != 0)
    {
        long temp = b;
        b = a % b;
        a = temp;
    }
    
    cout<< a;
}
int main()
{
    long a,b;
    cin>>a>>b;
    
    if(a>b)
    {
        gcd(a,b);
    }
    else
        gcd(b,a);
    
    return 0;
}

