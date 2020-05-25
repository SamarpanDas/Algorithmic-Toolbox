#include <iostream>
using namespace std;

long gcd(long a, long b)
{
    while(b != 0)
    {
        long temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}
int main()
{
    long a,b;
    cin>>a>>b;
    
    long ans = 0;
    if(a>b)
    {
        ans = gcd(a,b);
    }
    else
        ans = gcd(b,a);
    
    long div = a / ans;
    long val = div * b;
    cout<< val;
    
    return 0;
}


