#include <stdio.h>
int fact(int x){ //declaring function 
    if (x==1){
        return 1;
    }
    else{
        return x*fact(x-1);//recursing the function 
    }
        
}
int main (){
    int num ,factorial ;
    printf ("Enter the number :");
    scanf ("%d",&num);
    factorial =fact(num);// function call 
    printf("The factorial of %d is %d",num,factorial);
    return 0;
}
