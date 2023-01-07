# include<unistd.h>

int main(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == 'a')
            {
                write(1, "a", 1);
                break ;
            }
            i++;
        }
        write(1 ,"\n", 1);
    }
    else
        write(1, "a\n",2);
}