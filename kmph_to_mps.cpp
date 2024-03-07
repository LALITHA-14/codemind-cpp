#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    float m;
    cin>>n;
    m=n*(0.27778);
    cout<<std::fixed<<setprecision(2)<<float(m);
}