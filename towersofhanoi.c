#include <stdio.h>

void towersOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    towersOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towersOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int numDisks;
    printf("Enter the number of disks: ");
    scanf("%d", &numDisks);

    printf("The sequence of moves involved in the Towers of Hanoi are:\n");
    towersOfHanoi(numDisks, 'A', 'B', 'C');

    return 0;
}
