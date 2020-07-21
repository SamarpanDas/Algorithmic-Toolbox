
// A solution is better than this is present in the equal subset sum in my copy
// and the code is there in algorithms/equal subset sum





/*

#include <iostream>
using namespace std;

int rec(int a[], int n, int one, int two, int three)
{
    if(n == 0)
    {
        if(one == two && two == three)
            return 1;
        
        else
            return (-100);
    }
    
    else
    {
        return max ((max((rec(a, n-1, one + a[n-1], two, three)), (rec(a, n-1, one, two + a[n-1], three)))),(rec(a, n-1, one, two, three + a[n-1])));
    }
    
}





int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int ans = rec(a, n, 0, 0, 0);
    
    
    cout<<"ans : "<<ans<<endl;
    if(ans == 1)
        cout<<1<<endl;
    
    else
        cout<<0<<endl;
    
}


*/

#include <iostream>
using namespace std;

int rec(int a[], int n, int one, int two, int three)
{
    if(n == 0)
    {
        if(one == two && two == three)
            return 1;
        
        else
            return (-100);
    }
    
    else
    {
        return max ((max((rec(a, n-1, one + a[n-1], two, three)), (rec(a, n-1, one, two + a[n-1], three)))),(rec(a, n-1, one, two, three + a[n-1])));
    }
    
}



int dynamic_solution(int a[], int n, int x)
{
    int t[n+1][x+1];
    
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= x; j++)
        {
            if(i == 0 && j == 0)
                t[i][j] = 1;
            
            else if (i == 0 && j != 0)
                t[i][j] = -100;
            
            else
            {
                if(a[i-1] > j)
                    t[i][j] = t[i-1][j];
                
                else
                {
                    t[i][j] = max((t[i-1][j]), (t[i-1][j-a[i-1]]));
                }
                
            }
        }
    }
    return t[n][x];
}



int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    //int ans = rec(a, n, 0, 0, 0);
    
    /*
    //cout<<"ans : "<<ans<<endl;
    if(ans == 1)
        cout<<1<<endl;
    
    else
        cout<<0<<endl;
    
    */
    
    int sum = 0;
    for(int i=0;i<n;i++)
        sum = sum + a[i];
    
    if(sum % 3 == 0)
    {
        int ans2 = dynamic_solution(a, n, sum/3);   // based on recu
        //cout<<"Dynamic Soln : ";
        if(ans2 == 1)
            cout<<1<<endl;
        
        else
            cout<<0<<endl;
    }
    
    else
        cout<<0<<endl;
   
    return 0;
    
}



