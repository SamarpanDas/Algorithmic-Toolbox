/*
#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
  //write your code here
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}
*/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    long n;
    cin>>n;
    vector<long> a(n);
    
    for(long i=0;i<n;i++)
        cin>>a[i];
    
    sort(a.begin(), a.end());
    long mid = n/2;
    
    long target = a[mid];
    int nev = 0;
    for(long i = 0; i < ((n/2)+1); i++)
    {
        if(a[i] == target)
        {
            if(a[i + (n/2)] == target && ((i + n/2) <= n-1))
            {
                cout<< 1 <<endl;
                nev = 1;
                
                break;
            }
        }
        
    }
    
    if(nev == 0)
        cout<< 0 <<endl;
    
    
    
    
    return 0;
}

