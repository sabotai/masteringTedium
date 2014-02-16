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
    stringstream stringBuffer;
    int laundryBag;
    int nagCount;
    int actionCount;
    bool readyToGo;
    bool homeInit, streetInit, laundromatInit;


void menuDisplay(string command, string _textBuffer1, string _textBuffer2, string _textBuffer3, string _textBuffer4, string _textBuffer5, int _dirtyScore, int _cleanScore){

    if (newDay && dayCount > 1) {
            cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<< endl;
            cout << "xxx                                                                          xxx"<< endl;
            cout << "xx          /$$ /$$ /$$     /$$  /$$$$$$  /$$        /$$$$$$  /$$ /$$         xx"<< endl;
            cout << "x          | $$| $$|  $$   /$$/ /$$__  $$| $$       /$$__  $$| $$| $$          x"<< endl;
            cout << "           | $$| $$ \\  $$ /$$/ | $$  \\ $$| $$      | $$  \\ $$| $$| $$           "<< endl;
            cout << "           |__/|__/  \\  $$$$/  | $$  | $$| $$      | $$  | $$|__/|__/           "<< endl;
            cout << "                      \\  $$/   | $$  | $$| $$      | $$  | $$                   "<< endl;
            cout << "                       | $$    | $$  | $$| $$      | $$  | $$                   "<< endl;
            cout << "                       | $$    |  $$$$$$/| $$$$$$$$|  $$$$$$/                   "<< endl;
            cout << "                       |__/     \\______/ |________/ \\______/                    "<< endl;
            cout << "                             "<< _textBuffer1                                    << endl;
            cout << "                  "<< _textBuffer2                                       << endl;
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
            cout << "::::::::::::::::::::::::::::::::::::  HOME  ::::::::::::::::::::::::::::::::::::"<< endl;
            cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<< endl;
            cout << ":::                                                                          :::"<< endl;
            cout << "::                                                                            ::"<< endl;
            cout << ":                                                                              :"<< endl;
            cout << "                         " << command << endl;}

        if (gameState == 2){
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



    }
}

