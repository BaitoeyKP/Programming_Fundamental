#include <stdio.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int, int);
void draw_ship(int, int);
void erase_ship(int, int);

int main()
{
	char ch = ' ';
	int x = 38, y = 20;
	draw_ship(x, y);
	do
	{
		if (_kbhit())
		{
			ch = _getch();
			if (ch == 'a' && x > 0)
			{
				draw_ship(--x, y);
			}
			if (ch == 'd' && x < 80)
			{
				draw_ship(++x, y);
			}
			if (ch == 'w' && y > 0)
			{
				draw_ship(x, --y);
			}
			if (ch == 's' && y < 25)
			{
				draw_ship(x, ++y);
			}
			fflush(stdin);
		}
		Sleep(100);
	} while (ch != 'x');
	return 0;
}

void gotoxy(int x, int y)
{
	COORD c = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void draw_ship(int x, int y)
{
	erase_ship(x, y);
	gotoxy(x, y);	   // ย้ายตำแหน่งไปยังตำแหน่งที่ (x,y)
	printf(" <-0-> "); // แสดงผลยาน
}

void erase_ship(int x, int y)
{
	system("cls");
}
