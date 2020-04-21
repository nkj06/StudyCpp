#include <stdio.h>
#include <string.h>

class Human {
private:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) { // 생성자
		strcpy(name, aname); // name 대신 Human::name, this->name으로 가능
		age = aage; // age 대신 this->age, Human::age 가능
	}
	void intro() {
		printf("이름 = %s, 나이 = %d \n", name, age);
	}
};

int main() {
	Human h = Human("남경진", 25);
	h.intro();
	
	return 0;
}