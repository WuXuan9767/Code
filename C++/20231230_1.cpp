#include<iostream>
#include<cstring>
using namespace std;

struct Employee{
    long code;
    char name[20];
    float salary;
};

struct EmployeeName{
    char name[20];
};

int mycompare(const void *p1,const void *p2);
void output(Employee*ptrArray,int cnt);
float averagesalary(Employee*ptrArray,int cnt);
int numberofpeople(Employee*ptrArray);
EmployeeName names[6]={"jone","david","marit","jasen","peter","yoke"};

int main(){
    int cnt ;
    cin >> cnt;

    Employee *ptrArray=new Employee[cnt];

    for (int i=0;i<cnt;i++){

        ptrArray[i].code =i+1;
        ptrArray[i].salary =2000+((int)((double)rand()/(RAND_MAX+1)*10000*100)/(double)100);
        strncpy_s(ptrArray[i].name,names[i%6].name,20);
    }

    output(ptrArray,cnt);
    int number=numberofpeople(ptrArray);
    qsort((void*)ptrArray,(size_t)cnt,sizeof(Employee),mycompare);
    output(ptrArray,cnt);
    cout << "平均工资为"<<averagesalary(ptrArray,cnt)<<endl;
    cout<<"员工人数为"<<number<<endl;
    

    delete[] ptrArray;
    
}
int mycompare(const void *p1,const void *p2){
    int rt=0;
    Employee*a=(Employee*)p1;
    Employee*b=(Employee*)p2;
    if (a->salary<b->salary){
        rt=-1;
    }
    else if(a->salary == b->salary){
        rt=0;
    }
    else{
        rt=1;
    }
    return rt;
}

void output(Employee*ptrArray,int cnt){
    cout<<"工号，\t姓名,\t工资"<<endl;
    for (int i=0 ;i<cnt;i++){
        cout <<ptrArray[i].code
        <<",\t"<<ptrArray[i].name
        <<",\t"<<ptrArray[i].salary<<endl;
    }
}

float averagesalary(Employee*ptrArray,int cnt){
    float allsalary;
    for (int i=0 ;i<cnt;i++){
        allsalary+=ptrArray[i].salary;
    }
    return allsalary/=cnt;
    
}
int numberofpeople(Employee*ptrArray){
    int i=1;
    while (i==ptrArray[i].code-1){
        i++;
    }
    return i;
}  



   