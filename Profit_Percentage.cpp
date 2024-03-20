#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int profit=(y-x);
    float profit_percentage=(profit*100.0)/x;
    cout<<std::fixed<<setprecision(2)<<profit_percentage;
}