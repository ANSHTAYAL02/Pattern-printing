#include <stdio.h>

int main(){

    for(int i=1; i<=7; i++){

        //for C
        
        for(int j=1; j<=7; j++){
if(i==1||j==1 ||i==7 || j==1){
    printf("*");
}
else{
    printf(" ");
}
            }
            for(int j=1; j<=4; j++){
                printf(" ");
            }

            //FOR S

             for(int j=1; j<=7; j++){
      if(i==1&&j<=7 || i<=4&&j==1 || i==4&&j<=7 || i==7&&j<=7 || i>4&&j==7){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
     for(int j=1; j<=4; j++){
      printf(" ");
            }    

    //FOR V

     for(int j=1; j<=7; j++){
if(i<=4 && j==1 || i<=4&&j==7){
  printf("*");
}
else if(i==5&& j==6 || i==6 && j==5){
  printf("*");
}
else if(i>4&& j==i-3){
  printf("*");
}
else{
  printf(" ");
}
    }
     for(int j=1; j<=4; j++){
                printf(" ");
            }

            //FOR T

             for(int j=1; j<=7; j++){
     if(i==1|| j==4)
{
  printf("*");
}   
else{
  printf(" ");
}
  }
  for(int j=1; j<=4; j++){
                printf(" ");
            }

            // FOR U

             for(int j=1; j<=7; j++){

if( i<=6&&j==1){
  printf("*");
}
else if( i<=6&&j==7){
  printf("*");
}
else if(i==7&& j>=2&& j<=6){
  printf("*");
}
else{
  printf(" ");
}
    }

            printf("\n");
            }

return 0 ;
}