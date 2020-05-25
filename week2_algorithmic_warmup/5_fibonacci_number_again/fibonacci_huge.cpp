#include <iostream>
using namespace std;


long long pisano(int m)
{
    long long a,b,c;
    
    for(long long i = 0; i < m*m; i++)
    {
        if(i==0)
        c = 0;
        
        else if(i == 1)
        c = 1;
        
        else
        c = a+b;
        
        b = a;
        a = c % m;
        
        if(a == 0 && b == 1)
        return i;

    }
    
}

long long fibo(long long rem, long long m)
{
    
    long long first = 0;
    long long second = 1;

    long long res = rem;

    for (int i = 1; i < rem; i++)
    {
        res = (first + second) % m;
        first = second;
        second = res;
    }

    return res % m;
}

int main()
{
    long long m,n;
    cin>>n>>m;
    long long p = pisano(m);
    
    
    long long rem = n % p;
    
    cout<<fibo(rem,m);
    return 0;
}

