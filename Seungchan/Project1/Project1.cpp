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