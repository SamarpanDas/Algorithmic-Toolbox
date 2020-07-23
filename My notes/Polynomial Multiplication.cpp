// Polynomial Multiplication

// Naive Implementation
#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int a[(2*n) -1];
    
    for(int i = 0; i < (2 * n) - 1; i++)
    a[i] = 0;
    
    int A[n] = {4, 3, 2, 1};
    int B[n] = {1, 2, 3, 4};
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i + j] = a[i + j] + (A[i] * B[j]);
       }
    }
    
    for(int i = 0; i < (2 * n) - 1; i++)
    cout<<a[i]<<" ";
    
    
    
    return 0;
}
