#include <stdio.h>

int main(){
    int rows=5;
for(int i=1; i<=5; i++){
    for(int k=1; k<=rows-i; k++){
        printf(" ");
    }
    for( int j=1; j<i; j++){
        if(i%2!=0 && j%2==0){
            printf(" ");
        }
        else if(i%2==0 && j%2==0){
            printf(" ");
        }
        else{
            printf("%d", i);
        }
    }

    for(int j=1; j<=i; j++){
    if(i%2==0&& j%2!=0){
        printf(" ");
    }
    else if(i%2!=0 && j%2==0){
        printf(" ");
    }
    else{
        printf("%d", i);
    }
    
}
printf("\n");
}
return 0;
}
