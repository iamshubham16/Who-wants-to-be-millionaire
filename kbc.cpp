/******************************************************************
*         __      ___  _  ___
*         \ \    / / || |/ _ \
*          \ \/\/ /| __ | (_) |
*        __ \_/\_/_|_||_|\___/___ ___
*        \ \    / /_\ | \| |_   _/ __|
*         \ \/\/ / _ \| .` | | | \__ \
*         _\_/\_/_/ \_\_|\_|_|_| |___/    By ~ [@]
*        |_   _/ _ \  | _ ) __|                    Shubham Guglani
*          | || (_) | | _ \ _|                     Shrishti Gupta
*       __ |_| \___/  |___/___|_ ___  _  _   _   ___ ___
*      |  \/  |_ _| |  | |  |_ _/ _ \| \| | /_\ | _ \ __|
*      | |\/| || || |__| |__ | | (_) | .` |/ _ \|   / _|
*      |_|  |_|___|____|____|___\___/|_|\_/_/ \_\_|_\___|
*
*******************************************************************/

// HEADER FILES.
#include <fstream.h> // FOR I/O STREAMS & FILE HANDLING
#include<stdio.h>
#include <string.h>  // TO USE STD. FUNCTIONS EG. STRCMP(), STRCPY() ETC.
#include <stdlib.h>  // TO USE STD. FUNCTIONS EG. SYSTEM(), RANDOM() ETC.
#include <process.h> // TO USE STD. FUNCTIONS EG. EXIT() ETC.
#include <windows.h>
#include<dir.h>




// GLOBAL FUNCTIONS DEFINATIONS.
void credits ( ) ;
void documentation ( ) ;
void help ( ) ;
void save_user ( ) ;
void thanks ( ) ;
void WWM (  ) ;  // Game logo #1
void WWM2 (  ) ; // Game logo #2
void changecolor ( ) ;
void box1();
void box2();
/* Defination of structure game_Data this structure
   will contain all the data for questions          */
struct game_data
{
    char question [ 5 ][ 250 ] ;
    char option1 [ 5 ][ 50 ], option2 [ 5 ][ 50 ], option3 [ 5 ][ 50 ], option4 [ 5 ][ 50 ] ;
    int answer [ 5 ] ;
} ;


/* FUNCTION DEFINATION FOR " save_data ( ) "
 * THIS FUNCTION SAVES DATA TO CURRENT DIRECTORY
 */
