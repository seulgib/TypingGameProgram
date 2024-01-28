#include "taja.h"

////////////////////////////���� Ÿ�ڿ��� �ʼ� ��� ���� ��Ʈ///////////////////////////////////////////


void make_file() {
    //���� ���� ����
    fstream file_1("words.txt", ios::out);
    file_1 << "Greenapple\n" << "Banana\n" << "Watermelon\n" << "Peach\n" << "Orange\n"
        << "Strawberry\n" << "Mango\n";
    file_1.close();

    //ª���� ���� ����
    fstream file_2("short.txt", ios::out);
    file_2 << "���� ���� ������� ����.\n"
        << "������ ��� ���� ���� ��ȸ�� ���ϴ� ���� �´�.\n"
        << "�Ϸ翡 3�ð��� ������ 7�� �Ŀ� ������ �ѹ��� �� �� �ִ�.\n"
        << "���� �ִ� �� ����� �ִ�.\n";
    file_2.close();

    //��� ���� ����
    fstream file_3("long.txt", ios::out);
    file_3 << "���� ���� ��λ��� ������ �⵵�� �ϴ����� �����ϻ� �츮���� ����.\n����ȭ ��õ�� ȭ�� ���� ���� ���, �������� ���� �����ϼ�.\n���� ���� �� �ҳ���, ö���� �θ� �� �ٶ� ���� �Һ����� �츮 ����ϼ�.\n����ȭ ��õ�� ȭ�� ���� ���� ���, �������� ���� �����ϼ�.\n";
    file_3.close();
}

#pragma once
void printStartOption() {
    cout << "     ��ſ� Ÿ�� ���� ���α׷�~*^^*" << endl;
    cout << "----------------------------------------" << endl;
    cout << "|          <<�ɼ��� �����ϼ���>>        |" << endl;
    cout << "|       1. ���� ����(����/ª����/���)  |" << endl;
    cout << "|       2. ������ �߰�/����/����        |" << endl;
    cout << "|        3. ���α׷� ����(��_��)        |" << endl;
    cout << "|                                       |" << endl;
    cout << "----------------------------------------" << endl;
}

void printGameOption() {
    cout << "     ��ſ� Ÿ�� ���� ���α׷�~*^^*" << endl << endl;
    cout << "----------------------------------------" << endl;
    cout << "|      <<�ɼ��� �����ϼ���>>            |" << endl;
    cout << "|       1. ���� ���� ����               |" << endl;
    cout << "|       2. ª���� ���� ����             |" << endl;
    cout << "|       3. �� �� ���� ����              |" << endl;
    cout << "----------------------------------------" << endl;
}

void dataOption() {
    cout << "     ��ſ� Ÿ�� ���� ���α׷�~*^^*" << endl << endl;
    cout << "----------------------------------------" << endl;
    cout << "|      <<�ɼ��� �����ϼ���>>            |" << endl;
    cout << "|       1. ������ �߰�                  |" << endl;
    cout << "|       2. ������ ����                  |" << endl;
    cout << "|       3. ������ ����                  |" << endl;
    cout << "----------------------------------------" << endl;
}

void addOption() {
    cout << "     ��ſ� Ÿ�� ���� ���α׷�~*^^*" << endl << endl;
    cout << "----------------------------------------" << endl;
    cout << "|      <<�ɼ��� �����ϼ���>>            |" << endl;
    cout << "|       1. ���� ������ �߰�             |" << endl;
    cout << "|       2. ª���� ������ �߰�           |" << endl;
    cout << "|       3. �� �� ������ �߰�            |" << endl;
    cout << "----------------------------------------" << endl;
}

void eraseOption() {
    cout << "     ��ſ� Ÿ�� ���� ���α׷�~*^^*" << endl << endl;
    cout << "----------------------------------------" << endl;
    cout << "|      <<�ɼ��� �����ϼ���>>            |" << endl;
    cout << "|       1. ���� ������ ����             |" << endl;
    cout << "|       2. ª���� ������ ����           |" << endl;
    cout << "|       3. �� �� ������ ����            |" << endl;
    cout << "----------------------------------------" << endl;
}

void changeOption() {
    cout << "     ��ſ� Ÿ�� ���� ���α׷�~*^^*" << endl << endl;
    cout << "----------------------------------------" << endl;
    cout << "|      <<�ɼ��� �����ϼ���>>            |" << endl;
    cout << "|       1. ���� ������ ����             |" << endl;
    cout << "|       2. ª���� ������ ����           |" << endl;
    cout << "|       3. �� �� ������ ����            |" << endl;
    cout << "----------------------------------------" << endl;
}

