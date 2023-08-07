#include <iostream>
#include <windows.h>
using namespace std;

char box = 219;
char tank1[6] = {box, box, box, '-', '-', '>'};
char tank2[6] = {'0', ' ', '0', ' ', ' ', ' '};

char enemy1[6] = {' ', ' ', ' ', '-', '-', '-'};
char enemy2[6] = {'<', '=', '=', '(', '-', ')'};
char enemy3[6] = {' ', ' ', ' ', '\\', '@', '/'};
char enemy4[6] = {' ', ' ', ' ', '*', '*', '*'};

int bulletX[100];
int bulletY[100];
bool isBulletActive[100];
int bulletCount = 0;

int bullet2X[1000];
int bullet2Y[1000];
bool isBulletActiveEnemy[1000];
int bulletCounter = 0;
void printadd();
int tankX = 5;
int tankY = 5;

int enemyX = 30;
int enemyY = 10;

int enemy2X = 18;
int enemy2Y = 2;

string enemyDirection = "Up";
string enemy2Direction = "Right";

int score = 0;
int health1= 100;
char ball1 = 64;

void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void printTank();
void eraseTank();
void printMaze();
void moveBullet();
void generateBullet();
void removeBulletFromArray(int index);
void moveTankUp();
void moveTankDown();
void moveTankLeft();
void moveTankRight();

void generateBulletEnemy1();
void removeBulletFromArrayEnemy1(int index);
void moveBulletEnemy();
void makeBulletInactiveEnemy1(int index);
void printBulletEnemy1(int enemyX, int enemyY);
void eraseBulletEnemy1(int enemyX, int enemyY);

void moveEnemy();
void moveEnemy2();
void printEnemy();
void printEnemy2();
void eraseEnemy();
void eraseEnemy2();

void addScore();
void printScore();
void printHealth();

void bulletCollisionWithEnemy();
void bulletCollisionWithPlayer();
void printBullet(int x, int y);
void eraseBullet(int x, int y);
void makeBulletInactive(int index);

main()
{
    system("cls");
    printMaze();
    //printTank();
    //printEnemy();
    //printEnemy2();
    printadd();
}
    /*while (true)
    {
        printScore();
        printHealth();
        if (GetAsyncKeyState(VK_LEFT))
        {
            moveTankLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            moveTankRight();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            moveTankUp();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            moveTankDown();
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            generateBullet();
        }

        moveEnemy();
        moveEnemy2();
        generateBulletEnemy1();
        moveBulletEnemy();

        //Sleep(200);
        moveBullet();
        bulletCollisionWithEnemy();
        bulletCollisionWithPlayer();
        Sleep(200);
    }
}

void printScore()
{
    gotoxy(79, 17);
    cout << "Score: " << score; 
}
void printHealth()
{
    gotoxy(79, 18);
    cout << "Health: " << health1;
}
void moveEnemy()
{

    if (enemyDirection == "Up")
    {
        char next = getCharAtxy(enemyX, enemyY - 1);
        if (next == ' ')
        {
            eraseEnemy();
            enemyY--;
            printEnemy();
        }
        if (next == '#')
        {
            enemyDirection = "Down";
        }
    }
    if (enemyDirection == "Down")
    {
        char next = getCharAtxy(enemyX, enemyY + 4);
        if (next == ' ')
        {
            eraseEnemy();
            enemyY++;
            printEnemy();
        }
        if (next == '#')
        {
            enemyDirection = "Up";
        }
    }
}

void moveEnemy2()
{

    if (enemy2Direction == "Left")
    {
        char next = getCharAtxy(enemy2X - 4, enemy2Y);
        if (next == ' ')
        {
            eraseEnemy2();
            enemy2X--;
            printEnemy2();
        }
        else if (next == '#')
        {
            enemy2Direction = "Right";
        }
    }
    if (enemy2Direction == "Right")
    {
        char next = getCharAtxy(enemy2X + 6, enemy2Y);
        if (next == ' ')
        {
            eraseEnemy2();
            enemy2X++;
            printEnemy2();
        }
        else if (next == '#')
        {
            enemy2Direction = "Left";
        }
    }
}

void printEnemy()
{
    gotoxy(enemyX, enemyY);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy1[index];
    }
    gotoxy(enemyX, enemyY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy2[index];
    }
    gotoxy(enemyX, enemyY + 2);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy3[index];
    }
    gotoxy(enemyX, enemyY + 3);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy4[index];
    }
}
void printEnemy2()
{
    gotoxy(enemy2X, enemy2Y);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy1[index];
    }
    gotoxy(enemy2X, enemy2Y + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy2[index];
    }
    gotoxy(enemy2X, enemy2Y + 2);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy3[index];
    }
    gotoxy(enemy2X, enemy2Y + 3);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy4[index];
    }
}
void eraseEnemy()
{
    gotoxy(enemyX, enemyY);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(enemyX, enemyY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(enemyX, enemyY + 2);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(enemyX, enemyY + 3);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
}
void eraseEnemy2()
{
    gotoxy(enemy2X, enemy2Y);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(enemy2X, enemy2Y + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(enemy2X, enemy2Y + 2);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(enemy2X, enemy2Y + 3);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
}

void moveTankLeft()
{
    char next = getCharAtxy(tankX - 1, tankY);
    if (next == ' ' || next == '*')
    {
        eraseTank();
        tankX = tankX - 1;
        printTank();
    }
}

void moveTankRight()
{
    char next = getCharAtxy(tankX + 6, tankY);
    if (next == ' ' || next == '*')
    {
        eraseTank();
        tankX = tankX + 1;
        printTank();
    }
}

void moveTankUp()
{
    char next = getCharAtxy(tankX, tankY - 1);
    if (next == ' ' || next == '*')
    {
        eraseTank();
        tankY = tankY - 1;
        printTank();
    }
}

void moveTankDown()
{
    char next = getCharAtxy(tankX, tankY + 2);
    if (next == ' ' || next == '*')
    {
        eraseTank();
        tankY = tankY + 1;
        printTank();
    }
}

void generateBullet()
{
    bulletX[bulletCount] = tankX + 7;
    bulletY[bulletCount] = tankY;
    isBulletActive[bulletCount] = true;
    gotoxy(tankX + 7, tankY);
    cout << ".";
    bulletCount++;
}

void removeBulletFromArray(int index)
{
    for (int x = index; x < bulletCount - 1; x++)
    {
        bulletX[x] = bulletX[x + 1];
        bulletY[x] = bulletY[x + 1];
    }
    bulletCount--;
}
void printTank()
{
    gotoxy(tankX, tankY);
    for (int index = 0; index < 6; index++)
    {
        cout << tank1[index];
    }
    gotoxy(tankX, tankY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << tank2[index];
    }
}

void eraseTank()
{
    gotoxy(tankX, tankY);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(tankX, tankY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
}*/

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMaze()
{
    cout << "#########################################################################" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#                                                                       #" << endl;
    cout << "#########################################################################" << endl;
}

