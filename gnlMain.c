#include "get_next_line_bonus.h"
#include "get_next_line.h"
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
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		line = get_next_line(fd);
		while (line)
		{
			printf("%s", line);
			line = get_next_line(fd);
		}

		close(fd);
		printf("\n\n-*-*-*-*-TESTING INVALID FILE DESCRIPTOR-*-*-*-*\n");
		printf("%s for Invalid fd.\n\n\n\n", get_next_line(5345789));
		printf("%s for Invalid fd.\n\n\n\n", get_next_line(-1589354));
	}



	printf("\n\n\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*BONUS PART-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		fd1 = open(argv[2], O_RDONLY);
		line = get_next_line(fd);
		line1 = get_next_line(fd1);
		while (line || line1)
		{
			printf("first file:- %s", line);
			printf("second file:- %s", line1);
			line = get_next_line(fd);
			line1 = get_next_line(fd1);
		}
	close(fd);
	close(fd1);
	}
	return (0);
}
