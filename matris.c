//matris sistemi

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{        
    int a;

    for(;;){

        matris:

        printf("Matris sistemi icin = 1, matrislerle toplama icin = 2, matrislerle carpma icin = 3, matrislerle bolme icin = 4, manuel matrisi icin = 5, cikis icin = 6 : ");
        scanf("%d",&a);

        if (a == 1)
        {
            int i,j;
            int m[3][3]={{1,2,3},{4,5,6},{7,8,9}};

            for(i=0; i<3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                 printf("Sonuc : %d",m[i][j]);
                }
                printf("\n");
            }

            printf("\n");
            goto matris;
        }
        else if (a == 2)
        {
            int i,j;
            int m[3][3]={{1,2,3},{4,5,6},{7,8,9}},m1[3][3]={{9,8,7},{6,5,4},{3,2,1}},sum[3][3];
                
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        sum[i][j] = m[i][j]+m1[i][j];
                        printf("%d",sum[i][j]);
                    }
                    printf("\n");
                }

            goto matris;
        }
        else if (a == 3)
        {
            int i,j,k,sum = 0;
            int m[3][3]={{1,2,3},{4,5,6},{7,8,9}},m2[3][3]={{9,8,7},{6,5,4},{3,2,1}},mul[3][3];

            for(i = 0; i < 3; i++)
            {
                for(j = 0; j < 3; j++)
                {
                    for(k = 0; k < 3; k++)
                    {
                        sum += m[i][k] * m2[k][j];
                    }
                    mul[i][j] = sum;
                    sum = 0;
                    printf("%5d",mul[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            goto matris;
        }
        else if (a == 4)
        {
            int i,j,k,sum = 0;
            int m[3][3],m2[3][3],div[3][3];

            for(i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    for(k=0; k<3;k++)
                    {
                        sum += m[i][k] * 1 / m2[j][k];
                    }
                    div[i][j] = sum;
                    sum = 0;
                    printf("%5d",div[i][j]);
                }
                printf("\n");
            }

            printf("\n");
            goto matris;
        }
        else if (a == 5)
        {
            int i, j, k,x1,y1,sum = 0;

            printf("stununu giriniz : ");
            scanf("%d",&x1);
            printf("satiri giriniz : ");
            scanf("%d",&y1);

            int m[x1][y1],m2[x1][y1],res[x1][y1];
            

            start:
            for(i=0;i<x1;i++)
            {
                for(j=0;j<y1;j++)
                {
                    printf("x stunundaki [%d][%d] hangi sayi olsun ? : ",i,j);
                    scanf("%d",&m[i][j]);
                    printf("\n");
                }
            }

            for(i=0;i<x1;i++)
            {
                for(j=0;j<y1;j++)
                {
                    printf("y stunundaki [%d][%d] hangi sayi olsun ? : ",i,j);
                    scanf("%d",&m2[i][j]);
                    printf("\n");
                }
            }
            printf("X Matrisi : \n");

            for(i=0;i<x1;i++)
            {
                for(j=0;j<y1;j++)
                {
                    printf("%5d",m[i][j]);
                }
                printf("\n");
            }

            printf("Y Matrisi : \n");

            for(i=0;i<x1;i++)
            {
                for(j=0;j<y1;j++)
                {
                    printf("%5d",m2[i][j]);
                }
                printf("\n");
            }
            
            //sum
            
            printf("Toplamlari : \n");

            for(i=0; i < x1; i++)
            {
                for (j = 0; j < y1; j++)
                {
                    res[i][j] = m[i][j] + m2[i][j];
                    printf("%5d",res[i][j]);
                }
                printf("\n");
            }

            //subtraction

            printf("Cikarma : \n");

            for(i=0;i<x1;i++)
            {
                for (j = 0; j < y1; j++)
                {
                    res[i][j] = m[i][j] - m2[i][j];
                    printf("%5d",res[i][j]);
                }
                printf("\n");
            }

            //multiple

            printf("Carpma : \n");

            for(i = 0; i < x1; i++)
            {
                for (j = 0; j < y1; j++)
                {
                    for(k = 0; k < y1; k++)
                    {
                        sum += m[i][k] * m2[k][j];
                    }
                    res[i][j] = sum;
                    sum = 0;
                    printf("%5d",res[i][j]);
                }
                printf("\n");   
            }

            goto matris;
        }
        else if (a == 6)
        {
            break;
        }
        else
        {
            printf("tanimlanmiyan bir numara girdiniz tekrar giriniz\n");
            goto matris;
        }
        
    }

}