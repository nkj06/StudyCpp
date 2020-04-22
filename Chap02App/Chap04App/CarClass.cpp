#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "cursor.h"

class Car {
private:
	int gear;
	int angle;
	int rpm;

public:
	Car() : gear(0), angle(0), rpm(0) {}
	void ChangeGear(int aGear) {
		if (aGear >= 0 && aGear <= 6) {
			gear = aGear;
		}
	}

	void RotateWheel(int Delta) {
		int tAngle = angle + Delta;
		if (tAngle >= -45 && tAngle <= 45) {
			angle = tAngle;
		}
	}

	void Accel() {
		rpm = min(rpm + 100, 3000);
	}

	void Break() {
		rpm = max(rpm - 500, 0);
	}

	void Run() {
		int Speed;
		char Mes[128];
		gotoxy(10, 30);
		if (gear == 0) {
			puts("먼저 1~6을 눌러 기어를 넣으시오        ");
			return;
		}
		if (gear == 6) {
			Speed = rpm / 100;
		}
		else {
			Speed = gear * rpm / 100;
		}

		sprintf(Mes, "%d의 속도로 %s쪽 %d도 방향으로 %s진중       ", abs(Speed), (angle >= 0 ? "오른" : "왼"), abs(angle), (gear == 6 ? "후" : "전"));
	}
};

int main() {
	Car c;
	int ch;

	while (true) {
		gotoxy(10, 10);
		printf("1~5:기어 변속, 6:후진기어, 0:기어 중립");
		gotoxy(10, 11);
		printf("위:엑셀, 아래:브레이크, 좌우:핸들, Q:종료");
		if (kbhit()) {
			ch = getch();
			if (ch == 0xE0 || ch == 0) {

			}
		}

		c.Run();
		delay(10);
	}
}