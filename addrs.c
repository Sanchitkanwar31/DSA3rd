#include<stdio.h>
void main(){
//*****Adress in 1D array****
    int arr[]={1,2,3,5,6};
    /*for(int i=0;i<6;i++){
        scanf("%d",&arr[i]);    
    }*/
    printf("index vlue");
    int j=3;
    //scanf("%d",&j);
    int n=sizeof(int);
    int* ba=arr;
    int* ad=ba+(j*n);
    printf("BASE Address of 1d %p\n",(void*)ba);
    printf("Address of 1d %p\n",(void*)ad);
    printf("verified value");
    for(int i=0;i<5;i++)
    {
        //ad=ba+(i*n);
        printf("%d\n",*(ba+i));
    }
//*****Adress in 2D array****
}
    
    
