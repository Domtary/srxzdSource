#include<iostream>
using namespace std;


int main(){
    //一维数组
    int a[5];  //利用下标赋值
    //int a[5] = {1,2,3,4,5};
    // int a[] = {1,2,3,4,5};
    // int len = sizeof(a)/sizeof(a[0]); //获取元素个数
    
    for(int i=0;i<5;i++){
      a[i] = i;
    }

    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
    for(int i=0;i<5;i++){
      cout<<a[i]<<" ";
    }


    cout<<endl;
    //二维数组
    int b[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
    //int b[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
    for ( int i = 0; i < 3; i++ ){
      for ( int j = 0; j < 5; j++ )
      {
         cout << b[i][j]<< " ";
      }
      cout<<endl;
    }

    system("pause");
    return 0;
}