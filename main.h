#include <stdio.h>

void getPLA(int opt, int argc, char **argv, int option, pPLA *PLA, int out_type);
void delete_arg(int *argc, register char **argv, int num);
void init_runtime(void);
void backward_compatibility_hack(int *argc, char **argv, int *option, int *out_type);
void runtime(void);
void usage(void);
int check_arg(int *argc, register char **argv, register char *s);

void getPLA(int opt, int argc, char **argv, int option, pPLA *PLA, int out_type) {
    FILE *fp;
    int needs_dcset, needs_offset;

}