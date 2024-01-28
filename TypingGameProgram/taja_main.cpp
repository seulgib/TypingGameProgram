#include "taja.h"

int main(void)
{
    srand(time(NULL));
    //���� ����
    make_file();


    while (true) {
        //system("cls");
        printStartOption();

        switch (option_input())
        {

        case 1:
            system("cls"); printGameOption();

            switch (option_input()) {
            case 1: system("cls"); gameStart("words.txt"); break;
            case 2:system("cls"); gameStart("short.txt"); break;
            case 3:system("cls"); gameStart("long.txt"); break;
            default:"�ùٸ� �ɼ��� �Է��ϼ���.\n"; break;
            }
            break;


        case 2:
            system("cls"); dataOption();//�߰�, ����, ����
            switch (option_input())
            {
            case 1://������ �߰�
                system("cls"); addOption();//�ܾ�, ª�� ��, �� ��
                switch (option_input())
                {
                case 1: system("cls"); add_data("words.txt"); break;
                case 2: system("cls"); add_data("short.txt"); break;
                case 3: system("cls"); add_data("long.txt"); break;
                }
                break;

            case 2://������ ���� 
                system("cls"); changeOption();//�ܾ�, ª�� ��, �� ��
                switch (option_input())
                {
                case 1: system("cls"); printFile("words.txt"); change_data("words.txt"); break;
                case 2:system("cls"); printFile("short.txt"); change_data("short.txt"); break;
                case 3:system("cls"); printFile("long.txt"); change_data("short.txt"); break;
                default: cout << "�߸��� �ɼ��� �Է��ϼ̽��ϴ�.\n"; break;
                }
                break;

            case 3://������ ���� 
                system("cls"); eraseOption();//�ܾ�, ª�� ��, �� ��
                switch (option_input()) {
                case 1: system("cls"); printFile("words.txt"); erase_data("words.txt"); break;
                case 2: system("cls"); printFile("short.txt"); erase_data("short.txt"); break;
                case 3: system("cls"); printFile("long.txt"); erase_data("long.txt"); break;
                default: cout << "�߸��� �ɼ��� �Է��ϼ̽��ϴ�.\n"; break;
                }
                break;
            }
            break;

        case 3:
            system("cls");
            logOut();
            exit(1);




        }
    }//while�� ��ȣ


    return 0;
}