void printadd()
{
    int k = 3;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, k);
    gotoxy(13 , 12);
    cout<<ball1;
}
/*void moveBullet()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x] == true)
        {
            char next = getCharAtxy(bulletX[x] + 1, bulletY[x] + 1);
            if (next != ' ')
            {
                eraseBullet(bulletX[x], bulletY[x]);
                makeBulletInactive(x);
            }
            else
            {
                eraseBullet(bulletX[x], bulletY[x]);
                bulletX[x] = bulletX[x] + 1;
                printBullet(bulletX[x], bulletY[x]);
            }
        }
    }
}
void printBullet(int x, int y)
{
    gotoxy(x, y);
    cout << ".";
}
void eraseBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void makeBulletInactive(int index)
{
    isBulletActive[index] = false;
}
void bulletCollisionWithEnemy()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x] == true)
        {
            if (bulletX[x] + 1 == enemy2X && (bulletY[x] == enemy2Y || bulletY[x] == enemy2Y + 2 || bulletY[x] == enemy2Y + 3) ||( bulletX[x] + 1 == enemyX && (bulletY[x] == enemyY || bulletY[x] == enemyY + 2 || bulletY[x] == enemyY + 3) ))
            {
                addScore();
                gotoxy(79, 17);
                
            }
            if( (enemy2X - 1 == bulletX[x] && enemy2Y + 1 == bulletY[x])  || (enemyX + 1 == bulletX[x] && enemyY -1 == bulletY[x] ))
            {
                addScore();
            }
        }
    }
}
void addScore()
{
    score++;
    gotoxy(79, 17);
    cout << "Score: " << score;
}
void health()
{
    health1 --;
}*/
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
/*void generateBulletEnemy1()
{

    bullet2X[bulletCounter] = enemyX;
    bullet2Y[bulletCounter] = enemyY + 2 ;
    isBulletActiveEnemy[bulletCounter] = true;
    gotoxy(enemyX , enemyY +2 );
    cout << "*";
    bulletCounter++;
}

void moveBulletEnemy()
{
    for (int x = 0; x < bulletCounter; x++)
    {
        if (isBulletActiveEnemy[x] == true)
        {
            char next = getCharAtxy(bullet2X[x] - 1, bullet2Y[x]);
            if (next == ' ' || next == '*')
            {
                eraseBulletEnemy1(bullet2X[x], bullet2Y[x]);
                bullet2X[x] = bullet2X[x] - 1;
                printBulletEnemy1(bullet2X[x], bullet2Y[x]);
            }
            else if (next == '#' || next == tank1[6] || next == tank2[6])
            {
                eraseBulletEnemy1(bullet2X[x], bullet2Y[x]);
                isBulletActiveEnemy[x] = false;
            }
        }
    }
}

void makeBulletInactiveEnemy1(int index)
{
    isBulletActiveEnemy[index] = false;
}
void printBulletEnemy1(int enemyX, int enemyY)
{
    gotoxy(enemyX, enemyY);
    cout << "*";
}
void eraseBulletEnemy1(int enemyX, int enemyY)
{
    gotoxy(enemyX, enemyY);
    cout << " ";
}
void bulletCollisionWithPlayer()
{
    for (int x = 0; x < bulletCounter; x++)
    {
        if (isBulletActiveEnemy[x] == true)
        {
            if (bullet2X[x] + 1 == tankX && (bullet2Y[x] == tankY || bullet2Y[x] == tankY + 2 || bullet2Y[x] == tankY + 3))
            {
                health();
            }
            if (tankX + 1 == bullet2X[x] && tankY + 1 == bullet2Y[x])
            {
                health();
            }
        }
    }
}*/