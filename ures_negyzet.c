#include <stdio.h>
#include <stdlib.h>

void write_border(char *row, int length){
    for (int i = 0; i < length; i++){
        row[i] = 'x';
    }
    printf("%s\n", row);
}

int main(void){
    char *row = NULL;
    int user_input;

    scanf("%d", &user_input);

    row = (char*) malloc (user_input * sizeof(char));

    if (!row) {
        fputs ("error: name allocation failed, exiting.", stderr);
        exit (EXIT_FAILURE);
    }

    write_border(row, user_input);

    for (int i = 0; i<user_input - 2; ++i){
        row[0] = 'x'; row[user_input-1] = 'x';
        for (int j = 1; j<user_input - 1; j++){
            row[j] = '.';
        }
        printf("%s\n", row);
    }

    write_border(row, user_input);

    return 0;
}