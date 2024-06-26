#include "get_next_line_bonus.h"
#include "get_next_line.h"
#include <time.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int	main(int argc, char **argv)
{

	printf("\n\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*MANDATORY PART-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	int fd;
	int fd1;
	char	*line;
	char	*line1;
	
	fd = 0;
	fd1 = 0;
	line = NULL;
	line1 = NULL;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		line = get_next_line(fd);
		while (line)
		{
			system("leaks -q get_next_line | grep -w total >> leaks.txt");
			printf("%s", line);
			line = get_next_line(fd);
		}
		close(fd);
		printf("\n\n-*-*-*-*-TESTING INVALID FILE DESCRIPTOR-*-*-*-*\n");
		printf("%s for Invalid fd.\n\n\n\n", get_next_line(5345789));
		printf("%s for Invalid fd.\n\n\n\n", get_next_line(-1589354));
		printf("\n\n\n\n-*-*-*-*-*-*-*-*-*-READING FROM STDIN-*-*-*-*-*-*-*-*-*-*-\n\n");
		line = NULL;
		line = get_next_line(STDIN_FILENO);
		while (line)
		{
			system("leaks -q get_next_line | grep -w total >> leaks.txt");
			printf("%s", line);
			line = get_next_line(STDIN_FILENO);
		}
	}



	printf("\n\n\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*BONUS PART-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
	if (argc == 3)
	{
		if (argv[2][0] != '0')
		{
			fd = open(argv[1], O_RDONLY);
			fd1 = open(argv[2], O_RDONLY);
			line = get_next_line(fd);
			line1 = get_next_line(fd1);
			while (line || line1)
			{
				system("leaks -q get_next_line | grep -w total >> leaks.txt");
				printf("first file:- %s", line);
				printf("second file:- %s", line1);
				line = get_next_line(fd);
				line1 = get_next_line(fd1);
			}
			close(fd);
			close(fd1);
		}
		if (argv[2][0] == '0')
		{
			printf("\n\n\n\n-*-*-*-*-*-*-*-*-*-READING FROM STDIN BONUS-*-*-*-*-*-*-*-*-*-*-\n\n");
			line = NULL;
			line1 = NULL;
			fd = open(argv[1], O_RDONLY);
			line = get_next_line(fd);
			line1 = get_next_line(STDIN_FILENO);
			while (line || line1)
			{
				system("leaks -q get_next_line | grep -w total >> leaks.txt");
				printf("first file:- %s", line);
				printf("second file:- %s", line1);
				line = get_next_line(fd);
				line1 = get_next_line(fd1);
			}
			close(fd);
		}
	}
	return (0);
}
