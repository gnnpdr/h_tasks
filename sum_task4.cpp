#include <stdio.h>


void find_sum(int* seq, size_t size, int sum);

int main()
{
    size_t size = 0;
    printf("size of init seq?\n");
    scanf("%d", &size);
    int seq[size];
    int sum = 0;

    printf("enter elements\n");
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &seq[i]);
    }

    printf("sum?\n");
    scanf("%d", &sum);

    printf("all right, we'll check your seq\n");

    find_sum(seq, size, sum);

    return 0;
}

void find_sum(int* seq, size_t size, int sum)
{
    size_t p = 0;

    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i + 1 ; j < size; j++)
        {
            if (seq[i] + seq[j] == sum)
            {
                printf("you need elements by numbers %d %d\n", i, j);
                p = 1;
            }
                
        }
    }

    if (p == 0)
        printf("no pair\n");
}