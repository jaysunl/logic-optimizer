#include "pla.h"

using namespace std;

static int lineno;
static bool line_length_error;

PLA::PLA(const char *pla_file) {

}

void PLA::read_pla(const char *pla_file) {
    int ch;
    FILE *fp;
    char buf[256];
    lineno = 1;
    line_length_error = false;

    if ((fp = fopen(pla_file, "r")) == NULL) {
        cerr << "Unable to open " << pla_file;
        exit(-1);
    }
    loop:
        switch(ch = getc(fp)) {
            case EOF:
                return;
            case '\n':
                lineno++;
            case ' ':
            case '\t':
            case '\f':
            case '\r':
                break;
            case '.':
                /* Get the input size of the function */
                if (get_word(fp, buf) == "i") {
                    
                }

        }

    goto loop;

}

/**
 * Gets a string read from pla file, which is used to parse the information
 */
char *get_word(FILE *fp, char *word) {
    int ch, i = 0;
    // skip any spaces
    while ((ch = getc(fp)) != EOF && isspace(ch)) {
        continue;
    }
    word[i++] = ch;
    while ((ch = getc(fp)) != EOF && ! isspace(ch)) {
        word[i++] = ch;
    }
    word[i++] = '\0';
    return word;
}

void PLA::expand() {

}

void PLA::removed_covered_implicants() {

}

bool PLA::validity_check() {

    return 0;
}