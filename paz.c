/*                                                             
                                                             
  ______   ________     ______                               
 /_____/\ /_______/\   /_____/\            oo                
 \:::_ \ \\::: _  \ \  \:::__\/        '. (v )  .'           
  \:(_) \ \\::(_)  \ \    /: /           '(  \.'             
   \: ___\/ \:: __  \ \  /::/___           ``\               
    \ \ \    \:.\ \  \ \/_:/____/\                           
     \_\/     \__\/\__\/\_______\/      &&& &&  & &&         
                                    && &\/&\|& ()|/ @, &&    
                                   &\/(/&/&||/& /_/)_&/_&    
                                &() &\/&|()|/&\/ '%" & ()    
       v .   ._, |_  .,        &_\_&&_\ |& |&&/&__%_/_& &&   
    `-._\/  .  \ /    |/_    &&   && & &| &| /& & % ()& /&&  
        \\  _\, y | \//       ()&_---()&\&\|&&-&&--%---()~   
  _\_.___\\, \\/ -.\||            &&     \|||                
    `7-,--.`._||  / / ,                   | |                
    /'     `-. `./ / |/         (    )    | |                
              |  |//             (oo)     |||                
              |  /      )\.-----/(O O)    |O|      /\    /   
   \__/       |- |     # ;       / u      | |     (' )  (    
   (oo)       | =|       (  .   |} )      | |      (  \  )   
  //||\\      |  |        |/ `.;|/;       |||      |(__)/    
-------------/ ,. \-------"-----"-"----=-//.\\ --------------
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define KBAD  "\x1B[0;31m"
#define KGOOD  "\x1B[0;32m"
#define KMED  "\x1B[0;33m"
#define KQUES  "\x1B[0;35m"
#define KNORM  "\x1B[0;37m"
#define KINP  "\x1B[0;36m"
#define KNUM  "\x1B[1m"
#define RESET "\033[0m"

char intro_mess[] = "                                                             \n                                                             \n  ______   ________     ______                               \n /_____/\\ /_______/\\   /_____/\\            oo                \n \\:::_ \\ \\\\::: _  \\ \\  \\:::__\\/        '. (v )  .'           \n  \\:(_) \\ \\\\::(_)  \\ \\    /: /           '(  \\.'             \n   \\: ___\\/ \\:: __  \\ \\  /::/___           ``\\               \n    \\ \\ \\    \\:.\\ \\  \\ \\/_:/____/\\                           \n     \\_\\/     \\__\\/\\__\\/\\_______\\/      &&& &&  & &&         \n                                    && &\\/&\\|& ()|/ @, &&    \n                                   &\\/(/&/&||/& /_/)_&/_&    \n                                &() &\\/&|()|/&\\/ '%\" & ()    \n       v .   ._, |_  .,        &_\\_&&_\\ |& |&&/&__%_/_& &&   \n    `-._\\/  .  \\ /    |/_    &&   && & &| &| /& & % ()& /&&  \n        \\\\  _\\, y | \\//       ()&_---()&\\&\\|&&-&&--%---()~   \n  _\\_.___\\\\, \\\\/ -.\\||            &&     \\|||                \n    `7-,--.`._||  / / ,                   | |                \n    /'     `-. `./ / |/         (    )    | |                \n              |  |//             (oo)     |||                \n              |  /      )\\.-----/(O O)    |O|      /\\    /   \n   \\__/       |- |     # ;       / u      | |     (' )  (    \n   (oo)       | =|       (  .   |} )      | |      (  \\  )   \n  //||\\\\      |  |        |/ `.;|/;       |||      |(__)/    \n-------------/ ,. \\-------\"-----\"-\"----=-//.\\\\ --------------\n";

/*LANGUAGE VARIABLES*/
char * animals;
unsigned char animalnum;
unsigned char animalength;
char animal[16];

char * run_mess1;
char * run_mess2;
char * kills_you_mess1;
char * kills_you_mess2;
char * you_kill_mess1;
char * you_kill_mess2;
char * you_meet_mess1;
char * you_meet_mess2;
char * you_meet_mess3;
char * help_mess;
char * fat_mess1;
char * fat_mess2;
char * muscle_mess1;
char * muscle_mess2;
char * obese_mess;
char * starve_mess;
char * death_mess;
char * life_mess1;
char * life_mess2;