void logOut() {
    cout << "     ��ſ� Ÿ�� ���� ���α׷�~*^^*" << endl << endl;
    cout << "----------------------------------------" << endl;
    cout << "|     ���α׷��� �����մϴ�.           |" << endl;
    cout << "|       See                            |" << endl;
    cout << "|       you                            |" << endl;
    cout << "|       Later~!                        |" << endl;
    cout << "----------------------------------------" << endl;
}

//����� �ɼ� �Է�
int option_input() {
    cout << "�ɼ� �Է�) ";
    int option;
    cin >> option;
    return option;
}

//���Ͽ� ���� ��ü ���ڼ� ī��Ʈ�ؼ� ��ȯ->���൵ ���� �� ���(���� �ذ� �ȵ�. �ѱ��� ���� ���� �ϳ��� +2�� ��.)
int count_char(const string& filename) {
    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Unable to open file" << endl;
        exit(1);
    }

    int count = 0;

    string sentence;
    while (getline(file, sentence)) {
        count += sentence.length();
    }
    return count;
}


// ����ڷκ��� ���ڿ� �Է��� �޴� �Լ�
string getUserInput() {
    string input;
    getline(cin, input);
    return input;
}

//data �߰� �Լ�
void add_data(const string& filename) {//�ܾ� �߰�
    ofstream f(filename, ios::app);//ios::app ���Ͽ� �����̱�
    if (!f) {
        cout << "Unable to open file" << endl;
        exit(1);
    }
    string word[100];
    int count;
    cout << "�߰��� data ������? >>";
    cin >> count;
    cin.ignore();//���� �Էµ� ���๮�� ����
    for (int i = 0; i < count; i++) {
        cout << i + 1 << "��° �߰� data: ";
        getline(cin, word[i]);
        f << word[i] << endl;//���Ͽ� ����� �Է� ����
    }
    cout << "����� �Է� �߰� �Ϸ�" << endl;
    f.close();
    Sleep(1000);
    system("cls");
}

vector<string>userinput;//����� �Է� ���� �����ϴ� vector
vector<string>sentences;//���� ���� �����ϴ� vector

//���� ������ ���� �Լ�(���� ������ -> ���ͷ� ���� -> (���� �۾�) -> ���Ϸκ���)
void erase_data(const string& filename) {
    sentences.clear();//vector ����
    string line;
    ifstream file(filename);

    //�ش� ������ ������ ��ü�� ���Ϳ� ����
    if (!file) {
        cout << "Unable to open file" << endl;
        exit(1);
    }
    while (getline(file, line)) {
        sentences.push_back(line);

    }

    file.close();

    int op;
    cout << "������ ������ ��ȣ�� �Է��ϼ���>> ";
    cin >> op;
    if (op >= 1 && op <= sentences.size()) {
        sentences.erase(sentences.begin() + (op - 1));
        cout << "\n�ش� ��ȣ ������ ������ �Ϸ�Ǿ����ϴ�.\n\n";


        //���Ͽ� ������ �� �ٽ� ����
        ofstream file_2(filename);//ofstream ���� ���� ���
        for (const string& sentence : sentences) {//vector�� �ִ� ����� ��� ���Ϸ� ����
            file_2 << sentence << endl;
        }

        //���� �ݱ�
        file_2.close();

    }
    else cout << "�ε��� ��ȣ�� ��ȿ���� �ʽ��ϴ�. ���� �Ұ��մϴ�.\n";//��ȿ���� ���� �ε��� ����
    Sleep(1000);
    system("cls");
}


//���� ������ �����Լ�
void change_data(const string& filename) {
    sentences.clear();//vector ����
    string line;
    ifstream file(filename);
    if (!file) {
        cout << "������ �� �� �����ϴ�." << endl;
        exit(1);
    }
    //���Ͽ� �ִ� ������ ���ͷ� ������ ����
    while (getline(file, line)) {
        sentences.push_back(line);
    }
    file.close();

    //����ڿ��� ������ ������ ��ȣ �Է¹ޱ�
    int op;
    string change;
    cout << "������ ������ ��ȣ�� �Է��ϼ���>> ";
    cin >> op;
    cin.ignore(); // �Է� ���ۿ� ���� �ִ� ���� ���� ����
    cout << "������ ������ �Է��ϼ���>> ";
    getline(cin, change);


    if (op >= 1 && op <= sentences.size()) {
        sentences[op - 1] = change;
        cout << "\n�ش� ��ȣ ������ ������ �Ϸ�Ǿ����ϴ�.\n\n";

        //���Ͽ� ������ ���� ���� ����
        ofstream file_2(filename);
        for (const string& sentence : sentences) {
            file_2 << sentence << endl;
        }
        file_2.close();
        Sleep(1500);
    }
    else {
        cout << "��ȿ���� ���� �ε��� ��ȣ�Դϴ�. ������ �� �����ϴ�.\n";
    }
    Sleep(1000);
    system("cls");
}

