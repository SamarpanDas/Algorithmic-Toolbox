#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct details
{
    long res;
    long digtits;
    
};

bool compare(details a, details b)
{
    return a.res > b.res;
}

int main()
{
    long n;
    cin>>n;
    
    vector<details> numbers;
    
    long noth = 0;
    
    for(int i=0;i<n;i++)
    {
        long temp;
        cin>>temp;
        
        if(temp == 1000)
            noth++;
        
        else if(temp >= 0 && temp <= 9)
        {
            temp = temp * 100 + 97;
            
            details d;
            d.digtits = 1;
            d.res = temp;
            //cout<<temp<<" ";
            
            numbers.push_back(d);
            
        }
        
        else if(temp >= 10 && temp <= 99)
        {
            temp = temp * 10 + 8;
            
            details d;
            d.digtits = 2;
            d.res = temp;
            
            numbers.push_back(d);
            
        }
        
        else if(temp >= 100 && temp <= 999)
        {
            
            
            details d;
            d.digtits = 3;
            d.res = temp;
            
            numbers.push_back(d);
            
        }
    }
        
   
    
    /*
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<numbers[i].res<<" ";
    cout<<endl;
   
    sort(numbers.begin(), numbers.end(), compare);
    
    
    cout<<"Sorted nos. : ";
    for(int i=0;i<n;i++)
        cout<<numbers[i].res<<" ";
    cout<<endl;
    
    cout<<"Digits : ";
    for(int i=0;i<n;i++)
        cout<<numbers[i].digtits<<" ";
    cout<<endl;
    
    */
    
    sort(numbers.begin(), numbers.end(), compare);
    
    vector<long> real;
    
    
    for(int i=0;i<n;i++)
    {
        if(numbers[i].digtits == 1)
        {
            real.push_back(numbers[i].res/ 100);
            
        }
        
        else if(numbers[i].digtits == 2)
        {
            real.push_back(numbers[i].res/ 10);
        }
        
        else if(numbers[i].digtits == 3)
        {
            real.push_back(numbers[i].res);
        }
        
        
    }
    
    
    //cout<<"Real nos. : ";
    
    
    for (int i = 0; i<n; i++)
    {
        cout<<real[i];
    }
    
    if(noth != 0)
    {
        for(int i=0;i<noth;i++)
            cout<<1000;
    }
    cout<<endl;
    
    
    return 0;
    
    
}

