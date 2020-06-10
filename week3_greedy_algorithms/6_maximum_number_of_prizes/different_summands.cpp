#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long n;
    cin>>n;
    vector<long> values;
    
    int i=1;
    long remaining = n;
    long value = 0;
    
    while(remaining >= i)
    {
        value = value + i;
        remaining = remaining - i;
        values.push_back(i);
        i++;
        
        
    }
    
    long temp = n - value;
    values[i-2] = values[i-2] + temp;
    
    cout<<values.size()<<endl;
    
    for(int i=0;i<values.size();i++)
        cout<<values[i]<<" ";
    
    return 0;
    
    
}

