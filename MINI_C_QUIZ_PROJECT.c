#include <stdio.h>
#include <stdlib.h>

void green()
{
    printf("\033[0;32m");
    // for green color
}
void yellow()
{
    printf("\033[0;33m");
    // yellow color
}
void purple()
{
    printf("\033[0;35m");
    // for purple color
}
void red()
{
    printf(" \033[0;31m");
    // for red color
}
void cyan()
{
    printf(" \033[0;36m");
    // for cyan color
}
void Blue()
{
    printf("\033[0;34m");
    // blue color
}
void reset()
{
    printf("\033[0m");
}
int main()
{

    purple();
    // QUIZ GAME
    // FS21IF011 VIRAJ
    printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
    printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
    printf("\t\t_______>>WELCOME TO QUIZ GAME...<<_______\n\n");
    purple();
res:
    purple();
    printf("    >>=-=-Do you want to play a quiz game ? then press code 01-=-=<<\n");
    int k;
    int score = 0;
    int a;
    char v;
    scanf("%d", &a);
    if (a == 01)
    {
        green();
        printf("\t**WELCOME_WELCOME_WELCOME**\n\n");
        reset();
        goto chooice;
        exit(0);
    }
    else
    {
        red();
        printf("\t--Enter the correct code!--\n\t       --Try again--\n");
        goto res;
        reset();
        exit(0);
        reset();
        exit(0);
    }
chooice:
    purple();
    printf("\t>>>ENTER YOUR CHOOICE<<<\n");
    printf("\t1|click --> >a< For start the game.\n\t2|click --> >b< For help!.\n\t3|click --> >c< For see rule.\n");
    reset();
    scanf("%c", &v);
    scanf("%c", &v);
    cyan();
    switch (v)
    {
    case 'a':;
        printf("\t1||START THE GAME..>>>Silect your level\n\t1>EASY MODE click code ==>[111]\n\t2>MIDIUM MODE click code ==>[222]\n\t3>HARD MODE click code ==>[333]\n\n");
    code:
        cyan();
        printf("\t-->Enter your level code...\n");
        scanf("%d", &k);
        if (k == 111)
        {
            goto start;
        }
        else if (k == 222)
        {
            goto midium;
        }
        else if (k == 333)
        {
            goto hard;
        }
        else
        {
            red();
            printf("\t--invalid level code-- \n\t    --try again--\n");
            reset();
            goto code;
            exit(0);
        }
        exit(0);
        break;
    case 'b':;
        printf("\t||2HELP..>>\n");
        goto help;
        exit(0);
        break;
    case 'c':;
        printf("\t4||RULE..>>\n");
        goto rule;
        exit(0);
        break;
        red();
    default:
        red();
        printf("\t\t--<< Invalid entry >>--\n\t\t\t--Try again--\n");
        goto res;
        exit(0);
        reset();
        goto quit;
        reset();
    }
start:
    printf("\tYOUR EASY MODE IS START...\n\n");
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t1||1st Question-->how many keywords in c language?\n\t1)33\t2)32\t3)28\t4)56\n");
    int b;
    printf("\tEnter your ans-->");
    scanf("%d", &b);
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    if (b == 2)
    {
        green();
        printf("\tYour ans is currect\n\n");
        score = score + 5;
        reset();
    }
    else
    {
        red();
        printf("\tYour ans is incurrect\n\n");
        score = score - 2;
        reset();
    }
    cyan();
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t2||2nd Question-->Who is the father of c language?\n\t1)Dennis Ritchie\t2)Steve Jobs\t\n\t3)James Gosling\t\t4)Rasmus Lerdorf\n");
    int c;
    printf("\tEnter ANS option-->");
    scanf("%d", &c);
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    if (c == 1)
    {
        green();
        printf("\tYour ans is currect\n\n");
        score = score + 5;
        reset();
    }
    else
    {
        red();
        printf("\tYour ans is incurrect\n\n");
        score = score - 2;
        reset();
    }
    cyan();
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t3||3rd Question-->Which of the following is not a valid C variable name?\n\t1)int number;\t\t2)float rate;\t\n\t3)int variable_count;\t4)int $main;\n");
    int d;
    printf("\tEnter Your ans-->");
    scanf("%d", &d);
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    if (d == 4)
    {
        green();
        printf("\tYour ans is currect\n\n");
        score = score + 5;
        reset();
    }
    else
    {
        red();
        printf("\tYour ans is incurrect\n\n");
        score = score - 2;
        reset();
    }
    cyan();
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t4||4th Question-->Which is valid C expression?\n\t1)int my_num = 100,000;\t\t2)int my_num = 100000;\t\n\t3)int my num = 1000;\t\t4)int $my_num = 10000;\n");
    int e;
    printf("\tEnter your ans-->");
    scanf("%d", &e);
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    if (e == 2)
    {
        green();
        printf("\tYour ans is currect\n\n");
        score = score + 5;
        reset();
    }
    else
    {
        red();
        printf("\tYour ans is incurrect\n\n");
        score = score - 2;
        reset();
    }
    cyan();
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t5||5th Question-->Which of the following cannot be a variable name in C?\n\t1)volatile\t2)true\t\n\t3)friend\t4)friend\n");
    int f;
    printf("\tEnter your ans-->");
    scanf("%d", &f);
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    if (f == 1)
    {
        green();
        printf("\tYour ans is currect\n\n");
        score = score + 5;
        reset();
        printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
    }
    else
    {
        red();
        printf("\tYour ans is incurrect\n\n");
        score = score - 2;
        reset();
    }
    goto can;
    exit(0);
