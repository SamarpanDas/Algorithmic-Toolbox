#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long> a;
    int largest = 0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x > largest)
            {
                a.push_back(largest);
                largest = x;
            }
        else
            a.push_back(x);
        
    }
    auto sl = max_element(a.begin(), a.end());
    cout<<(largest) * (*sl);
    
   return 0;
}

