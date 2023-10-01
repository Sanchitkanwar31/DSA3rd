#include<stdio.h>
void main(){
    int a[10],t,n;
//*****DS1****
    /*printf("Enter the array");
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
//****DS2****
    printf("Print the element");
    for(int i=0;i<6;i++){
        printf("%d \n",a[i]);
    }*/
//******DS3*****
    /*printf("Sorted array insert");
    int arr[6]={1,3,4,6,8,9};
    scanf("%d",&t);
    for(int i=0;i<6;i++){
        if(t>arr[i]&&t<arr[i+1]){
            int temp=arr[i+1];
            arr[i+1]=t;
            t=temp;


        }
        else 
            continue;
    }

    for(int i=0;i<7;i++){
        printf("%d \n",arr[i]);
    }*/

//*******ds6******
//repeation****
    // int arr[10];
    // int i;
    // printf("Enter elements of array \n");
    // for(i=0;i<6;i++){
    //     scanf("%d",&arr[i]);
    // }

    // printf("Repeating number :\n");
    // for(i=0;i<6;i++){
    //     if(arr[i]==arr[i+1]){
    //         printf("%d \n",arr[i]);
    //     }
    // }
//******ds7***
//reversal
    /*int arr[10];
    int i;
    printf("Enter elements of array \n");
    for(i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }

    printf("Reverse array :\n");
    for(int j=5;j>=0;j--){
        printf("%d",arr[j]);
    }*/
    
//***ds8***
//Merging soretd array
    int arr1[4]={1,2,3,};
    int arr2[3]={5,6,};
    for(int i=0;i<3;i++){
        arr1[4+i]=arr2[i];
    }

    printf("Mere Sorted array");
    for(int i=0;i<5;i++){
        printf("%d",arr1[i]);
    }

    
}