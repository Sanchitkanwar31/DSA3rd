#include<stdio.h>
    
int binarysearch(int a[],int key,int n){
    int high=n-1;
    int low=0;
    int pos;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key){
            return mid ;
        }
        else if(a[mid]<key){
            low=mid+1;

        }
        else {
            high=mid-1;
        }
    }
    return -1;
}

/*int linearsrch(int a[100],int key,int n){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}*/

//*****linear search in 2d array\

int lineararray(int a[][],int i,int j,int key){
    

}

void main(){
    int n,key,a[15];
    printf("No of element \n");
    scanf("%d",&n);
    printf("Enter element of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Element at : %d",binarysearch(a,2,n));
    //printf("Element at : %d",linearsrch(a,2,n));

}