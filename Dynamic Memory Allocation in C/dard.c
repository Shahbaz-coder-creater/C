#include <stdio.h>

#define MAX 100

int main()
{
    int n, i, j;
    int AdjM[MAX][MAX], AdjMT[MAX][MAX];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("\nEnter Adjacency Matrix (AdjM):\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &AdjM[i][j]);
        }
    }

    printf("\nEnter Transpose Matrix (AdjMT):\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &AdjMT[i][j]);
        }
    }

    printf("\nVertex\tOutdegree\tIndegree\n");

    for(i = 0; i < n; i++)
    {
        int outdegree = 0;
        int indegree = 0;

        for(j = 0; j < n; j++)
        {
            outdegree += AdjM[i][j];     // Row sum of AdjM
            indegree  += AdjMT[i][j];    // Row sum of AdjMT
        }

        printf("%d\t%d\t\t%d\n", i, outdegree, indegree);
    }

    return 0;
}