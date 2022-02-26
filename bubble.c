#include <stdio.h>
void bubbleS(int *array,int len);
int main(){
    int arr[]= {1,2,3,8,4,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    bubbleS(arr,len);
    int i;
    for ( i = 0; i < len; i++){
        printf("%d ",arr[i]);
    } 
}

void bubbleS(int* array,int len){
    int swapped=1;
    int i=0,j,aux;
    while(swapped && i<len-1){
        swapped = 0;
        j = len-1;
        while (j>i){
            if (array[j]<array[j-1]){
                aux = array[j];
                array[j] = array[j-1];
                array[j-1] = aux;
                swapped = 1;
            }
            --j;         
        }
    ++i;        
    }    
}