void save_data ( )
{
    //save data files
    ofstream file ;
    box1();// SHOWS LICENCE AGREEMENT
    file . open ( "DATALEVEL.DAT", ios :: binary | ios :: noreplace ) ;  // Levels.dat contains all the questions for the quiz
    if ( !file ) ;
    // IF FILE ALREADY EXISTS THEN WILL EXIT.
    else
    {
        // IF FILE DOES NOT EXISTS THEN IT WILL BE CREATED.
        game_data temp ;
        for ( int i = 0 ; i < 10 ; ++i )
        {
            switch( i )
            {
            /*
             * THERE ARE 3 QUESTIONS AVAILABLE FOR EACH LEVEL
             */
            case 0:
                strcpy(temp.question[0],"Which of these diseases is also known as \"dimaagi bukhar\"?");
                strcpy(temp.option1[0],"Tetanus");
                strcpy(temp.option2[0],"Rabies");
                strcpy(temp.option3[0],"Japanese Encephalitis");
                strcpy(temp.option4[0],"Dengue");
                temp.answer[0]=2;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[1],"Which group did Sampat Pal Devi start in Bundelkhand to fight violence\n against women?");
                strcpy(temp.option1[1],"Nari Mukti Vahini");
                strcpy(temp.option2[1],"Laxmibai Sena");
                strcpy(temp.option3[1],"Mahila Morcha");
                strcpy(temp.option4[1],"Gulabi Gang");
                temp.answer[1]=3;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[2],"In 2014, India and 10 other Asian countries have been certified free of\n what disease by WHO?");
                strcpy(temp.option1[2],"Tuberculosis");
                strcpy(temp.option2[2],"Polio");
                strcpy(temp.option3[2],"Small Pox");
                strcpy(temp.option4[2],"Plague");
                temp.answer[2]=1;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[3],"Which of these phrases refers to the act of making a fool of somebody?");
                strcpy(temp.option1[3],"Total Siyapaa");
                strcpy(temp.option2[3],"Boogie Woogie");
                strcpy(temp.option3[3],"Jhingalaala");
                strcpy(temp.option4[3],"Ullu Banaoing");
                temp.answer[3]=0;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                break;
            case 1:

                strcpy(temp.question[0],"Which of these is the title of a film starring Akshay Kumar and \n Sonakshi Sinha ?");
                strcpy(temp.option1[0],"Bajirao Singham");
                strcpy(temp.option2[0],"Rowdy Rathore");
                strcpy(temp.option3[0],"Robinhood");
                strcpy(temp.option4[0],"Lovely Singh");
                temp.answer[0]=1;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[1],"In Which of these events did Pinki Pramanik win a gold medal at the \n 2006 Doha Asian Games ?");
                strcpy(temp.option1[1],"400 m relay");
                strcpy(temp.option2[1],"800 m");
                strcpy(temp.option3[1],"Discus Throw");
                strcpy(temp.option4[1],"400 m");
                temp.answer[1]=0;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[2],"Who is the first woman to become CEO of the soft drink giant PepsiCO ?");
                strcpy(temp.option1[2],"Virginia Rometty");
                strcpy(temp.option2[2],"Indra Nooyi");
                strcpy(temp.option3[2],"Ursula Burns");
                strcpy(temp.option4[2],"Meg Whitman");
                temp.answer[2]=1;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[3]," Which leader made her facebook debut in 2012 with the post I gave\n voice to what millions of Indians went to see in a President ?");
                strcpy(temp.option1[3],"Mamata Banerjee");
                strcpy(temp.option2[3],"Sonia Gandhi");
                strcpy(temp.option3[3],"Mayawati");
                strcpy(temp.option4[3],"Jayalalithaa");
                temp.answer[3]=0;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                break;
            case 2:
                strcpy(temp.question[0],"Which of these events is described in the kishkindha kande of the \n Ramayana ?");
                strcpy(temp.option1[0],"Rama meets Hanuman");
                strcpy(temp.option2[0],"Rama weds SIta");
                strcpy(temp.option3[0],"Slaying of Ravana");
                strcpy(temp.option4[0],"Sitas kidnapping");
                temp.answer[0]=0;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[1],"What does a Kilo equal to, as in kilometre or kilogram ?");
                strcpy(temp.option1[1],"10");
                strcpy(temp.option2[1],"100");
                strcpy(temp.option3[1],"1000");
                strcpy(temp.option4[1],"10000");
                temp.answer[1]=2;//>> ANSWER NUMBER HERE <<
                temp.answer[1]=2;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[2],"In 1860, Which British official became the first auditor General of \n India ?");
                strcpy(temp.option1[2],"Sir A F Cox");
                strcpy(temp.option2[2],"Sir Proby Cautley");
                strcpy(temp.option3[2],"Lord Sallsbury");
                strcpy(temp.option4[2],"Sir Edmund Drummond");
                temp.answer[2]=3;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[3],"Which of these is the score of a player with no points in a game of \n tennis?");
                strcpy(temp.option1[3],"Kiss");
                strcpy(temp.option2[3],"Hug");
                strcpy(temp.option3[3],"Romance");
                strcpy(temp.option4[3],"Love");
                temp.answer[3]=3;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                break;
            case 3:
                strcpy(temp.question[0],"According to the mahabharata , which Pandava got his name from the fact \n that there was no one more handsome \n than him in the family?");
                strcpy(temp.option1[0],"Arjuna");
                strcpy(temp.option2[0],"heema");
                strcpy(temp.option3[0],"Sahdeva");
                strcpy(temp.option4[0],"Nakula");
                temp.answer[0]=3;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[1],"Under whose captaincy has India won the most number of test Matches until \n now?");
                strcpy(temp.option1[1],"M S Dhoni");
                strcpy(temp.option2[1],"Sourav Ganguly");
                strcpy(temp.option3[1],"Md Azharuddin");
                strcpy(temp.option4[1],"Kapil Dev");
                temp.answer[1]=2;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[2],"Which of these festivals is not celebrated on a full moon?");
                strcpy(temp.option1[2],"Holika Dahan");
                strcpy(temp.option2[2],"Raksha Bandhan");
                strcpy(temp.option3[2],"Janmashtami");
                strcpy(temp.option4[2],"BuDh Jayanti");
                temp.answer[2]=2;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[3],"The \"Jal Satyagraha\" protest launched in August 2012 is associated with \n which of these dams?");
                strcpy(temp.option1[3],"Omkareshwar");
                strcpy(temp.option2[3],"Sardar Sarovar");
                strcpy(temp.option3[3],"Tehru");
                strcpy(temp.option4[3],"Gandhi Sagar");
                temp.answer[3]=2;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                break;
            case 4:
                strcpy(temp.question[0],"Which of these creatures can look up with one eye while looking down with the \n other eye at the same time?");
                strcpy(temp.option1[0],"Bat");
                strcpy(temp.option2[0],"Shark");
                strcpy(temp.option3[0],"Chameleon");
                strcpy(temp.option4[0],"Owl");
                temp.answer[0]=2;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[1],"Who was the NDA backed candidate against Hamid Ansari in the 2012 indian \n vice-presidential elections?");
                strcpy(temp.option1[1],"Yashwant Sinha");
                strcpy(temp.option2[1],"S Y Quereshi");
                strcpy(temp.option3[1],"Jaswant Singh");
                strcpy(temp.option4[1],"Arun Jaitley");
                temp.answer[1]=1;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[2],"Which of the following dish is made from Curd (Dahi) ?");
                strcpy(temp.option1[2],"Kofta");
                strcpy(temp.option2[2],"Raita");
                strcpy(temp.option3[2],"Kheer");
                strcpy(temp.option4[2],"Kulfi");
                temp.answer[2]=1;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[3],"After separating from Janata Dal, George fernandes and Nitish Kumar formed \n which party in 1994?");
                strcpy(temp.option1[3],"Janata Dal (U)");
                strcpy(temp.option2[3],"Samata party");
                strcpy(temp.option3[3],"Janata Dal (Secular");
                strcpy(temp.option4[3],"Rashtriya Janata Dal");
                temp.answer[3]=1;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                break;
            case 5:
                strcpy(temp.question[0]," Which of these tribes chiefly resides in kokrajhar and its surrounding \n districts of Assam?");
                strcpy(temp.option1[0],"Chakma");
                strcpy(temp.option2[0],"Bodo");
                strcpy(temp.option3[0],"Naga");
                strcpy(temp.option4[0],"Santhal");
                temp.answer[0]=1;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[1]," Transmission of HIV from HIV positive pregnant mother to her child can be \n prevented by which of these treatments ?");
                strcpy(temp.option1[1],"Vaccination");
                strcpy(temp.option2[1],"Chemotherapy");
                strcpy(temp.option3[1],"Antiretroviral Therapy");
                strcpy(temp.option4[1],"Exchange of blood of newborn");
                temp.answer[1]=2;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[2],"According to a story in the \"Panchatantra\", whose heart did the crocodile?s \n wife want to eat ?");
                strcpy(temp.option1[2],"Human");
                strcpy(temp.option2[2],"Frog");
                strcpy(temp.option3[2],"Lion");
                strcpy(temp.option4[2],"Monkey");
                temp.answer[2]=3;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[3],"Which of these colours are common to the Indian and Pakistani national flags ?");
                strcpy(temp.option1[3],"White and Blue");
                strcpy(temp.option2[3],"Blue and Green");
                strcpy(temp.option3[3],"White and Green");
                strcpy(temp.option4[3],"Saffron and Green");
                temp.answer[3]=2;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                break;
            case 6:
                strcpy(temp.question[0],"Which television show has the subtitle \"Dastak\" ?");
                strcpy(temp.option1[0],"CID");
                strcpy(temp.option2[0],"Crime patrol");
                strcpy(temp.option3[0],"Adalat");
                strcpy(temp.option4[0],"FIR");
                temp.answer[0]=1;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[1],"In the context of food items, what are \"Gujhiya\" and \"Khaaja\" \n varities of ?");
                strcpy(temp.option1[1],"Sweets");
                strcpy(temp.option2[1],"Soup");
                strcpy(temp.option3[1],"Salad");
                strcpy(temp.option4[1],"Cold Drinks");
                temp.answer[1]=0;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[2],"Complete this hindi Kahavat Dhoodh Ka Dhoodh Aur .....?");
                strcpy(temp.option1[2],"Ghee ka ghee");
                strcpy(temp.option2[2],"Pani ka pani");
                strcpy(temp.option3[2],"Makhaan Ka Makhaan");
                strcpy(temp.option4[2],"Dahi Ka Dahi");
                temp.answer[2]=1;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[3],"Who is the author of the novels  The Immortals of Meluha and  The \n Secrets of the Nagas ?");
                strcpy(temp.option1[3],"Amish Tripathi");
                strcpy(temp.option2[3],"Amitav Ghosh");
                strcpy(temp.option3[3],"Ashok Banker");
                strcpy(temp.option4[3],"Aravind Adiga");
                temp.answer[3]=0;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                break;
            case 7:
                strcpy(temp.question[0],"Which of these phrases is often used to describe a love story revolving \n around three people ?");
                strcpy(temp.option1[0],"Love Line");
                strcpy(temp.option2[0],"Love Sqruare");
                strcpy(temp.option3[0],"Love Circle");
                strcpy(temp.option4[0],"Love Triangle");
                temp.answer[0]=3;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[1],"On 20 Sep 2012, which video was recognized by Guinness World Records as \n the most \"liked\" video in YouTube history ?");
                strcpy(temp.option1[1],"Dhanush's Why this Kolaveri Di");
                strcpy(temp.option2[1],"Justin Bieber's  Baby");
                strcpy(temp.option3[1],"PSY's Gangnam Style");
                strcpy(temp.option4[1],"Adele's Rolling in the Deep");
                temp.answer[1]=2;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[2]," Which of the following is made by mixing \"khameer in \"maida\"?");
                strcpy(temp.option1[2],"Missi Roti");
                strcpy(temp.option2[2],"Naan");
                strcpy(temp.option3[2],"Kachori");
                strcpy(temp.option4[2],"Aaalu parathan");
                temp.answer[2]=1;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[3],"Which is the only country whose postage stamps do not feature the name of \n the country issuing them ?");
                strcpy(temp.option1[3],"Russia");
                strcpy(temp.option2[3],"Great Britan");
                strcpy(temp.option3[3],"Iceland");
                strcpy(temp.option4[3],"USA");
                temp.answer[3]=1;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                break;
            case 8:
                strcpy(temp.question[0],"15 April 2012 was the 100th anniversary of which of these events or incidents ?");
                strcpy(temp.option1[0],"Tagore Winning the Nobel");
                strcpy(temp.option2[0],"Dandi March");
                strcpy(temp.option3[0],"Sinking of the Titanic");
                strcpy(temp.option4[0],"Founding of IBM");
                temp.answer[0]=2;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[1],"Who is the only member of the 15th Lok Sabha to get elected to the House \n unopposed?");
                strcpy(temp.option1[1],"Agatha Sangma");
                strcpy(temp.option2[1],"Dimple Yadav");
                strcpy(temp.option3[1],"Harsimarat Kaur Badal");
                strcpy(temp.option4[1],"Kanimozhi");
                temp.answer[1]=1;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[2],"In Delhi, What are Teez hazari, Welcome, Kashmere Gate and Vishwa Vidyalaya?");
                strcpy(temp.option1[2],"Universities");
                strcpy(temp.option2[2],"Courts");
                strcpy(temp.option3[2],"Gates of old Delhi");
                strcpy(temp.option4[2],"Metro Stations");
                temp.answer[2]=3;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[3],"what has been e currency of Greece sine 2002?");
                strcpy(temp.option1[3],"Euro");
                strcpy(temp.option2[3],"Birbhum");
                strcpy(temp.option3[3],"Jangipur");
                strcpy(temp.option4[3],"Midnapore");
                temp.answer[3]=0;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                break;
            case 9:
                strcpy(temp.question[0],"What is the \"shot\" in the olympic sport of \"Shot Put\"?");
                strcpy(temp.option1[0],"Rubber Disc");
                strcpy(temp.option2[0],"Metal Ball");
                strcpy(temp.option3[0],"Javelin");
                strcpy(temp.option4[0],"Wooden Stick");
                temp.answer[0]=1;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[1]," Which state has the highest coal reserve in India?");
                strcpy(temp.option1[1],"Jharkhand");
                strcpy(temp.option2[1],"Odisha");
                strcpy(temp.option3[1],"Chatisgarh");
                strcpy(temp.option4[1],"Andra Pradesh");
                temp.answer[1]=0;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[2],"Which part of \"Pudina\" plant is normally used to make \"pudina chutney\"?");
                strcpy(temp.option1[2],"seeds");
                strcpy(temp.option2[2],"Stems");
                strcpy(temp.option3[2],"Root");
                strcpy(temp.option4[2],"Tree");
                temp.answer[2]=0;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                strcpy(temp.question[3],"Which of these numbers is used before the word \"Shringar\" to describe a \n fully beautiful women?");
                strcpy(temp.option1[3],"Chhattees");
                strcpy(temp.option2[3],"Solah");
                strcpy(temp.option3[3],"Chhappan");
                strcpy(temp.option4[3],"Gyarah");
                temp.answer[3]=1;//>> ANSWER NUMBER HERE <<
                //////////////////////////////////////////
                break;

            default:
            {
                cout << " Fatal Error! \\##01 / Please contact Devlopers! \n"
                     << " In Main Menu PRESS H For Help... \n"
                     << " Sorry For Inconvinience... " ;
            }
            }// SWITCH(i)
            file . write( ( char* ) &temp, sizeof ( game_data ) ) ;
        }//FOR LOOP
        file . close ( ) ;
    }//ELSE

}//SAVE_DATA();

