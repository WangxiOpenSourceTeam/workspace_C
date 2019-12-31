#include <stdio.h>

int main(int argc, char const *argv[]) {
    int year = 0;
    printf("请输入年份\n");
    scanf("%d", &year);
    if((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0){
        printf("%d年是闰年\n", year);
    }else {
        printf("%d年是平年\n", year);
    }
}
