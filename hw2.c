#include <stdio.h>

int main(){
    for(int i=1; i<=5; i++){
        for(int k=1; k<=5-i; k++){
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
            printf("*");
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
        printf("*");
    }
    
}
  for(int k=1; k<=5-i; k++){
        printf(" ");
    }
     for(int k=1; k<=5-i; k++){
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
            printf("*");
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
        printf("*");
    }
    
}
printf("\n");
    }


for(int i=5; i>=1; i--){
     for(int j=0; j<5-i; j++){
      printf(" ");
    }
    for(int j=1; j<=(2*i)-1; j++){
      if(j%2==1){
        printf("*");
        }
        else{
          printf(" ");
        }
    }
    for(int j=0; j<5-i; j++){
      printf(" ");
    }
    for(int j=0; j<5-i; j++){
      printf(" ");
    }
    for(int j=1; j<=(2*i)-1; j++){
      if(j%2==1){
        printf("*");
        }
        else{
          printf(" ");
        }
    }
    
    
printf("\n");
}
return 0;
}