// CLASS ' player_data ' DEFINATION.
class player_data
{
    // Private Data Members Of Class
    char name [ 25 ], age [ 3 ] ;
    int difficulty, fifty50, expertadvice, audiencepole, level ;
    long int prize ;
public :
    // Public Member Functions
    player_data ( ) // constructor for initialising
    {
        fifty50 = expertadvice = audiencepole = level = 0 ; // initialize with '0'
    }
    void audiencep ( int ) ;
    void correct_ans (  ) ; // To Inform User Has given correct answer
    void expertadv ( int ) ;
    void fifty ( int );
    void get_info ( ) ; // To Get Info Of Player
    void lifelines ( int ) ;
    void loose_level (  ) ;
    void play ( ) ;
    void quit ( int ) ;
    void rules (  ) ;
    void set_price (  ) ;
    void win_level ( ) // To Incrimement level
    {
        level ++ ;
        set_price ( ) ;
    }
    void wrong_ans ( int ans ) ; // To Inform User Has given incorrect answer
    void reset ( ) // THIS WILL RESET DATA TO '0'
    {
        fifty50 = expertadvice = audiencepole = level = 0 ;
    }
} player ; // Global Declaration Of Object 'Player'.
void player_data :: expertadv ( int ans )
{
    int  a = level/5 ; // WILL GIVE 0 FOR LEVEL < 5 AND WILL GIVE RANDOM VALUE FOR LEVEL > 5
    a = random( a ) ;
    if ( ans == 3 )
        ans = 3 - a ;
    else
        ans = ans + a ;
    cout << "\n ------------------ EXPERT ADVICE. --------------------------- "
         << "\n Expert Advices You that the correct answer should be \n \t\t\t \"~ Option " << ans + 1 << "  \"~ \n "
         << "\n ------------------------------------------------------------- ";
}
void player_data :: correct_ans (  ) // To Inform User Has given correct answer
{
    system( "cls" ) ;
    WWM2 ( ) ;
    cout << " \nYour Answer Is Correct !!! " << endl
         << "You won! Rs -> " << prize << endl ;
    if ( level == 10 )
    {
        cout << "CONGRATULATIONS YOU ARE NOW A \n"
             << "      __  __ ___ _    _    ___ __   _  _   _   __   __ \n"
             << "     |  \\/  |_ _| |  | |  |_ _/ _ \\| \\| | /_\\ | _ \\ __|\n"
             << "     | |\\/| || || |__| |__ | | (_) | .` |/ _ \\|   / _| \n"
             << "     |_|  |_|___|____|____|___\\___/|_|\\_/_/ \\_\\_|_\\___|\n" ;
    }
    system( " pause " ) ;
}
void player_data :: wrong_ans ( int ans )// To Inform User Has given incorrect answer
{
    system ( "cls" ) ;
    WWM ( ) ;
    cout << "\nYour Answer Is InCorrect !!! " << endl
         << "Correct Answer is " << ans + 1 << endl
         << "You won ! " << prize << endl ;
    reset ( ) ;
    system ( " pause " ) ;
}
void player_data :: rules (  )
{
    char ch, line [ 80 ] ;
    fstream file ;
    file . open ( "DATARULES.DAT", ios :: in  ) ;
    while ( file )
    {
        file . getline ( line, 80 ) ;
        cout << line << endl ;
    }
    file . close ( );
}
void player_data :: fifty ( int ans )
{
    int a = random ( 2 ) ;
    if ( ans == 0 )
        cout << " Option " << 2 << " and " << " Option " <<  4 << " Are Incorrect \n";
    else if ( ans == 1 )
        cout << " Option " << 3 << " and " << " Option " <<  4  << " Are Incorrect \n";
    else if ( ans == 2 )
        cout << " Option " << 1 << " and " << " Option " << 2 << " Are Incorrect \n";
    else if ( ans == 3 )
        cout << " Option " << 1 << " and " << " Option " << 2 << " Are Incorrect \n";

}