midium:
    cyan();
    printf("YOUR MIDIUM MODE IS START...\n\n");
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t1||1st question-->When C Language was invented?\n\t1)1971\t2)1972\t3)1973\t4)1974\n");
    int l;
    scanf("%d", &l);
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    if (l == 2)
    {
        green();
        printf("\tYour option is currect\n\n");
        score = score + 5;
        reset();
    }
    else
    {
        red();
        printf("\tYour option is incurrect\n\n");
        score = score - 2;
        reset();
    }
    cyan();
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t2||2nd question-->What is the meaning of below lines?void sum (int, int);\n\t1)sum is function which takes int arguments\n\t2)it will produce compilation error\n\t3)sum is a function which takes two int arguments and returns void\n\t4)Can't comment\n");
    int m;
    scanf("%d", &m);
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    if (m == 3)
    {
        green();
        printf("\tYour option is currect\n\n");
        score = score + 5;
        reset();
    }
    else
    {
        red();
        printf("\tYour option is incurrect\n\n");
        score = score - 2;
        reset();
    }
    cyan();
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t3||3rd question-->The concept of two functions with same name is know as?\n\t1)Operator Overloading\n\t2)Function Overloading\n\t3)Function Overriding\n\t4)Function Overriding\n");
    int n;
    scanf("%d", &n);
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    if (n == 2)
    {
        green();
        printf("\tYour option is currect\n\n");
        score = score + 5;
        reset();
    }
    else
    {
        red();
        printf("\tYour option is incurrect\n\n");
        score = score - 2;
        reset();
    }
    reset();
    goto can;
    exit(0);
