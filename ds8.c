#include<stdio.h>
void main(){
    /*struct student{
        char name[10];
        int rollno;
        //int mark[5];
        int mark;
    };*/

//******For DU elgible 1*****
    /*struct student s;
    printf("Name of:\n");
    scanf("%c",s.name);
    printf("Roll no :\n";)
    scanf("%d",s.rollno);
    printf("Marks :");
    
    for(int i=0;i<5,i++){
        scanf("%d",&s.mark[i]);
    }
    //Sort in decreasing
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(s.mark[i]<s.mark[j]){
                int temp=s.mark[i];
                s.mark[i]=s.mark[j];
                s.mark[j]=temp;
            }
        }
    }
    int sum=0;
    for(int i=0;i<4;i++){
        sum=sum+s.mark[i];
    }
    int prc=(sum/4)*100;
    if(prc>95){
        printf("Student is eligible for DU");
    }
    else{
        printf("Student is  not eligible for DU");
    }*/
//******1at start of roll  no 3******
    /*struct student s[2];
    printf("Name,rollno,mark of:\n");
    for(int i=0;i<2;i++){
        scanf("%s",s[i].name);
        scanf("%d",&s[i].rollno);
        scanf("%d",&s[i].mark);
    }

    printf("Start with 1 rooll no:\n");
    for(int i=0;i<2;i++){
        int n=s[i].rollno;
        while(n>0){
            n=n/10;
            if(n==1){
            printf("%s %d \n",s[i].name,s[i].rollno);
            }
        }
        
    }*/

//******Distance 3****
    /*struct distance {
        int feet;
        float inch;
        float d;
    };

    struct distance s[2];
    float sum=0;
    printf("Feet and Inch");
    for(int i=0;i<2;i++){
        scanf("%d",&s[i].feet);
        scanf("%f",&s[i].inch);

        s[i].d=s[i].feet+(s[i].inch)/10;
        sum=sum+s[i].d;
        
    }
    printf("%f",sum);*/

//******Adding Compplex 4******
    /*struct complex{
        int org;
        int img;
        int comp;
    };
    
    struct complex c[2];
    int sum=0;
    int b=0;
    printf("Enter original and imaginary no \n");
    for(int i=0;i<2;i++){
        scanf("%d",&c[i].org);
        

        //c[i].comp=c[i].org+c[i].img*'b';
        sum=sum+c[i].org;
        scanf("%d",&c[i].img);
        b=b+c[i].img;
        
    }
    printf("%d + i%d",sum,b);*/

//*****Book Display10*****
    struct library{
        char b_name[10];
        char b_authr[15];

    }
    {
        /* data */
    };
    
}