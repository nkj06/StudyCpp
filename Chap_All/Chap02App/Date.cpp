#include <stdio.h>
#include "Date.h"

void Date::SetDate(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

void Date::OutDate() {
	printf("현재 날짜는 %d년 %d월 %d일 입니다.\n", year, month, day);
}