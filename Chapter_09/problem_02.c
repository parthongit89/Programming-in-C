#include <stdio.h>

typedef struct address {
    int hn;
    int bloc;
    char city[100];
    char state[100];
} adr;

// Function prototype: takes a struct variable as a parameter
void printinfo(adr a);

int main() {
    adr adrr[5];

    // 1. Input loop
    for (int i = 0; i < 5; i++) {
        printf("\n--- Person %d ---\n", i + 1);
        printf("Enter House No, Block No, City, and State (space-separated):\n");
        
        // %d requires '&', %s on char arrays does NOT require '&'
        scanf("%d %d %99s %99s", &adrr[i].hn, &adrr[i].bloc, adrr[i].city, adrr[i].state);
    }

    // 2. Output loop
    printf("\n================ STORED ADDRESSES ===\n");
    for (int i = 0; i < 5; i++) {
        printf("\nDetails for Person %d:", i + 1);
        printinfo(adrr[i]);
    }

    return 0;
}

// Function definition
void printinfo(adr a) {
    printf("\n  House No: %d", a.hn);
    printf("\n  Block   : %d", a.bloc);
    printf("\n  City    : %s", a.city);
    printf("\n  State   : %s\n", a.state);
}

// Run On terminial Ctrl + `
// gcc problem_02.c; .\a.exe (windows)