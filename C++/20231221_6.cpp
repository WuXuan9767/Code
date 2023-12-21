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
void output(Employee**ptrArray,int cnt);
EmployeeName names[6]={"erferf","erf","f3433ferrv","rfeef","xasxswe","erfe5tjjb"};

int main(){
    int cnt ;
    cin >> cnt;

    Employee**ptrArray=(Employee**)malloc(cnt*sizeof(ptrArray));
    for (int i=0;i<cnt;i++){
        ptrArray[i]=new Employee;
        ptrArray[i]->code =i+1;
        ptrArray[i]->salary =2000+((int)((double)rand()/(RAND_MAX+1)*10000*100)/(double)100);
        strncpy_s(ptrArray[i]->name,names[i%6].name,20);
    }
    qsort((void*)ptrArray,(size_t)cnt,sizeof(Employee*),mycompare);
    output(ptrArray,cnt);
    for (int i=0;i<cnt;i++){
        delete ptrArray[i];
    }
    free (ptrArray);
}
int mycompare(const void *p1,const void *p2){
    int rt=0;
    Employee*a=*((Employee**)p1);
    Employee*b=*((Employee**)p2);
    if (a->salary==b->salary){
        rt=0;
    }
    else if(a->salary < b->salary){
        rt=-1;
    }
    else{
        rt=1;
    }
    return rt;
}
void output(Employee**ptrArray,int cnt){
    cout<<"工号，\t姓名，\t工资"<<endl;
    for (int i=0 ;i<cnt;i++){
        cout <<ptrArray[i]->code
        <<",\t"<<ptrArray[i]->name
        <<",\t"<<ptrArray[i]->salary<<endl;
    }
}
   