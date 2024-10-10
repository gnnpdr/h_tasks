#include <stdio.h>


size_t check(int* seq, size_t size, size_t* p);

int main()
{
    size_t size = 0;
    printf("size of init seq?\n");
    scanf("%d", &size);
    int seq[size];
    size_t p = 0;

    printf("enter elements\n");
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &seq[i]);
    }

    printf("all right, we'll check your seq\n");

    p = check(seq, size, &p);
    printf("%d", p);
    return 0;
}

size_t check(int* seq, size_t size, size_t* p)
{   
    size_t p_no_pr = 1;
    size_t p_pr = 0;

    for (size_t i = 0; i < size - 1; i++)
    {
        if (seq[i] < seq[i + 1]) 
            p_no_pr *= seq[i + 1] - seq[i];
        else 
        {
            p_pr++;
        }
    }
    if (p_pr == 0)
        *p = p_no_pr;
    else 
        *p = p_pr;

    return *p; 
}