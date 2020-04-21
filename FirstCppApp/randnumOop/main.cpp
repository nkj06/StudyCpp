#include <stdio.h> // ǥ�� ��������̶� < >
#include "cursor.h" // ����Ŷ� " "

class RandNum
{
private:
	int num;

public:
	RandNum() { randomize(); }
	void Generate() { num = random(100) + 1; } 
	BOOL Compare(int input) {
		if (input == num) {
			printf("������ϴ�.\n");
			return TRUE;
		}
		else if (input > num) {
			printf("�Է��� ���ں��� �� �۽��ϴ�.\n");
		}
		else {
			printf("�Է��� ���ں��� �� Ů�ϴ�.\n");
		}
		return FALSE;
	}
};

class Ask 
{
private:
	int input;

public:
	void Prompt() { printf("\n���� ���� ���ڸ� ���� ������.\n"); }
	BOOL AskNumber() {
		printf("���ڸ� �Է��ϼ���(���� ���� 999) : ");
		scanf("%d", &input);
		if (input == 999) {
			return TRUE;
		}
		return FALSE;
	}
	int GetInput() { return input; }
};

int main()
{
	RandNum R; // Ŭ���� ����
	Ask A;

	while (1) { // ���ѷ���
		R.Generate(); // ���Ƿ� �̵� F12, Back�� Ctrl + -
		A.Prompt();
		for (;;) {
			if (A.AskNumber()) {
				exit(EXIT_SUCCESS); // ���������� ��, EXIT_SUCCESS ��� 0�� �ᵵ ��
			}
			if (R.Compare(A.GetInput())) {
				break;
			}
		}
	}
}