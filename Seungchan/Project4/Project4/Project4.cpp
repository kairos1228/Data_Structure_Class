// �ڷᱸ�� 3����
// 
// 
// �˰��� ���⵵�� ���� "�ð� ���⵵"�� ���� = T(n) (ex. n^2�̸� n=4�̸� T(n)�� 16)
// �ð� ���⵵�� '��������' ����ð��� �ƴ�, ������ '�� ���̳� ����Ǵ� ��' Ƚ���� ǥ���� �� !

// �Է��� ����(n)�� ���� ���⵵ �м� => ��� ǥ���(O(n))���� ǥ�� (�߿�)
// ��, n�� �ְ� ���׿� ������ (ex. 3 < n < n^2 < ... < 2^n < n! )

#include <time.h>
#include <stdio.h>

int main(void)
{
    int i;
    double start, end;

    //for ���� ���� �ð�
    start = ((double)clock() / CLOCKS_PER_SEC);

    // for ���� 10��� �ݺ�
    int sum = 0;
    for (i = 0; i < 1000000000; i++) {
        sum++;
    }

    // for ���� ���� �ð�
    end = ((double)clock() / CLOCKS_PER_SEC);
    printf("���α׷� ���� �ð� : %lf\n", (end - start));
    return 0;
}
