#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>

using namespace std;


struct Segment
{
  long start, end;
};

bool comparator(Segment a, Segment b)
{
    return a.end < b.end;
}

vector<long> optimal_points(vector<Segment> &segments)   //change the return type
{
    vector<long> points;
    
    sort(segments.begin(),  segments.end(), comparator);
    
    /*
    for (int i=0; i<segments.size(); i++)
    {
        cout<<segments[i].start<<"  "<<segments[i].end<<endl;
    }
     */
    
    long lastOne = 0;
    long success = 0;
    
    for(long i = 0; i < segments.size(); i++)
    {
        if(i == 0)
        {
            lastOne = segments[i].end;
            points.push_back(lastOne);
            
        }
        
        else
        {
            if((lastOne >= segments[i].start) && (lastOne <= segments[i].end))
                success++;
            
            else
            {
                lastOne = segments[i].end;
                points.push_back(lastOne);
            }
                
        }
    }
    return points;
}


int main()
{
    long n;
    cin>>n;
    vector<Segment> segments(n);
    
    for(long i = 0; i < n; i++)
    {
        cin >> segments[i].start >> segments[i].end;
    }
    
    vector<long> points = optimal_points(segments);
    cout<<points.size()<<endl;
    
    for (long i=0; i<points.size(); i++)
    {
        cout<< points[i]<<" ";
    }cout<<endl;
    
    
    return 0;
}

