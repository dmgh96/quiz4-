

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include <stdio.h>

int main() {

    /* ������ ���̺�

       printf("\n\t---- ������ ----\t\n");

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
        printf("�������� ���α׷�\n");
        printf("==========================\n");

        printf("1.�����Է�\n");
        printf("2.�����˻�\n");
        printf("0.���α׷� ����\n\n");

        printf("��ȣ�� �Է����ּ���.");


        scanf("%d", &command);
        printf("\n");

        switch (command)
        {
            case 1:
                printf("���� �Է� command\n");
                break;
            case 2:
                printf("���� �˻� command\n");
                break;
            case 0:
                printf("���α׷��� �����մϴ�.\n");
                break;
            default:
                printf("�߸��� �Է��Դϴ�.\n\n");
           
}



       /* if (command == 1) {
            printf("���� �Է� command\n");
        }
        else if (command == 2) {
            printf("���� �˻� command\n");
        }
        else if (command == 0) {
            printf("���α׷��� �����մϴ�.\n");
            //goto EXIT;
        }
        else {
            printf("�߸��� �Է��Դϴ�.\n");
        }
*/
    } while (command != 0);
   



   // goto EXE;

    //EXIT:

    return 0;
}