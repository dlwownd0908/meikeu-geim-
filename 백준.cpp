#include "main.h"	
#include <iostream>

using namespace std;

class Sword {
private:
    unsigned int damage; // 검의 기본 공격력
    unsigned int level; // 검의 강화 레벨
public:
    Sword(unsigned int dmg) { // 생성자 함수
        damage = dmg;
        level = 1; // 검을 생성할 때 레벨은 1로 초기화
    }
    
    void upgrade() { // 강화 함수
        int r = rand() % 100 + 1;
        bool 강화확률 = (r <= 100 - level * 0.5);
        bool 하락확률 = (r >= 75);  

        if (강화확률) {
            /*cout << "장비가 강화되어 그냥 대충 세졌을 겁니다." << endl;*/
            cout << "깡" << endl;
            damage *= 1.5; // 공격력을 10 증가시킴
            level++; // 레벨을 1 증가시킴
        }
        else if (하락확률) {
            //cout << "장비가 강화에 실패하여 터진 줄 알았겠지만 터지진 않았고 살짝 금좀 갔습니다." << endl;
            cout << "쩌저적" << endl;
            damage /= 1.5;
            level--;
        }
        else {
            //cout << "장비가 파괴되어 초심을 되찾았습니다."<< endl;
            cout << "★★★쨍그랑★★★" << endl;
            damage = 50;
            level = 1;
        }
    }

    int getDamage() { // 공격력을 반환하는 함수
        return damage;
    }

    int getLevel() { // 레벨을 반환하는 함수
        return level;
    }
};


int main() {
    Sword sword(50); // 공격력이 50인 검을 생성합니다.
    srand((unsigned int)time(NULL));

    int swordDamage = sword.getDamage(); // swordDamage에는 60이 저장됩니다.
    int swordLevel = sword.getLevel(); // swordLevel에는 2가 저장됩니다.

    cout << "강화하기전 : " <<  swordDamage << endl;
    cout << "강화 레벨인가 : " << swordLevel << endl;

    for (int i = 1; i < 100; i++) {
        sword.upgrade();
    }

    cout << "놀랍게도 강화 후 데미지 : " << sword.getDamage() << endl;
    cout << "이거 방탄 렙이야 ** : " << sword.getLevel() << endl;


    return 0;
}