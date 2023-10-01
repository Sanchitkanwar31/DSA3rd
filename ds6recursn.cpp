#include<iostream>
using namespace std;

//****Factorial*****
/*int fact(int n){
    if(n==1)
        return 1;
    else{
        return n*fact(n-1);
    }
}*/

//*****GCD******
/*int gcd(int m,int n){
    
    if(n==0)
        return m;
    if(m==0)
        return n;
    else{
        return gcd(n,m%n);
    }
}*/

//******Power******
/*int power(int a,int n){
    if(n==0)
        return 1;
    else{
        return a*power(a,n-1);
        

    }*/


//****Fibonacci*****
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


//****Binary Search***
/*int binary(int arr[],int s,int e,int k){
    if(s>=e){
        return -1;
    }
    int mid=(s+e)/2;
    if(arr[mid]==k){
        return mid;
    }
    if(arr[mid]<k){
        return binary(arr,s,mid-1,k);
    }
    else{
        return binary(arr,mid+1,e,k);
    }
    
}*/


//****Reverse+Palindrome****
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


//*******Sum of Digits**********
/*int s=0;
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
    
}
int main(){

    //cout<<fact(5)<<endl;
    
    //cout<<gcd(6,12)<<endl;
   
    //cout<<power(3,3)<<endl;
    
    //cout<<fib(3)<<endl;
//---------------------------------    
    /*int ar[6]={1,3,4,6,8,16};
    int n=sizeof(ar);
    sort(ar,ar+n);
    cout<<"Element is in array:"<<binary(ar,0,6,6)<<endl;*/
 //-------------------------------   
    /*int n=121;
    //cout<<reverse(n)<<endl;
    if(n==reverse(n)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Non Palindrome"<<endl;
    }*/
//---------------------------------
    /*int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    cout<<"Sum of digits :"<<sum(n)<<endl;*/

    return 0;
}
