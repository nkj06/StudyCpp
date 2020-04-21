#include <stdio.h>
#include <string.h>

class Human {
private:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) { // ������
		strcpy(name, aname); // name ��� Human::name, this->name���� ����
		age = aage; // age ��� this->age, Human::age ����
	}
	void intro() {
		printf("�̸� = %s, ���� = %d \n", name, age);
	}
};

int main() {
	Human h = Human("������", 25);
	h.intro();
	
	return 0;
}