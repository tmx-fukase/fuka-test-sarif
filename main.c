#include <stdio.h>
#include "functions.h" // functions.c で定義された関数を使用するために、そのプロトタイプ宣言を含むヘッダーをインクルード

int main() {
    printf("This is main.c calling a function...\n");

    // functions.c で定義された displayMessage 関数を呼び出し
    displayMessage();

    printf("Function call finished.\n");

    return 0;
}