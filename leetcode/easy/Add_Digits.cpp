/*************************************************************************
    > File Name: Add_Digits.cpp
    > Author: daryllli
    > Mail: lidongyu1990@gmail.com 
    > Created Time: 2015年11月03日 星期二 23时34分25秒
 ************************************************************************/

#include<iostream>
using namespace std;
int addDigits (int num) {
	while(num > 9) {
		num = addPiece(num);
	}
	return num;
}

int addPiece(num) {
	int result = 0;
	while (num/10) {
		result += num%10;
		num = num/10;
	}
	result += num;
	return result;
}
