//29. 两数相除
//给定两个整数，被除数 dividend 和除数 divisor。将两数相除，要求不使用乘法、除法和 mod 运算符。
//
//返回被除数 dividend 除以除数 divisor 得到的商。
//
//整数除法的结果应当截去（truncate）其小数部分，例如：truncate(8.345) = 8 以及 truncate(-2.7335) = -2
//示例 1:
//
//输入: dividend = 10, divisor = 3
//输出: 3
//解释: 10/3 = truncate(3.33333..) = truncate(3) = 3
//示例 2:
//
//输入: dividend = 7, divisor = -3
//输出: -2
//解释: 7/-3 = truncate(-2.33333..) = -2
// 
//
//提示：
//
//被除数和除数均为 32 位有符号整数。
//除数不为 0。
//假设我们的环境只能存储 32 位有符号整数，其数值范围是 [−2^31,  2^31 − 1]。本题中，如果除法结果溢出，则返回 231 − 1。

#include <stdio.h>
//本质就是返回被除数能被除数分成多少份的个数。
//然而被除数太大且除数太小循环时间必然过长，所以采用了三层累加的算法大大降低了循环次数。
//除数和被除数采用负数减少溢出和判断的if-else语句
//sum+=dividend
//sums+=sum
//sumss+=sums
//


#define INT_MAX 0X7FFFFFFF
#define INT_MIN 0X80000000
int divide(int dividend, int divisor){
    if(dividend==INT_MIN&&divisor==-1)return INT_MAX;
    if(dividend==INT_MIN&&divisor==1)return INT_MIN;
    if(dividend==INT_MIN&&divisor==INT_MAX)return -1;
    if(dividend==divisor)return 1;
    int sum=0,t=0;//第一层累加数
    int sums=0,ts=0;//第二层累加数
    int sumss=0,tss=0;//第三层累加数
    int res=0;
    int flat=(dividend^divisor);//结果正负标志位
    if(dividend!=INT_MIN) dividend=(dividend<0)?dividend:-dividend;//被除数取负值
    if(divisor!=INT_MIN) divisor=(divisor<0)?divisor:-divisor;//除数取负值
    while(dividend<=divisor){//暴力累加法
            sum+=divisor;
            t--; 
        if(sums-1>(INT_MIN-sum)){//第一层累加是否超出
            sums+=sum;
            ts+=t;   
        }
        if(sumss-1>(INT_MIN-sums)){//第二层累加是否超出
            sumss+=sums;
            tss+=ts;  
        }
        if(dividend-sumss<0){//判断三层累加是否超出
            res+=tss;
            dividend-=sumss;
        }else{//超出则普通累加
            res--;
            dividend-=divisor;
            sum=0;
            t=0;
            sums=0;
            ts=0;
            sumss=0;
            tss=0;
        }
    }
       return(flat<0)?res:-res;
}



int main(int argc, char *argv[]) {
    int a,b,c;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = divide(a, b);
    printf("%d/%d=%d\n", a, b, c);
}

