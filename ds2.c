#include<stdio.h>
 void main(){
    int t,pos,f;
    int arr[6]={1,3,4,6,8,9};
    scanf("%d",&t);
    printf("Enter deleted array\n");
    for(int i=0;i<6;i++){
        if(t==arr[i]){
            pos =i;
            f=1;
            break ;
        
        } 
    }if(f==1){
    for(int i=pos;i<5;i++){
         arr[i]=arr[i+1];
        }
    }
    for(int i=0;i<5;i++){
        printf("%d \n",arr[i]);
    }
    
//****
}