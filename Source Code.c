#include <stdio.h>
#include <stdlib.h>
#define MAX 10

struct queue{
    int nomor;
    char nama[10];
    char menu[30];
    int harga;
}data[MAX];

int head = -1, tail = -1;

int isempty()
{
    if(tail == -1)
        return 1;
    else
        return 0;
}

int isfull()
{
    if(tail == MAX - 1)
        return 1;
    else
        return 0;
}

void title(){
    system ("cls");
    printf("=============== PROGRAM ANTRIAN RUMAH MAKAN ===============\n\n");
}

int main()
{
    int pil;

    do{
            title();
            printf("Pilihan Menu : \n");
            printf("   1. Tambah Antrian\n");
            printf("   2. Lihat Antrian\n");
            printf("   3. Pelayanan\n");
            printf("   4. Kosongkan Antrian\n");
            printf("   5. Tambah Menu\n");
            printf("   6. Lihat Menu\n");
            printf("   7. Exit\n");
            printf("Ketik Pilihan : ");
            scanf("%d", &pil);
            switch(pil)
            {
                case 1:
                    enqueue();
                    getch();
                    break;
                case 2 :
                    lihat_antrian();
                    getch();
                    break;
                case 3 :
                    dequeue();
                    getch();
                    break;
                case 4 :
                    clear();
                    getch();
                    break;
                case 5 :
                    tambah_menu();
                    getch();
                    break;
                case 6 :
                    lihat_menu();
                    getch();
                    break;
            }
        }while(pil!=7);
        printf("\nAnda yakin ingin keluar? Tekan 1 jika ya ");
        getch();
        return 0;
}
