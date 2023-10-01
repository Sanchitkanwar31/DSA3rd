#include<stdio.h>
void main(){
//***1Binary search**
    int low=0,high,mid,pos;
    int n,key,a[100];
    scanf("%d",&n);
    printf("Enter element of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    high=n-1;
    mid=(low+high)/2;
    for(int i=0;i<n;i++){
        if(a[mid]==key){
            pos=mid;
        }
        else if(a[mid]<key){
            low=mid+1;

        }
        else {
            high=mid-1;
        }
    }

    printf("Element is at position :%d",pos);

//****2Linear search****
    for(int i=0;i<n;i++){
        if(a[i]==key){
            pos=i;
        }
    }
    printf("Element is at position :%d",pos);

}