void clearBuffer() {
            dayDeclaration.str("");
            stringBuffer.str("");
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
        homeInit = true;
        streetInit = true;
        laundromatInit = true;
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
            cout << "        |    by Alec McClure   |                    hMMyMm   +MMMMMs   dMyMMh   "<< endl;
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

        if (actionCount > 4) {
            newDay = true;
            actionCount = 0;
        }


        if (newDay){

            dayCount += 1;


            if (dayCount > 1){
                //textBuffer1 = "REMAINING LIFESPAN REDUCED BY ONE DAY";}
                textBuffer1 = "ONE DAY CLOSER TO DEATH";}
            dayDeclaration << "DAY " << dayCount;
            textBuffer3 = dayDeclaration.str();
            if (dirtyScore < 40) {
                dirtyScore += 2;
            } else {
                if (dirtyScore >= 40 && dirtyScore <= 48){
                    textBuffer2 = "\"I was going to do laundry today, but I didn't\"";
                    dirtyScore += 2;}
                if (dirtyScore >= 50 && dirtyScore <= 68){
                    textBuffer2 = "       You have really let yourself go.";
                    dirtyScore += 1;}
                if (dirtyScore > 68){
                    textBuffer2 = "       All your clothes are now dirty.";}
            }
            textBuffer4 = "--PRESS ENTER--";
            menuDisplay(command, textBuffer1, textBuffer2,textBuffer3, textBuffer4, textBuffer5, dirtyScore,cleanScore);
            //cout << "test";
            getline(cin,command);
            //cin.ignore();

            clearBuffer();

            if (homeInit){
                currentText = "You awake in a dark and filthy room. The air reeks of stale beer and you feel the crunch of forgotten potato chips beneath your feet.  The evening light slipping through the sole window illuminates the room just enough to highlight the soiled clothing surrounding you. This is your bedroom. What does this day hold? Is it \"laundry\"?";
            } else {
                currentText = "You once again awake in this disheveled mess of a room surrounded by filthy clothes.";
            }
            fillBuffer();
            homeInit = false;
            newDay = false;
            menuDisplay(command, textBuffer1, textBuffer2, textBuffer3, textBuffer4, textBuffer5, dirtyScore, cleanScore);

        }


        if (gameState == 1){ //game state 1 is at home
            cout << "     What shall you do?  ";
            getline(cin, command);
            if (command == ""){
                currentText += "...";
                actionCount += 1;}
            else if (command == "laundry" || command == "do laundry") {
                currentText =       "Slow down partner.  If you want to do laundry, you'll have to \"gather\" up some laundry"; }
            else if (command == "gather") {
                if (dirtyScore > 0){
                    laundryBag += 6;
                    dirtyScore -= 6;
                    if (dirtyScore < 0){
                        dirtyScore = 0;}

                    stringBuffer << "You still have " << dirtyScore << " article(s) of dirty clothing lying around";

                    currentText =       "You throw some old socks into your laundry bag." + stringBuffer.str(); }
                else {
                    currentText =       "All your dirty clothes made it into the laundry bag.  It's time to \"head out\" into the street";
                    readyToGo = true;  } }
            else if (command == "head out" && readyToGo == true) {
                    gameState = 2;}



            else if (command == "no") {
                currentText =       "What do you mean no?";
                actionCount +=2;}
            else if (command == "yes") {
                currentText =       "I'm glad you're finally cooperating.  Are you trying to say you want to do \"laundry\"?";
                actionCount +=2;}
            else if (command == "help") {
                currentText =       "There's this expression.  \"Every man is an island\" or something like that.  I think that's how it goes.";
                actionCount += 2;}
            else {
                if (nagCount == 0) {
                    currentText =       "Are you sure you don't want to do \"laundry\"?";
                    actionCount +=1;}
                else if (nagCount == 1) {
                    currentText =       "Are you sure you don't want to do \"laundry\"???";
                    actionCount +=1;}
                else if (nagCount == 2) {
                    currentText =       "Society looks down upon the various body odors emanating from your dirty clothing.  Are you sure you don't want to do \"laundry\"?";
                    actionCount +=1;}
                else if (nagCount == 3) {
                    currentText =       "Not doing laundry just caused you to lose 3 casual friends, but they were'nt that interesting anyways.  You can always do \"laundry\" to attract new ones.";
                    actionCount +=1;}
                else if (nagCount == 4) {
                    currentText =       "Your once loyal pet cat no longer cuddles in your lap or comes within 10 feet of your malodorous room.  Are you sure you don't want to do \"laundry\"?";
                    actionCount +=1;}
                else if (nagCount == 5) {
                    currentText =       "You notice considerable mildew growth on the underside of one of the smaller piles of clothing.  Are you sure you don't want to do \"laundry\"?";
                    actionCount +=1;}
                else if (nagCount > 5) {
                    currentText =       "The putrid smell drifting into the common hallway of your apartment building causes both of your neighbors who have never met to knock on the door and ask \"Are you dead or do you just need to do \"laundry\"?\"";
                    actionCount +=1;
                    nagCount = 0;}

                nagCount += 1;
            }

        }

        if (gameState == 2){ //game state 1 is at home
            if (streetInit) {
                currentText = "You find yourself in the middle of a cold and deserted city street carrying an overbearing load on your shoulders.  The overly familiar path to the laundromat is etched into your memory.  You look \"left\" at what is ahead.";
                streetInit = false;
                clearBuffer();
                fillBuffer();
                menuDisplay(command, textBuffer1, textBuffer2, textBuffer3, textBuffer4, textBuffer5, dirtyScore, cleanScore);  }

            cout << "     What shall you do?  ";
            getline(cin, command);
            if (command == ""){
                currentText += "...";   }
            else {
                if (command == "left") {

                }
                else {
                currentText = "I'm pretty sure you want to go \"left\".";    }

            }

            }


        if (gameState == 3){ //game state 1 is at home
            if (laundromatInit) {
                currentText = "The laundromat is full of loud children and others who similarly felt the call to action";
                streetInit = false;
                clearBuffer();
                fillBuffer();
                menuDisplay(command, textBuffer1, textBuffer2, textBuffer3, textBuffer4, textBuffer5, dirtyScore, cleanScore);  }

            cout << "     What shall you do?  ";
            getline(cin, command);
            if (command == ""){
                currentText += "...";   }
            else {
                if (command == "left") {

                }
                else {
                currentText = "I'm pretty sure you want to go \"left\".";    }

            }

            }

        clearBuffer();
        fillBuffer();

        menuDisplay(command, textBuffer1, textBuffer2, textBuffer3, textBuffer4, textBuffer5, dirtyScore, cleanScore);
    }
    return 0;
}
