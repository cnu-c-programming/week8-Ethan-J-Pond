#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
   
    for(int i = 0; i < argc ; i++){
        for(int j = 0; j < argc-1 ; j++){
            if( strcmp(argv[j],argv[j+1]) > 0){
                char *temp = argv[j];
                argv[j] = argv[j+1];
                argv[j+1] = temp;
            }
        }
    }
    
    for(int i = 0 ; i < argc ; i++)
        printf("%s\n", argv[i]);
    
    return 0;

}
