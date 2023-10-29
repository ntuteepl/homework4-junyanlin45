#include <stdio.h>

// 定義最大帳號數量
#define MAX_ACCOUNTS 6

// 假設的帳號、密碼和餘額資料
int accounts[MAX_ACCOUNTS][3] = {
    {123, 456, 9000},  // 帳號、密碼、餘額
    {456, 789, 5000},
    {789, 888, 6000},
    {336, 558, 10000},
    {775,666,12000},
    {566, 221, 7000},

};

int main() {
    int N, account, password;


    scanf("%d", &N);

    for (int i = 0; i < N; i++) {

        scanf("%d %d", &account, &password);


        int found = 0;
        int balance = 0;

        // 檢查帳號和密碼是否存在並取得餘額
        for (int j = 0; j < MAX_ACCOUNTS; j++) {
            if (accounts[j][0] == account && accounts[j][1] == password) {
                found = 1;
                balance = accounts[j][2];
                break;
            }
        }

        // 輸出結果
        if (found) {
                 printf("%d\n", balance);

        } else {
            printf("error\n");
        }
    }

    return 0;
}

