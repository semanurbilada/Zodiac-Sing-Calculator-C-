//  Zodiac Sign
//  Created by Semanur Bilada on 18.05.2022.

#include <stdio.h>
int main( )
{
    // definitions
    int day, month;
    const char *zodiacs[12] = {"Aries (Koç)", "Taurus (Boğa)", "Gemini (İkizler)", "Cancer (Yengeç)", "Leo (Aslan)", "Virgo (Başak)", "Libra (Terazi)","Scorpio (Akrep)", "Sagittarius (Yay)", "Capricorn (Oğlak)", "Aquarius (Kova)", "Pisces (Balık)"};
    
    
    // The descriptions of Zodiacs Groups with variable definitions:
    const char *fire = "They tend to be passionate, dynamic, and temperamental.";
    
    const char *earth = "They keep it real. They are the “grounded” people on the planet.";
    
    const char *air = "They are all about action, ideas, and motion. They are the “winds of change.” ";
    
    const char *water = "Intuitive, emotional and ultra-sensitive; they can be as mysterious as the ocean itself. ";
    
    
    // The descriptions of Zodiacs features with variable definitions:
    const char *aries = "They are adventurous, brave and assertive. They like to be pioneers.\nAlthough they make a lot of mistakes due to their ambitious and impatient nature, their warrior personalities allow them to get rid of almost any problem.\n";
    
    const char *taurus = "Art and love occupy a large space in their lives, they are touchy and sensitive.\nTheir stance is firm in the face of what they want in life. They have sustainable determination in line with their goals.\nThey attach great importance to the concept of friends and family.\n\n";
    
    const char *gemini = "Gemini zodiac signs, which are lively and positive, are at the forefront with their sharp intelligence.\nThey like attention, so they attract a lot of attention with their energetic and talkativeness in the environment they are in.\n\n";
    
    const char *cancer = "They are compassionate, emotional and well-intentioned people. Family life is their first priority.\nThey tend to be manipulative with their patient and protective side.\n\n";
    
    const char *leo = "It is a strong and perfectionist zodiac sign.\nAiming to be the best at what he does pushes him to be detail-oriented, creative and idealistic.\nBecause of these features, he often creates the perception that he likes himself too much.\n\n";
    
    const char *virgo = "They are disciplined signs that attach great importance to success and intelligence.\nOrder is everything to them, so they can tend to be obsessive most of the time.\nHe does not like to stand still and always aims to rise.\n\n";
    
    const char *libra = "Libras, who attach great importance to luxury, like to be balanced in their relationships and private lives.\nThey know with their flirtatiousness, they need love.\nThey also have respectful and elegant personalities.\n\n";
    
    const char * scorpio = "It is a ruthless, stubborn, vengeful zodiac sign.\nPassion, lust and war flow in his veins, so it is one of the scariest signs of the Zodiac.\n\n";
    
    const char *sagittarius = "It is a ruthless, stubborn, vengeful zodiac sign.\nPassion, lust and war flow in his veins, so it is one of the scariest signs of the Zodiac.\n\n";
    
    const char *capricorn = "Their determined nature is often perceived by people as stubbornness.\nIt is a self-indulgent sign, so it tends to be self-assured and cautious.\nHe aims for the top with his composure.\n\n";
    
    const char *aquarius = "The sense of responsibility is less than other zodiac signs.\nTrying to avoid the quarrelsome noise as much as possible, Aquarius are known for being relaxed, peaceful, and discreet.\n\n";
    
    const char *picses = "Peace of mind is their first priority.\nThey are dreamy, naive and highly emotional.\nGood intentions are prone to abuse.\n\n";
    
    
    // Starting part:
    printf("---- Welcome to the Zodiac Sign Calculator ----\n\n");
    printf("Here is the 4 elements of Astrology: Zodiac Groups\n");
    printf("1.Fire : Aries, Leo, Sagittarius.\n");
    printf("2.Earth : Taurus, Virgo, Capricorn.\n");
    printf("3.Air : Gemini, Libra, Aquarius.\n");
    printf("4.Water : Cancer, Scorpio, Pisces.\n\n");
    
    
    // for inputs:
    printf("Enter your birth day: ( '__' / __ / ____ ) \n");
    scanf("%d", &day);
    
    printf("Enter your birth month: ( __ / '__' / ____ ) \n");
    scanf("%d", &month);
    
    
    // Calculating part:
    if((day>0 && day<=31) && (month>0 && month<=12 ))  // for the verification
    {
        if((day>=21 && month==3) || (day<20 && month==4))
        {
            printf("\nYour birthday date is ( %d / %d ).\n\n", day, month);  // 21 Mart - 20 Nisan
            printf("So, your zodiac sign is %s.\n", zodiacs[0]);  // Koç
            printf("And your zodiac group is Fire:\n%s\n", fire);
            printf("\nYour horoscope features : %s\n", aries);
        }
        else if((day>=20 && month==4) || (day<20 && month==5))
        {
            printf("\nYour birthday date is (%d / %d).\n\n", day, month);  // 21 Nisan - 20 Mayıs
            printf("So, your zodiac sign is %s.\n", zodiacs[1]);  // Boğa
            printf("And your zodiac group is Earth:\n%s\n", earth);
            printf("\nYour horoscope features : %s\n", taurus);
        }
        else if((day>=20 && month==5) || (day<21 && month==6))
        {
            printf("\nYour birthday date is (%d / %d).\n\n", day, month);  // 20 Mayıs - 21 Haziran
            printf("So, your zodiac sign is %s.\n", zodiacs[2]);  // İkizler
            printf("And your zodiac group is Air:\n%s\n", air);
            printf("\nYour horoscope features : %s", gemini);
        }
        else if((day>=21 && month==6) || (day<22 && month==7))
        {
            printf("\nYour birthday date is (%d / %d).\n\n", day, month);  // 21 Haziran - 22 Temmuz
            printf("So, your zodiac sign is %s.\n", zodiacs[3]);  // Yengeç
            printf("And your zodiac group is Water:\n%s\n", water);
            printf("\nYour horoscope features : %s", cancer);
        }
        else if((day>=22 && month==7) || (day<23 && month==8))
        {
            printf("\nYour birthday date is (%d / %d).\n\n", day, month);  // 23 Temmuz - 23 Ağustos
            printf("So, your zodiac sign is %s.\n", zodiacs[4]);  // Aslan
            printf("And your zodiac group is Fire:\n%s\n", fire);
            printf("\nYour horoscope features : %s", leo);
        }
        else if((day>=23 && month==8) || (day<23 && month==9))
        {
            printf("\nYour birthday date is (%d / %d).\n\n", day, month);  // 23 Ağustos - 23 Eylül
            printf("So, your zodiac sign is %s.\n", zodiacs[5]);  // Başak
            printf("And your zodiac group is Earth:\n%s\n", earth);
            printf("\nYour horoscope features : %s", virgo);
        }
        else if((day>=23 && month==9) || (day<23 && month==10))
        {
            printf("\nYour birthday date is (%d / %d).\n\n", day, month);  // 24 Eylül - 23 Ekim
            printf("So, your zodiac sign is %s.\n", zodiacs[6]);  // Terazi
            printf("And your zodiac group is Air:\n%s\n", air);
            printf("\nYour horoscope features : %s", libra);
        }
        else if((day>=23 && month==10) || (day<22 && month==11))
        {
            printf("\nYour birthday date is (%d / %d).\n\n", day, month);  // 24 Ekim - 23 Kasım
            printf("So, your zodiac sign is %s.\n", zodiacs[7]);  // Akrep
            printf("And your zodiac group is Water:\n%s\n", water);
            printf("\nYour horoscope features : %s", scorpio);
        }
        else if((day>=22 && month==11) || (day<21 && month==12))
        {
            printf("\nYour birthday date is (%d / %d).\n\n", day, month);  // 23 Kasım - 21 Aralık
            printf("So, your zodiac sign is %s.\n", zodiacs[8]);  // Yay
            printf("And your zodiac group is Fire:\n%s\n", fire);
            printf("\nYour horoscope features : %s", sagittarius);
        }
        else if((day>=21 && month==12) || (day<20 && month==1))
        {
            printf("\nYour birthday date is (%d / %d).\n\n", day, month);  // 22 Aralık - 20 Ocak
            printf("So, your zodiac sign is %s.\n", zodiacs[9]);  // Oğlak
            printf("And your zodiac group is Earth:\n%s\n", earth);
            printf("\nYour horoscope features : %s", capricorn);
        }
        else if((day>=20 && month==1) || (day<19 && month==2))
        {
            printf("\nYour birthday date is (%d / %d).\n\n", day, month);  //  21 Ocak - 19 Şubat
            printf("So, your zodiac sign is %s.\n", zodiacs[10]);  // Kova
            printf("And your zodiac group is Air:\n%s\n", air);
            printf("\nYour horoscope features : %s", aquarius);
        }
        else if((day>=19 && month==2) || (day<21 && month==3))
        {
            printf("\nYour birthday date is (%d / %d).\n\n", day, month);  // 20 Şubat - 20 Mart
            printf("So, your zodiac sign is %s.\n", zodiacs[11]);  // Balık
            printf("And your zodiac group is Water:\n%s\n", water);
            printf("\nYour horoscope features : %s", picses);
        }
    } //if
    
    // for the verification of invalid inputs:
    else { printf("You entered invalid date!\nTry again...\n\n"); }

} //main
