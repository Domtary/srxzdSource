#include<iostream>
#include<algorithm> //标准算法
#include<vector>    //使用vector需要包含该头文件
using namespace std;


void myPrint(int value){
    cout<<value<<" ";
}


int main(){

    //vector的初始化
    // vector<int> a(10); //定义了10个整型元素的向量（尖括号中为元素类型名，它可以是任何合法的数据类型），但没有给出初值，其值是不确定的。
    // vector<int> a(10,1); //定义了10个整型元素的向量,且给出每个元素的初值为1
    // vector<int> a(b); //用b向量来创建a向量，整体复制性赋值
    // vector<int> a(b.begin(),b.begin+3); //定义了a值为b中第0个到第2个（共3个）元素
    // int b[7]={1,2,3,4,5,9,8};
    // vector<int> a(b,b+7); //从数组中获得初值

    vector<int> v;
    //向 vector 中插入元素(在尾部)
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    
    //遍历vector
    //数组式遍历
    int len = v.size();
    for(int i=0; i<len; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //迭代器遍历
    for(vector<int>::iterator it = v.begin();it != v.end();it++){
        cout<< *it <<" ";
    }
    cout<<endl;
    //使用STL提供的遍历算法
    for_each(v.begin(),v.end(),myPrint);
    cout<<endl;
    system("pause");
    return 0;
}
