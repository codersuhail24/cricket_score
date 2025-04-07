#include <stdio.h>

#include <stdio.h>

int main() {
    int choice;
    int score;
    
    printf("Enter the score: ");
    scanf("%d", &score);

    if(score >= 30 && score <= 50) {
        choice = 1; // average
    }
    else if(score > 50 && score <= 80) {
        choice = 2; // good
    }
    else if(score > 80 && score <= 100) {
        choice = 3; // very good
    }
    else {
        choice = 0; // poor or invalid score
    }

    // Use switch-case to print the result
    switch(choice) {
        case 1:
            printf("The score is average\n");
            break;
        case 2:
            printf("The score is good\n");
            break; 
        case 3:
            printf("The score is very good\n");
            break;
        default:
            printf("The performance is very poor, you need to improve baby\n");
    }

    return 0;
}
