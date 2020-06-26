#include<iostream>
using namespace std;


int main(){
    
    // sizeof 统计数据类型所占内存大小

    //short 
    short num = 10;
    cout<<sizeof(short)<<endl;
    cout<<sizeof(num)<<endl;
    //int 
    cout<<sizeof(int)<<endl;
    //long
    cout<<sizeof(long)<<endl;
    //long long
    cout<<sizeof(long long)<<endl;

    system("pause");
    return 0;
}