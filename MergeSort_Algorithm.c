#include<stdio.h>
#include<math.h>


void merge(int B[],int p,int C[],int q,int A[],int N)
{
    int i = 0,j = 0,k = 0;
    while(i < p && j < q)
    {
        if(B[i] <= C[j])
        {
            A[k] = B[i];
            i++;
        }

        else
        {
            A[k] = C[j];
            j++;
        }

        k++;
    }

    if(i==p)
    {
        for(int a=j;a<q;a++)
        {
            A[k++] = C[a];
        }

    }

    else
    {
        for(int a=i;a<p;a++)
        {
            A[k++] = B[a];
        }
    }
}

void merge_sort(int A[],int N)
{
    if(N > 1)
    {
          int size = floor(N/2);
          int B[size],C[N-size];
          for(int i = 0;i< floor(N/2);i++)
          {
              B[i] = A[i];
          }

          for(int i = 0;i< N-floor(N/2);i++)
          {
              C[i] = A[size + i];
          }

          merge_sort(B,size);
          merge_sort(C,N-size);
          merge(B,size,C,N-size,A,N);
    }

}

int main()
{
    int N;
    printf("Enter the number of elements\n");
    scanf("%d",&N);
    int A[N];
    printf("Enter the numbers\n");
    for(int i = 0;i < N;i++)
    {
        scanf("%d",&A[i]);
    }

    merge_sort(A,N);
    for(int i = 0;i < N;i++)
    {
        printf("%d ",A[i]);
    }

}
