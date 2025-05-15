#include <stdio.h>

int main() {
    int choice;

    printf("You awaken in a misty forest. A silver pendant glows on your chest.\n");
    printf("A voice whispers: 'The Vale knows you now... choose wisely.'\n\n");

    printf("1. Follow the trail of glowing mushrooms\n");
    printf("2. Sit down and try to remember who you are\n");
    printf("3. Walk toward the distant ruins\n");

    printf("\nWhat will you do? \n pls input a number from the options");
    scanf("%d", &choice);

    if (choice == 1)
        printf("You follow the glowing mushrooms, they lead you to a hidden path...\n");
    else if (choice == 2)
        printf("You sit down, but your memories remain a fog. A shadow watches you.\n");
    else if (choice == 3)
        printf("You approach the ruins, something ancient stirs beneath the stones...\n");
    else
        printf("Invalid choice, the forest grows silent.\n");

    return 0;
}