/*
#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

long long max_dot_product(vector<int> a, vector<int> b) {
  // write your code here
  long long result = 0;
  for (size_t i = 0; i < a.size(); i++) {
    result += ((long long) a[i]) * b[i];
  }
  return result;
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }
  std::cout << max_dot_product(a, b) << std::endl;
}
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<long> profit(n);
    vector<long> clicks(n);
    
    for (int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        
        profit[i] = temp;
    }
    
    for (int i=0; i<n; i++)
    {
        long temp;
        cin>>temp;
        
        clicks[i] = temp;
    }
    

    sort(clicks.rbegin(), clicks.rend());
    sort(profit.rbegin(), profit.rend());
    
    long total=0;
    for(int i=0;i<n;i++)
    {
        long temp = profit[i] * clicks[i];
        total = total+temp;
        
    }
    
    cout<<total<<endl;
    
    return 0;


}
