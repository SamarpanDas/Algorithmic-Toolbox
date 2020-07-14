
/*
#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(const vector<int> &a, int x) {
  int left = 0, right = (int)a.size(); 
  //write your code here
}

int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    std::cout << linear_search(a, b[i]) << ' ';
  }
}


*/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
long BinarySearch(vector<long> a, long l, long r, long b)
{
    if(r < l)
        return -1;
    
    else
    {
        long m = (l + r) / 2;
        
        if(a[m] == b)
        {
            return m;
        }
        
        else if(a[m] > b)
        {
            return BinarySearch(a, l, m-1, b);
        }
        
        else if(a[m] < b)
        {
            return BinarySearch(a, m+1, r, b);
        }
        
    }
    
    return -1;
}
*/

long BinarySearch(vector<long> arr, long l, long r, long x){
      while (l <= r) {
      long m = l + (r - l) / 2;

      // Check if x is present at mid
      if (arr[m] == x)
          return m;

      // If x greater, ignore left half
      if (arr[m] < x)
          l = m + 1;

      // If x is smaller, ignore right half
      else
          r = m - 1;
  }

  // if we reach here, then element was
  // not present
  return -1;
}

int main()
{
    long n;
    cin >> n;
    vector<long> a;
    
    long t;
    for(long i = 0; i < n; i++)
    {
        cin>>t;
        a.push_back(t);
    }
    
    long k;
    cin >> k;
    long pos = 0;
    vector<long> b;
    
    for(long i = 0; i < k; i++)
    {
        cin>>t;
        pos = BinarySearch(a, 0, n-1, t);
        cout<<pos<<" ";
    }
    
    return 0;
}
