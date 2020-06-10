/*

#include <iostream>
#include <vector>

using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;

  // write your code here

  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    int numItems = 0;
    int maxW = 0;
    cin>>numItems>>maxW;
    
    int values[numItems];
    int weights[numItems];
    //int unit[numItems];
    vector<double> unit(numItems);
    
    for(int i=0;i<numItems;i++)
    {
        double tempo = 0;
        double temps = 0;
        
        cin>>tempo>>temps;
        
        values[i] = tempo;
        weights[i] = temps;
        
        double temp = tempo/temps;
        unit[i] = temp;
        
    }
    
    /*
    cout<<"The unit part ::::   ";
    for(int i=0;i<numItems;i++)
    {
        cout<<unit[i]<<" ";
        
    }
     */
    //cout<<endl;
   
    double currentW = 0;
    double currentValue = 0;
    double remainingW = maxW;
    
    //long index=0;
    //auto N = sizeof(unit) / sizeof(int);
   
    while(remainingW > 0)
    {
        
        //cout<<endl;
        
        auto index = distance(unit.begin(), max_element(unit.begin(), unit.end()));
        //cout<< *max_element(unit.begin(), unit.end())<<"  "<<index<<endl;
        
        if(unit[index] == 0)
        {
            break;
        }
        
        
        unit[index] = 0;
        
        
        
        
        
        if(remainingW >= weights[index])
        {
            currentValue = currentValue + values[index];
            currentW = currentW + weights[index];
            
            remainingW = remainingW - weights[index];
            
            //cout<<"Remaining : "<<remainingW<<"  Current Value : "<<currentValue;
        }
        
        else
        {
            double temp = (remainingW/weights[index]) * (values[index]);
            
            currentValue = currentValue + temp;
            remainingW = 0;
            
            //cout<<"Remaining : "<<remainingW<<"  Current Value : "<<currentValue;
        }
        
        
        
    }
    
    //cout<<endl;
    cout.precision(10);
    cout<<currentValue<<endl;
    return 0;
    
    
    
}


