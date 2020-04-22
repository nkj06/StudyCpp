#pragma once

class Time {
private: // 외부에서 액세스 할 수 없다. 
	int hour, min, sec;

public: // 외부로 공개되어 누구나 읽고 쓸 수 있다.
	Time(int h, int m, int s);
	// void SetTime(int h, int m, int s);
	void OutTime();
};