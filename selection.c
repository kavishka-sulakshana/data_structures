#include <stdio.h>
void selectionS(int *array,int len);
int main(){
    int arr[]= {2,5,4,1,7,67,32,23,4,2,45,34,23};
    int len = sizeof(arr)/sizeof(arr[0]);
    selectionS(arr,len);
    int i;
    for ( i = 0; i < len; i++){
        printf("%d ",arr[i]);
    } 
}

void selectionS(int *array,int len){
    int i,j,min,aux;
    for(i=0;i<len-1;i++){
        min = i;
        for (j = i+1; j < len; j++){
            if (array[min]>array[j]){
                min = j;
            }
        }
        aux = array[i];
        array[i] = array[min];
        array[min] = aux;        
    }
}