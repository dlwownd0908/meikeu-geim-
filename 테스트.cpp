#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main2() {
    srand(time(NULL));  // ���� �߻��� �ʱ�ȭ

    int level = 1;  // �ʱ� �� ����
    int cost = 10;  // �ʱ� ��ȭ ���
    int money = 1000;
    int c_level = 1;
    int attack = 1;
    int c_attack = 1;

    cout << "=== �� ��ȭ�ϱ� ���� ===" << endl;
    cout << "���� �� ����: " << level << endl;
    cout << "��ȭ�Ͻðڽ��ϱ�? (Y/N): " << endl;
    cout << "���簡�� �� :" << money << endl;
    cout << "��ȭ ���� Ȯ��:" << 100 - level * 10 << "%" << endl;

    while (true) {

        char input;
        cin >> input;

        if (input == 'Y' || input == 'y') {
            // ��ȭ �õ�
            money -= cost;

            int roll = rand() % 100 + 1;  // 1 ~ 100 ������ ���� ����
            if (roll >= level*10) {
                // ��ȭ ����
                level++;
                cost *= 1.2;
                cout << "��ȭ�� �����߽��ϴ�!" << endl;
                cout << "���� �� ����: " << level << endl;
                cout << "��ȭ ���: " << cost << endl;
                cout << "���簡�� �� :" << money << endl;
                cout << "��ȭ ���� Ȯ��:" << 100 - level * 10 << "%" << endl;
            }
            else {
                // ��ȭ ����
                level = 1;
                cost = 10;
                cout << "��ȭ�� �����߽��ϴ�. ���� �ı��Ǿ����ϴ�." << endl;
                cout << "���ο� ���� �����ϼ���." << endl;
                continue;
            }
        }
        else {
            // Ư�� ��ȭ  ( ��� ) 
            if (input == 'r' || input == 'R') {
                money -= cost;

                int roll = rand() % 100 + 1;  // 1 ~ 100 ������ ���� ����
                if (roll >= c_level * 0.1) {
                    // ��ȭ ����
                    c_level++;
                    level++;
                    cost *= 3;
                    cout << "��ȭ�� �����߽��ϴ�!" << endl;
                    cout << "���� �� ����: " << c_level << endl;
                    cout << "��ȭ ���: " << cost << endl;
                    cout << "���簡�� �� :" << money + 1000000000 << endl;
                    cout << "��ȭ ���� Ȯ��:" << 100 - level * 10 << "%" << endl;
                }
                else {
                    // ��ȭ ����
                    level = 1;
                    cost = 10;
                    cout << "��ȭ�� �����߽��ϴ�. ���� �ı��Ǿ����ϴ�." << endl;
                    cout << "���ο� ���� �����ϼ���." << endl;
                }
            }

        
     }




}

    cout << "������ �����մϴ�." << endl;

    return 0;
}