//���� ���� ��� �Լ�(������ ����, �����Ҷ� �ʿ�)
void printFile(const string& filename) {
    string line;
    ifstream file(filename);
    int i = 0;
    cout << "===========words.txt=================" << endl;
    while (getline(file, line)) {
        cout << i + 1 << "��° data: " << line << endl;
        i++;
    }
    cout << "======================================" << endl << endl;
}

//���Ͽ����� data(�ܾ� Ȥ�� ����) ���� ���� �Լ�
int getLineNum(const string& filename) {
    ifstream file(filename);
    string line;
    int cnt = 0;
    while (getline(file, line)) {
        cnt++;
    }
    return cnt;
}

void gameStart(const string& filename) {

    cout << "\n\nEnterŰ�� ������, Ÿ�� ���� ���α׷��� �����մϴ�." << endl;
    cin.get();

    cout << "\n------------------------------------------------------------\n" << endl;
    cout << "������ ���� �Է��ϼ���" << endl;

    auto start = chrono::steady_clock::now();//���� �ð�

    string sentence; string line;
    ifstream file(filename);//���� �б� ���


    double going;
    int cnt = 0;//�Է¹��� data��(���൵ ������ �� ���)
    //int wrong = 0;

    while (getline(file, line)) {
        cout << line << endl;//���� ���� ���
        string input = getUserInput();//����� �Է� �ޱ�

        if (input == "������")//"������" Ű���� �Է¹����� ������ ���� ����
        {
            cout << "'������' Ű���带 �Է��ϼ̱���. �� ������ ������ ���۵˴ϴ�!" << endl;
            Sleep(2000);
            addGame(); break;
        }



        userinput.push_back(input);//����� �Է� �����ϴ� vector<string>

        sentences.push_back(line);//���� ���� �����ϴ� vector<string>

        //int usergoing = input.length();
        cnt++;
        cout.precision(4);
        going = (double)cnt / getLineNum(filename);//���൵ ��� �Լ�(������� �Է¹��� data ��/��ü data ��)
        cout << "                                                                      >>  ���� ���൵: " << going * 100 << "% " << endl;
    }
    auto end = chrono::steady_clock::now();//����� �Է� ���� �ð�
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);


    double incorrectchars = 0;
    double correctchars = 0;

    int numSentences = min(userinput.size(), sentences.size());

    for (int i = 0; i < numSentences; i++) {
        const string& input = userinput[i];
        const string& original = sentences[i];
        int minLength = min(input.length(), original.length());
        int inputByteIndex = 0;
        int originalByteIndex = 0;

        while (inputByteIndex < input.length() && originalByteIndex < original.length()) {
            if (input[inputByteIndex] == original[originalByteIndex]) {
                correctchars++;

                // ���� ������ ��� 1����Ʈ�� ó���ǹǷ� ���� ����Ʈ�� �̵�
                if (static_cast<unsigned char>(input[inputByteIndex]) < 0x80) {
                    inputByteIndex++;
                    originalByteIndex++;
                }
                // �ѱ� ������ ��� 3����Ʈ�� ó���ǹǷ� ���� 2����Ʈ�� �ǳʶپ�� ��
                else {
                    inputByteIndex += 3;
                    originalByteIndex += 3;
                }
            }
            else {
                incorrectchars++;

                // ���� ����Ʈ�� �̵�
                if (static_cast<unsigned char>(input[inputByteIndex]) < 0x80) {
                    inputByteIndex++;
                }
                else {
                    inputByteIndex += 3;
                }
            }
        }
    }


    double totalChars = correctchars + incorrectchars;
    double accuracy = 0.0;

    if (totalChars > 0) {
        accuracy = static_cast<double>(correctchars) / totalChars * 100;
    }

