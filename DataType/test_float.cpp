#include<iostream>
using namespace std;


int main(){

    // float
    float f1 = 3.1415926f;
    // double
    double d1 = 3.1415926;

    cout<<"f:"<<f1<<endl;
    cout<<"d:"<<d1<<endl;

    cout<<"size of float:"<<sizeof(f1)<<endl;
    cout<<"size of double:"<<sizeof(d1)<<endl;

    //科学计数法
    float f2 = 3e2; // 3*10^2
    cout<<"3*10^2:"<<f2<<endl;
    float f3 = 3e-2; // 3*10^-2
    cout<<"3*10^-2:"<<f3<<endl;

    system("pause");
    return 0;
}