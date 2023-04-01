#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main2() {
    srand(time(NULL));  // 난수 발생기 초기화

    int level = 1;  // 초기 검 레벨
    int cost = 10;  // 초기 강화 비용
    int money = 1000;
    int c_level = 1;
    int attack = 1;
    int c_attack = 1;

    cout << "=== 검 강화하기 게임 ===" << endl;
    cout << "현재 검 레벨: " << level << endl;
    cout << "강화하시겠습니까? (Y/N): " << endl;
    cout << "현재가진 돈 :" << money << endl;
    cout << "강화 성공 확률:" << 100 - level * 10 << "%" << endl;

    while (true) {

        char input;
        cin >> input;

        if (input == 'Y' || input == 'y') {
            // 강화 시도
            money -= cost;

            int roll = rand() % 100 + 1;  // 1 ~ 100 사이의 난수 생성
            if (roll >= level*10) {
                // 강화 성공
                level++;
                cost *= 1.2;
                cout << "강화에 성공했습니다!" << endl;
                cout << "현재 검 레벨: " << level << endl;
                cout << "강화 비용: " << cost << endl;
                cout << "현재가진 돈 :" << money << endl;
                cout << "강화 성공 확률:" << 100 - level * 10 << "%" << endl;
            }
            else {
                // 강화 실패
                level = 1;
                cost = 10;
                cout << "강화에 실패했습니다. 검이 파괴되었습니다." << endl;
                cout << "새로운 검을 구매하세요." << endl;
                continue;
            }
        }
        else {
            // 특수 강화  ( 사기 ) 
            if (input == 'r' || input == 'R') {
                money -= cost;

                int roll = rand() % 100 + 1;  // 1 ~ 100 사이의 난수 생성
                if (roll >= c_level * 0.1) {
                    // 강화 성공
                    c_level++;
                    level++;
                    cost *= 3;
                    cout << "강화에 성공했습니다!" << endl;
                    cout << "현재 검 레벨: " << c_level << endl;
                    cout << "강화 비용: " << cost << endl;
                    cout << "현재가진 돈 :" << money + 1000000000 << endl;
                    cout << "강화 성공 확률:" << 100 - level * 10 << "%" << endl;
                }
                else {
                    // 강화 실패
                    level = 1;
                    cost = 10;
                    cout << "강화에 실패했습니다. 검이 파괴되었습니다." << endl;
                    cout << "새로운 검을 구매하세요." << endl;
                }
            }

        
     }




}

    cout << "게임을 종료합니다." << endl;

    return 0;
}
