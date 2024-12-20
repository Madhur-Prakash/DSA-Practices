#include <stdio.h>
void show(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void insert(int arr[], int e, int l)
{
    for (int i = 4; i >= l; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[l] = e;
}
int main()
{
    int l, e;
    int arr[5] = {7, 14, 28, 35};
    printf("before insertion:-");
    show(arr, 5);
    printf("enter the index:-\n");
    scanf("%d", &l);
    if (l < 0 || l > 4)
    {
        printf("Please enter a valid index\n");
    }
    else
    {
        printf("valid index\n");
        printf("enter the element:-\n");
        scanf("%d", &e);
        insert(arr, e, l);
        printf("after insertion:-\n");
        show(arr, 5);
    }
}
