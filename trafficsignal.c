#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <windows.h>
#define sleep(x) Sleep(1000 * x)
#else
#include <unistd.h>
#endif

int main() {
    int redTime = 5, yellowTime = 2, greenTime = 5;
    int choice;

    while (1) {
        printf("\n--- TRAFFIC LIGHT SYSTEM ---\n");
        printf("1. Start Traffic Light\n");
        printf("2. Change Timings\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int i = 0; i < 3; i++) {
                printf("\nRED Light ON for %d seconds\n", redTime);
                for (int j = redTime; j > 0; j--) {
                    printf("Time left: %d\n", j);
                    sleep(1);
                }

                printf("\nYELLOW Light ON for %d seconds\n", yellowTime);
                for (int j = yellowTime; j > 0; j--) {
                    printf("Time left: %d\n", j);
                    sleep(1);
                }

                printf("\nGREEN Light ON for %d seconds\n", greenTime);
                for (int j = greenTime; j > 0; j--) {
                    printf("Time left: %d\n", j);
                    sleep(1);
                }
            }
        }
        else if (choice == 2) {
            printf("Enter RED time: ");
            scanf("%d", &redTime);
            printf("Enter YELLOW time: ");
            scanf("%d", &yellowTime);
            printf("Enter GREEN time: ");
            scanf("%d", &greenTime);
        }
        else if (choice == 3) {
            printf("Exiting...\n");
            break;
        }
        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
