#include <stdio.h>

void sort(int* initial_seq, size_t size);

int main()
{
    size_t size = 0;
    printf("size of init seq?\n");
    scanf("%d", &size);
    int initial_seq[size];

    printf("enter elements\n");
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &initial_seq[i]);
    }

    printf("all right, we'll check your seq\n");

    sort(initial_seq, size);

    printf("result seq\n");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", initial_seq[i]);
    }

    return 0;
}

void sort(int* initial_seq, size_t size)
{
    bool swaped = true;
    while(swaped)
    {
        swaped = false;
        for (size_t i = 1; i < size; ++i)
        {
            if (initial_seq[i-1] < 0 && initial_seq[i] >= 0)
            {
                int temp = 0;
                temp = initial_seq[i];
                initial_seq[i] = initial_seq[i - 1];
                initial_seq[i - 1] = temp;
                swaped = true;
            }
        }
    }
}