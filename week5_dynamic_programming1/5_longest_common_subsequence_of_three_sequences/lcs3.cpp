#include <iostream>
#include <numeric>
using namespace std;



int RecuLCSBT(int X[], int nx, int Y[], int ny, int Z[], int nz)
{
    int t[nx + 1][ny + 1][nz + 1];
    
    for(int i = 0; i <= nx; i++)
    {
        for(int j = 0; j <= ny; j++)
        {
            for(int k = 0; k <= nz; k++)
            {
                if(i == 0 || j == 0 || k == 0)
                {
                    t[i][j][k] = 0;
                }
                
                else if (X[i-1] == Y[j-1] && Y[j-1] == Z[k-1])
                {
                    t[i][j][k] = 1 + t[i-1][j-1][k-1];
                }
                
                else
                {
                    int one = max ( (t[i-1][j][k]),    (t[i][j-1][k]));
                    int two = max ( (t[i][j][k-1]),    (t[i-1][j-1][k]));
                    int three = max ( (t[i][j-1][k-1]),    (t[i-1][j][k-1]));
                    
                    int four = max(one, two);
                    
                    t[i][j][k] = max(three, four);
                    
                }
            }
        }
    }
    
    return t[nx][ny][nz];
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
    
    int nz;
    cin>>nz;
    int Z[nz];
    for(int i=0;i<nz;i++)
        cin>>Z[i];
    
    cout<<RecuLCSBT(X, nx, Y, ny, Z, nz)<<endl;
 
    return 0;
    
}

