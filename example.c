#define DEBUG
#define printResult(x) printf("Das Ergebnis der Berechnung ist %i.", x)

int calculate (int number) {
    number = number * 2; 
    #ifdef DEBUG
        printResult(number);
    #endif
    return number;
}

