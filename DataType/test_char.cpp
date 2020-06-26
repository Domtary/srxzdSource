#include<iostream>
using namespace std;
int main(){

    char ch ='a';
    //char ch1 = "a";//ERROR
    //char ch2 = 'abcd';//ERROR

    cout<<ch<<endl;
    cout<<(int)ch<<endl;    //查看ASCII值
    cout<<sizeof(char)<<endl;

    //转义字符
    cout<<"hello\n"<<"world"<<endl;
    cout<<"\\"<<endl;
    cout<<"aaaa\t"<<"good"<<endl;
    cout<<"aa\t"<<"good"<<endl;
    cout<<"aaaaaa\t"<<"good"<<endl;

    system("pause");
    return 0;
}