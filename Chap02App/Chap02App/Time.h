#pragma once

class Time {
private: // �ܺο��� �׼��� �� �� ����. 
	int hour, min, sec;

public: // �ܺη� �����Ǿ� ������ �а� �� �� �ִ�.
	Time(int h, int m, int s);
	// void SetTime(int h, int m, int s);
	void OutTime();
};