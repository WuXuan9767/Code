#include<iostream>
using namespace std;

struct Employee{
    long code;
    char name[20];
    float salary;
};
void printEmployee(const Employee p){
    cout <<p.name<<"   "<<p.code<<"   "<<p.salary<<endl;
    }

const int plen =6;

Employee person[plen]={
    {1,"jone",339.0},
    {2,"david5",9.0},
    {3,"david3",49.0},
    {4,"david2",349.0},
    {5,"david3",4549.0},
    {6,"david2",493.0}
};

                                        int main(){
                                            Employee temp,*p;
                                                for (int i=1;i<plen;i++){
                                                        for (p=person;p<=person+plen-i-1;p++){
                                                                    if (p->salary>(p+1)->salary){
                                                                                    temp =*p;
                                                                                                    *p=*(p+1);
                                                                                                                    *(p+1)=temp;
                                                                                                                                }
                                                                                                                                        }
                                                                                                                                            }
                                                                                                                                                for (int k =0;k<plen;k++){
                                                                                                                                                        printEmployee(person[k]);
                                                                                                                                                            }
                                                                                                                                                            }