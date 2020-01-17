void mx_printchar(char c);

void mx_print_alphabet(void)
{
    int a = 65;
    int b = 98;
    while( a < 91 || b < 122)
        {
            mx_printchar(a);
            mx_printchar(b);
            a +=2;
            b +=2;
        }
   mx_printchar('\n');
}
