// output unicode of Japanese character
#include <stdio.h>
// define the constants
#define RED 31
int main() {
    // show the Good night in Japanese
    printf("%s \n ", "\u304A \u3084 \u3059 \u307F \u306A \u3055 \u3044 is Good night in Japanese \n \u309C_\u309C these are WOW EYES \u30B8 this is smile face");
    // change to the red color with percent d will show the red value, red value is 31
    printf ("\033[55D"), printf ("\033[1;%dm", RED);
    return 0;
}