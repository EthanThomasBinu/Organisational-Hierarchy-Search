#include <stdio.h>
#include <string.h>

#define MAX 20

int linearSearch(char arr[][MAX], int n, const char *key, int *comparisons) {
    *comparisons = 0;
    for (int i = 0; i < n; i++) {
        (*comparisons)++;
        if (strcmp(arr[i], key) == 0)
            return i;
    }
    return -1;
}

int binarySearch(char arr[][MAX], int n, const char *key, int *comparisons) {
    int low = 0, high = n - 1;
    *comparisons = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        (*comparisons)++;

        if (strcmp(arr[mid], key) == 0)
            return mid;

        if (strcmp(key, arr[mid]) < 0)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main(void) {
    char departments[8][MAX] = {
        "Backend", "CEO", "Development", "Finance",
        "Frontend", "HR", "IT", "Testing"
    };

    char searches[3][MAX] = {"Development", "HR", "Testing"};
    int linearComparisons, binaryComparisons;
    int totalLinear = 0, totalBinary = 0;

    printf("SEARCH COMPARISON RESULTS\n");
    printf("--------------------------\n");
    printf("%-15s %-15s %-15s\n",
           "Department", "Linear Search", "Binary Search");

    for (int i = 0; i < 3; i++) {
        linearSearch(departments, 8, searches[i], &linearComparisons);
        binarySearch(departments, 8, searches[i], &binaryComparisons);

        totalLinear += linearComparisons;
        totalBinary += binaryComparisons;

        printf("%-15s %-15d %-15d\n",
               searches[i], linearComparisons, binaryComparisons);
    }

    printf("\nTotal comparisons: Linear = %d, Binary = %d\n",
           totalLinear, totalBinary);

    return 0;
}
