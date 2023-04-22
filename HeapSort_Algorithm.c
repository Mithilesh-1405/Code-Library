#include<stdio.h>
#include<math.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heap_construction(int H[],int N)
{
    for(int i = floor(N/2);i>=1;i--)
    {
        int k = i,j;
        int v = H[k];
        int heap = 0;
        while((heap == 0) && (2*k) <= N)
        {
            j = 2 * k;
            if(j < N)
            {
                if(H[j] < H[j+1])
                {
                    j = j + 1;
                }
            }

            if(v >= H[j])
            {
                heap = 1;
                break;
            }

            else
            {
                H[k] = H[j];
                k = j;
            }
        }

        H[k] = v;
    }
}

void max_heapify(int H[],int N)
{
    int k = 1,j;
    int v = H[1];
    int heap = 0;
    while(heap == 0 && 2*k<=N)
    {
        j = 2*k;
        if(j < N)
        {
            if(H[j] < H[j+1])
            {
                j = j + 1;
            }
        }

        if(v >= H[j])
        {
            heap = 1;
            break;
        }

        else
        {
            H[k] = H[j];
            k = j;
        }
    }

    H[k] = v;
}

void heapsort(int H[],int N)
{
    int A = N;
    heap_construction(H,N);
    while(N)
    {
        swap(&H[1],&H[N]);
        N--;
        max_heapify(H,N);
    }
}

int main()
{
    int N;
    printf("Enter the number of elements\n");
    scanf("%d",&N);
    int H[N];
    printf("Enter the elements\n");
    for(int i = 0;i < N;i++)
    {
        scanf("%d",&H[i]);
    }

    heapsort(H,N-1);
    for(int i = 1;i < N;i++)
    {
        printf("%d ",H[i]);
    }
}
