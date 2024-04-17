#include<iostream>
#include<string.h>
#include <random>
using namespace std;
class City
{
private:
    string provincename[34] = { "京", "津", "冀", "晋", "蒙", "辽", "吉", "黑", "沪", "苏",
        "浙", "皖", "闽", "赣", "鲁", "豫", "鄂", "湘", "粤", "桂",
        "琼", "渝", "川", "黔", "云", "藏", "陕", "甘", "青", "宁",
        "新", "台", "港", "澳" };
    int distance[34][34];
public:
   int findcityname(string name)
    {
        for (int i = 0; i < 34; i++)
        {
            if (name == provincename[i])
            {
                return i;
            }
            
        }
        return -1;
    }
    int getDistanceValue(int i, int j)
    {
        return distance[i][j];
    }
    void print()
    {
         for (int i = 0;i < 34; i++)
        {
            for (int j =0;j< 34;j++)
            {
                cout<< distance[i][j]<<" ";
            }
            cout<< endl;
        }
    }
    void getdistance()
    {
        for (int i = 0;i < 34; i++)
        {
            for (int j = i + 1;j < 34;j++)
            {
                distance[i][j] = rand() % 2001;
                distance[j][i] = distance[i][j];
            }
            distance[i][i] = 0;
        }
       
    }
};
    int main() {
        string a, b;
        City p;
        p.getdistance();
        p.print();
        cout << "请输入两个省份的简称" << endl;
        cin >> a >> b;
        
        cout << "两地距离为" << p.getDistanceValue(p.findcityname(a), p.findcityname(b)) << "km" << endl;
        return 0;
    
    }