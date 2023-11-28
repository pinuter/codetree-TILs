#include <iostream>
#include <string>
using namespace std;

int main() {

    // 선언부
    int n, q; // n개의 원소 및 질의 개수 선언
    int q_type; // 질의 종류
    int a, b; // 질의 타입에 따라 사용하기 위한 변수
    int arr[100] = { }; // n개의 원소를 담은 배열 선언

    // 처리부
    cin >> n >> q;

    // n개 원소 삽입
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // 질의 횟수 만큼 순회
    for (int i = 0; i < q; i++)
    {
        cin >> q_type;

        // 1번 질의
        if (q_type == 1)
        {
            cin >> a;
            cout << arr[a - 1] << endl;
        }
        // 2번 질의
        else if (q_type == 2)
        {
            cin >> a;
            int idx = 0;

            for (int j = 100; j >= 0; j--)
            {
                if (arr[j] == a)
                {
                    idx = j;
                    break;
                }
                else
                {
                    idx = 0;
                }
            }

            cout << idx + 1 << endl;
        }
        // 3번 질의
        else 
        {
            cin >> a >> b;

            for (int i = a; i <= b; i++)
            {
                cout << arr[i - 1] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}