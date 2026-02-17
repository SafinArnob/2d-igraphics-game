#ifndef VARIABLES_INCLUDED
#define VARIABLES_INCLUDED
#define screenWidth 1200
#define screenHeight 600
#define projectName "Combact Chronicals: The Ninja Odessey"
#define backgroundspeed 80
#define backgroundspeed2 150
#define jumpLimit 110
#define obstacleNumber 15
#define obstacleNumber2 10
#define monsterNumber 25
#define monsterNumber2 20



int gameState = -3;
int highscore = 0;
int level = 1;
int t1, t2;
int shinzoX = 0;
int shinzoY = 110;
int shinzoX1 = 0;
int shinzoY1 = 90;
int shinzoX2 = 30;
int shinzoY2 = 80;
int shinzoJump = 0;
int runIndex = 0;
int stand_count = 0;
int stand_index = 0;
int life_index = 0;
int fireX = 0;
int fireY = 0;
int c = 0;
int enemyKilled = 0;
int killScore = 0;
int bossX = 1090;
int bossY = 80;
int boss_index = 0;
int bossfireX = 1065;
int bossfireY = 106;
int fire_index = 0;
int count1 = 0;
int count2 = 1;
int star_index = 0;




bool completegame = false;
bool chestv = false;
bool level1characters = true;
bool musicOn = true;
bool pause = true;
bool front = false, back = false;
bool jump = false, jumpUp = false, jumpDown = false;
bool stand = true, standfront = true, standrev = false, running = false, runForward = false, runBackward = false;
bool lifebar_visible = true;
bool firing = false;
bool level2characters = false;
bool level3characters = false;
bool gameOver = false;
bool shinzoVisible = true;
bool shinzoVisible2 = false;
bool shinzoVisible3 = false;
bool levelup = false;
bool car = false;
bool bossfiring = false;
bool bossvisible = false;



char backgroundImage[15][40] = { "Image\\Bg\\bg1.bmp", "Image\\Bg\\bg2.bmp", "Image\\Bg\\bg3.bmp",
                                 "Image\\Bg\\bg4.bmp", "Image\\Bg\\bg5.bmp", "Image\\Bg\\bg6.bmp", "Image\\Bg\\bg7.bmp",
                                 "Image\\Bg\\bg8.bmp", "Image\\Bg\\bg9.bmp", "Image\\Bg\\bg10.bmp", "Image\\Bg\\bg11.bmp",
                                 "Image\\Bg\\bg12.bmp", "Image\\Bg\\bg13.bmp", "Image\\Bg\\bg14.bmp", "Image\\Bg\\bg15.bmp" };

char bg_lvl2[15][40] = { "Image\\Bg2\\bg1.bmp", "Image\\Bg2\\bg2.bmp", "Image\\Bg2\\bg3.bmp", "Image\\Bg2\\bg4.bmp",
                         "Image\\Bg2\\bg5.bmp", "Image\\Bg2\\bg6.bmp", "Image\\Bg2\\bg7.bmp", "Image\\Bg2\\bg8.bmp", "Image\\Bg2\\bg9.bmp",
                         "Image\\Bg2\\bg10.bmp", "Image\\Bg2\\bg11.bmp", "Image\\Bg2\\bg12.bmp", "Image\\Bg2\\bg13.bmp", "Image\\Bg2\\bg14.bmp",
                         "Image\\Bg2\\bg15.bmp" };

char background_lvl3[] = { "Image\\background3.bmp" };
char shinzo_run[6][40] = { "Image\\sinju\\run1.bmp", "Image\\sinju\\run2.bmp", "Image\\sinju\\run3.bmp",
                           "Image\\sinju\\run4.bmp", "Image\\sinju\\run5.bmp", "Image\\sinju\\run6.bmp" };
char run_rev[6][40] = { "Image\\sinju\\run7.bmp", "Image\\sinju\\run8.bmp", "Image\\sinju\\run9.bmp",
                        "Image\\sinju\\run10.bmp", "Image\\sinju\\run11.bmp", "Image\\sinju\\run12.bmp" };
char shinzo_stand[3][23]= { "Image\\sinju\\stand1.bmp"};
char stand_rev[3][23] = { "Image\\sinju\\stand2.bmp"};
char shinzo_jump[2][40] = { "Image\\sinju\\jump2.bmp", "Image\\sinju\\jump4.bmp" };
char menubuttons[5][50] = { "Image\\Menu\\PLAY1.bmp", "Image\\Menu\\ABOUT1.bmp", "Image\\Menu\\HIGHSCORE1.bmp",
                            "Image\\Menu\\CREDITS1.bmp", "Image\\Menu\\EXIT1.bmp" };
char lifebar[6][40] = { "Image\\Lifebar\\life01.bmp", "Image\\Lifebar\\life02.bmp", "Image\\Lifebar\\life03.bmp",
                        "Image\\Lifebar\\life04.bmp", "Image\\Lifebar\\life05.bmp", "Image\\Lifebar\\life06.bmp" };
char star[3][40] = { "Image\\shuriken.bmp", "Image\\shuriken.bmp", "Image\\shuriken.bmp" };
char star2[3][40] = { "Image\\shuriken.bmp","Image\\shuriken.bmp" ,"Image\\shuriken.bmp"  };
char star3[3][40] = { "Image\\shuriken3.bmp","Image\\shuriken3.bmp","Image\\shuriken3.bmp" };
char monster_run_level1[3][40] = { "Image\\monster1_run\\monster1.bmp", "Image\\monster1_run\\monster2.bmp",
                                   "Image\\monster1_run\\monster3.bmp" };
char monster_attack_level1[2][40] = { "Image\\monster1_attack\\monster4.bmp", "Image\\monster1_attack\\monster5.bmp" };
char monster_run_level2[3][40] = { "Image\\monster_lvl2\\run1.bmp", "Image\\monster_lvl2\\run2.bmp", "Image\\monster_lvl2\\run3.bmp", };
char obs[] = { "Image\\obstacle2.bmp" };
char chest[] = { "Image\\chest.bmp" };
char levelUp[] = { "Image\\plane.bmp" };
char carimg[] = { "Image\\car.bmp" };
char box[] = { "Image\\box.bmp" };
char bosslifebar[8][40] = { "Image\\Lifebar\\bosslifebar01.bmp", "Image\\Lifebar\\bosslifebar02.bmp",
                            "Image\\Lifebar\\bosslifebar03.bmp", "Image\\Lifebar\\bosslifebar04.bmp", "Image\\Lifebar\\bosslifebar05.bmp",
                            "Image\\Lifebar\\bosslifebar06.bmp", "Image\\Lifebar\\bosslifebar07.bmp", "Image\\Lifebar\\bosslifebar08.bmp" };
char boss[] = { "Image\\boss2.bmp" };
char fire[3][40] = { "Image\\fire.bmp", "Image\\fire.bmp", "Image\\fire.bmp" };
#endif