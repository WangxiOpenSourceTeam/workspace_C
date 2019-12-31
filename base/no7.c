/*

    问题描述： 三对新人参加婚礼，三位新郎A, B, C。 三位新娘X, Y, Z. 有人想知道谁与谁结婚，于是就问他们：
        A说他将和X结婚
        X说她的未婚夫是C
        C说他将和Z结婚
    他们都在说谎，编程求谁与谁结婚

*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a,b,c;
    for(a = 1; a <= 3; a++){
        for(b = 1; b <= 3; b++){
            for(c = 1; c <= 3; c++){
                if(a!=1 && c!=3 && c!=1 && a!=b && b!=c && a!=c){
                    // 符合条件，即正确的情况下。输出正确答案
                    printf("%c将嫁给A\n", 'X'+a-1);
                    printf("%c将嫁给B\n", 'X'+b-1);
                    printf("%c将嫁给C\n", 'X'+c-1);
                }
            }
        }
    }
    return 0;
}
