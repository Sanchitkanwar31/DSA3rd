#include<stdio.h>
void main(){
    /*int a[6][6],b[6][6],c[6][6];
    int n,m;
    scanf("%d",&m);
    scanf("%d",&n);
    printf("Elemnet of array \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elemnet of array \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }*/
//*****DS1******
//Sum Array
    /*printf("Sum of array \n");
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             c[i][j]=a[i][j]+b[i][j];
         }
     }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }*/
//****DS2***
//Subtraction
    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }*/

//****DS3***
//Multiplication
    
    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }

    printf("Multiplied matrix");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }*/
    int t;
//****DS4****
    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            t=a[i][j];
            a[j][i]=t;
            a[i][j]=a[j][i];
        }
    }*/
//Transpose
   /* for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d \t",a[j][i]);
        }
        printf("\n");
    }

//****DS5****
//Determinant 3*3 matrix
    int det;
    printf("Normal matrx \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    det=a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2]))-a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2])
    );*/

//****DS6***
//*****Union

   /*int a[10],b[10],i,c[10],j,k=0,n1,n2;

   // taking input set A

   printf("Enter number of  element of set A\n");
   scanf("%d",&n1);
   printf("Enter the element of set A \n");
   for(i=0;i<n1;i++)
      scanf("%d",&a[i]);

    // taking input set B

   printf("Enter number of element of set B\n");
   scanf("%d",&n2);
   printf("Enter the element of set B \n");
   for(i=0;i<n2;i++)
     scanf("%d",&b[i]);

   // logic for calculate union

   // copy the element of set A in set C
   for(i=0;i<n1;i++)
   {
       // repeted element is not allowed so we check is any value repeted
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k) //if not repesated then store value in set c 
       {
          c[k]=a[i];
          k++;
       }
    }
    // copy element of set B in set C
   for(i=0;i<n2;i++)
   {
       // check for repeted element
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k) // if element is not repeted then store in set C
     {
       c[k]=b[i];
       k++;
     }
   }

   

   // printing of union of set A and set B
   printf("Union of set A and B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);*/

//***Set INtersection**
    int a[10],b[10],i,c[10],j,k=0,n1,n2;

   // taking input set A

   printf("Enter number of  element of set A\n");
   scanf("%d",&n1);
   printf("Enter the element of set A \n");
   for(i=0;i<n1;i++)
      scanf("%d",&a[i]);

    // taking input set B

   printf("Enter number of element of set B\n");
   scanf("%d",&n2);
   printf("Enter the element of set B \n");
   for(i=0;i<n2;i++)
     scanf("%d",&b[i]);

    /*for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i]==b[j]){
                c[k]=a[i];
                k++;
            }
            else {}
        }
    }

    printf("Intersection of set A and B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);*/

//*****Set Difference***
/*include<iostream>
using namespace std;
                 // SET DIFFERENCE or SUBTRACTION //
void set_difference  (int arr1[], int arr2[], int n1, int n2, int i, int j){
    cout<<"set difference of Arr1"<<endl;
    while (i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i++]<<",";
        }
        else if(arr1[i]>arr2[j]){
            cout<<arr1[i++]<<",";
        }
        else {
            i++;
            j++;
        }
    }
}
    

int main () {
int arr1[] = {1,2,3,4,5,6,7,8,9,10};
int n1 = sizeof(arr1)/sizeof(arr1[0]);
int arr2[] = {4,5,6,7,11,12,13,15};
int n2 = sizeof(arr2)/sizeof(arr2[0]);
sort(arr2 , arr2 + n2);
sort(arr1 , arr1 + n1);

int i=0; 
int j=0;
set_difference(arr1, arr2, n1, n2, i, j);
}*/


}