#include<stdio.h>
#include<math.h>

int main(void) {
	int m, n = 0, s, room;
	
	scanf_s("%d", &n); //���� ä���ÿ��� scanf_s ��� scanf�� ������
	
	if (n == 1) {
		room = 1;
	}
	
	else if (n  > 1) {
		m = (n - 2) / 3;
		s = (1 + sqrt(1 + 4 * m)) / 2;
		room = s + 1;
	}
	else {
		room = 0;
	}
	
	printf("%d", room);
}