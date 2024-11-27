#include <stdio.h>

int point;

int main(void) {
    printf("Enter your score: ");
    scanf("%d", &point);

    // ตรวจสอบเกรดจากคะแนน
    if (point >= 80 && point <= 100) {
        printf("Grade: A\n");
    } else if (point >= 70 && point < 80) {
        printf("Grade: B\n");
    } else if (point >= 60 && point < 70) {
        printf("Grade: C\n");
    } else if (point >= 50 && point < 60) {
        printf("Grade: D\n");
    } else if (point >= 0 && point < 50) {
        printf("Grade: F\n");
    } else {
        //คะแนนไม่ถูกต้อง (คะแนนน้อยกว่า 0 หรือมากกว่า 100)
        printf("Invalid score! Please enter a score between 0 and 100.\n");
    }

    return 0;
}