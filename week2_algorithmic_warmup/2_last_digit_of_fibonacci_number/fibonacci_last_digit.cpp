#include <iostream>

using namespace std;

int main()
{
    long n;
    
    cin>>n;
    n = n+1;
    int a[n];
    a[0] = 0;
    a[1] = 1;
    
    for(int i=2;i<n;i++)
    {
        int temp = (a[i-1]) + (a[i-2]);
        a[i] = temp % 10;
    }

    cout<<a[n-1];
    return 0;
}
