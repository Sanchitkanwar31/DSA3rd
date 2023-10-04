#include<stdio.h>
#include<math.h>
void main(){
    //****1Summ on n number ***
    /*int n;
    scanf("%d",&n);
    int s=n*(n+1)/2;
    printf("%d",s);*/

//***2factorial sum****
    /*int n;
    int s=0;
    int fact=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
        s=s+fact;

    }
    printf("%d",s);*/

//***3div factorial***
    /*float n,s=0,k;
    float fact=1;
    scanf("%f",&n);
    
    for(float j=1;j<=n;j++){
        fact=fact*j;
        k=j/fact;
        s=s+k;

    }
    
    printf("%f",s);*/

//***4****
    /*float n,s=0,k;
    float l=0,m=0;
    float fact=1;
    scanf("%f",&n);
    
    for(int j=1;j<=n;j++){
        fact=fact*j;
        k=j/fact;
        if(j%2==0){
            l=l-k;
        }
        else{
            m=m+k;
        }
        

    }
    s=l+m;
    
    printf("%f",s);*/
//****5pattern of factorial*****
    float l,k,s;
    float z=0,y=0;
    int n,x,fact=1;
    scanf("%d",&x);
    
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        l=pow(x,i);
        fact=fact*i;
        k=l/fact;
        //s=s+k;
        if(i%2!=0){
        z=z-k;
        }
        else if(i%2==0){
            y=y+k;
        }

    }

    s=z+y+1;
    printf("%f",s);
}