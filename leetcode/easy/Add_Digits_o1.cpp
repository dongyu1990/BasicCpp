/*************************************************************************
    > File Name: Add_Digits_o1.cpp
    > Author: daryllli
    > Mail: lidongyu1990@gmail.com 
    > Created Time: 2015年11月03日 星期二 23时48分07秒
 ************************************************************************/

#include<iostream>
using namespace std;
int addDigits(int num) {
	if (num == 0) return 0;
	int result = num % 9;
	if (result == 0) {
		return 9;
	} else {
		return result;
	}
}
