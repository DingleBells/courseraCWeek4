//
//  loveYouVeryMuch.c
//  loveYouVeryMuch
//
//  Created by kanghee on 1/8/21.
//

#include <stdio.h>

void writeVery(intCount) {
    while (intCount > 0) {
        printf("\n very");
        intCount --;
    }
    printf("\n much.\n\n");
}

int main(void) {
    int repeat = 0;
    printf("How strong is your love 1-10: ");
    scanf("%d", &repeat);
    printf("\nI love you very");
    writeVery(repeat);
    return 0;
}
