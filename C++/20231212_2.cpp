#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int arraysize;
    int *array;
    cout <<"";
    cin >> arraysize;
    array =(int*)malloc(arraysize*sizeof(int));

    for (int count =0;count<arraysize;count++){
        array[count]=count *2;
    }
    for(int count =0;count<arraysize;count++){
        count << array[count] << ",";
}
cout <<endl;
free(array);
}