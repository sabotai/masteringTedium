#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <ctime>
#include <sstream> //to use stringstream to combine int and string for the day count

using namespace std;


    bool setup;
    int gameState;
    int dirtyScore;
    int cleanScore;
    int dayCount;
    string command;
    string word_1;
    string word_2;
    string textLine1, textLine2;
    string currentText;
    string textBuffer1, textBuffer2, textBuffer3, textBuffer4, textBuffer5;
    bool newDay, firstDay;
    stringstream dayDeclaration;
    int laundryBasket;
    int nagCount;
    int actionCount;


void menuDisplay(string command, string _textBuffer1, string _textBuffer2, string _textBuffer3, string _textBuffer4, string _textBuffer5, int _dirtyScore, int _cleanScore){
<<<<<<< HEAD

    if (newDay && dayCount > 1) {
            cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<< endl;
            cout << "xxx                                                                          xxx"<< endl;
            cout << "xx        /$$ /$$ /$$     /$$  /$$$$$$  /$$        /$$$$$$  /$$ /$$           xx"<< endl;
            cout << "x        | $$| $$|  $$   /$$/ /$$__  $$| $$       /$$__  $$| $$| $$            x"<< endl;
            cout << "         | $$| $$ \\  $$ /$$/ | $$  \\ $$| $$      | $$  \\ $$| $$| $$             "<< endl;
            cout << "         |__/|__/  \\  $$$$/  | $$  | $$| $$      | $$  | $$|__/|__/             "<< endl;
            cout << "                    \\  $$/   | $$  | $$| $$      | $$  | $$                     "<< endl;
            cout << "                     | $$    | $$  | $$| $$      | $$  | $$                     "<< endl;
            cout << "                     | $$    |  $$$$$$/| $$$$$$$$|  $$$$$$/                     "<< endl;
            cout << "                     |__/     \\______/ |________/ \\______/                      "<< endl;
            cout << "                           "<< _textBuffer1                                    << endl;
            cout << "                          "<< _textBuffer2                                       << endl;
            cout << "                                     "<< _textBuffer3                            << endl;
            cout << "                                 "<< _textBuffer4                                << endl;
            cout << "x                                                                              x"<< endl;
            cout << "xx                                                                            xx"<< endl;
            cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<< endl;
            cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<< endl;
            cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<< endl;
            cout << "xxx                                                                          xxx"<< endl;
            cout << "xx                                                                            xx"<< endl;
            cout << "x                                                                              x"<< endl;
            cout << "                         " << command << endl;}



    else {
        if (gameState == 1) {
=======
>>>>>>> b6231b12ed271d7bd6928df0219599da73781f4e
            cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<< endl;
            cout << ":::                                                                          :::"<< endl;
            cout << "           DIRTY CLOTHES: "<<_dirtyScore<<"     CLEAN CLOTHES: "<<_cleanScore<<"     DAYS ELAPSED: "<<dayCount<< endl;
            cout << ":::                                                                          :::"<< endl;
            cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<< endl;
            cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<< endl;
            cout << "::                                                                            ::"<< endl;
            cout << ":                                                                              :"<< endl;
            cout << "     "<< _textBuffer1                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer2                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer3                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer4                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer5                                                   <<"     "<< endl;
            cout << "                                                                                "<< endl;
            cout << ":                                                                              :"<< endl;
            cout << "::                                                                            ::"<< endl;
            cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<< endl;
<<<<<<< HEAD
            cout << "::::::::::::::::::::::::::::::::::::  HOME  ::::::::::::::::::::::::::::::::::::"<< endl;
=======
            cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<< endl;
>>>>>>> b6231b12ed271d7bd6928df0219599da73781f4e
            cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<< endl;
            cout << ":::                                                                          :::"<< endl;
            cout << "::                                                                            ::"<< endl;
            cout << ":                                                                              :"<< endl;
<<<<<<< HEAD
            cout << "                         " << command << endl;}

        if (gameState == 2){}
            cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"<< endl;//dbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdb"<< endl;
            cout << "[][                                                                          ][]"<< endl;
            cout << "           DIRTY CLOTHES: "<<_dirtyScore<<"     CLEAN CLOTHES: "<<_cleanScore<<"     DAYS ELAPSED: "<<dayCount<< endl;
            cout << "[][                                                                          ][]"<< endl;
            cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"<< endl;
            cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"<< endl;
            cout << "[]                                                                            []"<< endl;
            cout << "[                                                                              ]"<< endl;
            cout << "     "<< _textBuffer1                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer2                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer3                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer4                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer5                                                   <<"     "<< endl;
            cout << "                                                                                "<< endl;
            cout << "[                                                                              ]"<< endl;
            cout << "[]                                                                            []"<< endl;
            cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"<< endl;
            cout << "[][][][][][][][][][][][][][][][][][  STREET  ][][][][][][][][][][][][][][][][][]"<< endl;
            cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]"<< endl;
            cout << "[][                                                                          ][]"<< endl;
            cout << "[]                                                                            []"<< endl;
            cout << "[                                                                              ]"<< endl;
            cout << "                         " << command << endl;}

        if (gameState == 3){
            cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<< endl;//dbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdb"<< endl;
            cout << "$$$                                                                          $$$"<< endl;
            cout << "           DIRTY CLOTHES: "<<_dirtyScore<<"     CLEAN CLOTHES: "<<_cleanScore<<"     DAYS ELAPSED: "<<dayCount<< endl;
            cout << "$$$                                                                          $$$"<< endl;
            cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<< endl;
            cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<< endl;
            cout << "$$                                                                            $$"<< endl;
            cout << "$                                                                              $"<< endl;
            cout << "     "<< _textBuffer1                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer2                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer3                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer4                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer5                                                   <<"     "<< endl;
            cout << "                                                                                "<< endl;
            cout << "$                                                                              $"<< endl;
            cout << "$$                                                                            $$"<< endl;
            cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<< endl;
            cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$  LAUNDROMAT  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<< endl;
            cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<< endl;
            cout << "$$$                                                                          $$$"<< endl;
            cout << "$$                                                                            $$"<< endl;
            cout << "$                                                                              $"<< endl;
            cout << "                         " << command << endl;}


