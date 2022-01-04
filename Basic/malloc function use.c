#include <stdio.h>
#include <stdlib.h>
int calc(int *p)
{
    *p = *p + 100;
}
void main()
{
    int i = 0;
    int a = 100;
    for (i = 0; i < 100;i++)
    {
        calc(&a);
        printf("%d", a);
    }
    printf("%d", a);
    int *p, i, n;
    // printf("Enter array size to allocate memory:");
    // scanf("%d", &n);
    p = (int *)malloc(sizeof(int) * 1024);
    free(p);
    p = (int *)malloc(sizeof(int) * 2048);
    p = (int *)realloc(p,sizeof(int) * 1024);
    printf("%d", p[1025]);
    // if (p != NULL)
    // {
    //     for (i = 0; i < n; i++)
    //     {
    //         scanf("%d", &p[i]);
    //     }
    // }
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d ", p[i]);
    // }
    // for (i = 0; i < n; i++)
    // {
    //     printf("%u ", &p[i]);
    // }
    // free(p);
    // int *p;
    // int i;
    // // int a=8;
    // p = (int *)malloc(sizeof(int)*20);
    // // free (p);
    // // printf("%d", p[2]);
    // for (i = 0; i < 20;i++)
    // {
    //     p[i] = i;
    // }
    // p = (int *)realloc(p, 0);
    // p = (int *)realloc(p, sizeof(int)*30);
    // printf("%d", p[10]);
    // int *p1;
    // int a = 100;
    // p1 = &a;
    // int **p2;
    // p2 = &p1;
    // int ***p3;
    // p3 = &p2;
    // printf("%u", **p3);
    // static int arr[10];
    // int *p;
    // p = arr;
    // printf("%d", p[9]);
}
// int sums(int n)
// {
//     static int m = 0;
//     m = m + 1;
//     if(n==0)
//     {
//         return 0;
//     }
//     else
//     { 
//         return (m + n + sums(n - 1));
//     }

// }
// void main()
// {
//     int a;
//     a=sums(50);
//     printf("%d", a);
// }
// int SStr(char* str,char*strSub)
// {
//     int i = 0, j = 0;
//     int nTemp = 1;
//     int nStrLen = strlen(str);
//     int nStrSubLen = strlen(strSub);
//     for (i = 0; i < nStrLen - nStrSubLen; i++)
//     {
//         nTemp = i;
//         for (j = 0; j < nStrSubLen;j++)
//         {
//             if (str[nTemp] == strSub[j])
//             {
//                 if(j==nStrSubLen-1)
//                 {
//                     return 1;
//                 }
//                 nTemp++;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         return 0;
//     }
// }
// void main()
// {
//     int a;
//     a = SStr("aabcdef", "bc");
//     printf("%d", a);
// }
// long long compute (int n)
// {
//     long long out = 0;
//     int rem, i = 1;
//     while(n!=0)
//     {
//         rem = n % 2;
//         n /= 2;
//         out += rem * i;
//         i *= 10;
//     }
//     return out;
// }
// void main()
// {
//     int a;
//     a = compute(13);
//     printf("%d", a);
// }