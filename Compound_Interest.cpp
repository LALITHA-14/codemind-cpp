#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int p,r,t;
    cin>>p>>r>>t;
    float R=r/100.0;;
    float ci=p*(pow(1+R,t))-p;
    cout<<std::fixed<<setprecision(2)<<ci;
}