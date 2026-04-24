#include <stdio.h>
#include <string.h>

void sort_strings(char **arr, int size){
    char *temp;

    for(int i = 0; i < size - 1 ; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if( strcmp(arr[i],arr[j]) > 0){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                printf("교환진행\n");
            }
            printf("진행?\n");
        }
    }
        
}

int main(){
    char* names[] = {"apple","mango","ant","banana","cat","anaconda"};
    int n = sizeof(names) / sizeof(names[0]);

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n-1 ; j++){
            if( strcmp(names[j],names[j+1]) > 0){
                char *temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
    }
    
    for(int i = 0 ; i < n ; i++)
        printf("%s\n", names[i]);
    
    return 0;

}
