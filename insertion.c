#include <stdio.h>
void insertionS(int *array,int len);
int main(){
    int arr[]= {2,5,4,1,7,67,32,23,4,2,45,34,23};
    int len = sizeof(arr)/sizeof(arr[0]);
    insertionS(arr,len);
    int i;
    for ( i = 0; i < len; i++){
        printf("%d ",arr[i]);
    } 
}

void insertionS(int *array,int len){
    int i,k,j;
    for(i=1;i<len;i++){
        k = array[i];
        j = i-1;
        while(j>=0 && k < array[j]){
            array[j+1] = array[j];
            j=j-1;
        }
        array[j+1] = k;
    }
}