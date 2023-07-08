#include <stdio.h>
#include <windows.h>

#define snakeSize 5

void gotoxy( int, int);
void frame(void);
void move( int[], int[], char);
void drawSnake( int[], int[]);
void createSnake( int[], int[]);
void shiftBody( int[], int[]);
void delay(void);
void delayR(void);

main()
{
	char num, direc, temp;
	char movesDirec[30];
	int movesNum[30];
	char initDirec = 'l';
	int x[] = { 61, 62, 63, 64, 65};
	int y[] = { 15, 15, 15, 15, 15};

	printf("Instruction: \n");
	printf("Directions:\n\t   right~>r\n\t   left~>l\n\t   up~>u\n\t   down~>d\n");
	printf("Do not enter \"r\" after \"l\"(and vice versa) and do not enter \"u\" after \"d\"(and vice versa).\n");
	printf("Enter the command as \"direction:number\" (for example ~> r:5).\n");
	printf("To run the program and see the snake, type \"f\".\n\n");

	int len = 0;
	int i = 0;
	do
	{
		printf("Enter Ur command: ");
		scanf(" %c:%d" , &direc, &num);

		if( (direc == 'r')||(direc == 'l')||(direc == 'd')||(direc == 'u')||(direc == 'f') )
		{
			if(direc != 'f')
			{
				//printf("%d" , num);
				if(i > 0)
				{
					if( direc == movesDirec[i-1])
					{
						printf("Two directions are the same! try again.\n");
					}
					else
					{
						movesDirec[i] = direc;
						movesNum[i] = num;
					}
				}
				else
				{
					movesDirec[i] = direc;
					movesNum[i] = num;
				}
				i++;
				len++;
			}

			else
			{
				int k = 0;
				char preDirec;
				do
				{
					int j;
					if(k > 0)
					{
						//*** checking two opposite directions
						if((preDirec == 'l')&&(movesDirec[k] == 'r') || (preDirec == 'r')&&(movesDirec[k] == 'l') ||
						   (preDirec == 'u')&&(movesDirec[k] == 'd') || (preDirec == 'd')&&(movesDirec[k] == 'u'))
						 {
						 	if(k == (len - 1)) //*** last move with opposite direction
						 	{
						 		for( j = 0; j <= movesNum[k]; j++)
								{

									frame();
									createSnake( x, y);

									//if(j == movesNum[k])
										//printf("the end   %c  %d\n" , preDirec, k);
								}

						 	}
						 	else
						 	{
						 		for( j = 0; j <= movesNum[k]; j++)
						 		{
						 			frame();
									createSnake( x, y);

									if(j == movesNum[k]-1)
										preDirec = movesDirec[k];
						 		}
						 	}
						 }
						 else
						 {
						 	if(k == (len - 1)) //*** last move without opposite direction
						 	{
						 		for( j = 0; j <= movesNum[k]; j++)
								{

									frame();
									createSnake( x, y);
									delay();
									system("cls");
									move( x, y, movesDirec[k]);

									//if(j == movesNum[k])
									//	printf("the end   %c  %d\n" , preDirec, k);
								}

						 	}

						 	else
						 	{
								for( j = 0; j < movesNum[k]; j++)
								{

									frame();
									createSnake( x, y);
									delay();
									system("cls");
									move( x, y, movesDirec[k]);

									if(j == movesNum[k]-1)
										preDirec = movesDirec[k];
								}
								//printf("%c   %d\n", preDirec, k);
						 	}
						 }
					}

					else //*** first move
					{
						if(k == (len - 1)) //*** just one move
						{

							if(movesDirec[k] == 'r')
							{
								movesNum[k] += snakeSize;
								for( j = 0; j <= movesNum[k]; j++)
								{
									if(j < snakeSize)
									{
										//	delayR();
									}
									else
									{
										frame();
										createSnake( x, y);
										delay();
										system("cls");
									}

									move( x, y, movesDirec[k]);
								}

							}
							else
							{
								for( j = 0; j <= movesNum[k]; j++)
								{
									frame();
									createSnake( x, y);
									delay();
									system("cls");
									move( x, y, movesDirec[k]);
								}
							}
						}
						else //*** more than one move
						{
							if(movesDirec[k] == 'r')
						 	{
						 		movesNum[k] += snakeSize;
						 		for( j = 0; j < movesNum[k]; j++)
								{
									if(j < snakeSize)
									{
										//	delayR();
									}
									else
									{
										frame();
										createSnake( x, y);
										delay();
										system("cls");
									}
									move( x, y, movesDirec[k]);

									if(j == movesNum[k]-1)
										preDirec = movesDirec[k];
								}
						 	}
						 	else
						 	{
						 		for( j = 0; j < movesNum[k]; j++)
						 		{
						 			frame();
							 		createSnake( x, y);
									delay();
									system("cls");
									move( x, y, movesDirec[k]);

									if(j == movesNum[k]-1)
										preDirec = movesDirec[k];
						 		}
						 	}
						}
					}

					k++;

				}while(k < len);

				printf("\n\n\n\n\n\n\n\n\n\n");
				break;
			}
		}
		else
		{
			printf("Incorrect command! try again.\n");
		}

	}while(1);
}

void delay(void)
{
	int i;
	for( i = 0; i <= 100000000; i++);
}

void delayR(void)
{
	int i;
	for( i = 0; i <= 100000; i++);
}


void gotoxy( int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition( handle, coord);
}

void frame(void)
{
	system("cls"); //*** this command causes flushing mode

	//*** this loop draws 2 horizontal line
	int i;
	for( i = 15; i < 80; i++)
	{
		gotoxy( i, 5);
		printf("%c" , '-');

		gotoxy( i, 25);
		printf("%c" , '-');
	}

	//*** this loop draws 2 vertical line
	int j;
	for( j = 6; j < 25; j++)
	{
		gotoxy( 14, j);
		printf("%c" , '|');

		gotoxy( 80, j);
		printf("%c" , '|');
	}
}

//int xMove[], int yMove[]
void createSnake( int x[snakeSize], int y[snakeSize])
{
	int i;
	for( i = 0; i < snakeSize; i++)
	{
		gotoxy( x[i], y[i]);
		printf("o");
	}
}

void move( int x[snakeSize], int y[snakeSize], char direc)
{
	switch(direc)
	{
		case 'l':
			shiftBody( x, y);
			x[0]--;
			break;

		case 'd':
			shiftBody( x, y);
			y[0]++;
			break;

		case 'r':
			shiftBody( x, y);
			x[0]++;
			break;

		case 'u':
			shiftBody( x, y);
			y[0]--;
			break;
	}

}

void shiftBody( int x[snakeSize], int y[snakeSize])
{
	int i;
	for( i = (snakeSize - 2); i >= 0; i--)
	{
		x[i + 1] = x[i];
		y[i + 1] = y[i];
	}
}dd
