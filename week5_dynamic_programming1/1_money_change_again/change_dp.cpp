#include <iostream>
using namespace std;

int rec(int deno[], int n, int money, int check)
{
    if(n == 0 && money != 0)
    {
        return 99999;
    }
    
    else if(money == 0)
    {
        return check;
    }
    
    else
    {
        if(deno[n-1] > money)
        {
            return rec(deno, n - 1, money, check);
        }
        
        else
        {
            return min((rec(deno, n - 1, money, check)), (rec(deno, n, money - deno[n-1], check+1)));
        }
    }
}


int coinChange(int deno[], int n, int money, int check)
{
    int t[n+1][money + 1];
    
    
    for(int i = 0;i <= n; i++)
    {
        for(int j = 0; j <= money; j++)
        {
            if(i == 0 && j != 0)
            {
                t[i][j] = 99999;
            }
            
            else if(j == 0)
            {
                t[i][j] = check;
            }
            
            else
            {
                if(deno[i-1] > j)
                {
                    //return rec(deno, n - 1, money, check);
                    t[i][j] = t[i-1][j];
                }
                
                else
                {
                    
                    t[i][j] = min(  (t[i-1][j]) ,(  (t[i][j - deno[i-1]]) + check + 1 ) );
                }
            }
        }
    }
    
    return t[n][money];
}

int main()
{
    int n = 3;
    int deno[] = {1, 3, 4};
    int money;
    cin>>money;
    
    //cout<<rec(deno, n, money, 0)<<endl;
    cout<<coinChange(deno, n, money, 0)<<endl;
    
    return 0;
}

