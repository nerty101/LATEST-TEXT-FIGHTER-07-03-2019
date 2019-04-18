
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
main()
{
int dice1, dice2, dice3, dice4, dice5, dice6, diceA, diceB, diceC, diceD, diceE, diceF, diceG, diceH, diceI, diceJ = 0, diceK = 0;
int ctr = 0, ctr2 = 0, playerhp = 5, enemyhp = 5, contest = 0, consecvic = 0, consecvic2 = 0, consectr = 0, spctrbon = 0, ctrbonon = 0, ctrbondef = 0, consecvic3 = 0, spctrbon2 = 0;
int spatt = 0, supspatt = 0, hypsp = 0, enspcomb1 = 0, enspcomb2 = 0, enspcomb3 = 0, enemspcombC = 0;
int spmag = 0, spmag2 = 0, magsp = 0, magsp2 = 0, normag = 0, magsp3 = 0, sumag2 = 0, sumag = 0, magsp7 = 0, consecvic5 = 0, consecvic7 = 0, spctrbon7 = 0;
int diflev = 0, posdef = 0, posmag = 0, posbon = 0, bonchn = 0, bonchn2 = 0, cpusp = 0, consecvic4 = 0, spctrbon3 = 0, ultsp = 0, ultsp3 = 0, ultsp4 = 0;
int  ans6 = 1, sumag5 = 0, spmag5 = 0, spmag6 = 0, magchn = 0, posmag2 = 0, cpusp2 = 0, cpusp3 = 0, cpusp4 = 0;
time_t t;
char choice, ans, ans2, ans3;
srand(time(&t));
do {
++diflev;
enemyhp = 5;
playerhp = 5;
posdef = 0;
if (diflev > 1)
{
enemyhp = (enemyhp) + (10 * diflev);
playerhp = (playerhp) + (5 * diflev);
}
for (contest = 1; contest < 5; contest++)
{
do {
printf("\n\n");
if (posdef == 0)
{
printf("                  **************************");
printf("  WELCOME TO TEXT FIGHTER %d ", diflev);
printf("**************************\n\n\n");
}
else
{
printf("                             ------------");
printf(" TEXT FIGHTER %d", diflev);
printf(" --");
}
if (posdef > 0)
{
printf("--");
printf(" Fight Text %d ", contest);
printf("------------\n\n\n");
}
printf("  Player HP: %d\n\n", playerhp);
printf("  CPU HP: %d\n\n", enemyhp);
if (cpusp3 > 1)
printf("  ***Special Round Chain Record: %d***\n\n", cpusp3);
if (ctr2 > 0)
{
printf("  Total Rounds Played: %d\n\n", ctr2);
}
do {
if (posdef < 1)
{
printf("\n\n  Will you enter the Text Fighter? Press (y) for yes, (n) for no\n\n");
printf("  ");
scanf( " %c", &ans);
}
if (ans == 'N')
{
ans = 'n';
}
if (ans == 'n')
{
printf("\n  Don't be a chicken! You have to fight!\n");
}
if (ans == 'Y')
{
ans = 'y';
}
if ((ans != 'y') && (ans != 'n'))
{
printf("\n  You pressed the wrong key, try again\n");
}
} while (ans != 'y');
if (ans == 'y');
{
ans = 'y';
if (posdef < 1)
{
printf("\n     Fight Text %d starts now!\n\n", contest);
}
if (posdef > 0)
{
printf("\n\n     Enter the Text Fighter!\n\n");
}
do {
printf("\n\n       Round %d\n\n\n", ++ctr);
printf("           _________________________________________________________________________________________________\n");
printf("           *********** Press (n) for Normal Attack   (m) for Magic Heal   (s) for Special Attack ***********\n");
printf("           _________________________________________________________________________________________________\n\n");
printf("  ");
scanf (" %c", &choice);
if (choice == 'N')
{
choice = 'n';
}
if (choice == 'M')
{
choice = 'm';
}
if (choice == 'S')
{
choice = 's';
}
if ((choice != 'n') && (choice != 'm') && (choice != 's'))
{
printf("\n  You pressed the wrong key, try again\n");
--ctr;
continue;
} while  ((choice != 'n') && (choice != 'm') && (choice != 's'));
if (choice == 'n')
{
{
dice1 = (rand() % 7) + 1;//was 6 7
if (diflev > 7)//was 4
dice1 = (rand() % 8) + 1;
if (diflev > 25)
dice1 = (rand() % 9) + 1;
if (diflev > 38)
dice1 = (rand() % 10) + 1;
dice2 = (rand() % 5) + 1;
}
if (dice1 > dice2)
{
printf("\n     Your Normal Attack succeeds!\n");
enemyhp = (enemyhp - 2);
printf("     CPU HP at %d\n", enemyhp);
++consecvic;
++consectr;
posmag = 0;
posbon = 0;
cpusp = 0;
if ((consecvic > 2) && (enemyhp > 0))
{
enemyhp = (enemyhp - 1);
printf("\n     You get a Bonus Attack!\n");
printf("     CPU HP at %d\n", enemyhp);
++spctrbon;
++bonchn;
if ((consecvic > 2) && (enemyhp < 1))
++posbon;
}
if ((normag > 0) && (enemyhp > 0))
{
enemyhp = (enemyhp - 2);
printf("\n     You get a Magic Bonus Attack!\n");
printf("     CPU HP at %d\n", enemyhp);
++spmag;
++sumag;
++posmag;
++magchn;
if (magchn > 2)
consecvic = 1;
if ((magchn > 2) && (enemyhp < 1))
++posmag2;
if (spmag2 < 2)
normag = 0;
}
}
if (enemyhp < 1)
{
printf("\n     You defeated the CPU!\n\n");
if (ctr < 4)
{
printf("     Not bad! ");
}
if (ctr > 3)
printf("     ");
printf("You won in %d rounds!\n\n", ctr);
if ((posbon > 0) || (posmag > 0))
{
printf("     Nice moves!\n\n");
posmag = 0;
if ((bonchn > 2) && (posbon > 0))
printf("     Superb strategy!\n\n");
posbon = 0;
}
if ((magchn > 2) && (posmag2 > 0))
{
printf("     Powerful magic!\n\n");
normag = 0;
magchn = 0;
posmag2 = 0;
}
break;
}
if (dice2 > dice1)
{
printf("\n     Your Normal Attack fails!\n\n");
printf("     CPU Counter succeeds!\n");
printf("     Player HP at %d\n", --playerhp);
consecvic = 0;
consecvic2 = 0;
normag = 0;
sumag = 0;
magsp2 = 0;
magsp3 = 0;
sumag2 = 0;
--consectr;
magsp = 0;
bonchn = 0;
cpusp = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
}
if (dice1 == dice2)
{
printf("\n     Your Normal Attack fails!\n\n");
printf("     CPU Counter fails!\n");
consecvic = 0;
consecvic2 = 0;
normag = 0;
sumag = 0;
magsp2 = 0;
magsp3 = 0;
sumag2 = 0;
magsp = 0;
bonchn = 0;
cpusp = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
}
}
if (choice == 'm')
{
dice3 = (rand() % 14) + 1;//was 14 then 15 THEN 16? NOW 19 OR 20?????? now 18 300 test now 19 21 22 23 21 23 21 10 13 12 14
dice4 = (rand() % 11) + 1;//was 20 22 10
if (dice3 > dice4)
{
++spmag;
++spmag2;
++consecvic2;
++normag;
++magsp;
++consectr;
bonchn = 0;
if (magchn > 2)
{
sumag5 = sumag2;
spmag6 = spmag2;
spmag5 = spmag;
spmag = 0;
spmag2 = 0;
sumag2 = 0;
}
}//put here????????????????
if ((dice3 > dice4) && (spmag < 3) && (spmag2 < 4) && (sumag2 != 1) && (magchn < 3)) //&& (sumag2 != 1))
{
playerhp = (playerhp + 3);
printf("\n     Your Magic Heal succeeds!\n");
printf("     Player HP at %d\n", playerhp);
cpusp = 0;
}
if ((dice3 > dice4) && (spmag > 2) && (spmag2 < 4) && (sumag2 != 1) && (magchn < 3))
{
playerhp = (playerhp + 6);
printf("\n     Your Magic Heal succeeds!\n\n");
printf("     You get a Magic Heal Bonus!\n");
printf("     Player HP at %d\n", playerhp);
spmag = 0;
cpusp = 0;
}
if (magsp2 > 0)//NEW BLOCK WITH BRACES STARTS
{
++magsp3;
}//NEW BLOCK WITH BRACES ENDS
if ((sumag2 > 0) && (spmag2 > 3) && (dice3 > dice4) && (spmag >= 0))// && (magsp >= 0))// IMPORTANT change last condition back to (magsp >= 0) ????????bug fix
{
enemyhp = (enemyhp - 30);
printf("\n     You activate the ALPHA MAGIC SUPER SPECIAL COMBO ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
++magsp;
spmag2 = 2;
sumag2 = 0;
++cpusp;
if (magsp2 > 0)
magsp3 = 1;//added
}
if (enemyhp < 1)
{
printf("     Unbelievable!\n\n");
if (cpusp > 1)
printf("     With consecutive Special Attacks in the last %d rounds...!\n", cpusp);
printf("     You won in %d rounds, with the Alpha Magic Super Special Combo Attack!\n", ctr);
printf("     That really was crazy!\n");
if (cpusp > 1)
printf("\n");
printf("     How did you do that?\n\n");
break;
}
if ((dice3 > dice4) && (spmag2 > 3) && (spmag >= 0))
{
enemyhp = (enemyhp - 12);
printf("\n     You execute the MAGIC SUPER ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
spmag2 = 0;
++cpusp;
if (magsp2 > 0)
magsp3 = 1;//added
++magsp;//added
}
if (enemyhp < 1)
{
printf("     Great move!\n\n");
if (cpusp > 1)
printf("\n     With %d consecutive Special Attacks in as many rounds...!", cpusp);
printf("     You won in %d rounds, with the Magic Super Attack!\n", ctr);
printf("     Amazing outcome!\n\n");
break;
}
if ((dice3 > dice4) && (sumag2 > 0) && (spmag2 >= 0) && (spmag >= 0))
{
enemyhp = (enemyhp - 20);
printf("\n     You execute the MAGIC SUPER SPECIAL COMBO ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
sumag2 = 0;
magsp = 2;
if (magsp2 > 0)
magsp3 = 1;//added
++cpusp;
}
if (enemyhp < 1)
{
printf("     Did you see that?\n\n");
if (cpusp > 1)
printf("     With consecutive Special Attacks in the last %d rounds...!\n", cpusp);
printf("     You won in %d rounds, with the Magic Super Special Combo Attack!\n", ctr);
printf("     Amazing combination!\n");
if (cpusp > 1)
printf("\n");
printf("     Great skill!\n\n");
break;
}
if ((dice3 > dice4) && (magchn > 2) && (sumag2 == 0) && (spmag2 == 0) && (spmag == 0))
{
enemyhp = (enemyhp - 16);
printf("\n     You execute the HYPER MAGIC BONUS ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
++magsp;
++normag;
magchn = 0;
if (magsp2 > 0)
magsp3 = 1;
++cpusp;
sumag2 = sumag5;
spmag2 = spmag6;
spmag = spmag5;
spmag5 = 0;
spmag6 = 0;
sumag5 = 0;
}
if (enemyhp < 1)
{
printf("     Great follow-up!\n\n");
if (cpusp > 1)
printf("     With %d Special Attacks in as many consecutive rounds...!\n", cpusp);
printf("     You won in %d rounds, with the Hyper Magic Bonus Attack!\n", ctr);
printf("     A fantastic victory!\n");
if (cpusp > 1)
printf("\n");
printf("     Magical prowess!\n\n");
break;
}
if (dice4 > dice3)
{
playerhp = (playerhp - 2);
printf("\n     Your Magic Heal fails!\n\n");
printf("     CPU Counter succeeds!\n");
printf("     Player HP at %d\n", playerhp);
consecvic2 = 0;
spmag = 0;
spmag2 = 0;
magsp = 0;
normag = 0;
magsp2 = 0;
magsp3 = 0;
sumag2 = 0;
sumag = 0;
consecvic = 0;
--consectr;
bonchn = 0;
cpusp = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
diceI = (rand() % 14) + 1;
if (diceI < 3)
{
playerhp = (playerhp - (cpusp + 4));
printf("\n     CPU gets a Magic Counter Attack!\n");
printf("     Player HP at %d\n", playerhp);
}
}
if (dice3 == dice4)
{
printf("\n     Your Magic Heal fails!\n\n");
printf("     CPU Counter fails!\n");
consecvic2 = 0;
spmag = 0;
spmag2 = 0;
magsp = 0;
normag = 0;
magsp2 = 0;
magsp3 = 0;
sumag2 = 0;
sumag = 0;
consecvic = 0;
bonchn = 0;
cpusp = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
}
}
if (choice == 's')
{
{
dice5 = (rand() % 28 + diflev);// 14 then was 17 THEN 18 then 19 NOW 20 OR 21??? 22 23 24 26 27 28 -1
dice6 = (rand() % 31) + 1;//30-40 30
}
if (dice5 > dice6)
{
++consecvic2;
++consectr;
++ultsp;
bonchn2 = bonchn;
bonchn = 0;
if (magsp7 > 0)
magsp3 = 1;
if ((ultsp3 > 0) || (ultsp4 > 0))
ultsp = 4;
}

if (bonchn2 > 2)
{
spctrbon7 = spctrbon;
consecvic7 = consecvic2;
spctrbon = 0;
consecvic2 = 0;
magsp7 = magsp3;
magsp3 = 0;
if (ultsp > 3)
{
ultsp4 = ultsp;
ultsp = 0;
}
}
if (magsp3 == 1)
{
spctrbon2 = spctrbon;
spctrbon = 0;
consecvic5 = consecvic2;
consecvic2 = 0;
if (ultsp > 3)
{
ultsp3 = ultsp;
ultsp = 0;
}
}
if (ultsp > 3)
{
spctrbon3 = spctrbon;
consecvic4 = consecvic2;
spctrbon = 0;
consecvic2 = 0;
}
if ((consecvic2 < 3) && (spctrbon < 2) && (dice5 > dice6) && (magsp < 1) && (magsp3 < 1) && (bonchn2 < 3) && (ultsp < 4))
{
printf("\n     Your Special Attack succeeds!\n");
enemyhp = (enemyhp - 5); //was minus 4, before that minus 5
printf("     CPU HP at %d\n", enemyhp);
normag = 0;
cpusp = 0;
}
if (enemyhp < 1)
{
if (ctr < 2)
{
printf("\n     You won in the first round!\n");
printf("\n     Very impressive!\n\n");
}
else
{
printf("\n     You won in Round %d!\n", ctr);
printf("\n     Effective tactics!\n\n");
}
break;
}
if ((consecvic2 < 3) && (spctrbon < 2) && (dice5 > dice6) && (magsp > 0) && (magsp3 < 1) && (bonchn2 < 3) && (ultsp < 4))
{
printf("\n     You execute the MAGIC SPECIAL ATTACK!\n");
enemyhp = (enemyhp - 7); //was minus 4, before that minus 5 was 7
printf("     CPU HP at %d\n", enemyhp);
++spmag2;
++spmag;
--magsp;
++magsp2;
++cpusp;
if (sumag > 0)
{
++sumag2;
sumag = 0;
}
}
if (enemyhp < 1)
{
printf("     Excellent!\n");
if (cpusp > 1)
printf("\n     With %d consecutive Special Attacks in as many rounds...!", cpusp);
printf("\n     You won in Round %d, with the Magic Special Attack!\n", ctr);
if (ctr < 3)
printf("     A quick victory! ");
if (ctr >= 3)
printf("     ");
printf("Good skill!\n\n");
break;
}
if ((consecvic2 > 2) && (spctrbon > 1) && (dice5 > dice6) && (magsp3 < 1) && (magsp >= 0) && (bonchn2 < 3) && (ultsp < 4))
{
enemyhp = (enemyhp - 24);
printf("\n     You activate the SUPER SPECIAL BONUS COMBO ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
++consecvic;
++ultsp;
consecvic2 = 1;
spctrbon = 1;
++cpusp;
}
if (enemyhp < 1)
{
printf("     Awesome skill!\n\n");
if (cpusp > 1)
printf("     With consecutive Special Attacks in the last %d rounds...!\n", cpusp);
printf("     You won in %d rounds, with the Super Special Bonus Combo Attack!\n", ctr);
printf("     I cannot believe what just happened?\n");
if (cpusp > 1)
printf("\n");
printf("     That was completely insane!\n\n");
break;
}
if ((spctrbon > 1) && (dice5 > dice6) && (magsp3 < 1) && (magsp >= 0) && (ultsp < 4))
{
enemyhp = (enemyhp - 10);//was 8
printf("\n     You execute the SPECIAL BONUS ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
spctrbon = 0;//++spmag;
++cpusp;
}
if (enemyhp < 1)
{
printf("     Great finish!\n");
if (cpusp > 1)
printf("\n     With %d Special Attacks in as many consecutive rounds...!", cpusp);
printf("\n     You won in %d rounds, with the Special Bonus Attack!\n", ctr);
printf("     That really was something!\n\n");
break;
}
if ((consecvic2 > 2) && (dice5 > dice6) && (magsp3 < 1) && (magsp >= 0) && (bonchn2 < 3) && (ultsp < 4))
{
enemyhp = (enemyhp - 15); //was 11 12
printf("\n     You perform the SUPER SPECIAL ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
consecvic2 = 0;
++cpusp;
}
if (enemyhp < 1)
{
printf("     Amazing technique!\n\n");
if (cpusp > 1)
printf("     With consecutive Special Attacks in the last %d rounds...!\n", cpusp);
printf("     You won in %d rounds, with the Super Special Attack!\n", ctr);
printf("     That was pure skill!\n");
if (cpusp > 1)
printf("\n");
printf("     Spectacular!\n\n");
break;
}
if ((ultsp > 3) && (bonchn2 >= 0) && (dice5 > dice6) && (magsp3 == 0) && (magsp >= 0) && (consecvic2 == 0) && (spctrbon == 0))
{
enemyhp = (enemyhp - 22);//was 8
printf("\n     You execute the ULTRA SUPER SPECIAL ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
spctrbon = spctrbon3;
consecvic2 = consecvic4;
spctrbon3 = 0;
consecvic4 = 0;
++cpusp;
ultsp = 0;
ultsp4 = 0;
ultsp3 = 0;
consecvic = 2;
}
if (enemyhp < 1)
{
printf("     Game Over!\n\n");
printf("     That was a great fight!\n");
if (cpusp > 1)
printf("     With %d Special Attacks in as many consecutive rounds...!\n", cpusp);
printf("     You won in %d rounds, with the Ultra Super Special Attack!\n", ctr);
if (cpusp > 1)
printf("\n");
printf("     An expert offence!\n\n");
break;
}
if ((bonchn2 > 2) && (dice5 > dice6) && (magsp3 >= 0) && (magsp >= 0) && (consecvic2 == 0) && (spctrbon == 0) && (ultsp >= 0))
{
enemyhp = (enemyhp - 18);//was 8
printf("\n     You execute the SPECIAL HYPER BONUS ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
spctrbon = spctrbon7;
consecvic2 = consecvic7;
spctrbon7 = 0;
consecvic7 = 0;
bonchn2 = 0;
consecvic = 2;
++cpusp;
}
if (enemyhp < 1)
{
printf("     Phenomenal move!\n\n");
if (cpusp > 1)
printf("     With consecutive Special Attacks in the last %d rounds...!\n", cpusp);
printf("     Excellent timing!\n");
printf("     You won in %d rounds, with the Special Hyper Bonus Attack!\n", ctr);
if (cpusp > 1)
printf("\n");
printf("     Raw power!\n\n");
break;
}
if ((consecvic2 == 0) && (spctrbon == 0) && (dice5 > dice6) && (magsp >= 0) && (magsp3 > 0) && (bonchn2 >= 0) && (ultsp >= 0))
{
enemyhp = (enemyhp - 18);//was 14
printf("\n     You perform the SUPER SPECIAL MAGIC COMBO ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
magsp3 = 0;
magsp2 = 0;
spctrbon = spctrbon2;
consecvic2 = consecvic5;
consecvic5 = 0;
spctrbon2 = 0;
magsp7 = 0;
++cpusp;
if (enemyhp < 1)
{
printf("     A magnificent finish!\n\n");
if (cpusp > 1)
printf("\n     With %d Special Attacks in as many consecutive rounds...!", cpusp);
printf("     You won in %d rounds, with the Super Special Magic Combo Attack!\n", ctr);
printf("     That was a very nice combo!\n");
if (cpusp > 1)
printf("\n");
printf("     Powerful technique!\n\n");
break;
}
}
if (dice6 > dice5)
{
playerhp = (playerhp - 2);
printf("\n     Your Special Attack fails!\n\n");
printf("     CPU Counter succeeds!\n");
printf("     Player HP at %d\n", playerhp);
consecvic2 = 0;
magsp = 0;
magsp2 = 0;
magsp3 = 0;
sumag = 0;
sumag2 = 0;
--consectr;
normag = 0;
consecvic = 0;
bonchn = 0;
bonchn2 = 0;
cpusp = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
diceJ = (rand() % 50 - diflev) + 1;
if (diflev > 45)
diceJ = (rand() % 5) + 1;
if (diceJ < 3)
{
playerhp = (playerhp - (cpusp + 6));
printf("\n     CPU gets a Special Counter Attack!\n");
printf("     Player HP at %d\n", playerhp);
}
}//one more bracket? a mistake here?
if (dice5 == dice6)
{
printf("\n     Your Special Attack fails!\n\n");
printf("     CPU Counter fails!\n");
consecvic2 = 0;
magsp = 0;
magsp2 = 0;
magsp3 = 0;
sumag = 0;
sumag2 = 0;
normag = 0;
consecvic = 0;
bonchn = 0;
bonchn2 = 0;
cpusp = 0;
ultsp = 0;
magsp7 = 0;
ultsp3 = 0;
ultsp4 = 0;
magchn = 0;
}
}
if ((enemyhp > 0) && (playerhp > 0) && (cpusp <= 1))
diceB = (rand() % 11) + 1;
if ((enemyhp > 0) && (playerhp > 0) && (cpusp == 2))
diceB = (rand() % 9) + 2;
if ((enemyhp > 0) && (playerhp > 0) && (cpusp == 3))
diceB = (rand() % 8) + 2;
if ((enemyhp > 0) && (playerhp > 0) && (cpusp > 3))
diceB = (rand() % 7) + 2;
if ((diceB >= 2) && (diceB <= 6) && (playerhp > 0))
{
if (cpusp == 0)
--playerhp;
if ((cpusp >= 1) && (cpusp <= 3))
playerhp = (playerhp - cpusp);
if (cpusp > 3)
playerhp = (playerhp - 3);
printf("\n     CPU Attack succeeds!\n");
printf("     Player HP at %d\n", playerhp);
}
if ((playerhp < 1) && ((diceB == 2) || (diceB == 3) || (diceB == 4) || (diceB == 5) || (diceB == 6)))
{
printf("\n\n\n     You have to keep your guard up!\n\n");
diceE = 15;
}
if (((choice == 'm') || (choice == 's')) && (choice != 'n'))
{
diceE = (rand() % 18 + diflev) + 1;//maybe 28 ????????????? was 24 20
}
else
{
if ((choice == 'n') && (choice != 'm') && (choice != 's'))//for this diceE is 30 not 28 need to encourage sp for game maybe
diceE = (rand() % 28 + diflev) + 1;//maybe 32 0r 34?????????????? 30
}
if  ((diceE > 16) && (diceB >= 4) && (diceB <= 6) && (playerhp > 0)) //diceE was > 18 then 17, 50 32  = 18 SO 25 16 = 9 25 - 4 21 SO 22
{//&& (enemyhp < 5)) DICE E ORIGINALLY 16
playerhp = (playerhp - 4);
printf("\n     CPU executes their SPECIAL ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
if (playerhp < 1)
{
printf("\n     That's an impressive CPU finish!\n\n");
}
spatt = 1;
}
if (playerhp < 1)
{
diceF = 15;
}//added
else
{//added
if (((choice == 's') || (choice == 'n')) && (choice != 'm'))
diceF = (rand() % 42 + diflev) + 1; //was 34 36 66 46 50 48
else
if ((choice == 'm') && (choice != 's') && (choice != 'n'))
diceF = (rand() % 54 + diflev) + 1; //82 , 64 + 10 TO 20 56 60 56
}
if  ((diceF > 32) && (diceB >= 5) && (diceB <= 6) && (playerhp > 0))
{
playerhp = (playerhp - 6);
printf("\n     CPU executes their SUPER SPECIAL ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
if (playerhp < 1)
{
printf("\n     An outstanding CPU performance!\n\n");
}
supspatt = 1;
}
if ((spatt = 1) && (supspatt = 1))
{
enspcomb1 = 1;
}
if (playerhp < 1)
{
diceC = 15;
}
else
{//added
if (((choice == 'm') || (choice == 'n')) && (choice != 's'))
diceC = (rand() % 72 + diflev) + 1;//was 26 28 29, -2 down  so + 20 - 30 so 50 + diflev - 30// 126, 68
else
if ((choice == 's') && (choice != 'm') && (choice != 'n'))
diceC = (rand() % 86 + diflev) + 1; //was 35 144 86
}//added
if  ((diceC > 48) && (diceB == 5) && (playerhp > 0))
{
playerhp = (playerhp - 8);//was 7
printf("\n     CPU executes their HYPER SUPER SPECIAL ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
if (playerhp < 1)
{
printf("\n     THIS GAME IS OVER!\n\n");
}
hypsp = 1;
}
if ((hypsp = 1) && (enspcomb1 = 1))
{
enspcomb2 = 1;
}
if ((enspcomb1 = 1) && (enspcomb2 = 1))
{
enspcomb3 = 1;
}
if (playerhp > 0)
printf("\n");
if ((enspcomb3 == 1) && ((diceE > 16) && (diceB >= 4) && (diceB <= 6)) && ((diceF > 32) && (diceB >= 5) && (diceB <= 6)) && ((diceC > 48) && (diceB == 5)))
{
printf("     THE CPU ULTRA SUPER SPECIAL COMBO!\n");
printf("     THE ULTIMATE CPU COMBO!\n");
printf("     JUST INCREDIBLE!\n\n");
if (playerhp < 1)
{
printf("     THE ULTIMATE FINISHER!\n\n");
}
spatt = 0;
supspatt = 0;
hypsp = 0;
enspcomb3 = 0;
enspcomb2 = 0;
enspcomb1 = 0;
enemspcombC = 1;
}
if (enemspcombC != 1)
{
if ((enspcomb1 == 1) && ((diceE > 16) && (diceB >= 4) && (diceB <= 6)) && ((diceF > 32) && (diceB >= 5) && (diceB <= 6)))
{
printf("     THE CPU SUPER SPECIAL COMBO!\n");
printf("     GREAT CPU COMBO!\n");
if (playerhp < 1)
{
printf("     AND AN IMPRESSIVE COMBO FINISH!\n\n");
}
spatt = 0;
supspatt = 0;
enspcomb1 = 0;
}
if ((enspcomb2 == 1) && ((diceE > 16) && (diceB >= 4) && (diceB <= 6)) && ((diceC > 48) && (diceB == 5)))
{
printf("     THE CPU HYPER SPECIAL COMBO!\n");
printf("     AN AMAZING CPU COMBO!\n");
if (playerhp < 1)
{
printf("     AND THAT'S A MEAN COMBO FINISH!\n\n");
}
spatt = 0;
hypsp = 0;
enspcomb2 = 0;
enspcomb1 = 0;
}
if ((enspcomb2 == 1) && ((diceC > 48) && (diceB == 5)) && ((diceF > 32) && (diceB >= 5) && (diceB <= 6)))
{
printf("     THE CPU HYPER SUPER SPECIAL COMBO!\n");
printf("     THAT WAS A VERY POWERFUL CPU COMBO!\n");
if (playerhp < 1)
{
printf("     FANTASTIC FINISHING MOVES!\n\n");
}
supspatt = 0;
hypsp = 0;
enspcomb2 = 0;
enspcomb1 = 0;
}
enemspcombC = 0;
}
if ((diceB > 6) && (playerhp > 0))// 5
{
enemyhp = (enemyhp - 1);
printf("     CPU Attack fails!\n\n");
printf("     Your Counter succeeds!\n");
printf("     CPU HP at %d\n", enemyhp);
diceG = (rand() % 10) + 1; //WAS 10 was 11
if ((diceG > 5) && (consectr < 3))// diceG was 6
++consectr;
}
if (enemyhp < 1)
{
if (cpusp > 1)
printf("\n     With Special Attacks in the last %d consecutive rounds...!", cpusp);
printf("\n     You won with the Counter!\n");
printf("\n     Good defence!\n\n");
break;
}
if ((consectr > 2) && (diceB > 6) && (playerhp > 0))
{
enemyhp = (enemyhp - 1);
printf("\n     You get a Counter Bonus!\n");
printf("     CPU HP at %d\n", enemyhp);
++ctrbonon;
++consecvic;
++spctrbon;
--consectr;
diceH = (rand() % (100 - cpusp)) + 1;
if (cpusp > 80)
diceH = (rand() % 20) + 1;
}
if ((enemyhp < 1) && (ctrbonon > 0))
{
if (cpusp > 1)
printf("\n     With consecutive Special Attacks in the last %d rounds...!", cpusp);
printf("\n     You won with the Counter Bonus!\n");
printf("\n     That was a great defence!\n\n");
break;
}
if ((choice == 'm') && (diceB > 6) && (diceH < 10) && (enemyhp > 0))
{
enemyhp = (enemyhp - (4 + cpusp));
printf("\n     You get a Magic Counter Attack!\n");
printf("     CPU HP at %d\n", enemyhp);
++spmag2;
++spmag;
}
if ((enemyhp < 1) && (diceH < 10))
{
if (cpusp > 1)
printf("\n     With %d Special Attacks in the last %d consecutive rounds...!\n", cpusp, cpusp);
printf("\n     You won with the Magic Counter Attack!\n");
printf("\n     That was mighty magic!\n");
printf("\n     A very effective counter skill!\n\n");
break;
}
if ((choice == 's') && (diceB > 6) && (diceH < 10) && (enemyhp > 0))
{
enemyhp = (enemyhp - (6 + cpusp));
printf("\n     You get a Special Counter Bonus!\n");
printf("     CPU HP at %d\n", enemyhp);
++consecvic;
++spctrbon;
}
if ((enemyhp < 1) && (diceH > 10))
{
if (cpusp > 1)
printf("\n     With %d consecutive Special Attacks in as many rounds...!\n", cpusp);
printf("\n     You won with the Special Counter Bonus Attack!\n");
printf("\n     It was all in the defence!\n");
printf("\n     That's a great way to finish the fight!\n\n");
break;
}
if ((diceB == 1) && (playerhp > 0))
{
printf("     CPU Attack fails!\n\n");
printf("     Your Counter fails!\n\n");
}
if (playerhp < 1)
{
printf("\n\n     You lost the contest!\n\n");
printf("     Enter (0) to exit, (1) to continue\n\n\n");
printf("  ");
scanf( " %d", &ans6);
if (contest > 1)
{
--contest;
}
if (ans6 == 0)
{
exit (0);
}
}
diceK = (rand() % 55) + 1; //was 50;
if ((dice1 <= dice2) ||  (dice3 <= dice4))
{
if (dice5 <= dice6)
{
if ((cpusp == 0) && ((diceK >= 27)  && (diceK < 37)))
printf("\n\n        -Don't give up!");
if ((cpusp == 0) && ((diceK >= 33) && (diceK <= 42)))
printf("\n\n        -Go for some moves!");
if ((cpusp == 0) && ((diceK > 36) && (diceK < 45)))
printf("\n\n        -Hang in there!");
if ((cpusp == 0) && (diceK >= 43))
printf("\n\n        -Never give in!");
}
}
if (((cpusp >= 1) && (cpusp <= 2)) && (diceK > 25))
printf("\n\n        -Keep going!");
if (((cpusp >= 2) && (cpusp <= 3)) && (diceK < 11))
printf("\n\n        -Pile on the pressure!");
if ((cpusp == 2) && (diceK > 35))
printf("\n\n        -You can do it!");
if ((cpusp == 2) && ((diceK >= 8) && (diceK <= 18)))
printf("\n\n        -Bring it on!!");
if (cpusp >= 3)
printf("\n\n        -You have performed special moves in the last %d rounds!", cpusp);
if (((cpusp >= 3) && (cpusp < 5)) && (diceK >= 22))
printf("\n\n        -Don't stop now!");
if (((cpusp == 3) && (diceK >= 16)) &&  (diceK <= 28))
printf("\n\n        -This fight is incredible!");
if (((cpusp >= 4) && (cpusp <= 5)) && ((diceK >= 20) && (diceK <= 32)))
printf("\n\n        -I can't wait for the next round!");
if (((cpusp >= 5) && (cpusp <= 6)) && ((diceK > 26) && (diceK <= 36)))
printf("\n\n        -Go for it Champ!");
if (((cpusp >= 6) && (cpusp >= 7)) && (diceK > 32))
printf("\n\n        -You're unbeatable!");
if (((cpusp >= 7) && (cpusp <= 8)) && ((diceK > 36) && (diceK <= 42)))
printf("\n\n        -How do you do it?");
if (((cpusp >= 8) && ((diceK > 40)) && (diceK <= 44)))
printf("\n\n        -Are we witnessing the birth of a new Champion!");
if ((cpusp >= 8) && (diceK >= 42))
printf("\n\n        -Legends are made of this!");
if (playerhp > 0)
printf("\n\n\n\n   The next round begins!\n\n");
if (cpusp > cpusp2)  //
{
cpusp2 = cpusp;
if (cpusp3 < cpusp2)
cpusp3 = (cpusp2 + 1);
if (cpusp3 < cpusp)
cpusp3 = (cpusp + 1);
if (cpusp2 > cpusp)
cpusp2 = cpusp3;  // this block works with the similar, smaller block at very end!
}
}while  (playerhp > 0);
}
if (enemyhp < 1)
{
++contest;
}
enemyhp = 5 + (10 * (contest - 1));
playerhp = 5 + (5 * (contest - 1));
ctr2 = (ctr + ctr2);
consecvic = 0;
consecvic2 = 0;
consectr = 0;
ctr = 0;
spctrbon = 0;
ctrbonon = 0;
ctrbondef = 0;
enemspcombC = 0;
enspcomb1 = 0;
enspcomb2 = 0;
enspcomb3 = 0;
spmag = 0;
spmag2 = 0;
magsp = 0;
magsp2 = 0;
normag = 0;
magsp3 = 0;
sumag = 0;
sumag2 = 0;
bonchn = 0;
bonchn2 = 0;
ultsp = 0;
++posdef;
magsp7 = 0;
ultsp4 = 0;
ultsp3 = 0;
magchn = 0;
cpusp2 = 0;
if (diflev > 1)
{
enemyhp = (enemyhp) + (10 * diflev);
playerhp = (playerhp) + (5 * diflev);
}
} while (contest != 5);
printf("\n\n\n\n  You won the Tournament! Congratulations!\n\n\n");
printf("  You are the Text Fighter %d Champion!\n\n\n", diflev);
printf("  Total Rounds Played: %d", ctr2);
if (cpusp > cpusp3)
cpusp3 = cpusp;
cpusp = 0;
printf("\n\n\n  Special Round Chain Record: %d", cpusp3);
printf("\n\n\n\n\n  GAME OVER!\n\n\n");
}
printf("\n  Enter (0) to exit, (1) to continue\n\n\n");
printf("  ");
scanf( " %c", &ans);
if (ans != '0')
{
printf("\n\n\n");
}
} while (ans != '0');
if (ans != '0')
{
return(main);
}
return(0);
}

