#include <iostream>
#include <numeric>
using namespace std;

int RecursiveLCS(int X[], int nx, int Y[], int ny)
{
    if(nx == 0 || ny == 0)
        return 0;
    
    else if (X[nx-1] == Y[ny - 1])
        return (1 + RecursiveLCS(X, nx-1, Y, ny-1));
    
    else
    {
        return max((RecursiveLCS(X, nx, Y, ny-1)), (RecursiveLCS(X, nx-1, Y, ny)));
    }
}

int BottomTopLCS(int X[], int nx, int Y[], int ny)
{
    int t[nx+1][ny+1];
    
    for(int i=0;i<=nx;i++)
    {
        for(int j=0;j<=ny;j++)
        {
            if(i ==0 || j == 0)
            {
                t[i][j] = 0;
            }
            
            else if (X[i-1] == Y[j-1])
                t[i][j] = 1+t[i-1][j-1];
            
            else
            {
                t[i][j] = max((t[i-1][j]), (t[i][j-1]));
            }
        }
    }
    
    return t[nx][ny];
}

int main()
{
    int nx;
    cin>>nx;
    int X[nx];
    for(int i=0;i<nx;i++)
        cin>>X[i];
    
    int ny;
    cin>>ny;
    int Y[ny];
    for(int i=0;i<ny;i++)
        cin>>Y[i];
    
    
    //cout<<RecursiveLCS(X, nx, Y, ny)<<endl;
    cout<<BottomTopLCS(X, nx, Y, ny)<<endl;
    
    return 0;
    
}

