#include <stdio.h>

int main(){
    char alphabet;
    for (alphabet='a'; alphabet<='z'; alphabet++){
	if(alphabet == 'e' || alphabet == 'q')
	continue;
	putchar(alphabet);
    }

    putchar('\n');

    return(0);
}
