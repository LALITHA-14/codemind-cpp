#include<iostream>
using namespace std;
int main()
{
    int T,S,B;
    cin>>T>>S>>B;
    int Capacity=2*T*S*B*512;
    int Capacity_in_kb=Capacity/1024;
    cout<<Capacity_in_kb<<" KB";
}