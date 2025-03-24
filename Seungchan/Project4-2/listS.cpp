#include "listS.h"
int insertElement(int L[], int n, int x) { //  L: ����Ʈ, n: ����Ʈ�� ũ��, x: ������ ����
	int i, k = 0, move = 0; // move: �̵�Ƚ�� ī����
	// ������ ũ�⸦ ���Ͽ� ���� ��ġ(k) ã��
	for ( i = 0; i < n; i++) {
		if (L[i] <= x && x <= L[i + 1]) {
			k = i + 1;
			break;
		}
	}
	if (i == n) // ���� ����(k)�� ���� ū ������ ���
		k = n;

	// ������ ���Һ��� k+1���ұ��� �ڷ� �ڸ��̵�
	for (i = n; i > k; i--) {
		L[i] = L[i - 1];
		move++;
	}

	L[k] = x; // �ڸ� �̵��Ͽ� ���� �ڸ�(k)�� ���� ����(x) ����
	return move;
}
int deleteElement(int L[], int n, int x) { // L: ����Ʈ, n: ����Ʈ�� ũ��, x: ������ ����
	int i, k = 0, move = 0; // move: �̵�Ƚ�� ī����
	// ������ ũ�⸦ ���Ͽ� ���� ��ġ(k) ã��
	for (i = 0; i < n; i++) {
		if (L[i] == x) {
			k = i;
			break;
		}
	}

	if (i == n) return -1; // ������ ���Ұ� ���� ���

	// k+1���Һ��� ������ ���ұ��� ������ �ڸ��̵�
	for (i = k; i < n; i++) {
		L[i] = L[i + 1];
		move++;
	}

	return move;
}