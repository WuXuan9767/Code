#include<iostream>
#include<cstring>
using namespace std;

struct ContactInf{
    char phone[11];
    char email[30];
    long qq;
};
struct Employee{
    long code;
    char name[20];
    float salary;
    char address[50];
    struct ContactInf contactInf;
};

struct EmployeeName{
    char name[20];
};
struct EmployeeAddress{
    char address[50];
};
struct EmployeeContactInf{
    char phone[11];
    char email[30];
    long qq;
};

int mycompare(const void *p1,const void *p2);
void output(Employee**ptrArray,int cnt);
EmployeeName names[6]={"jone","david","marit","jasen","peter","yoke"};
EmployeeAddress address[7]={"皇家1舍101","皇家1舍102","皇家1舍103","皇家1舍104","皇家1舍105","皇家1舍106","皇家1舍107"};
EmployeeContactInf contactInf[5]={
    {"123123324","64566456@adas.com",433245446},
    {"234332487","43453246@adas.com",878659678},
    {"123768678","66786456@adas.com",534555645},
    {"987563542","37686867@adas.com",654456405},
    {"406786734","75645867@adas.com",345892980},
};
int main(){
    int cnt ;
    cin >> cnt;

    Employee**ptrArray=(Employee**)malloc(cnt*sizeof(ptrArray));
    for (int i=0;i<cnt;i++){
        ptrArray[i]=new Employee;
        ptrArray[i]->code =i+1;
        ptrArray[i]->salary =2000+((int)((double)rand()/(RAND_MAX+1)*10000*100)/(double)100);
        strncpy_s(ptrArray[i]->name,names[i%6].name,20);
        strncpy_s(ptrArray[i]->address,address[i%7].address,50);
        strncpy_s(ptrArray[i]->contactInf.phone,contactInf[i%5].phone,11);
        strncpy_s(ptrArray[i]->contactInf.email,contactInf[i%5].email,30);
        ptrArray[i]->contactInf.qq=contactInf[i%5].qq;

    }
    output(ptrArray,cnt);
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
    cout<<"工号，\t姓名，\t工资，\t\t地址，\t\t电话，\t\t邮箱，\t\t\tQQ"<<endl;
    for (int i=0 ;i<cnt;i++){
        cout <<ptrArray[i]->code
        <<",\t"<<ptrArray[i]->name
        <<",\t"<<ptrArray[i]->salary
        <<",\t"<<ptrArray[i]->address
        <<",\t"<<ptrArray[i]->contactInf.phone
        <<",\t"<<ptrArray[i]->contactInf.email
        <<",\t"<<ptrArray[i]->contactInf.qq
        <<endl;
    }
}