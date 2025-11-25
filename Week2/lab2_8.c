#include <stdio.h>

int main() {

    int studentTotal;
    int sid, score, totalCls, absentCls;
    float attendRate;

    int passBucket = 0, failBucket = 0;

    if (scanf("%d", &studentTotal) != 1) {
        return 1;
    }

    for (int idx = 0; idx < studentTotal; idx++) {

        if (scanf("%d %d %d %d", &sid, &score, &totalCls, &absentCls) != 4) {
            break;
        }

        attendRate = (float)(totalCls - absentCls) / totalCls * 100.0f;

        int failScore = (score < 50);
        int failAttend = (attendRate < 75.0f);

        if (!failScore && !failAttend) {
            printf("Student %d: PASS\n", sid);
            passBucket++;
        } 
        else {
            failBucket++;
            if (failScore && failAttend) {
                printf("Student %d: FAIL - Both Score and Attendance\n", sid);
            }
            else if (failScore) {
                printf("Student %d: FAIL - Low Score\n", sid);
            }
            else {
                printf("Student %d: FAIL - Low Attendance (%.2f%%)\n", sid, attendRate);
            }
        }
    }

    printf("\n--- Summary ---\n");
    printf("Total PASS: %d\n", passBucket);
    printf("Total FAIL: %d\n", failBucket);

    return 0;
}