void player_data :: audiencep ( int ans )
{
    int  n = random ( 20 ), a = 50 + n, b = 80 - a, c = 20 - n, d = 10  + n ;

    cout << "\n~ Audience has given following voting percentages ~\n"
         << " _______________________________________________ \n"
         << "   Option                Voting %                \n"
         << " _______________________________________________ \n   " ;
    if (ans == 0 )
    {

        cout << 1 << "                     " << a << " % \n   "
             << 2 << "                     " << b << " % \n   "
             << 3 << "                     " << c << " % \n   "
             << 4 << "                     " << d << " % \n   " ;
    }
    else if (ans == 1 )
    {

        cout << 1 << "                     " << b << " % \n   "
             << 2 << "                     " << a << " % \n   "
             << 3 << "                     " << c << " % \n   "
             << 4 << "                     " << d << " % \n   " ;
    }
    else if (ans == 2 )
    {

        cout << 1 << "                     " << c << " % \n   "
             << 2 << "                     " << b << " % \n   "
             << 3 << "                     " << a << " % \n   "
             << 4 << "                     " << d << " % \n   " ;
    }
    else if (ans == 3 )
    {

        cout << 1 << "                     " << d << " % \n   "
             << 2 << "                     " << b << " % \n   "
             << 3 << "                     " << c << " % \n   "
             << 4 << "                     " << a << " % \n   " ;
    }


}
// Class Player_data member function Definations
void player_data :: lifelines( int ans )
{
    char ch ;
    cout << "\n =========================================================\n"
         << "  Chose Your Life Line => ~~~Press~~~  \n"
         << " =========================================================\n"
         << " Audience Pole        --> A  --- ";
    if ( audiencepole == 0 )
        cout << "Available";
    else
        cout << "Used";
    cout << " \n Expert Advice        --> E   --- " ;
    if ( expertadvice == 0 )
        cout << "Available";
    else
        cout  << "Used";
    cout << " \n Fifty Fifty          --> F   --- ";
    if ( fifty50 == 0 )
        cout << "Available" ;
    else
        cout << "Used" ;
    cout << "\n ------ ANY OTHER KEY TO RETURN ------ "
         << "\n Enter Your Choice. >> " ;
    cin >> ch ;
    switch ( toupper( ch ) )
    {
    case 'E':
        if ( expertadvice == 0 )
        {
            player . expertadv ( ans );
            expertadvice ++ ;
        }
        else
        {
            cout << " $ Already Used!! $ \n " ;
        }
        break ;

    case 'F' :
        if ( fifty50 == 0)
        {
            player . fifty ( ans ) ;
            fifty50 ++  ;
        }
        else
        {
            cout << " $ Already Used!! $ \n " ;
        }
        break ;
    case 'A' :
        if ( audiencepole == 0 )
        {
            player . audiencep ( ans ) ;
            audiencepole ++ ;
        }
        else
        {
            cout << " $ Already Used!! $ \n " ;
        }
        break ;
    default :
        break ;
    }
} // lifelines()

