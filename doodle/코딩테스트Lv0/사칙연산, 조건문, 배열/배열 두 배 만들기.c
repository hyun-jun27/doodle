#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int *solution(int numbers[], size_t numbers_len)
{
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int *answer = (int *)malloc(numbers_len * sizeof(int));
    for (int i = 0; i < numbers_len; i++)
    {
        answer[i] = numbers[i] * 2;
    }
    return answer;
}
