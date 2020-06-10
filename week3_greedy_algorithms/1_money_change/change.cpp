#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int numCoins = 0;
    
    while(n>0)
    {
        if(n >= 10)
        {
            int quotient = n/10;
            int remainder = n%10;
            
            numCoins = numCoins + quotient;
            n = remainder;
        }
        
        if(n >= 5)
        {
            n = n-5;
            numCoins++;
        }
        
        if(n>0)
        {
            numCoins = numCoins+n;
            n = 0;
            
        }
        
    }
    
    cout<<numCoins;
    return 0;
}