void player_data :: loose_level ( )
{
    // IF A PLAYER LOOSES

    if ( level < 5 )
        level = 0 ;
    else
    {
        level = 5 ;
    }
    set_price ( ) ;
}
void player_data :: get_info ( )
{
    cout << "-------------------- ADD YOUR INFO! ----------------------------------------\n"
         << "[+] Player Name  -> " ;
    cin >> name ;
    cout << "[+] Player Age   -> " ;
    cin  >> age ;
    cout << "----------------------------------------------------------------------------\n"
         << " Hello! " << name << endl
         << " Welcome! to the Game of Who Want To Be A Millionare !!!\n" ;
    rules (  ) ;
    system ( " pause " ) ;
}
void player_data :: set_price( )
{
    switch ( level )
    {
    case 0 :
        prize = 0 ;
        break ;
    case 1 :
        prize = 10000 ;
        break ;
    case 2 :
        prize = 25000 ;
        break ;
    case 3 :
        prize = 100000 ;
        break ;
    case 4 :
        prize = 150000 ;
        break ;
    case 5 :
        prize = 500000 ;
        break ;
    case 6 :
        prize = 2500000 ;
        break ;
    case 7 :
        prize = 5000000 ;
        break ;
    case 8 :
        prize = 10000000 ;
        break ;
    case 9 :
        prize = 50000000;
        break ;
    case 10 :
        prize = 10000000 ;
        break ;
    default :
        cout << " \n ##03 Application Error!!!! Contact Devlopers " ;

    }// switch end
}
void player_data :: quit (int ans)
{
    WWM ( ) ;
    cout << "The correct answer is "
         << ans + 1 << endl ;
    player . set_price ( ) ;
    cout << " you won -> Rs : " << prize << endl ;
    reset ( ) ;
}
void new_game ( )
{
    player . get_info ( ) ;
    player . play ( ) ;
}
void Continue_game ( )
{
    system ( "cls" ) ;
    fstream savefile ( "DATAUSER.DAT", ios::binary | ios::in |ios::app |ios::nocreate) ;
    if( ! savefile )
    {
        cout << " Saved File Does NOT exist!!! \n " ;
    }
    else
    {

        player . rules ( ) ;
        savefile . read ( (  char* ) &player, sizeof ( game_data ) ) ;
        savefile . close ( ) ;
        cout << " #Welcome BACK "  ;
        player . play ( ) ;

    }

}
void main_menu ( )
{
    char ch ;
    do
    {
        system ( "cls" ) ;
        WWM2 ( ) ;

        cout << "\n    +---------------------------------------------------------------+\n"
             << "    |                     Main Menu                                 |\n"
             << "    +---------------------------------------------------------------+\n"
             << "    |    Options      >>    Press                                   |\n"
             << "    +---------------------------------------------------------------+\n"
             << "    |[+] New Game            N                                      |\n"
             << "    |[+] Continue            C                                      |\n"
             << "    |[+] Help?               H                                      |\n"
             << "    |[+] Exit                E                                      |\n"
             << "    +---------------------------------------------------------------+\n"
             << "    |Enter Your Choice >> " ;
        cin >> ch ;

        switch ( toupper ( ch ) )
        {
        case 'N':
            system ( " cls " ) ;
            WWM2 ( ) ;
            new_game ( ) ;
            break ;

        case 'C':
            system ( " cls " ) ;
            Continue_game ( ) ;
            break ;
        case 'H':
            do
            {

                system ( " cls " ) ;
                WWM2 ( ) ;
                cout << " ---------------------------------------\n"
                     << "    PRESS      For                      \n"
                     << " [+]  D   -->  Devlopers  INFO          \n"
                     << " [+]  L   -->  License                  \n"
                     << " [+]  C   -->  Credits                  \n"
                     << " [+]  G   -->  GO Back To Main Menu.    \n"
                     << " ---------------------------------------\n Choice >> " ;

                cin >> ch ;
                switch ( toupper( ch ) )
                {
                case 'D' :
                    help ( ) ;
                    break ;
                case 'L' :
                    documentation ( ) ;
                    break ;
                case 'C' :
                    credits ( ) ;
                    break ;
                case 'G' :
                    break ;
                default :
                    cout << "Invalid Choice!!\n";
                }
            }
            while ( ch != 'G' && ch !='g' ) ;
            break ;
        case 'E':
            box2();
            break ;

        default:
            cout << "\t #Invalid Choice ! Please Enter a Valid Choice!! \n " ;

        }//switch()

    }
    while ( 1 ) ; // Infinite LOOP
}// main_menu()
void currentlevel( int level )
{
    system( " cls " ) ;

    cout << "\n\n ============================================================================\n"
         << "  Question        Price        Your Position          \n"
         << " ============================================================================\n\n";
    cout << " < 1 >       Rs. 10000     " ;
    if ( level > 0 )
        cout << " [*] ANSWERED [*] \n" ;
    else if ( level == 0 )
        cout << " [!] YOU ARE HERE!! [!] \n" ;
    else
        cout << endl ;
    cout << " < 2 >       Rs. 25000     " ;
    if ( level > 1 )
        cout << " [*] ANSWERED [*] \n" ;
    else if ( level == 1 )
        cout << " [!] YOU ARE HERE!! [!] \n" ;
    else
        cout << endl ;

    cout << " < 3 >       Rs. 100000    " ;
    if ( level > 2 )
        cout << " [*] ANSWERED [*] \n" ;
    else if ( level == 2 )
        cout << " [!] YOU ARE HERE!! [!] \n" ;
    else
        cout << endl ;

    cout << " < 4 >       Rs. 150000    ";
    if ( level > 3 )
        cout << " [*] ANSWERED [*] \n" ;
    else if ( level == 3 )
        cout << " [!] YOU ARE HERE!! [!] \n" ;
    else
        cout << endl ;

    cout << " < 5^>  ---> Rs. 500000    ";
    if ( level > 4 )
        cout << " [*] ANSWERED [*] \n" ;
    else if ( level == 4 )
        cout << " [!] YOU ARE HERE!! [!] \n" ;
    else
        cout << endl ;

    cout << " < 6 >       Rs. 2500000   ";
    if ( level > 5 )
        cout << " [*] ANSWERED [*] \n" ;
    else if ( level == 5 )
        cout << " [!] YOU ARE HERE!! [!] \n" ;
    else
        cout << endl ;

    cout << " < 7 >       Rs. 5000000   ";
    if ( level > 6 )
        cout << " [*] ANSWERED [*] \n" ;
    else if ( level == 6 )
        cout << " [!] YOU ARE HERE!! [!] \n" ;
    else
        cout << endl ;

    cout << " < 8 >       Rs. 10000000  ";
    if ( level > 7 )
        cout << " [*] ANSWERED [*] \n" ;
    else if ( level == 7 )
        cout << " [!] YOU ARE HERE!! [!] \n" ;
    else
        cout << endl ;

    cout << " < 9 >       Rs. 50000000  ";
    if ( level > 8 )
        cout << " [*] ANSWERED [*] \n" ;
    else if ( level == 8 )
        cout << " [!] YOU ARE HERE!! [!] \n" ;
    else
        cout << endl ;
    cout << " < 10 >      Rs. 100000000 " ;
    if ( level > 9 )
        cout << " [*] ANSWERED [*] \n" ;
    else if ( level == 9 )
        cout << " [!] YOU ARE HERE!! [!] \n" ;
    else
        cout << endl ;
    cout << "\n ============================================================================\n\n";


}
void player_data :: play ( ) //function containing playing algorithm
{
    set_price ( ) ;
    system( "cls" );
    int n = 0, ech = 0, flag = 0 ;
    char ch1 ;
    game_data current_level ; // structure containing Question data
    fstream gamefile ;
    gamefile . open ( "DATALEVEL.DAT", ios :: binary | ios :: in ) ;
    if( ! gamefile )
    {
        system ( "cls" ) ;
        cout << "\n\nERROR ##2 PLEASE RESTART THE PROGRAM! \n";
        system( "pause" );
    }
    else
    {
        randomize ( ) ;
        n = random ( 4 ) ;
        do
        {
            changecolor ( ) ;
            system ( "cls" ) ;
            cout << "\n\n ## So Here We Go With Your -- Question No. " << level + 1 << "  --- " ;
            gamefile . seekg ( level * sizeof ( game_data ) ) ;
            gamefile . read ( ( char* ) &current_level, sizeof ( game_data ) ) ;

            do
            {
                currentlevel ( level ) ;
                cout << " ^ ---> Minimum Amount Level \n Lifeline Status ( Available -> [ + ] , Used -> [ - ] ) \n Audience Pole - " ;
                if ( audiencepole == 0 )
                    cout << "[+] " ;
                else
                    cout << "[-]" ;
                cout << " Expert Advice - " ;
                if ( expertadvice == 0 )
                    cout << "[+] " ;
                else
                    cout  << "[-]" ;
                cout << " Fifty Fifty - " ;
                if ( fifty50 == 0 )
                    cout << "[+] " ;
                else
                    cout << "[-]" ;
                cout << "\n\n ============================================================================"
                     << "\n\n Press 1,2,3,4 To answer the Question                                        "
                     << "\n Press L for Lifeline Menu                                                     "
                     << "\n Press Q to Quit The Game                                                      "
                     << "\n Press S to Save And Exit.                                                     "
                     << "\n\n ============================================================================"
                     << "\n < " << level + 1 << " : " << current_level . question [ n ] << " > "
                     << "\n ============================================================================\n"
                     << "\n 1: < " << current_level . option1 [ n ] << " > "
                     << "\n 2: < " << current_level . option2 [ n ] << " > "
                     << "\n 3: < " << current_level . option3 [ n ] << " > "
                     << "\n 4: < " << current_level . option4 [ n ] << " > "
                     << "\n\n ============================================================================" ;
                cout << "\n Enter Your Choice >> " ;
                cin >> ch1 ;
                switch ( tolower(ch1) )
                {
                case '1':
                    if ( current_level . answer[n] == 0 )
                    {
                        player . win_level ( ) ;
                        correct_ans ( ) ;
                        break ;
                    }
                    else
                    {
                        system ( " cls " ) ;
                        player . loose_level ( ) ;
                        wrong_ans ( current_level . answer [ n ] ) ;
                        flag = 1 ;
                        break ;
                    }
                case '2':
                    if ( current_level . answer [ n]  == 1 )
                    {
                        player . win_level ( ) ;
                        correct_ans ( ) ;
                        break;
                    }
                    else
                    {
                        system ( " cls " ) ;
                        player . loose_level ( ) ;
                        wrong_ans ( current_level . answer [ n ] ) ;
                        flag = 1 ;
                        break ;
                    }
                case '3':
                    if ( current_level . answer [ n ] == 2 )
                    {
                        player.win_level ( ) ;
                        correct_ans ( ) ;
                        break ;
                    }
                    else
                    {
                        system ( " cls " ) ;
                        player . loose_level ( ) ;
                        wrong_ans ( current_level . answer [ n ] ) ;
                        flag = 1 ;
                        break ;
                    }
                case '4':
                    if ( current_level . answer [ n ] == 3 )
                    {
                        player.win_level ( ) ;
                        correct_ans ( ) ;
                        break ;
                    }
                    else
                    {
                        system ( " cls " ) ;
                        player . loose_level ( ) ;
                        wrong_ans ( current_level . answer [ n ] ) ;
                        flag = 1 ;
                        break ;
                    }
                case 'l':
                    player . lifelines ( current_level . answer [ n ] ) ;
                    break ;
                case 's':
                    int a ;
                    a = MessageBox( 0, "ARE YOU SURE YOU WANT TO SAVE THE GAME? \n"
                                    "PREVIOUS DATA WOULD BE OVERWRITED.\n"
                                    , "SAVE GAME", 4);
                    if ( a == 6 )
                    {
                        MessageBox( 0,"PROGRAM WILL HALT NOW \n"
                                    "THANK YOU FOR USING OUR PROGRAM ", " THANK YOU.",0 );
                        save_user ( ) ;
                        exit ( 0 );
                    }

                    break ;
                case 'q' :

                    a = MessageBox( 0, "ARE YOU SURE YOU WANT TO QUIT THE GAME ?", "QUIT GAME?", 4 );
                    if ( a == 6 )
                    {
                        system ("cls");
                        player . quit ( current_level . answer [ n ] ) ;
                        system ( " pause " ) ;
                        flag = 1 ;
                        ech = 0 ;
                        break ;
                    }
                    else
                    {
                        ech = 2;
                        break;
                    }
                default:
                    cout << "## Invalid Choice!! \n " ;
                    ech = 2 ;
                }
            }
            while( ech != 0 ) ;

        }
        while ( ! flag && level < 10 ) ;
        thanks ( ) ;
    }//else
}
void WWM (  )// fn for logo
{
    changecolor ( ) ;
    char line[ 80 ] ;
    fstream file ;
    file . open ( "DATA1.DAT", ios::in ) ;
    while ( file )
    {
        file . getline ( line, 80 ) ;
        cout << line << endl ;
    }
    file . close ( ) ;
}
void WWM2 (  )// fn for logo
{
    changecolor (  ) ;
    char line[ 80 ] ;
    fstream file ;
    file . open ( "DATA2.DAT", ios :: in ) ;
    while ( file )
    {
        file . getline ( line, 80 ) ;
        cout << line << endl ;
    }
    file . close ( ) ;

}
void thanks( ) // display credits
{
    system ( " cls " ) ;
    changecolor (  ) ;
    char line[ 80 ] ;
    fstream file ;
    file . open ( "DATA3.DAT", ios :: in ) ;
    while ( file )
    {
        file . getline ( line, 80 ) ;
        cout << line << endl ;
    }
    system( " pause " ) ;
    file.close ( );

}
void documentation ( )
{
    system ( " cls " ) ;
    char line [ 80 ] ;
    fstream file ;
    file.open( "DATA4.DAT", ios :: in ) ;
    while ( file )
    {
        file . getline ( line, 80 ) ;
        cout << line << endl ;
    }
    system ( "pause" ) ;
}
void credits ( )
{
    system ( " cls " ) ;
    char line [ 80 ] ;
    fstream file ;
    file.open( "DATA5.DAT", ios :: in ) ;
    while ( file )
    {
        file . getline ( line, 80 ) ;
        cout << line << endl ;
    }
    system ( "pause" ) ;
}
void help ( )
{
    system ( " cls " ) ;
    char line [ 80 ] ;
    fstream file ;
    file.open( "DATA6.DAT", ios :: in ) ;
    while ( file )
    {
        file . getline ( line, 80 ) ;
        cout << line << endl ;
    }
    system ( "pause" ) ;
}
void save_user ( )
{
    fstream file ;
    file . open ( "DATAUSER.DAT", ios :: out | ios :: binary ) ;
    file . write ( ( char* ) &player, sizeof ( player_data ) ) ;
    file . close (  ) ;
}
void changecolor ( ) //RANDOM BACKGROUND COLORS FOR PROGRAM
{
    int n = random( 10 ) ;
    switch ( n )
    {
    case 1 :
        system( "color f3") ;
        break ;
    case 2 :
        system( "color fc") ;
        break ;
    case 3 :
        system( "color 8f") ;
        break ;
    case 4 :
        system( "color 3f");
        break;
    case 5 :
        system( "color 72") ;
        break ;
    case 6 :
        system( "color 70") ;
        break ;
    case 7 :
        system( "color 8f") ;
        break ;
    case 8 :
        system( "color 0a") ;
        break ;
    case 9 :
        system( "color 2f") ;
        break ;
    default :
        system( "color a0") ;
        break ;
    }
}
void box1()
{
    MessageBox( 0,"====================================================\n"
                "This Game is for our OOSD project.\n"
                "It may contain errors.\n"
                "It is incomplete and it may not function properly.\n"
                "=====================================================\n"
                ," OOSD PROJECT ", NULL ) ;
}
void box2()
{
    int a;
    a= MessageBox( 0, "DO YOU WANT TO EXIT ?", "EXIT GAME", 4 );
    if (a == 6 )
    {
        MessageBox( 0, "THANK YOU FOR USING OUR PROGRAM ", " THANK YOU.", 0 );
        exit ( 0 );
    }
}
void box3( )
{

    /*MessageBox( NULL,"==============================\n"
                "   WHO WANTS TO BE A MILLIONIARE BY \n"
                "   Shubham Guglani and Shrishti Gupta \n"
                "==============================\n"
                ,"   ABOUT THE AUTHORS   ", NULL ) ;*/
}

void main( )
{
    system ( " title Who Wants To Be A Millioniare " ) ; //SET TITLE TO CONSOLE WINDOW
    changecolor (  ) ;
    box3( ) ;
    save_data ( ) ; // THIS FUNCTION WILL SAVE DATA
    system ( " cls " ) ;
    WWM ( ) ;
    system( " pause " ) ;
    main_menu ( ) ; //DISPLAY MAIN PROGRAM
}

