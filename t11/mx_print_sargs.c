
void mx_printstr(const char *s);
int mx_strlen(const char *s);
void mx_printchar(char s);
int mx_strcmp(const char *s1, const char *s2);

int main (int argc, char *argv[])
{
    for(int i = 1; i < argc; i++){

        for(int j = 1; j < argc; j++){

            if(mx_strcmp(argv[i],argv[j]) < 0){
                    char *buf = argv[j];
                    argv[j] = argv[i];
                    argv[i]= buf;
             }
         }
     }
     for(int k = 1; k < argc; k++){
         mx_printstr(argv[k]);
         mx_printchar('\n');
     }
}
