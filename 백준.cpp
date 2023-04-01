#include "main.h"	
#include <iostream>

using namespace std;

class Sword {
private:
    unsigned int damage; // ���� �⺻ ���ݷ�
    unsigned int level; // ���� ��ȭ ����
public:
    Sword(unsigned int dmg) { // ������ �Լ�
        damage = dmg;
        level = 1; // ���� ������ �� ������ 1�� �ʱ�ȭ
    }
    
    void upgrade() { // ��ȭ �Լ�
        int r = rand() % 100 + 1;
        bool ��ȭȮ�� = (r <= 100 - level * 0.5);
        bool �϶�Ȯ�� = (r >= 75);  

        if (��ȭȮ��) {
            /*cout << "��� ��ȭ�Ǿ� �׳� ���� ������ �̴ϴ�." << endl;*/
            cout << "��" << endl;
            damage *= 1.5; // ���ݷ��� 10 ������Ŵ
            level++; // ������ 1 ������Ŵ
        }
        else if (�϶�Ȯ��) {
            //cout << "��� ��ȭ�� �����Ͽ� ���� �� �˾Ұ����� ������ �ʾҰ� ��¦ ���� �����ϴ�." << endl;
            cout << "¼����" << endl;
            damage /= 1.5;
            level--;
        }
        else {
            //cout << "��� �ı��Ǿ� �ʽ��� ��ã�ҽ��ϴ�."<< endl;
            cout << "�ڡڡ�¸�׶��ڡڡ�" << endl;
            damage = 50;
            level = 1;
        }
    }

    int getDamage() { // ���ݷ��� ��ȯ�ϴ� �Լ�
        return damage;
    }

    int getLevel() { // ������ ��ȯ�ϴ� �Լ�
        return level;
    }
};


int main() {
    Sword sword(50); // ���ݷ��� 50�� ���� �����մϴ�.
    srand((unsigned int)time(NULL));

    int swordDamage = sword.getDamage(); // swordDamage���� 60�� ����˴ϴ�.
    int swordLevel = sword.getLevel(); // swordLevel���� 2�� ����˴ϴ�.

    cout << "��ȭ�ϱ��� : " <<  swordDamage << endl;
    cout << "��ȭ �����ΰ� : " << swordLevel << endl;

    for (int i = 1; i < 100; i++) {
        sword.upgrade();
    }

    cout << "����Ե� ��ȭ �� ������ : " << sword.getDamage() << endl;
    cout << "�̰� ��ź ���̾� ** : " << sword.getLevel() << endl;


    return 0;
}