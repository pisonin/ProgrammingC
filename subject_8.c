#include <stdio.h>
#include <conio.h>  
#include <time.h>

int main() {
    printf("Enterキーを押してください。\n");

    // 現在の時刻を取得して保存
    time_t now;
    struct tm saved_time;

    time(&now);  // 現在の時刻を取得
    saved_time = *localtime(&now);  // ローカル時刻を保存

    // エンターキーを待つループ
    char c = 0;
    while (1) {
        c = getch(); 
        if (c == '\r') {  // エンターキーが押された場合
            printf("保存された日付と時間: %04d年%02d月%02d日 %02d時%02d分%02d秒\n",
                   saved_time.tm_year + 1900,
                   saved_time.tm_mon + 1,
                   saved_time.tm_mday,
                   saved_time.tm_hour,
                   saved_time.tm_min,
                   saved_time.tm_sec);
            break;
        }
    }

    return 0;
}