=======
            cout << "                         " << command << endl;
            //cout << endl;
>>>>>>> b6231b12ed271d7bd6928df0219599da73781f4e

}

void clearBuffer() {
            dayDeclaration.str("");
            textBuffer1.clear();
            textBuffer2.clear();
            textBuffer3.clear();
            textBuffer4.clear();
            textBuffer5.clear();
}

void fillBuffer() {
        textBuffer1 = currentText.substr (0,70);
        if (currentText.length()>70)
            {textBuffer2 = currentText.substr (70,70);
             if (currentText.length()>140) {
                textBuffer3 = currentText.substr (140,70);
                if (currentText.length()>210) {
                    textBuffer4 = currentText.substr (210,70);
                    if (currentText.length()>280) {
                        textBuffer5 = currentText.substr (280,70);
                        }
                    }
                }
             }
}




int main()
{


    //if (setup){

        gameState = 0;
        dirtyScore = 32;
        cleanScore = 0;
        newDay = true;
        firstDay = true;
        setup = false;

        nagCount = 0;
    //}

    while( true )
    {
        command.clear();


        if (gameState < 1) {

            cout << "                                                                                "<< endl;
            cout << "  ███╗   ███╗ █████╗ ███████╗████████╗███████╗██████╗ ██╗███╗   ██╗ ██████╗     "<< endl;
            cout << "  ████╗ ████║██╔══██╗██╔════╝╚══██╔══╝██╔════╝██╔══██╗██║████╗  ██║██╔════╝     "<< endl;
            cout << "  ██╔████╔██║███████║███████╗   ██║   █████╗  ██████╔╝██║██╔██╗ ██║██║  ███╗    "<< endl;
            cout << "  ██║╚██╔╝██║██╔══██║╚════██║   ██║   ██╔══╝  ██╔══██╗██║██║╚██╗██║██║   ██║    "<< endl;
            cout << "  ██║ ╚═╝ ██║██║  ██║███████║   ██║   ███████╗██║  ██║██║██║ ╚████║╚██████╔╝    "<< endl;
            cout << "  ╚═╝     ╚═╝╚═╝  ╚═╝╚══════╝   ╚═╝   ╚══════╝╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝ ╚═════╝     "<< endl;
            cout << "  ████████╗███████╗██████╗ ██╗██╗   ██╗███╗   ███╗    hdmmmyyyyyh////smmmms     "<< endl;
            cout << "  ╚══██╔══╝██╔════╝██╔══██╗██║██║   ██║████╗ ████║    smmmmhhyhhdysyyymmmmo     "<< endl;
            cout << "     ██║   █████╗  ██║  ██║██║██║   ██║██╔████╔██║   ymMMMMMMMMMMMMMMMMMMMNy    "<< endl;
            cout << "     ██║   ██╔══╝  ██║  ██║██║██║   ██║██║╚██╔╝██║  odmmmmmmmmmmmmmmmmmmmmmmo   "<< endl;
            cout << "     ██║   ███████╗██████╔╝██║╚██████╔╝██║ ╚═╝ ██║  hMMMMMMMMMMMMMMMMMMMMMMMh   "<< endl;
            cout << "     ╚═╝   ╚══════╝╚═════╝ ╚═╝ ╚═════╝ ╚═╝     ╚═╝  hMMMMMMmddddmdddddMMMMMMh   "<< endl;
            cout << "         ______________________                     hMMMMddNdo:...:odMddMMMMh   "<< endl;
            cout << "        [                      ]                    hMMMhNm:    `    -mNyMMMh   "<< endl;
            cout << "        |  A LAUNDRY SIMULATOR |                    hMMdmM.  `yNMNh.  .NNhMMh   "<< endl;
            cout << "        |  by Alec McClure     |                    hMMyMm   +MMMMMs   dMyMMh   "<< endl;
            cout << "        [______________________]                    hMMddM-  `sNMNy.  .MNhMMh   "<< endl;
            cout << "         ----------------------                     hMMMhmN/         :mNyMMMh   "<< endl;
            cout << "         ----------------------                     hMMMMddNms/---/omMddMMMMh   "<< endl;
            cout << "                                                    hMMMMMMmdddmmmddddMMMMMMh   "<< endl;
            cout << "        -------------------------                   hMMMMMMMMMMMMMMMMMMMMMMMh   "<< endl;
            cout << "       < PRESS ENTER TO CONTINUE >                  ymmmmmmmmmmmmmmmmmmmmmmmy   "<< endl;
            cout << "        -------------------------                   ymmmmmmmmmmmmmmmmmmmmmmmy   ";



            cin.ignore();
            cout << endl;
            gameState = 1;
        }

        clearBuffer();
<<<<<<< HEAD

        if (actionCount > 4) {
            newDay = true;
            actionCount = 0;
        }


        if (newDay){

            dayCount += 1;


            if (dayCount > 1){
                textBuffer1 = "LIFESPAN REDUCED BY ONE DAY";}
            dayDeclaration << "DAY " << dayCount;
            textBuffer3 = dayDeclaration.str();
            if (dirtyScore <= 48) {
                dirtyScore += 2;
            } else {
                if (dirtyScore >= 50 && dirtyScore <= 68){
                    textBuffer2 += "You have really let yourself go.";
                    dirtyScore += 1;}
                if (dirtyScore > 68){
                    textBuffer2 += "All your clothes are now dirty.";}
            }
            textBuffer4 = "--PRESS ENTER--";
=======

        if (actionCount > 4) {
            newDay = true;
            actionCount = 0;
        }
        if (newDay){
            dayCount += 1;
            dayDeclaration << "DAY " << dayCount;
            textBuffer1 = dayDeclaration.str();
            textBuffer3 = "--PRESS ENTER--";
>>>>>>> b6231b12ed271d7bd6928df0219599da73781f4e
            menuDisplay(command, textBuffer1, textBuffer2,textBuffer3, textBuffer4, textBuffer5, dirtyScore,cleanScore);
            //cout << "test";
            getline(cin,command);
            //cin.ignore();

            clearBuffer();

            if (firstDay){
                currentText = "You awake in a dark and filthy room. The air reeks of stale beer and you feel the crunch of forgotten potato chips beneath your feet.  The evening light slipping through the sole window illuminates the room just enough to highlight the soiled clothing surrounding you. This is your bedroom. What does this day hold? Is it *laundry*?";
            } else {
                currentText = "You once again awake in this disheveled mess of a room surrounded by filthy clothes.";
            }
            fillBuffer();
            firstDay = false;
            newDay = false;
            menuDisplay(command, textBuffer1, textBuffer2, textBuffer3, textBuffer4, textBuffer5, dirtyScore, cleanScore);

        }


        if (gameState == 1){ //game state 2 is at home
            cout << "     What shall you do?  ";
            getline(cin, command);
            if (command == ""){
                currentText += "...";
                actionCount += 1;}
            else if (command == "laundry" || command == "do laundry") {
                currentText =       "Slow down partner.  If you want to do laundry, you'll have to *gather up some laundry*";}
            else if (command == "gather up some laundry") {
                currentText =       "You throw an old sock into your basket.";
                laundryBasket +=1;}
            else if (command == "no") {
                currentText =       "What do you mean no?";
                actionCount +=2;}
            else if (command == "yes") {
                currentText =       "I'm glad you're finally cooperating.  Are you trying to say you want to do *laundry*?";
                actionCount +=2;}
            else if (command == "help") {
                currentText =       "There's this expression.  \"Every man is an island\" or something like that.  I think that's how it goes.";
                actionCount += 2;}
            else {
                if (nagCount == 0) {
                    currentText =       "Are you sure you don't want to do *laundry*?";
                    actionCount +=1;}
                else if (nagCount == 1) {
                    currentText =       "Are you sure you don't want to do *laundry*???";
                    actionCount +=1;}
                else if (nagCount == 2) {
                    currentText =       "Society looks down upon the various body odors emanating from your dirty clothing.  Are you sure you don't want to do *laundry*?";
                    actionCount +=1;}
                else if (nagCount == 3) {
                    currentText =       "Not doing laundry just caused you to lose 3 casual friends, but they were'nt that interesting anyways.  You can always do *laundry* to attract new ones.";
                    actionCount +=1;}
                else if (nagCount == 4) {
                    currentText =       "Your once loyal pet cat no longer cuddles in your lap or comes within 10 feet of your malodorous room.  Are you sure you don't want to do *laundry*?";
                    actionCount +=1;}
                else if (nagCount == 5) {
                    currentText =       "You notice considerable mildew growth on the underside of one of the smaller piles of clothing.  Are you sure you don't want to do *laundry*?";
                    actionCount +=1;}
                else if (nagCount > 5) {
                    currentText =       "The putrid smell drifting into the common hallway of your apartment building causes both of your neighbors who have never met to knock on the door and ask \"Are you dead or do you just need to do *laundry*?\"";
                    actionCount +=1;
                    nagCount = 0;}

                nagCount += 1;
            }

        }

        clearBuffer();
        fillBuffer();

        menuDisplay(command, textBuffer1, textBuffer2, textBuffer3, textBuffer4, textBuffer5, dirtyScore, cleanScore);
    }
    return 0;
}
