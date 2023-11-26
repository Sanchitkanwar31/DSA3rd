#include<stdio.h>
void main(){
    int arr[100];
    int i,k,n,f;

    printf("No. of elements in array :\n");
    scanf("%d",&n);
    //*****Insertion in Array***
    printf("Enter eleements in aray:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    //*****Traversing Array******
    printf("Element travetsed:");
    for(i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }



    //****Searching from array*****
    printf("Enter element to be searched: \n");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        if(arr[i]==k){
            printf("Element id present");
        }
    }
    
    
    //******Deletionn****
    scanf("%d",&f);
    for(i=0;i<n;i++){
        if(arr[i]==f){
            arr[i]=arr[i+1];
        }
    }
    n=n-1;
    printf("Array after deletion: \n");
    for(i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
}