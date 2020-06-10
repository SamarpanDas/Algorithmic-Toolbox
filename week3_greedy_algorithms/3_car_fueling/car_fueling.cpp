/*
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    // write your code here
    return -1;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

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
    int totalDistance;
    int totalCapacity;
    int totalStops;
    
    cin >> totalDistance;
    cin >> totalCapacity;
    cin >> totalStops;
    
    int stops[totalStops];
    for(int i = 0;i < totalStops; i++)
        cin>>stops[i];
    
    
    int capacity = totalCapacity;
    
    int i = 0;
    int refill = 0;
    int distance = stops[i];
    
    while(i < totalStops)
    {
        capacity = capacity - distance;
        //cout<<capacity<<" ";
        
        if(i != totalStops-1)
        {
            distance = stops[i+1] - stops[i];
            
            if(capacity < distance)
            {
                refill++;
                //cout<<"Refilling :: "<<stops[i]<<"  ";
                capacity = totalCapacity;
                
                
                if(capacity < distance)
                {
                    
                    refill = -100;
                    break;
                }
            }
            
            
            
        }//end of if
        
        else
        {
            //capacity = capacity-distance;
            
            distance = totalDistance - stops[i];
            
            if(capacity < distance)
            {
                refill++;
                //cout<< "Refilling :: " << stops[i] << " ";
                capacity = totalCapacity;
                
                
                if(capacity < distance)
                {
                    //cout<< "OMGG" << stops[i] << " ";
                    refill = -100;
                    break;
                }
                 
            }
        }
        
        //cout<<distance<<endl;
        
        i++;
        
    }//end of loop
    
    //cout<<endl;
    if(refill < 0)
        cout<<-1<<endl;
    
    else
    cout<<refill<<endl;
    
    return 0;

}

