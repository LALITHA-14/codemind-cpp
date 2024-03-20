#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int loss=(x-y);
    float lp=(loss*100.0)/x;
    cout<<std::fixed<<setprecision(2)<<lp;
}