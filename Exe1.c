#include <stdio.h>

int main() {

    int i = 1;
    while (i <= 100){
        if ((i%3 == 0) && (i%5 ==0)){
            printf("FooBaa\n", i);    
        } else if (i%3 == 0) {
            printf("Foo\n", i); 
        } else if (i%5 ==0) {
            printf("Baa\n", i);   
        } else {
            printf("%d\n", i);  
        }
        i=i+1;
    }
}