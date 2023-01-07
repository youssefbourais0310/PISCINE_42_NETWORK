#include<unistd.h>

int main(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i =0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i])
            {
                write(1, "z\n", 2);
                break ;
            }
            i ++;
        }
    }
    else
        write(1, "z\n",2);
}

#include <unistd.h>

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	write(1, "z\n", 2);
	//return (0);
}