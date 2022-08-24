// #include <stdio.h>
// int main()
// {
//     int n = 100;
//     int a, b, c;
//     int count = 0;
//     while (n < 1000)
//     {
//         a = n % 10;
//         b = ((n % 100) - a) / 10;
//         c = ((n % 1000) - (n % 100)) / 100;
//         if (c==(a+b))
//         {
//             count = count + 1;
//             printf("%d\n",n);
//         }
//         n=n+1;
        
//     }
//     printf("%d", count);
//     return 0;
// }
#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T>0)
    {
        int X,R;
        scanf("%d",&X);
        R=100-X;
        printf("%d",R);
        T--;
    }
    return 0;
}

