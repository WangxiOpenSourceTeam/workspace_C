/*

    问题描述： 我从2000年9月12日出生起开始，就过上了“三天摸鱼，两天上网”的日子。问： 我在以后的某一天中是在“摸鱼”还是“上网”？

*/

#include <stdio.h>
#include <stdlib.h>

//先创建一个日期类型的结构体
typedef struct D{
    int year;
    int month;
    int day;
}Date;

//判断是否为闰年
int isLeapYear(int year){
    // 闰年的判断条件
    return ((year%4==0 && year%100!=0) || year%400==0);
}

// 获取某年某月的最大天数
int GetMaxDay(int year, int month){
    switch(month){
        // 下列月份都是31天
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;

        // 下列月份都是30天
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;

        // 二月份天数根据闰年平年来区分
        case 2:
            return isLeapYear(year)?29:28;
        default:
            return -1;
    }
}

// 判断两个日期是否相等
int isEqual(Date date1, Date date2){
    if(date1.year == date2.year && date1.month == date2.month && date1.day == date2.day)
        return 1;
    return 0;
}

//计算日期之间的天数差
int GetdiffDays(Date date1, Date date2){
    int X = 0;
    while(!isEqual(date1, date2)){
        // 如果要查询的日期不等于该曰的最大天数
        if(date1.day != GetMaxDay(date1.year, date1.month)){
            date1.day++;
        }else {
            if(date1.month != 12){
                date1.month++;
                date1.day = 1;
            }else {
                date1.day = date1.month = 1;
                date1.year++;
            }
        }
        X++;
    }
    return X;
}

int main(){
    Date date1, date2;
    int X = 0;

    // 对起始日期进行初始化
    date1.year = 2000;
    date1.month = 9;
    date1.day = 12;

    printf("请输入日期：\n");
    scanf("%d%d%d", &date2.year, &date2.month, &date2.day);

    X = GetdiffDays(date1, date2);
    printf("日期差为：%d天\n", X);

    X = X % 5;
    if(X == 0 || X == 1)
        printf("上网\n");
    else
        printf("摸鱼\n");

    return 0;
}
