#include<iostream>
using namespace std;

int main(){
    int number=20;
    int interval=7;
    cout<< "请输入小孩个数"<<endl;
    cin >> number;
    cout<< "请输入间隔数"<<endl;
    cin >>interval;

    int child[number];
    for(int i=0;i<number;i++){
        child[i]=i+1;
    }
    
    int Counted_nunber=1;//数到第几个数
    int Counted_exited=1;//退出条件
    int Counted_boy=0;//数到第几个小孩
    while(Counted_exited<number){
        if(child[Counted_boy%number]==0){
            Counted_boy++;
        }
        else{
            if(Counted_nunber==interval){
            child[Counted_boy%number]=0;
            cout << "第"<<Counted_boy%number+1<<"小孩离开了"<<endl;
            Counted_exited++;
            Counted_nunber=0;
        }
        Counted_nunber++;
        Counted_boy++;
        }
    }
    for(int i=0;i<number;i++){
        if(child[i]!=0){
           cout << "第"<<i+1<<"小孩获胜了"<<endl; 
        }
    }
}