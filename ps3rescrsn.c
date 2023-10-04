#include<stdio.h>
#include<math.h>

//****GCD****
/*int gcd(int m,int n){
    
    if(n==0)
        return m;
    if(m==0)
        return n;
    else{
        return gcd(n,m%n);
    }
}*/

//*****Power****
/*int power(int a,int n){
    if(n==0)
        return 1;
    else{
        return a*power(a,n-1);
        

    }
}*/

//***REVRSE****
/*int s=0;
int r;
int reverse(int n){
    
    if(n){
        r=n%10;
        s=10*s+r;
        reverse(n/10);
        
    }
    else
        return s;
    return s;
    
}*/

//***Sum of Digits**
/*
int s=0;
int r;
int sum(int n){
    
    if(n){
        r=n%10;
        s=s+r;
        sum(n/10);
        
    }
    else
        return s;
    return s;
    
}*/

/*
float mean(int a,int b,int c,int d,int e){
    float m;
    m=(a+b+c+d+e)/5;
    return m;
}
float median(int a,int b,int c,int d,int e){
    float n;

}
*/

//dat[11]={0};


/*int prime(){
    for(int i=4;i<10;i++){
    dat[i]=1;
    }
    for(int i=3;i<sqrt(10);i+=2){
        for( int j=i*2;i<10;){
            dat[j]=1;
        }
    }
    for(int i=3;i<10;i+=2){
        if(dat[i]==0){
            printf("%d",i);
        }
    }
}
*/
//*****Fibonacci******
/*int fib(int n){
    int a=0;
    int b=1;
    if(n<2){
        return n;

    }
    
    else{
        return fib(n-1)+fib(n-2);
    }
}*/
//****LCM+GCD*****
/*int gcd(int m,int n){
    if(m==0)
        return 0;
    else{
        return gcd(n,m%n);
    }
}

int lcm(int a,int b){
    
        return (a*b)/gcd(a,b);
    
}*/

void main(){

   //printf("LCM is %d",lcm(3,4));
//-----------------
    /*int n=5;
    for(int i=0;i<n;i++){
        printf(" %d",fib(i));
    }*/
    //int n;
//-------------
    //printf("GCD is %d",gcd(12,264));
//-------------
    //****Palindrome***
    /*int n;
    scanf("%d",&n);
    //printf("%d",reverse(n));
    if(n==reverse(n)){
        printf("Palindrome");
    }
    else{
        printf("Not-Palindrome");

    }*/
//----------------
    //printf("Sum of the given digit is= %d",sum(963));
//----------------
    //printf("Mean of the number= %f",mean(1,2,3,5,4));
    //printf("Median of the number= %f",mean(1,2,3,5,4));
//--------------------
 //*****Prime no till 100****   
    /*int dat[101]={0};
    for(int i=4;i<100;i+=2){
        dat[i]=1;
    }
    for(int i=3;i<sqrt(100);i+=2){
        for( int j=i*2;j<100;j=j+i){
            dat[j]=1;
        }
    }
    for(int i=11;i<100;i+=2){
        if(dat[i]==0){
            printf("%d \n",i);

        }
    }*/

    
    

}