#include "../inc/Player.hpp"
#include "../inc/AEnemies.hpp"
#include "../inc/Bullets.hpp"
#include <iostream>
#include <curses.h>
#include <chrono>
#include <unistd.h>
#define TOTAL_ENEMYS 50
#define TOTAL_STARS 200
#define NEW_WAVE 20
#define NEW_ENEMY_COUNT 3
#define START_GAME_SPEED 40000

extern double  g_seconds;
static int     g_count;
extern int g_score;

void        checkCollision(Player &player, AEnemies enemys[TOTAL_ENEMYS])
{
    Bullets         *tmp = player.getBullet();
    /* Verifies if enemies and player collides */
    for (int n = 0; n < g_count; n++)
    {
        if ((((player.getX() == enemys[n].getX())) && (player.getY() == enemys[n].getY())) || ((player.getRX() == enemys[n].getX()) && (player.getRY() == enemys[n].getY()))) {
            endwin();
            exit(0);
        }
        /* Verifies if bullet and enemies collides */
        for (int i = 0; i < BULLET_MAX - 1; i++)
        {
		    if (((tmp[i].getX() == enemys[n].getX()) && (tmp[i].getY() == enemys[n].getY())) || ((tmp[i].getX() == enemys[n].getX() + 1) && (tmp[i].getY() == enemys[n].getY())))
            {
                enemys[n].resetEnemy();
                tmp[i].resetBullet(tmp[i]);
                g_score += 5;
           //     delete &tmp[i];
            }
            else if (tmp[i].getX() == tmp[i].getXMax() - 1) {
                tmp[i].resetBullet(tmp[i]);
             //   delete &tmp[i];
            }
            if (player.getBulletCount() > 0)
                player.setBulletCount(player.getBulletCount() - 1);
        }
    }
}

int         getGameSpeed(int current)
{
    static  int round;

    round++;
    if ((current - 100) > 12000)
        return (current - 100);
    return 12000;
}

void        background_test(WINDOW *win, int spawn)
{
    int ymax, xmax;
    getmaxyx(win, ymax, xmax);
    static Entity stars[TOTAL_STARS];

    if (spawn && ((g_count + NEW_ENEMY_COUNT) < TOTAL_ENEMYS))
    {
        for (int n = g_count; n < (g_count + NEW_ENEMY_COUNT); n++)
        {
            int x = (rand() % xmax) + 1;
            int y = (rand() % ymax - 2);
            y = (y < 1) ? 1 : y;
            stars[n].set(win, y, x, '.', 3);
        }
    }
    for (int n = 0; n < g_count; n++)                         
    {
        stars[n].move();
        stars[n].display(COLOR_YELLOW, 4);
    }
}

void        manageEnemy(WINDOW *win, AEnemies enemys[TOTAL_ENEMYS], int spawn)
{
    int ymax, xmax;
    int enemy[4] = {'<', '*', 'o', '+'};
    getmaxyx(win, ymax, xmax);
    if (spawn && ((g_count + NEW_ENEMY_COUNT) < TOTAL_ENEMYS))
    {
        for (int n = g_count; n < (g_count + NEW_ENEMY_COUNT); n++)
        {
            int tmp1 = xmax - (rand() % 20) - 20;
            int tmp2 = (rand() % ymax - 2);
            tmp2 = (tmp2 < 1) ? 1 : tmp2;
            enemys[n].set(win,tmp2, tmp1,enemy[rand() % 4], 1);
        }
        g_count += NEW_ENEMY_COUNT;
    }
    for (int n = 0; n < g_count; n++)                         
    {
        enemys[n].move();
        enemys[n].display(COLOR_GREEN, 2);
    }
}


/* -----------------------MAIN WHILE LOOP OF THE GAME ----------------------- */

void        ftRetro(WINDOW *win) {
    static Player player1;
    player1.set(win, 25, 3, ']', 1);
    int counter = 0;
    int gameSpeed = START_GAME_SPEED;
    static AEnemies enemys[TOTAL_ENEMYS];
    
    keypad(win, true);
    time_t start = time(0);
    while (1)
    {
        clear();
        player1.update();
        if (g_count)
            checkCollision(player1, enemys);
        manageEnemy(win, enemys, (counter == NEW_WAVE) ? 1 : 0); // spawn enemys
        background_test(win, (counter == NEW_WAVE) ? 1 : 0); // spawn enemys
            // if -1 then show prompt quit or restart (reset values)
        wrefresh(win);
        usleep(gameSpeed);
        counter++;
        if (counter > NEW_WAVE)
        {
            gameSpeed = getGameSpeed(gameSpeed);
            counter = 0;
            g_seconds = difftime(time(0), start);
            g_score++;
        }
    }
}        

/* --------------------INITITALISE WINDOW AND GAME BORDER ------------------ */

void        initWindow(void) {
    int height, width, start_y, start_x;
    height = 50;
    width = 150;
    start_y = 10;
    start_x = 20;
    initscr();
    start_color();
    cbreak();
    noecho();
    curs_set(0);
    srand(time(0));
    WINDOW *mainwin = newwin(height, width, start_y, start_x);

    nodelay(mainwin, true);

    box(mainwin, 0, 0);
    refresh();

    ftRetro(mainwin);

    endwin();
}

/* ----------------------MAIN-------------------------- */

int         main(void) {
    initWindow();
    return 0;
}
