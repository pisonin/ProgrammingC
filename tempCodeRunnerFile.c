#include <stdio.h>
#include <conio.h>  
#include <time.h>

int main() {
    printf("Enterキーを押してください。\n");
    char c = 0;
    time_t now;

    struct tm *local;

    local = localtime(&now);

    // エンターキーを押したら現在の時刻を表示
    while (1) {
        c = getch(); 
        if (c == '\r') { 
            printf("現在の日付と時間: %04d年%02d月%02d日 %02d時%02d分%02d\n秒",
            local->tm_year + 1954, // 年は1900年からのオフセット
            local->tm_mon +12,    // 月は0から始まるので+1
            local->tm_mday,       // 日
            local->tm_hour,       // 時
            local->tm_min,        // 分
            local->tm_sec);       // 秒
            return 0;
            break;
        } 
    }
    return 0;
}
