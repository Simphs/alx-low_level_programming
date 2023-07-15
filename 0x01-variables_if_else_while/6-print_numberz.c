#include <stdio.h>

int main(){
    int singleDigBaseTen;
    for(singleDigBaseTen=0; singleDigBaseTen<10; singleDigBaseTen++){
      putchar((singleDigBaseTen%10));
    }
    
    printf("\n");

    return(0);
}
