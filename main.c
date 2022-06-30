#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void printing_board (char ** data) {
    // printing the first row:
    printf ("------------------\n");

    // printing the middle row:
    for (int i = 0; i < 3; i++) {
        printf ("%5c%5c%5c\n------------------\n", data[i][0], data[i][1], data[i][2]);
    }
}

void check_wins_x (char ** data) {

}

void check_wins_y (char ** data) {

}

void check_full (char ** data) {

}

void draw (char ** data) {

}



int main () {
    // initializing the board: 
    char** data = calloc (3, sizeof(char*));
    for (int i = 0; i < 3; i++) {
        data[i] = calloc (3, sizeof(char)); 
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            data[i][j] = '-';
        }
    }

    printing_board (data);
    int round = 0; 
    bool needs_end = true;
    int alternate = 0;

    // the alternating structure:
    while (needs_end == false) {
        if (alternate == 0) {

        } else {

        }

        round += 1; 

        // changing the alternate: 
        if (alternate == 0) {
            alternate = 1;
        } else {
            alternate = 0;
        }


        // last change for rounds:
        if (round <= 3) {
            needs_end = false;
        }
    }

    // freeing memory: 
    for (int i = 0; i < 3; i++) {
        free (data[i]);
    }
    free (data); 



    return EXIT_SUCCESS; 
}