signed char stats[2] = {16, 16};

int setLang(char lang[4]) {

if (!strcmp(lang,"nge")) { 
	animals = "ALCESPAPIOPONGOBISONADIESCAPRASAIGA";
	animalnum = 7;
	animalength = 5;
	char baseanimal[] = "12345";
	strcpy(animal, baseanimal);

	run_mess1 = "8o8 myv vub ";
 	run_mess2 = "\n";
	kills_you_mess1 = "";
	kills_you_mess2 = " 6y ot 8o8\n";
	you_kill_mess1 = "8o8 6y 8oc 6yp oh ot ";
	you_kill_mess2 = "\n";
	you_meet_mess1 = "8o8 reb ot ";
	you_meet_mess2 = " docducot ny o ot CILOGLAM docducot rid ";
	you_meet_mess3 = "\n";
	help_mess = "8o8 nyz 3o3 ot (a) oh 3ac ot 8o8 sax 3o3   8o8 nyz 3o3 ot (r) oh 3ac ot 8o8 myv 3o3\n";
	fat_mess1 = "8o8 doc ot joj3acjojzem3o3 o ot CILOGLAM docducot rid ";
	fat_mess2 = "\n";
	muscle_mess1 = "8o8 doc ot myb o ot ciluglom docducot rid ";
	muscle_mess2 = "\n";
	obese_mess = "8o8 6ym nox 3o3 3ac ot 8o8 6yp 3o3.\n";
	starve_mess = "8o8 6ym doj xo 3o3 3ac ot 8o8 6yp 3o3\n";
	death_mess = "joj 6y 8oc 6ym oh ot 8o8\n";
	life_mess1 = "8o8 jab y0 ruw docducot rid ";
	life_mess2 = "\n";
	return 0;
} else if (!strcmp(lang,"eng")) {
	animals = "elkyakcowgnuramassapeboaemuhogpigfoxdogcathenowleelaukbatjayratbugbeeantflpy";
	animalnum = 25;
	animalength = 3;
	char baseanimal[] = "123";
	strcpy(animal, baseanimal);

	run_mess1 = "You run from the ";
	run_mess2 = ".\n";
	kills_you_mess1 = "The ";
	kills_you_mess2 = " kills and eats you.\n";
	you_kill_mess1 = "You kill and eat the ";
	you_kill_mess2 = ".\n";
	you_meet_mess1 = "You meet a ";
	you_meet_mess2 = " that has a mass of ";
	you_meet_mess3 = "kg.\n";
	help_mess = "Press \"a\" to attack or \"r\" to run.\n";
	fat_mess1 = "You have ";
	fat_mess2 = "kg of fat. ";
	muscle_mess1 = "You have ";
	muscle_mess2 = "kg of muscle.\n";
	obese_mess = "You die of obesity!\n";
	starve_mess = "You die of starvation!\n";
	death_mess = "You died!\n";
	life_mess1 = "You survived ";
	life_mess2 = " days.\n";
	return 0;
} else if (!strcmp(lang,"esp")) {
	animals = "vacagatofocapatorataloboloromeromicoauratoporanamonoasnotororayaponibueypavorenosapomulomucarino";
	animalnum = 24;
	animalength = 4;
	char baseanimal[] = "1234";
	strcpy(animal, baseanimal);

	run_mess1 = "Corres del ";
	run_mess2 = ".\n";
	kills_you_mess1 = "El ";
	kills_you_mess2 = " te mata y te come.\n";
	you_kill_mess1 = "Matas y comes el ";
	you_kill_mess2 = ".\n";
	you_meet_mess1 = "Encuentras un ";
	you_meet_mess2 = " que tiene una masa de ";
	you_meet_mess3 = "kg.\n";
	help_mess = "Apreta \"a\" para atacar o \"r\" para correr.\n";
	fat_mess1 = "Tienes ";
	fat_mess2 = "kg de grasa. ";
	muscle_mess1 = "Tienes ";
	muscle_mess2 = "kg de musculo.\n";
	obese_mess = "¡Mueres de obesidad!\n";
	starve_mess = "Mueres de inanción!\n";
	death_mess = "¡Moriste!\n";
	life_mess1 = "Sobreviviste durante ";
	life_mess2 = " días.\n";
	return 0;
} else if (!strcmp(lang,"fra")) {
	animals = "elkyakcowgnuramassapeboaemuhogpigfoxdogcathenowleelaukbatjayratbugbeeantflpy";
	animalnum = 25;
	animalength = 3;
	char baseanimal[] = "123";
	strcpy(animal, baseanimal);

	run_mess1 = "Tu cours du ";
	run_mess2 = ".\n";
	kills_you_mess1 = "Le ";
	kills_you_mess2 = " te tue.\n";
	you_kill_mess1 = "Tu tue et manges le ";
	you_kill_mess2 = ".\n";
	you_meet_mess1 = "Tu trouves un ";
	you_meet_mess2 = " qui a une masse de ";
	you_meet_mess3 = "kg.\n";
	help_mess = "Presse \"a\" pour attaquer ou \"r\" pour courir.\n";
	fat_mess1 = "Tu as ";
	fat_mess2 = "kg de graisse. ";
	muscle_mess1 = "Tu as ";
	muscle_mess2 = "kg de muscule.\n";
	obese_mess = "Tu meurs de l'obésité !\n";
	starve_mess = "Tu meurs de famine !\n";
	death_mess = "Tu es mouru !\n";
	life_mess1 = "Tu est survenu pendant ";
	life_mess2 = " jours.\n";
	return 0;
}
return 1;
}






