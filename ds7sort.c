#include<stdio.h>
#include<math.h>

/*void insertion(int a[],int n){
    int i,k,j;
    for(i=1;i<=n;i++){
        k=a[i];
        j=i-1;

        while(j>=0 && a[j]>k){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=k;
    }
}*/

/*void bubble(int a[],int n){
      int t;
      for(int i=0;i<=n;i++){
        for(int j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
        }
      }
}*/

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
}
int main(){
    int ar[]={12,554,87,3,7,5};
    print(ar,6);
    bubble(ar,6);
    printf("After sort\n");
    print(ar,6);

    return 0;
}