#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    puts("Tugas Quiz Asdos");
    puts("1. Level 1");
    puts("2. Level 2");
    puts("3. Level 3");
    puts("Exit");
    printf("Masukkan Pilihan : ");
    scanf("%d", &a);

    switch(a)
    {
    case 1 :
        {
            int a1, b, c;
            system("cls");
            printf("Masukkan Angka : ");
            scanf("%d", &a1);
            for(b=0; b<=a1; b++)
            {
                for(c=b; c<=b*2; c++)
                    {
                        printf("%d", c);
                    }
            printf("\n");
            }
            printf("\n");
            goto*main();
            break;
        }
        case 2 :
        {
            int a1, b, c;
            system("cls");
            printf("Masukkan Angka : ");
            scanf("%d", &a1);
            for(b=1; b<=a1; b++)
            {
                for(c=b; c<=b*b; c+=b)
                    {
                        printf("%d", c);
                    }
            printf("\n");
            }
            printf("\n");
            goto*main();
            break;
        }
        case 3 :
            {
            system("cls");
            int a1, b, c, d;
            int baris, kolom, bintang;
            printf("Masukkan Angka (Max 9) : ");
            scanf("%d", &a1);
            for(b=1; b<=a1; b++)
            {
                printf("\n");
                for(c=1; c<=a1-b; c++)
                {
                    printf(" ");
                }
                for(d=1; d<=b; d++)
                {
                    printf("%d", d);
                }
                for(d=b-1; d>=1; d--)
                {
                    printf("%d", d);
                }
            }
            for (b =a1-1; b>=1; b--)
            {
                printf("\n");
                for(c=1; c<=a1-b; c++)
                {
                    printf(" ");
                }
                for(d=1; d<=b;d++)
                {
                    printf("%d", d);
                }
                for(d=b-1; d>=1; d--)
                {
                    printf("%d", d);
                }
            }
            printf("\n");
            goto*main();
            break;
            }
            case 4 :
            system("cls");
            printf("Terimakasih");
            exit(0);
            default : goto*main();
    }
}
