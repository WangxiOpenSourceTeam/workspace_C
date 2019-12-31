/*

    问题描述： 一群猴子摘了一堆桃子，它们每天都吃当前桃子的一半且再多吃1个，到了第10天就只余下1个桃子，求出这群猴子原来共摘了多少个桃子

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int total = 0;
    int eat_time = 0;

    printf("请问最后剩余桃子数：");
    scanf("%d", &total);

    while(1){
        printf("请问数桃子之前猴子吃了多少次");
        scanf("%d", &eat_time);
        if(eat_time<0){
            printf("您输入的次数有误");
            continue;
        }else
            break;
    }

    while(eat_time > 0){
        total=2 * (total+1);
        eat_time--;
    }

    printf("猴子总共的桃子数为：%d\n", total);

    return 0;
}
