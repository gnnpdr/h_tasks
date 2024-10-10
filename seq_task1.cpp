#include <stdio.h>

int find_max(int* initial_seq, size_t size);

int main()
{
    size_t size = 0;
    printf("size of init seq?\n");
    scanf("%d", &size);
    int initial_seq[size];

    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &initial_seq[i]);
    }

    printf("all right, we'll check your seq\n");

    size_t max = find_max(initial_seq, size);

    printf("max value = %d\n", max);
    return 0;
}

int find_max(int* initial_seq, size_t size)
{
    size_t max_cnt = 2;
    size_t cnt = 2;
    
     for (size_t i = 0; i < size; i++)
    {
        int delta1 = initial_seq[i] - initial_seq[i + 1];
        int delta2 = initial_seq[i+1] - initial_seq[i+2];
        if (delta1 == delta2)
        {
            cnt++;
            if (cnt > max_cnt)
                max_cnt = cnt;
        }
        else
        {
            cnt = 2;
        }
    }
    return max_cnt;
}