

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include <stdio.h>

int main() {

    /* 구구단 테이블

       printf("\n\t---- 구구단 ----\t\n");

        for (int y = 1; y <= 9; y++) {
            for (int x = 1; x <= 9; x++) {
                printf("%d x %d = %d\t", x, y, x * y);
            }
            printf("\n");
        }


    */

    //EXE: //label
    int command = 0;

    do {
        printf("\n");
        printf("==========================\n");
        printf("도서관리 프로그램\n");
        printf("==========================\n");

        printf("1.도서입력\n");
        printf("2.도서검색\n");
        printf("0.프로그램 종료\n\n");

        printf("번호를 입력해주세요.");


        scanf("%d", &command);
        printf("\n");

        switch (command)
        {
            case 1:
                printf("도서 입력 command\n");
                break;
            case 2:
                printf("도서 검색 command\n");
                break;
            case 0:
                printf("프로그램을 종료합니다.\n");
                break;
            default:
                printf("잘못된 입력입니다.\n\n");
           
}



       /* if (command == 1) {
            printf("도서 입력 command\n");
        }
        else if (command == 2) {
            printf("도서 검색 command\n");
        }
        else if (command == 0) {
            printf("프로그램을 종료합니다.\n");
            //goto EXIT;
        }
        else {
            printf("잘못된 입력입니다.\n");
        }
*/
    } while (command != 0);
   



   // goto EXE;

    //EXIT:

    return 0;
}