#
    double typingspeed = static_cast<double>((correctchars) / duration.count()) * 60 * 1000;

    cout << "\n------------------------------------------------------------\n" << endl;
    //cout << "Ÿ���� �ӵ�: " << typingspeed << " Ÿ/��" << endl;
    cout << "��Ȯ��: " << accuracy << "%" << endl;
    cout << "��Ÿ ��: " << incorrectchars << endl;
    cout << "��� �ð�: " << (double)duration.count() * 0.001 << "sec" << endl;//count�Լ� ȣ��->�ش� �ð��� ������ ����.(���� millisecond)->sec�� ��ȯ ���� 0.001 ������.
    cout << "\n------------------------------------------------------------\n" << endl;
    Sleep(3000);
    //system("cls");

}


//////////////////////////////////////////�꼺�� ���� �ڵ�///////////////////////////////////////////////////////////////////////
//min~max ������ �Լ� ȣ��
int random(int min, int max) {
    return rand() % (max - min + 1) + min;
}


void StartaddGame() {
    system("cls");
    cout << " ***�Ӹ��� �������� ������ Game***" << endl;
    cout << "----------------------------------------" << endl;
    cout << "|      <<������ ���� ���>>             |" << endl;
    cout << "|      �� ���ں� �ϴÿ��� �����ɴϴ�. |" << endl;
    cout << "|           �������� ���ڵ���           |" << endl;
    cout << "|           �� ���� �ϻ��Ͽ�            |" << endl;
    cout << "|      �ùٸ� ������ �Է��ϼ���!!       |" << endl;
    cout << "----------------------------------------" << endl;
}

void DyingMessage() {

    cout << endl << " ***�Ӹ��� �������� ������ Game***" << endl;
    cout << "----------------------------------------" << endl;
    cout << "|                                      |" << endl;
    cout << "|                You                   |" << endl;
    cout << "|                Die                   |" << endl;
    cout << "|               .....                  |" << endl;
    cout << "|                                      |" << endl;
    cout << "----------------------------------------" << endl;
}


void addGame() {

    int level = 1;
    int answer = 0;
    int userInput;
    int randomNum;
    int life = 3;
    int arr[100];

    StartaddGame();
    Sleep(4000);
    system("cls");
    cout << "[ Level " << level << " game start!! ]" << endl;

    //������ �����Կ� ���� ���������� ���� ������ Ŀ������ ����
    for (int i = 0; i < 50; i++)
    {
        if (i < 5)
            randomNum = random(0, 5);
        else if (i < 10)
            randomNum = random(5, 10);
        else if (i < 15)
            randomNum = random(5, 20);
        else if (i < 20)
            randomNum = random(10, 20);
        else if (i < 25)
            randomNum = random(10, 30);
        else if (i < 30)
            randomNum = random(20, 30);
        else if (i < 35)
            randomNum = random(30, 40);
        else if (i < 40)
            randomNum = random(35, 50);
        else if (i < 45)
            randomNum = random(50, 70);
        else
            randomNum = random(70, 200);



        arr[i] = randomNum;
        answer += arr[i];

        // ���� ��ó�� �������� ��� ����
        for (int j = 0; j < arr[i]; j++)
        {
            cout << " ";
        }
        //std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
        Sleep(1300);
        cout << arr[i] << endl;


        if ((i + 1) % 5 == 0) {
            //cout << "!!!���ѽð� 5��!!!" << endl;

            //thread notificationThread(showNotificationAfterDelay);
            cout << "���� �Է�)) ";
            cin >> userInput;

            //������ �����Ű�� �շ��ϵ����ϴ� �Լ�
            //notificationThread.join();

            //5�� �̳��� �ԷµǾ��ٸ�
            if (answer == userInput) {
                cout << "�����Դϴ�!" << endl;
                Sleep(500);
                answer = 0;//answer�� �ʱ�ȭ
                cout << endl << "***************************************************" << endl;
                cout << endl << "[ Level " << ++level << " game start!! ]" << endl;

            }
            else if (answer != userInput) {
                --life;
                cout << "Ʋ�Ƚ��ϴ�!";
                answer = 0;//answer�� �ʱ�ȭ
                cout << "(���� ��� " << life << "��)" << endl;
                Sleep(800);

                if (life == 0) {
                    system("cls");
                    DyingMessage();
                    Sleep(1300);
                    break;
                }
                cout << endl << "***************************************************" << endl;
                cout << endl << "[ Level " << ++level << " game start!! ]" << endl;
            }

        }
    }
}