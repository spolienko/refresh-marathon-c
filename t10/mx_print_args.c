void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strlen(const char *s);

int main( int argc, char *argv[])
{
    int i = 1;
    if( argc < i)
        return 0;
    while(i < argc)
    {
        mx_printstr(argv[i]);
        i++;
        mx_printchar('\n');
    }
}
