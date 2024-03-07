#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,area,perimeter;
    cin>>a;
    area=(3.14*a*a);
    perimeter=(2*3.14*a);
    cout<<std::fixed<<setprecision(2)<<float(area)<<"
";
    cout<<float(perimeter)<<"
";
    return 0;
}