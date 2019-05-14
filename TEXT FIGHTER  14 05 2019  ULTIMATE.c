
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
main()
{
int dice1, dice2, dice3, dice4, dice5, dice6, diceB, diceC, diceE, diceF, diceG, diceI, diceJ = 0, diceL = 0, diceM = 0, diceN = 0, diceP = 0;
int ctr = 0, ctr2 = 0, playerhp = 5, enemyhp = 5, contest = 0, consecvic = 0, consecvic2 = 0, consectr = 0, spctrbon = 0, ctrbonon = 0, ctrbondef = 0, consecvic3 = 0, spctrbon2 = 0;
int spatt = 0, supspatt = 0, hypsp = 0, enspcomb1 = 0, enspcomb2 = 0, enspcomb3 = 0, enemspcombC = 0;
int spmag = 0, spmag2 = 0, magsp = 0, magsp2 = 0, normag = 0, magsp3 = 0, sumag2 = 0, sumag = 0, magsp7 = 0, consecvic5 = 0, consecvic7 = 0, spctrbon7 = 0;
int diflev = 0, posdef = 0, posmag = 0, posbon = 0, bonchn = 0, bonchn2 = 0, cpusp = 0, consecvic4 = 0, spctrbon3 = 0, ultsp = 0, ultsp3 = 0, ultsp4 = 0;
int ans6 = 1, sumag5 = 0, spmag5 = 0, spmag6 = 0, magchn = 0, posmag2 = 0, cpusp3 = 0, spctrdf = 0, mspatt = 0, emgspcom = 0, mspatt2 = 0, emgspcom2 = 0, emgsupatt = 0, emagsup = 0;
int mspatt3 = 0, emgspcom3 = 0, hypsp2 = 0, spatt2 = 0, supspatt2 = 0, emgspcom4 = 0, mspatt4 = 0;
int emgspcom5 = 0, emagsup5 = 0, mspatt5 = 0, enspcomb6 = 0, bonrec = 0, magrec = 0, bonrec2 = 0, magrec2 = 0;
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
printf("\n\n\n\n");
if (posdef == 0)
{
printf("                                        *** WELCOME TO TEXT FIGHTER %d ***\n\n\n\n", diflev);
}
else
{
printf("        TEXT FIGHTER %d\n\n", diflev);
}
if (posdef < 0)
printf("\n\n\n");
if (posdef > 0)
{
printf("          FIGHT TEXT %d \n\n\n\n", contest);
}
printf("     Player HP: %d\n\n", playerhp);
printf("        CPU HP: %d\n\n", enemyhp);
if (ctr2 < 1)
printf("\n\n");
if (cpusp3 > 1)
{
printf("\n\n     *Special Round Chain Record: %d*", cpusp3);
}
if (bonrec2 > 3)
{
printf("\n\n     *Bonus Round Chain Record: %d*", bonrec2);
}
if (magrec2 > 3)
{
printf("\n\n     *Magic Bonus Round Chain Record: %d*", magrec2);
}
if (ctr2 > 0)
{
printf("\n\n     Total Rounds Played: %d\n\n\n", ctr2);
}
do {
if (posdef < 1)
{
printf("\n     Will you enter the Text Fighter? Press (y) for yes, (n) for no\n\n\n");
printf("  ");
scanf("  %c", &ans);
printf("\n\n");
}
if (ans == 'N')
{
ans = 'n';
}
if (ans == 'n')
{
printf("     Don't be a chicken! You have to fight!\n\n\n");
}
if (ans == 'Y')
{
ans = 'y';
}
if ((ans != 'y') && (ans != 'n'))
{
printf("     You pressed the wrong key, try again\n\n\n");
}
} while (ans != 'y');
if (ans == 'y');
{
ans = 'y';
if (posdef < 1)
{
printf("     Fight Text %d starts now!\n\n\n", contest);
}
if (posdef > 0)
{
printf("\n\n     Enter the Text Fighter!\n\n\n");
}
do {
printf("     Round %d\n\n\n", ++ctr);
printf("                     Press (n) for Normal Attack   (m) for Magic Heal   (s) for Special Attack\n\n\n\n");
printf("  ");
scanf (" %c", &choice);
printf("\n");
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
printf("\n\n     You pressed the wrong key, try again\n\n\n");
--ctr;
continue;
} while  ((choice != 'n') && (choice != 'm') && (choice != 's'));
if (choice == 'n')
{
{
dice1 = (rand() % 70 + cpusp + diflev) + 1;//was 7
dice2 = (rand() % 50) + 1;//was 5
}
if (dice1 > dice2)
{
enemyhp = (enemyhp - 2);//was 8
printf("\n     You execute Normal Attack!\n");
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
if (magchn > 1)
{
diceL = (rand() % 10) + 1;
if (diceL < 5)  //  was 4 !!!!!!!!!!!!!!!!!!! test!!!!!!!!!!!!!!!! 5 BETTER
consecvic = 1;
}
if ((magchn > 2) && (enemyhp < 1))
++posmag2;
if (spmag2 < 2)
normag = 0;
}
if (enemyhp < 1)
{
printf("\n     You defeated the CPU!\n");
if (((bonchn > 2) && (posbon > 0)) || ((magchn > 2) && (posmag2 > 0)))
printf("\n");
printf("     You won in %d rounds with the Normal Attack!\n", ctr);
if (ctr < 4)
{
if ((posbon < 1) && (posmag < 1))
printf("\n");
printf("     Not bad!\n");
if  ((posbon < 1) && (posmag < 1))
printf("\n");
}
if ((posbon > 0) && (bonchn < 3))
{
printf("\n     And you got the Bonus Attack!\n\n");
posmag = 0;
}
if ((posmag > 0) && (magchn < 3))
{
printf("\n     And you used the Magic Bonus Attack!\n\n");
posmag = 0;
}
if ((bonchn > 2) && (posbon > 0))
{
printf("     Superb strategy!\n\n");
if (((bonchn >= 2) && (bonchn <= 4)) && (posbon > 0))
printf("     That was a great Bonus Attack Round Chain!\n\n");
if ((bonchn > 4 ) && (posbon > 0))
printf("     That was a phenomenal Bonus Attack Round Chain!\n\n");
bonrec = bonchn;
posbon = 0;
}
if ((magchn > 2) && (posmag2 > 0))
{
printf("     Skillful magic attack strategy!\n\n");
if (((magchn >= 2) && (magchn <= 4)) && (posmag2 > 0))
printf("     And an impressive Magic Bonus Attack Round Chain!\n\n");
if ((magchn > 4) && (posmag2 > 0))
printf("     And an incredible Magic Bonus Attack Round Chain!\n\n");
normag = 0;
magrec = magchn;
magchn = 0;
posmag2 = 0;
}
break;
}
}
if (dice2 > dice1)
{
printf("\n     CPU evades Normal Attack!\n\n");
printf("     CPU counters!\n");
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
printf("\n     CPU defends Normal Attack!\n");
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
dice3 = (rand() % 14 + cpusp) + 1;//was 14
dice4 = (rand() % 11) + 1;//was 11
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
}
if ((dice3 > dice4) && (spmag < 3) && (spmag2 < 4) && (sumag2 != 1) && (magchn < 3))
{
playerhp = (playerhp + 3);
printf("\n     You cast Magic Heal!\n");
printf("     Player HP at %d\n", playerhp);
cpusp = 0;
}
if ((dice3 > dice4) && (spmag > 2) && (spmag2 < 4) && (sumag2 != 1) && (magchn < 3))
{
playerhp = (playerhp + 6);
printf("\n     You get the Magic Heal Bonus!\n");
printf("     Player HP at %d\n", playerhp);
spmag = 0;
cpusp = 0;
}
if (magsp2 > 0)
{
++magsp3;
}
if ((sumag2 > 0) && (spmag2 > 3) && (dice3 > dice4) && (spmag >= 0))
{
enemyhp = (enemyhp - 30);
printf("\n     You activate the ALPHA MAGIC SUPER SPECIAL COMBO ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
++magsp;
spmag2 = 2;
sumag2 = 0;
++cpusp;
if (magsp2 > 0)
{
magsp3 = 1;
}
} //****************TAKEN OUT
if (enemyhp < 1)
{
printf("     Unbelievable!\n\n");
if (ctr < 7)
printf("     You must be a Text Fight Master!\n");
//++spc;
if (cpusp > 1)
printf("     With consecutive Special Attacks in the last %d rounds!\n", cpusp);
printf("     You won in %d rounds, with the Alpha Magic Super Special Combo Attack!\n", ctr);
if ((ctr < 7) & (cpusp > 1))
printf("\n");
printf("     That really was crazy!\n");
if (((cpusp > 1) & (ctr < 7)) || ((cpusp > 1) & (ctr > 6)))
printf("\n");
if ((cpusp < 2) && (ctr < 7))
printf("\n");
if (((ctr > 6) & (cpusp > 1)) || ((ctr > 6) & (cpusp < 2)))
printf("     How did you do that!\n\n");
if ((ctr < 7) & (cpusp < 2))
printf("     A phenomenal finish!\n\n");
if ((ctr < 7) & (cpusp > 1))
{
printf("     Only a Text Fight Master could achieve something like this!\n\n");
}
break;
}
if ((dice3 > dice4) && (spmag2 > 3) && (spmag >= 0))
{
enemyhp = (enemyhp - 12);
printf("\n     You execute the MAGIC SUPER ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
spmag2 = 0;
++cpusp;
++magsp;
if (magsp2 > 0)
{
magsp3 = 1;//added
}
}
if (enemyhp < 1)
{
printf("     Great move!\n");
if ((cpusp > 1) && (ctr < 5))
printf("\n");
if ((cpusp > 1) && (ctr > 4))
printf("\n");
if ((cpusp < 2) && (ctr > 4))
printf("\n");
if ((cpusp < 2) && (ctr < 5))
printf("\n");
if (ctr < 5)
printf("     The fight ends early!\n");
if (cpusp > 1)
printf("     With %d Special Attacks in as many rounds!\n", cpusp);
printf("     You won in %d rounds with the Magic Super Attack!\n", ctr);
if ((cpusp < 2) && (ctr < 5))
printf("\n");
if ((cpusp > 1) && (ctr > 4))
printf("\n");
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
++cpusp;
if (magsp2 > 0)
{
magsp3 = 1;//added
}
}
if (enemyhp < 1)
{
printf("     Did you see that?\n");
if ((cpusp > 1) && (ctr > 5))
printf("\n");
if ((cpusp < 2) && (ctr > 5))
printf("\n");
if (ctr < 6)
printf("     That came out of nowhere!\n\n");
if (cpusp > 1)
printf("     With consecutive Special Attacks in the last %d rounds!\n", cpusp);
printf("     You won in %d rounds with the Magic Super Special Combo Attack!\n", ctr);
printf("     Amazing combination!\n");
if (((cpusp > 1) && (ctr < 6)) || ((cpusp > 1) && (ctr > 5)))
printf("\n");
if ((cpusp < 2) && (ctr < 6))// || (cpusp < ) && (ctr < 6)))
printf("\n");
if (((ctr > 6) & (cpusp > 1)) || ((ctr > 6) & (cpusp < 2)))
printf("     A fantastic finish!\n\n");
if ((ctr < 6) & (cpusp < 2))
printf("     Great skill!\n\n");
if ((ctr < 6) & (cpusp > 1))
{
printf("     Phenomenal magic skill!\n\n");
}
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
++cpusp;
sumag2 = sumag5;
spmag2 = spmag6;
spmag = spmag5;
spmag5 = 0;
spmag6 = 0;
sumag5 = 0;
if (magsp2 > 0)
{
magsp3 = 1;
}
}
if (enemyhp < 1)
{
printf("     A magnificent contest!\n\n");
printf("     Great follow-up!\n");
if (ctr < 8)
printf("     An incredible finish!\n");
if ((cpusp > 1) & (ctr < 8))
printf("\n");
if (cpusp > 1)
printf("     With %d Special Attacks in as many rounds!\n", cpusp);
printf("     You won in %d rounds with the Hyper Magic Bonus Attack!\n", ctr);
if ((cpusp > 1) & (ctr < 8))
printf("\n");
if ((cpusp > 1) & (ctr > 7))
printf("\n");
if ((cpusp < 2) & (ctr < 8))
printf("\n");
if (((ctr > 7) & (cpusp > 1)) || ((ctr > 7) & (cpusp < 2)))
printf("     Unstoppable magic tactics!\n\n");
if ((ctr < 8) & (cpusp < 2))
printf("     Magical prowess!\n\n");
if ((ctr < 8) & (cpusp > 1))
{
printf("     A victory of champions!\n\n");
}
break;
}
if (dice4 > dice3)
{
playerhp = (playerhp - 2);
printf("\n     CPU cancels Magic Heal!\n\n");
printf("     CPU counters!\n");
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
}
diceI = (rand() % 100) + 1;
if ((diceI < 6) && (dice3 < dice4) && (playerhp > 0))
{
playerhp = (playerhp - 3);
printf("\n     CPU executes Magic Counter Attack!\n");
printf("     Player HP at %d\n", playerhp);
}
if (dice3 == dice4)
{
printf("\n     CPU cancels Magic Heal!\n");
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
dice5 = (rand() % 29 + (diflev + cpusp));// 14 then was 17 THEN 18 then 19 NOW 20 OR 21??? 22 23 24 26 27 28 -1
dice6 = (rand() % 31) + 1;//30-40 30
}
if (dice5 > dice6) //&& (consecvic2 < 3) && (spctrbon < 2))
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
printf("\n     You execute Special Attack!\n");
enemyhp = (enemyhp - 5); //was minus 4, before that minus 5
printf("     CPU HP at %d\n", enemyhp);
normag = 0;
cpusp = 0;
}
if (enemyhp < 1)
{
if (ctr == 1)
{
printf("\n     The match is already over?\n");
printf("     You won in the first round with the Special Attack!\n\n");
printf("     Fantastic skill!\n\n");
}
if ((ctr > 1) && (ctr <= 4))
{
printf("\n     That was an impressive early victory!\n");
printf("     You won in round %d with the Special Attack!\n\n", ctr);
printf("     Excellent tactics!\n\n");
}
if (ctr > 4)
{
printf("\n     That was a strong finish!\n");
printf("     You won in round %d with the Special Attack!\n\n", ctr);
printf("     Effective tactics!\n\n");
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
if (((cpusp < 2) && (ctr < 5)) || ((cpusp > 1) && (ctr > 4)) || ((cpusp > 1) && (ctr < 5)))
printf("\n");
if (ctr < 5)
printf("     A quick victory!\n");
if (cpusp > 1)
printf("     With %d Special Attacks in as many rounds!\n", cpusp);
printf("     You won in Round %d with the Magic Special Attack!\n", ctr);
printf("\n     Good skill!\n\n");
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
if (ctr < 5)
printf("     And an early finish to the fight!\n");
if ((cpusp > 1) && (ctr < 5))
printf("\n");
if (cpusp > 1)
printf("     With consecutive Special Attacks in the last %d rounds!\n", cpusp);
printf("     You won in %d rounds with the Super Special Bonus Combo Attack!\n", ctr);
printf("     I cannot believe what just happened?\n");
printf("\n     That was completely insane!\n\n");
break;
}
if ((spctrbon > 1) && (dice5 > dice6) && (magsp3 < 1) && (magsp >= 0) && (ultsp < 4))
{
enemyhp = (enemyhp - 10);//was 8
printf("\n     You execute the SPECIAL BONUS ATTACK!\n");
printf("     CPU HP at %d\n", enemyhp);
spctrbon = 0;
++cpusp;
}
if (enemyhp < 1)
{
printf("     Great finish!\n");
if (((cpusp < 2) && (ctr < 5)) || ((cpusp > 1) && (ctr > 4)) || ((cpusp > 1) && (ctr < 5))) ///////good formula!
printf("\n");
if (ctr < 5)
printf("     An early victory!\n");
if (cpusp > 1)
printf("     With %d Special Attacks in as many rounds!\n", cpusp);
printf("     You won in %d rounds with the Special Bonus Attack!\n", ctr);
printf("\n     That really was something!\n\n");
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
if (ctr < 5)
printf("     A quick end to the fight!\n");
if (cpusp > 1)
printf("     With consecutive Special Attacks in the last %d rounds!\n", cpusp);
if ((cpusp > 1) && (ctr < 5))
printf("\n");
printf("     You won in %d rounds with the Super Special Attack!\n", ctr);
printf("     That was pure skill!\n");
printf("\n     Spectacular!\n\n");
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
if (ctr < 6)
printf("     Amazing skills!\n");
if ((cpusp > 1) & (ctr < 6))
printf("\n");
if (cpusp > 1)
printf("     You performed %d consecutive Special Attacks in as many rounds!\n", cpusp);
printf("     You won in %d rounds with the Ultra Super Special Attack!\n", ctr);
if ((cpusp > 1) & (ctr < 6))
printf("\n");
if ((cpusp > 1) & (ctr > 5))
printf("\n");
if ((cpusp < 2) & (ctr < 6))
printf("\n");
if (((ctr > 5) & (cpusp > 1)) || ((ctr > 5) & (cpusp < 2)))
printf("     A powerful finish!\n\n");
if ((ctr < 6) & (cpusp < 2))
printf("     An expert finish!\n\n");
if ((ctr < 6) & (cpusp > 1))
{
printf("     Text Fighting at it's best!\n\n");
}
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
printf("     It was an incredible fight!\n");
if (ctr < 8)
printf("     An incredibly skillful finish!\n");
if ((cpusp > 1) & (ctr < 8))
printf("\n");
if (cpusp > 1)
printf("     You performed %d Special Attacks in consecutive rounds!\n", cpusp);
printf("     You won in %d rounds with the Special Hyper Bonus Attack!\n", ctr);
if ((cpusp > 1) & (ctr < 8))
printf("\n");
if ((cpusp > 1) & (ctr > 7))
printf("\n");
if ((cpusp < 2) & (ctr < 8))
printf("\n");
if (((ctr > 7) & (cpusp > 1)) || ((ctr > 7) & (cpusp < 2)))
printf("     Expert tactics!\n\n");
if ((ctr < 8) & (cpusp < 2))
printf("     Raw power!\n\n");
if ((ctr < 8) & (cpusp > 1))
{
printf("     Text Fighting has a new contender!\n\n");
}
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
printf("     A magnificent victory!\n\n");
if (ctr < 5)
printf("     A quick end to the match!\n");
if (cpusp > 1)
printf("     With %d Special Attacks in as many rounds!\n", cpusp);
printf("     You won in %d rounds, with the Super Special Magic Combo Attack!\n", ctr);
printf("     That was a very nice combo!\n");
printf("\n");
printf("     Powerful technique!\n\n");
break;
}
}
if (dice6 > dice5)
{
playerhp = (playerhp - 2);
printf("\n     CPU evades Special Attack!\n\n");
printf("     CPU counters!\n");
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
}
diceJ = (rand() % 100) + 1;
if ((diceJ < 8) && (dice5 < dice6) && (playerhp > 0))
{
playerhp = (playerhp - 2);
printf("\n     CPU executes Special Counter Attack!\n");
printf("     Player HP at %d\n", playerhp);
}
if (dice5 == dice6)
{
printf("\n     CPU defends Special Attack!\n");
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
printf("\n     CPU executes Normal Attack!\n");
printf("     Player HP at %d\n", playerhp);
}
if ((playerhp < 1) && ((diceB == 2) || (diceB == 3) || (diceB == 4) || (diceB == 5) || (diceB == 6)))
{
printf("\n\n\n\n     You have to keep your guard up!\n\n");
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
printf("\n     CPU executes SPECIAL ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
spatt = 1;
spatt2 = 1;
if (playerhp < 1)
printf("\n     That's an impressive CPU finish!\n\n");// add if cpu win comes early comment ????????????????????
}
if (playerhp < 1)
{
diceF = 15;
}//added
else
{//added
if (((choice == 's') || (choice == 'n')) && (choice != 'm'))
diceF = (rand() % 42 + diflev) + 1; //42
else
if ((choice == 'm') && (choice != 's') && (choice != 'n'))
diceF = (rand() % 54 + diflev) + 1; //54
}
if  ((diceF > 32) && (diceB >= 5) && (diceB <= 6) && (playerhp > 0))
{
playerhp = (playerhp - 6);
printf("\n     CPU executes SUPER SPECIAL ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
if (playerhp < 1)
printf("\n     An outstanding CPU performance!\n\n");
supspatt = 1;
supspatt2 = 1;
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
diceC = (rand() % 72 + diflev) + 1; //72
else
if ((choice == 's') && (choice != 'm') && (choice != 'n'))
diceC = (rand() % 86 + diflev) + 1; //86
}//added
if  ((diceC > 48) && (diceB == 5) && (playerhp > 0))//48
{
playerhp = (playerhp - 8);//was 7
printf("\n     CPU executes HYPER SUPER SPECIAL ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
if (playerhp < 1)
printf("\n     THIS GAME IS OVER!\n\n");
hypsp = 1;
hypsp2 = 1;//added
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
enspcomb6 = 1;
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
if (playerhp < 1)
{
diceM = 15;
}
else
{
diceM = (rand() % 100) + (1 + diflev);
if (((diceM > 68) && (diceB >= 4) && (diceB <= 6)) && (playerhp > 0) && (hypsp2 < 1) && (enspcomb6 < 1))//was 20
{//&& (enemyhp < 5)) DICE E ORIGINALLY 16
{
playerhp = (playerhp - 1); //6
printf("     CPU executes MAGIC SUPER ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
mspatt = 1;
mspatt3 = 1;
if ((mspatt == 1) && (spatt2 == 1) && (supspatt2 != 1))
{
emgspcom5 = 1;
spatt = 0;
}
if ((mspatt == 1) && (supspatt2 == 1) && (spatt2 !=1))
{//added braces
emgspcom = 1;
mspatt = 0;
supspatt = 0;
}
if ((playerhp < 1) && ((spatt2 != 1) && (supspatt2 != 1)))
printf("\n     CPU magic is powerful!\n\n");
}
if ((emgspcom == 1) && ((diceF > 32) && (diceB >= 5) && (diceB <= 6) && (diceM > 68)))
{
printf("\n     THE CPU SUPER MAGIC SUPER SPECIAL COMBO!\n");//
printf("     A FORMIDABLE CPU MAGIC COMBO!\n");
emgspcom = 0;/////////
emagsup = 1;
if (playerhp < 1)
{
printf("     AND A VERY POWERFUL MAGIC COMBO FINISH!\n\n");
}
}
if ((emgspcom5 == 1) && ((diceE > 16) && (diceB >= 4) && (diceB <= 6) && (diceM > 68)))
{
printf("\n     THE CPU SUPER MAGIC SPECIAL COMBO!\n");
printf("     EXCELLENT CPU MAGIC COMBO!\n");
emgspcom5 = 0;///////////////////////////////////////
if (playerhp < 1)
{
printf("\n     AND AN IMPRESSIVE MAGIC COMBO FINISH!\n\n");
}
}//supspatt = 0;
if (playerhp < 1)
{
diceN = 15; //brace was here
}
else
{
diceN = (rand() % 100) + (1 + diflev); //28 go bit lower or higher depends
}
if ((emagsup > 0) && ((diceN > 44) && (diceB >= 4) && (diceB <= 6)) && (playerhp > 0) && ((spatt2 < 1) && (supspatt2 < 1)))
{//&& (enemyhp < 5)) DICE E ORIGINALLY 16
playerhp = (playerhp - 1); //6
printf("\n     CPU executes HYPER MAGIC ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
mspatt4 = 1;
{//added braces
if ((spatt2 < 1) && (supspatt2 < 1))//******
mspatt2 = 0;
if ((mspatt3 == 1) && (mspatt4 == 1)) //&& (playerhp > 0))
{//added braces
emgspcom4 = 1;
if (playerhp < 1)
{
diceP = 15; //brace was here
}
else
{
diceP = (rand() % 100) + (1 + diflev);
}
if ((emagsup5 > 0) && ((diceP > 38) && (diceB >= 4) && (diceB <= 6)) && ((diceN > 44) && (diceB >= 4) && (diceB <= 6)) && ((diceM > 68) && (diceB >= 4) && (diceB <= 6)) && (playerhp > 0) && ((spatt2 < 1) && (supspatt2 < 1) && (hypsp2 < 1)))// diceN at 80 vs 200 quite rare
{//
playerhp = (playerhp - 10); //6
printf("\n     CPU executes ULTRA MAGIC ATTACK!\n");
printf("     Player HP at %d\n", playerhp);
mspatt5 = 1;
if (playerhp < 1)
printf("\n     GAME OVER!\n\n");
}
}
}
if ((emgspcom4 == 1) && (mspatt5 == 1))
{
emgspcom4 = 0;
emgspcom3 = 1;
}
if ((emgspcom4 == 1) && ((diceN > 44) && (diceB >= 4) && (diceB <= 6)) && ((diceM > 68) && (diceB >= 4) && (diceB <= 6)) && ((mspatt3 > 0) && (mspatt4 > 0)))////////////////&& (playerhp > 0)) //&& (diceB >= ) && (diceB <= 6)))
{
printf("\n     THE CPU HYPER MAGIC SUPER MAGIC COMBO!\n");////
printf("     FANTASTIC CPU MAGIC COMBO!\n");
emgspcom4 = 0;///////
mspatt = 0;
mspatt2 = 0;
mspatt3 = 0;
mspatt4 = 0;//emagsup = 1;
emagsup5 = 1;
if (playerhp < 1)
{
printf("\n     AND AN AWESOME CPU MAGIC WIN!\n\n");
}
}
if ((emgspcom3 == 1) && ((diceP > 38) && (diceB >= 4) && (diceB <= 6)) && ((diceN > 44) && (diceB >= 4) && (diceB <= 6)) && ((diceM > 68) && (diceB >= 4) && (diceB <= 6)) && ((mspatt3 > 0) && (mspatt4 > 0) && (mspatt5 > 0))) //&& (playerhp > 0)) //&& (diceB >= ) && (diceB <= 6)))
{
if (playerhp > 0)
printf("\n");
printf("     THE CPU ULTRA HYPER MAGIC SUPER COMBO!\n");//
printf("     THE ULTIMATE CPU MAGIC COMBO!\n");
printf("     THE CPU CONTROLS THE CONTEST!\n\n");
emgspcom3 = 0;////
if (playerhp < 1)
printf("\n     THE ULTIMATE CPU MAGIC FINISHER!\n\n");
}
}
}
}
if ((diceB > 6) && (playerhp > 0))// 5
{
enemyhp = (enemyhp - 1);
printf("     CPU executes Normal Attack!\n\n");
printf("     You counter!\n");
printf("     CPU HP at %d\n", enemyhp);
if (choice = 'n')
diceG = (rand() % 11) + 1; //WAS 10 was 11///added
diceG = (rand() % 10) + 1; //WAS 10 was 11
if ((diceG > 5) && (consectr < 3))// diceG was 6
++consectr;
}
if (enemyhp < 1)
{
if ((cpusp < 2) && (ctr > 3))
printf("\n");
printf("     Nice move!\n");
if (((cpusp < 2) && (ctr < 4)) || ((cpusp > 1) && (ctr > 3)))
printf("\n");
if (ctr < 4)
printf("     The fight ends early!\n");
if ((cpusp > 1) && (ctr < 4))//
printf("\n");
printf("     You won with the Counter!\n");
if (cpusp > 1)
printf("     With Special Attacks in the last %d consecutive rounds!\n", cpusp);
printf("\n");
printf("     Good defence!\n\n");
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
if ((cpusp < 2) && (ctr > 3))
printf("\n");
}
if ((enemyhp < 1) && (ctrbonon > 0))
{
printf("     Excellent!\n");
if (((cpusp < 2) && (ctr < 4)) || ((cpusp > 1) && (ctr > 3)))
printf("\n");
if (ctr < 4)
printf("     You ended the fight quickly!\n");
if ((cpusp > 1) && (ctr < 4))// || ((cpusp > 1) && (ctr > 3)))/////chnaged here
printf("\n");
printf("     You won with the Counter Bonus!\n");
if (cpusp > 1)
printf("     With consecutive Special Attacks in the last %d rounds!\n", cpusp); //space was at begininning of line!!!!!!!!!!!!!
printf("\n");
printf("     That was a great defence!\n\n");
break;
}
if ((diceB == 1) && (playerhp > 0))
{
printf("     You defend CPU Normal Attack!\n\n");
}
if (playerhp < 1)
{
printf("\n\n     You lost the contest!\n\n");
printf("\n     Enter (0) to exit, (1) to continue\n\n\n");
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
hypsp2 = 0;
spatt2 = 0;
supspatt2 = 0;
supspatt = 0;
hypsp = 0;
spatt = 0;
mspatt3 = 0;
mspatt4 = 0;
mspatt5 = 0;
mspatt = 0;
if (playerhp > 0)
printf("\n\n\n   The next round begins!\n\n\n\n");
}while  (playerhp > 0);
}
if (cpusp < cpusp3)
{
cpusp = 0;
}
if (cpusp > cpusp3)
{
cpusp3 = cpusp;
}
if (bonrec < bonrec2)
{
bonrec = 0;
}
if (bonrec > bonrec2)
{
bonrec2 = bonrec;
}
if (magrec < magrec2)
{
magrec = 0;
}
if (magrec > magrec2)
{
magrec2 = magrec;
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
cpusp = 0;
magsp7 = 0;
ultsp4 = 0;
ultsp3 = 0;
magchn = 0;
mspatt = 0;
spatt = 0;
emgspcom = 0;
//emagsup = 0;
//emagsup5 = 0;
mspatt3 = 0;
mspatt2 = 0;
emgsupatt = 0;
emgspcom = 0;
mspatt3 = 0;
hypsp2 = 0;
spatt2 = 0;
emgspcom2 = 0;
supspatt2 = 0;
emgspcom4 = 0;
emgspcom5 = 0;
mspatt5 = 0;
enspcomb6 = 0;
bonrec = 0;
magrec = 0;
if (diflev > 1)
{
enemyhp = (enemyhp) + (10 * diflev);
playerhp = (playerhp) + (5 * diflev);
}
} while (contest != 5);
printf("\n\n\n\n     ****************************************\n");
printf("     You won the Tournament! Congratulations!\n");
printf("     ****************************************\n\n\n");
printf("     ***You are the Text Fighter %d Champion!***\n\n\n", diflev);
printf("     Total Rounds Played: %d\n\n", ctr2);
if (cpusp3 > 1)
printf("\n\n     *Special Round Chain Record: %d*", cpusp3);
if (bonrec2 > 3)
printf("\n\n    *Bonus Round Chain Record: %d*", bonrec2);
if (magrec2 > 3)
printf("\n\n    *Magic Bonus Round Chain Record: %d*", magrec2);
printf("\n\n\n\n\n\n     GAME OVER!\n\n\n");
emagsup = 0;
emagsup5 = 0;
}
printf("\n     Enter (0) to exit, (1) to continue\n\n\n");
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

