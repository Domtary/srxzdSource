#include<iostream>
using namespace std;
int main(){
    
    int a = 10;
    int* p = &a;    // p记录a的地址，取址符：&

    cout<<"a:"<<a<<endl;
    cout<<"&a:"<<&a<<endl;
    cout<<"p:"<<p<<endl;
    cout<<"*p:"<<*p<<endl;  //通过解引用的方式找到指针指向的内存
    cout<<"int* size:"<<sizeof(p)<<endl;  //存放地址 十六进制 32位系统->4字节 64位系统->8字节
    cout<<"char* size:"<<sizeof(char *)<<endl;
    cout<<"float* size:"<<sizeof(float *)<<endl;
    cout<<"double* size:"<<sizeof(double *)<<endl;
    //操作指针
    *p = 20;
    cout<<"a:"<<a<<endl;
    cout<<"&a:"<<&a<<endl;
    cout<<"p:"<<p<<endl;
    cout<<"*p:"<<*p<<endl; 

    system("pause");
    return 0;
}