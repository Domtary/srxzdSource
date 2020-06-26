#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){

    // C_string
    // char 字符串名[] = "......"
    char c_g[] = "Hello"; // 'H','e','l','l','o','\0'
    char c_h[] = "World";
    char ch[10];

    cout<<"c_g:"<<c_g<<endl;
    cout<<"c_b:"<<c_h<<endl;

    strcpy(ch,c_g);
    strcat(ch,c_h);

    cout<<ch<<endl;
    cout<<strlen(ch)<<endl;
    cout<<strcmp(c_g,c_h)<<endl;
    cout<<strchr(ch,'W')<<endl;
    cout<<strstr(ch,"oW")<<endl;
    
    //string
    // include<string>
    // string 字符串名 = "......"
    cout<<endl;
    string s_g = "Hello";
    string s_h = "World";
    string str;
    cout<<"s_g:"<<s_g<<endl;
    cout<<"s_h:"<<s_h<<endl;
    
    str = s_g + s_h;

    cout<<str<<endl;
    cout<<str.length()<<endl;
    cout<< (s_g==s_h) <<endl;
    cout<<str.rfind('W')<<endl;
    cout<<str.rfind("oW")<<endl;
    system("pause");
    return 0;
}