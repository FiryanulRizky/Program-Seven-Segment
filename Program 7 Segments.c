#include <stdio.h>
#define MAX_DIGITS 10

//Program Seven Segment menggunakan fungsi define MAX_DIGITS 10
int clear_digits_array(void);
int process_digit(int digit, int position);
int print_digits_array(void);
char digits[3][MAX_DIGITS*4];
const int array[MAX_DIGITS][7]={{1,1,1,0,1,1,1},{0,0,1,0,0,1,0},{1,0,1,1,1,0,1},{1,0,1,1,0,1,1},{0,1,1,1,0,1,0},{1,1,0,1,0,1,1},{1,1,0,1,1,1,1},{1,0,1,0,0,1,0},{1,1,1,1,1,1,1},{1,1,1,1,0,1,1},};

int clear_digits_array(void){
    int j=0,i=0;
    for(i=0;i<3;i++){
        for(j=0;j<MAX_DIGITS*4;j++){
            digits[i][j]=' ';
        }
    }
}

int process_digit(int digit, int position){
    int i=0;
    for(i=0;i<7;i++){
        if(array[digit][i]==1){
            switch(i){
                case 0: digits[0][1+position*4]='_';
                    break;
                case 1: digits[1][0+position*4]='|';
                    break;
                case 2: digits[1][2+position*4]='|';
                    break;
                case 3: digits[1][1+position*4]='_';
                    break;
                case 4: digits[2][0+position*4]='|';
                    break;
                case 5: digits[2][2+position*4]='|';
                    break;
                case 6: digits[2][1+position*4]='_';
                    break;
            }
        }

    }
}

int print_digits_array(void){
    int a=0,b=0;
    for(a=0;a<3;a++){
        for(b=0;b<MAX_DIGITS*4;b++)
            printf("%c",digits[a][b]);
        printf("\n");
    }
    printf("\n");
}
int main(void) {
    char character_number='\0';
    int a=0;

    clear_digits_array();
    printf("      =========================================\n");
    printf("      TUGAS AKHIR SEMESTER LOGIKA INFORMATIKA\n\n");
    printf("                 -- SEVEN SEGMENTS --       \n\n");
    printf("      Menggunakan Metode Define MAX_DIGITS 10\n");
    printf("      =========================================\n\n");
    printf("                         Oleh       \n");
    printf("                Muhammad Firyanul Rizky       \n");
    printf("                       1708561006      \n\n");
    printf("      ==========================================\n\n");
    printf("                Masukkan angka : ");
    while ((character_number=getchar())!='\n') {
        int number=MAX_DIGITS;
        switch(character_number){
            case '0': number=0;
                printf("\n");
                printf("                L1 = (1) On\n");
                printf("                L2 = (1) On\n");
                printf("                L3 = (1) On\n");
                printf("                L4 = (0) Off\n");
                printf("                L5 = (1) On\n");
                printf("                L6 = (1) On\n");
                printf("                L7 = (1) On\n");
                printf("\n");
            break;
            case '1': number=1;
                printf("\n");
                printf("                L1 = (0) Off\n");
                printf("                L2 = (0) Off\n");
                printf("                L3 = (1) On\n");
                printf("                L4 = (0) Off\n");
                printf("                L5 = (0) Off\n");
                printf("                L6 = (1) On\n");
                printf("                L7 = (0) Off\n");
                printf("\n");
            break;
            case '2': number=2;
                printf("\n");
                printf("                L1 = (1) On\n");
                printf("                L2 = (0) Off\n");
                printf("                L3 = (1) On\n");
                printf("                L4 = (1) On\n");
                printf("                L5 = (1) On\n");
                printf("                L6 = (0) Off\n");
                printf("                L7 = (1) On\n");
                printf("\n");
            break;
            case '3': number=3;
                printf("\n");
                printf("                L1 = (1) On\n");
                printf("                L2 = (0) Off\n");
                printf("                L3 = (1) On\n");
                printf("                L4 = (1) On\n");
                printf("                L5 = (0) Off\n");
                printf("                L6 = (1) On\n");
                printf("                L7 = (1) On\n");
                printf("\n");
            break;
            case '4': number=4;
                printf("\n");
                printf("                L1 = (0) Off\n");
                printf("                L2 = (1) On\n");
                printf("                L3 = (1) On\n");
                printf("                L4 = (1) On\n");
                printf("                L5 = (0) Off\n");
                printf("                L6 = (1) On\n");
                printf("                L7 = (0) Off\n");
                printf("\n");
            break;
            case '5': number=5;
                printf("\n");
                printf("                L1 = (1) On\n");
                printf("                L2 = (1) On\n");
                printf("                L3 = (0) Off\n");
                printf("                L4 = (1) On\n");
                printf("                L5 = (0) Off\n");
                printf("                L6 = (1) On\n");
                printf("                L7 = (1) On\n");
                printf("\n");
            break;
            case '6': number=6;
                printf("\n");
                printf("                L1 = (1) On\n");
                printf("                L2 = (1) On\n");
                printf("                L3 = (0) Off\n");
                printf("                L4 = (1) On\n");
                printf("                L5 = (1) On\n");
                printf("                L6 = (1) On\n");
                printf("                L7 = (1) On\n");
                printf("\n");
                break;
            case '7': number=7;
                printf("\n");
                printf("                L1 = (1) On\n");
                printf("                L2 = (0) Off\n");
                printf("                L3 = (1) On\n");
                printf("                L4 = (0) Off\n");
                printf("                L5 = (0) Off\n");
                printf("                L6 = (1) On\n");
                printf("                L7 = (0) Off\n");
                printf("\n");
            break;
            case '8': number=8;
                printf("\n");
                printf("                L1 = (1) On\n");
                printf("                L2 = (1) On\n");
                printf("                L3 = (1) On\n");
                printf("                L4 = (1) On\n");
                printf("                L5 = (1) On\n");
                printf("                L6 = (1) On\n");
                printf("                L7 = (1) On\n");
                printf("\n");
            break;
            case '9': number=9;
                printf("\n");
                printf("                 L1 = (1) On\n");
                printf("                 L2 = (1) On\n");
                printf("                 L3 = (1) On\n");
                printf("                 L4 = (1) On\n");
                printf("                 L5 = (0) Off\n");
                printf("                 L6 = (1) On\n");
                printf("                 L7 = (1) On\n");
                printf("\n");
            break;
            default: number=' ';
        }
        if(a<MAX_DIGITS){
            process_digit(number,a);
            a++;
        }
    }
    print_digits_array();
    return 0;
}
