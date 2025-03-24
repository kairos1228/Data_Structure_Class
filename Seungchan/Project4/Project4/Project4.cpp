// 자료구조 3주차
// 
// 
// 알고리즘 복잡도는 보통 "시간 복잡도"를 뜻함 = T(n) (ex. n^2이면 n=4이면 T(n)은 16)
// 시간 복잡도란 '절대적인' 실행시간이 아닌, 연산이 '몇 번이나 실행되는 지' 횟수로 표시한 것 !

// 입력의 개수(n)에 따라 복잡도 분석 => 빅오 표기법(O(n))으로 표시 (중요)
// 즉, n의 최고 차항에 의존함 (ex. 3 < n < n^2 < ... < 2^n < n! )

#include <time.h>
#include <stdio.h>

int main(void)
{
    int i;
    double start, end;

    //for 루프 시작 시간
    start = ((double)clock() / CLOCKS_PER_SEC);

    // for 루프 10억번 반복
    int sum = 0;
    for (i = 0; i < 1000000000; i++) {
        sum++;
    }

    // for 루프 끝난 시간
    end = ((double)clock() / CLOCKS_PER_SEC);
    printf("프로그램 수행 시간 : %lf\n", (end - start));
    return 0;
}
