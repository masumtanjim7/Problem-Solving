#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("students.txt","w+");
    if(fp == NULL)
    {
        printf("The file does not Exists!");
    }


    fprintf(fp,"%d %s", 1, "Dipto"); //fputs, fputc, fwrite
    int id;
    char name[20];
    rewind(fp); //fseek(fp, offset, SEEK_END/SEEK_SET/SEEK_CUR)

    fscanf(fp, "%d %s", &id, name); //fgets, fgetc, fread
    printf("id : %d  name : %s\n", id, name);

    rewind(fp);
    char line[100];
    fgets(line, 100, fp);




    rewind(fp);
    char ch;
    ch = fgetc(fp);
    while(ch!=EOF)
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }

    fclose(fp);

    return 0;
}