void randomAnimal() {
	unsigned char index = (rand()%animalnum)*animalength;
	memcpy(animal,animals+index,animalength);
}

void run() {
	stats[0]--;
	printf(KMED "%s%s%s", run_mess1, animal, run_mess2);
}

/*void capitalAnimal(char capitanimal[]) {
	char uppercase;
	unsigned char i = 0;
	while (i < 5) {
		uppercase = toupper(animal[i]);
		memcpy(capitanimal+i,&uppercase,1);
		i++;
	}
}*/

void attack(signed char animalStats[2]) {
	/*char capitanimal[6];
	capitalAnimal(capitanimal);*/

	if (animalStats[1] > stats[1]) {
		stats[0] = -64;
		printf(KBAD "%s%s%s", kills_you_mess1, animal, kills_you_mess2);
	} else {
		stats[0] += animalStats[0]/2;
		signed char gains = animalStats[1] - stats[1]*3/5;
		if (gains < 0) {gains = 0;}
		stats[1] += gains;
		stats[0] -= gains;

		printf(KGOOD "%s%s%s",you_kill_mess1,animal,you_kill_mess2);
	}
}

void playRound() {
	signed char otherStats[2] = { rand()%40, rand()%40 };
	randomAnimal();
	printf(KNORM "%s%s%s" KNUM "%03d" KNORM "%s" KINP,you_meet_mess1,animal,you_meet_mess2,otherStats[0]+otherStats[1],you_meet_mess3);
	char decision;
	unsigned char validInput = 0;
	while (!validInput) {
		scanf(" %c", &decision);
		validInput=1;
		switch(decision) {
			case 'a':
				attack(otherStats);
				break;
			case 'r':
				run();
				break;
			default:
				validInput = 0;
				printf(KQUES "%s" KINP, help_mess);
		}
	}
}

int main(int argc, char *argv[]) {
	char lang[4] = "nge";
	if(argc > 1) {
		memcpy(lang,argv[1],3);
	}

	if(setLang(lang)){
		printf("Error: language not recognized\n");
		return 1;
	}

	printf("%s",intro_mess);

	unsigned int days = 0;
	srand(time(NULL));

	while ( stats[0] > 0 ) {
		printf(KNORM "%s" KNUM "%03d" KNORM "%s%s" KNUM "%03d" KNORM "%s",fat_mess1,stats[0],fat_mess2,muscle_mess1,stats[1],muscle_mess2);
		playRound();
		stats[0]--;
		days++;
	}
	if (stats[0] < -65) {
		printf(KBAD "%s", obese_mess);
	} else if (stats[0] == -65) {
		printf(KBAD "%s",death_mess);
	} else {
		printf(KBAD "%s",starve_mess);
	}
	printf(KGOOD "%s" KNUM "%i" KGOOD "%s" RESET,life_mess1,days,life_mess2);
	return 0;
}