hard:
    cyan();
    printf("YOUR HARD MODE IS START...\n\n");
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t1||1st question-->What is the following is invalid header file in C?\n\t1)math.h\t2)mathio.h\t3)string.h\t4)ctype.h\n");
    int o;
    scanf("%d", &o);
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    if (o == 2)
    {
        green();
        printf("\tYour option is currect\n\n");
        score = score + 5;
        reset();
    }
    else
    {
        red();
        printf("\tYour option is incurrect\n\n");
        score = score - 2;
        reset();
    }
    cyan();
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t2||2nd question-->Library function pow() belongs to which header file?\n\t1)stdio.h\t2)square.h\t3)math.h\t4)mathio.h\n");
    int p;
    scanf("%d", &p);
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    if (p == 3)
    {
        green();
        printf("\tYour option is currect\n\n");
        score = score + 5;
        reset();
    }
    else
    {
        red();
        printf("\tYour option is incurrect\n\n");
        score = score - 2;
        reset();
    }
    cyan();
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t3||3rd question-->How many loops are there in C++ 98?\n\t1)2\t2)8\t3)4\t4)3\n");
    int q;
    scanf("%d", &q);
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    if (q == 4)
    {
        green();
        printf("\tYour option is currect\n\n");
        score = score + 5;
        reset();
    }
    else
    {
        red();
        printf("\tYour option is incurrect\n\n");
        score = score - 2;
        reset();
    }
    reset();
    goto can;
    exit(0);
can:
    purple();
    printf("\t1:>>Do you want to quit the game? 0\n\t2:>>Do you want continue the game? click code 1\n\t3:>>You want to view the score click code 2\n\t4:>>click code 3 for goto midium level\n\t5:>>click code 4 for goto hard leve\n");
    int i;
    scanf("%d", &i);
    if (i == 1)
    {
        goto res;
    }
    else if (i == 2)
    {
        goto score;
    }
    else if (i == 3)
    {
        goto midium;
    }
    else if (i == 4)
    {
        goto hard;
    }
    else if (i == 0)
    {
        goto quit;
    }
    else
    {
        red();
        printf("\t\t--Error--\n\tYour code is wrong try again and enter currect code\n");
        reset();
        purple();
        goto res;
    }
    exit(0);
help:
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t>>>1]Follow the instructions\n\t>>>2]Enter the correct option or code\n\t>>>3]first see the note\n\t>>>4]your currect ans point is 5&wrong ans point is -2\n\t>>>5]Enter only integer value code\n");
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    purple();
    printf("\t1:>>Do you want to continue the game? click-->1\n\t2:>>Do you want quit the game? click code-->0\n");
    int g;
    scanf("%d", &g);
    if (g == 1)
    {
        goto res;
    }
    else if (g == 0)
    {
        goto quit;
    }
    else
    {
        red();
        printf("\t\t--Error--\n\tYour code is wrong try again and enter currect code\n");
        reset();
        goto res;
    }
    exit(0);
rule:
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t\t--1]Once you have entered the answer can't change--\n");
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    purple();
    printf("\t1:>>Do you want to continue the game?click-->1\n\t2:>>Do you want quit the game? click code-->0\n");
    int h;
    scanf("%d", &h);
    if (h == 1)
    {
        goto res;
    }
    else if (h == 0)
    {
        goto quit;
    }
    else
    {
        red();
        printf("\t\t--Error--\n\tYour code is wrong try again and enter currect code\n");
        reset();
        purple();
        goto res;
    }
    exit(0);
score:
    yellow();
    printf("  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\t=-=-Your total score is[%d]-=-=\n", score);
    reset();
    int j;
    green();
    printf("\t1:>>Do you want to continue the game? click-->1\n\t2:>>Do you want quit the game? click code-->0\n");
    reset();
    purple();
    reset();
    scanf("%d", &j);
    if (j == 1)
    {
        goto res;
    }
    else if (j == 0)
    {
        goto quit;
    }
    else
    {
        red();
        printf("\t\t--Error--\n\tYour code is wrong try again and enter currect code\n");
        reset();
        purple();
        goto res;
    }
    reset();
    exit(0);
    exit(0);
quit:
    Blue();
     printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
     printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
     printf("\t>>>------------created by ||FS21IF011||-------------<<<\n");
     printf("\t>>>-----------1:code_editor-->_VS CODE_-------------<<<\n");
     printf("\t>>>-----------2:compiler----->Mingw 64_-------------<<<\n");
     printf("\t>>>-----------3:extensions--->c/c++____-------------<<<\n");
     printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
     printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
     printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
    reset();
    reset();
    exit(0);
    return 0;    
    
}