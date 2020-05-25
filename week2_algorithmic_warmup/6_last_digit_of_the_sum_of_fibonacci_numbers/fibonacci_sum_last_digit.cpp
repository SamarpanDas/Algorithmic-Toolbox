#include<iostream>
using namespace std;

int last_digit_fibo(long long n)
{
    int m = n % 60;
    int res[m+1];
    
    res[0] = 0;
    res[1] = 1;

    
    int i = 0;
    for(i = 2; i < m;i++ )
    {
        res[i] = (res[i-1]%10 + res[i-2]%10)%10;
        
    }
    
    int ans = res[i];
    if(ans == 0)
        return 9;
    else
        return (ans % 10 - 1);
}

int main()
{
    long long n = 0;
    cin>>n;
    
    
    long long nn = n+2;
    
    
          
    if(n == 0)
    cout<<0;
    
    else if(n == 1)
        cout<<1;
    
    else
    {
        cout<<last_digit_fibo(nn);
        
    }
    return 0;
}






