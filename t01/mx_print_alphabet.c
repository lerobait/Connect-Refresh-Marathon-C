void mx_printchar(char c);

void mx_print_alphabet(void) {
    char c;
    
    for (int i = 0; i < 26; i++) {
        
        if (i % 2 == 0) {
            c = i + 65;
        }
        else {
            c = i + 97;
        }
        mx_printchar(c);
    }
    mx_printchar('\n');
}
