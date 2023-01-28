#include<stdio.h>
#include<conio.h>
void main()
{ 
    
    my_func();
    
    }
        


     
void my_func(){
    int m,n,a,i,b,e,f;
printf("enter m and n");
    scanf("%d %d", &e, &f);
    if(e>f){
        m = e;
        n = f;
    }
    else{
      m = f;
      n = e;
    }
    printf("Possible squares:");
    if (m == n){
        printf(" %d x %d", m , n);
    }
    else if(m>n){
    if (m >n){
        a=m/n;
        
        for(i=1;i<=a;i++){
            printf(" %d X %d," ,n , n );
        }  
        int c = a*n;
        m = m-c;
        n = n;
        
    }
    
    if (n>m){
        b = n/m;
        for(int j=1;j<=b;j++){
            printf(" %d X %d," ,m ,m );
        }
        int d = b*m;
        n = n-d;
        m = m;
    }    
}
}