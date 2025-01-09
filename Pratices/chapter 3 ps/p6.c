#include <stdio.h>

int main() {
    int num1, num2, num3, num4, greatest;

    // उपयोगकर्ता से चार नंबर इनपुट लें
    printf("enter 4 number: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // सबसे बड़े नंबर को ढूंढने की प्रक्रिया
    greatest = num1; // मान लें कि पहला नंबर सबसे बड़ा है

    if (num2 > greatest) {
        greatest = num2; // अगर दूसरा नंबर बड़ा है तो उसे सबसे बड़ा मान लें
    }
    if (num3 > greatest) {
        greatest = num3; // अगर तीसरा नंबर बड़ा है तो उसे सबसे बड़ा मान लें
    }
    if (num4 > greatest) {
        greatest = num4; // अगर चौथा नंबर बड़ा है तो उसे सबसे बड़ा मान लें
    }

    // परिणाम दिखाएं
    printf("Greates number: %d\n", greatest);

    return 0;
}
