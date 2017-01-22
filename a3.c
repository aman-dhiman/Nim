#include <stdio.h>

void playNim (int a, int b, int *x, int *y, int *z);  
void drawNim (int x, int y, int z);  
void errorCheck (int *a, int *b, int x, int y, int z, int winner);
	
int main()
{
    int x, y, z, a, b, turn, winner;
	turn = 1;
	
	printf("\nPlease enter the number of rocks in each row:");
	scanf("%d %d %d", &x, &y, &z);
	
	while (x < 0 || y < 0 || z < 0 || (x == 0 && y == 0 && z == 0))
	{
	    printf("\nInvalid move. Please try again. Enter the number of rocks in each row: ");
		scanf("%d %d %d", &x, &y, &z);
    }
	
	drawNim(x, y, z);
	
	while (x != 0 || y != 0 || z != 0)
	{
		switch (turn % 2)
		{
		    case 0:
			{
			    winner = 2;
				break;
			}
			
			case 1:
			{
			    winner = 1;
				break;
			}
		}
		
		printf("\n\nPlayer %d - Row and number of rocks: ", winner);
		scanf("%d %d", &a, &b);
		
		errorCheck(&a, &b, x, y, z, winner);
		playNim(a, b, &x, &y, &z);
		drawNim(x, y, z);
		
		turn++;
	}
	
	printf("\n\nPlayer %d wins", winner);
	
	return 0;
}	

void playNim (int a, int b, int *x, int *y, int *z)
{
    switch(a)
	{
	    case 1:
		{
		    *x = *x - b;
			break;
		}
		
		case 2:
		{
		    *y = *y - b;
			break;
		}
		
		case 3:
		{
		    *z = *z - b;
			break;
		}
	}
	
}	

void drawNim (int x, int y, int z)
{
    for (int row = 1; row < 4; row++)
	{
	    printf("\nROW %d: ", row);
		
		int rocks;
		
		switch(row)
		{
		    case 1:
			{
			    rocks = x;
				break;
			}
			
			case 2:
			{
			    rocks = y;
				break;
			}
			
			case 3:
			{
			    rocks = z;
				break;
			}
		}
	
	    for(int count = 0; count < rocks; count++)
	    {
	        printf("O");
        }
	
	
    }
}

void errorCheck (int *a, int *b, int x, int y, int z, int winner)
{
    while((*a > 3) || (*a < 1) || (*b < 1) || (*a == 1 && *b > x ) ||
          (*a == 2 && *b > y) || (*a == 3 && *b > z))
        {
        printf("\nInvalid move. Please try again."); 
		
		drawNim(x, y, z);
		
        printf("\n\nPlayer %d - Row and number of rocks: ", winner);
		scanf("%d %d", a, b);
	    }
}