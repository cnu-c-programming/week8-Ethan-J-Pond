#include<stdio.h>
void my_strcat(char *dst,const char *src){//각각 배열의 첫 원소의 주소를 가지고 옮
    
    while(*dst != '\0')
        *dst++;
    do{
        *dst = *src; // 원본 포인터에 이어 붙이는 문자의 포인터 연결
        dst++;
        src++;
    }
    while(*src != '\0');
    *dst = *src;

}

int main(){
    char str1[20] = "Hello";
    char str2[] = "World";

    printf("%s\n",str1);
    my_strcat(str1,str2);
    printf("%s\n",str1);
    return 0;
}
