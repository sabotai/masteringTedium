#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <ctime>
#include <sstream> //to use stringstream to combine int and string for the day count
#include <stdio.h>

using namespace std;


    bool setup;
    bool won = false;
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
    bool homeInit, streetInit, laundromatInit, restartInit;
    int posCount, readCount;
    int gatherAmount;


void menuDisplay(string command, string _textBuffer1, string _textBuffer2, string _textBuffer3, string _textBuffer4, string _textBuffer5, int _dirtyScore, int _cleanScore){
    //send empty lines to clear the screen
    cout << string( 100, '\n' );

    if (newDay && dayCount > 1) {
            cout << "  ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ "<< endl;
            cout << " ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙  "<< endl;
            cout << " ┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅ "<< endl;
            cout << "                                                                                "<< endl;
            cout << "            /$$ /$$ /$$     /$$  /$$$$$$  /$$        /$$$$$$  /$$ /$$           "<< endl;
            cout << "           | $$| $$|  $$   /$$/ /$$__  $$| $$       /$$__  $$| $$| $$           "<< endl;
            cout << "           | $$| $$ \\  $$ /$$/ | $$  \\ $$| $$      | $$  \\ $$| $$| $$           "<< endl;
            cout << "           |__/|__/  \\  $$$$/  | $$  | $$| $$      | $$  | $$|__/|__/           "<< endl;
            cout << "                      \\  $$/   | $$  | $$| $$      | $$  | $$                   "<< endl;
            cout << "                       | $$    | $$  | $$| $$      | $$  | $$                   "<< endl;
            cout << "                       | $$    |  $$$$$$/| $$$$$$$$|  $$$$$$/                   "<< endl;
            cout << "                       |__/     \\______/ |________/ \\______/                    "<< endl;
            /*cout << "           ╭ $$╭ $$▕ $$     ╱$$  ╱$$$$$$  ╱$$        ╱$$$$$$ ╭ $$╭ $$           "<< endl;
            cout << "           │ $$│ $$▕  $$   ╱$$╱ ╱$$▁▁  $$│ $$       ╱$$▁▁  $$│ $$│ $$           "<< endl;
            cout << "           │ $$│ $$ ╲  $$ ╱$$╱ ▕ $$  ╲ $$│ $$      ▕ $$  ╲ $$│ $$│ $$        "<< endl;
            cout << "           └──╯└──╯  ╲  $$$$╱  ▕ $$  ▕ $$│ $$      ▕ $$  ▕ $$╰──╯╰──╯          "<< endl;
            cout << "                      ╲  $$╱   ▕ $$  ▕ $$│ $$      ▕ $$  ▕ $$                  "<< endl;
            cout << "                       ▏ $$    ▕ $$  ▕ $$│ $$      ▕ $$  ▕ $$                   "<< endl;
            cout << "                       ▏ $$    ▕  $$$$$$╱│ $$$$$$$$▕  $$$$$$╱                   "<< endl;
            cout << "                       └──╯     ╲▁▁▁▁▁▁╱ └────────╯ ╲▁▁▁▁▁▁╱                  "<< endl;*/
            cout << "                                                                                "<< endl;
            cout << "                             "<< _textBuffer1                                    << endl;
            cout << "                  "<< _textBuffer2                                       << endl;
            cout << "                                     "<< _textBuffer3                            << endl;
            cout << "                                 "<< _textBuffer4                                << endl;
            cout << "                                                                                "<< endl;
            cout << " ┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅ "<< endl;
            cout << "  ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ "<< endl;
            cout << " ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙  "<< endl;
            cout << "  ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ ▟▙ ▜▛ "<< endl;
            //cout << "▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟▙▜▛▟"<< endl;
            cout << "                         " << command << endl;}



    else {
        if (gameState == 1) {
            cout << "╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳"<< endl;
            cout << "╳╳┎┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┐╳╳"<< endl;
            cout << "           DIRTY CLOTHES: "<<_dirtyScore<<"     CLEAN CLOTHES: "<<_cleanScore<<"     DAYS ELAPSED: "<<dayCount<< endl;
            cout << "╳╳┖┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┘╳╳"<< endl;
            cout << "╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳"<< endl;
            cout << "╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳"<< endl;
            cout << "╳╱                                                                            ╲╳"<< endl;
            cout << "╱                                                                              ╲"<< endl;
            cout << "     "<< _textBuffer1                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer2                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer3                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer4                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer5                                                   <<"     "<< endl;
            cout << "╲                                                                              ╱"<< endl;
            cout << "╳╲                                                                            ╱╳"<< endl;
            cout << "╳╳╲                                                                          ╱╳╳"<< endl;
            cout << "╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳"<< endl;
            cout << "╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳  HOME  ╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳"<< endl;
            cout << "╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳"<< endl;
            cout << "╳╳╱                                                                          ╲╳╳"<< endl;
            cout << "╳╱                                                                            ╲╳"<< endl;
            cout << "╱                                                                              ╲"<< endl;
            cout << "                         " << command << endl;}

        if (gameState == 2 || gameState == 4){
            cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"<< endl;//dbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdb"<< endl;
            cout << "▓▓▓                                                                          ▓▓▓"<< endl;
            cout << "           DIRTY CLOTHES: "<<_dirtyScore<<"     CLEAN CLOTHES: "<<_cleanScore<<"     DAYS ELAPSED: "<<dayCount<< endl;
            cout << "▓▓▓                                                                          ▓▓▓"<< endl;
            cout << "▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓"<< endl;
            cout << "▓▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▓"<< endl;
            cout << "▒░                                                                            ░▒"<< endl;
            cout << "░                                                                              ░"<< endl;
            cout << "     "<< _textBuffer1                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer2                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer3                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer4                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer5                                                   <<"     "<< endl;
            cout << "░                                                                              ░"<< endl;
            cout << "▒░                                                                            ░▒"<< endl;
            cout << "▓▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▓"<< endl;
            cout << "▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓"<< endl;
            cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  STREET  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"<< endl;
            cout << "▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓"<< endl;
            cout << "▓▓▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▓▓"<< endl;
            cout << "▓▒░                                                                          ░▒▓"<< endl;
            cout << "▒░                                                                            ░▒"<< endl;
            cout << "                         " << command << endl;}

        if (gameState == 3){
            cout << "¥¥¥€€€$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$€€€¥¥¥"<< endl;//dbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdbdb"<< endl;
            cout << "¥¥¥                                                                          ¥¥¥"<< endl;
            cout << "           DIRTY CLOTHES: "<<_dirtyScore<<"     CLEAN CLOTHES: "<<_cleanScore<<"     DAYS ELAPSED: "<<dayCount<< endl;
            cout << "¥¥¥                                                                          ¥¥¥"<< endl;
            cout << "¥¥¥€€€$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$€€€¥¥¥"<< endl;
            cout << "¥¥¥€€€$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$€€€¥¥¥"<< endl;
            cout << "££                                                                            ££"<< endl;
            cout << "£                                                                              £"<< endl;
            cout << "     "<< _textBuffer1                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer2                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer3                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer4                                                   <<"     "<< endl;
            cout << "     "<< _textBuffer5                                                   <<"     "<< endl;
            cout << "                                                                                "<< endl;
            cout << "£                                                                              £"<< endl;
            cout << "££                                                                            ££"<< endl;
            cout << "¥¥¥€€€$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$€€€¥¥¥"<< endl;
            cout << "¥¥¥€€€$$$$$$$$$$$$$$$$$$$$$$$$$$$$  LAUNDROMAT  $$$$$$$$$$$$$$$$$$$$$$$$$$€€€¥¥¥"<< endl;
            cout << "¥¥¥€€€$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$€€€¥¥¥"<< endl;
            cout << "£££                                                                          £££"<< endl;
            cout << "££                                                                            ££"<< endl;
            cout << "£                                                                              £"<< endl;
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


void restart(){


        gameState = -1;
        dirtyScore = 39;
        cleanScore = 30;
        newDay = true;
        homeInit = true;
        streetInit = true;
        laundromatInit = true;
        restartInit = false;
        setup = false;
        posCount = 0;
        nagCount = 0;
        gatherAmount = 6;
        dayCount = 0;

}

int main()
{


    restart();

    while( true )
    {
        command.clear();





        if (gameState == -1) {
         cout << endl << endl << endl << "***Mastering Tedium is meant to be played on a traditional 80 x 24 character terminal screen.  If this is not the case, the game will not display correctly and you may need to modify your terminal preferences or config file.  Press enter to begin.***" << endl;
         cin.ignore();

         gameState = 0;
        }

        if (gameState == 0) {
            cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░v0.82"<< endl;
            cout << "░░░███╗░░░███╗░█████╗░███████╗████████╗███████╗██████╗░██╗███╗░░░██╗░██████╗░░░░"<< endl;
            cout << "░░░████╗ ████║██╔══██╗██╔════╝╚══██╔══╝██╔════╝██╔══██╗██║████╗░░██║██╔════╝░░░░"<< endl;
            cout << "░░░██╔████╔██║███████║███████╗░░░██║░░░█████╗░░██████╔╝██║██╔██╗░██║██║░░███╗░░░"<< endl;
            cout << "░░░██║╚██╔╝██║██╔══██║╚════██║░░░██║░░░██╔══╝░░██╔══██╗██║██║╚██╗██║██║░░░██║░░░"<< endl;
            cout << "░░░██║░╚═╝░██║██║░░██║███████║░░░██║░░░███████╗██║░░██║██║██║░╚████║╚██████╔╝░░░"<< endl;
            cout << "░░░╚═╝░░░░░╚═╝╚═╝░░╚═╝╚══════╝░░░╚═╝░░░╚══════╝╚═╝░░╚═╝╚═╝╚═╝░░╚═══╝ ╚═════╝░░░░"<< endl;
            cout << "░░░████████╗███████╗██████╗░██╗██╗░░░██╗███╗░░░███╗░░░hdmmmyyyyyh////smmmms░░░░░"<< endl;
            cout << "░░░╚══██╔══╝██╔════╝██╔══██╗██║██║░░░██║████╗ ████║░░░smmmmhhyhhdysyyymmmmo░░░░░"<< endl;
            cout << "░░░░░░██║░░░█████╗░░██║░░██║██║██║░░░██║██╔████╔██║░░ymMMMMMMMMMMMMMMMMMMMNy░░░░"<< endl;
            cout << "░░░░░░██║░░░██╔══╝░░██║░░██║██║██║░░░██║██║╚██╔╝██║░odmmmmmmmmmmmmmmmmmmmmmmo░░░"<< endl;
            cout << "░░░░░░██║░░░███████╗██████╔╝██║╚██████╔╝██║░╚═╝░██║░hMMMMMMMMMMMMMMMMMMMMMMMh░░░"<< endl;
            cout << "░░░░░░╚═╝░░░╚══════╝╚═════╝░╚═╝░╚═════╝░╚═╝░░░░░╚═╝░hMMMMMMmddddmdddddMMMMMMh░░░"<< endl;
            cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░hMMMMddNdo:...:odMddMMMMh░░░"<< endl;
            cout << "░░░░░░░░░░░░░┎┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┓░░░░░░░░░hMMMhNm:    `    -mNyMMMh░░░"<< endl;
            cout << "░░░░░░░░░░░░░┊        A LAUNDRY SIM       ┊░░░░░░░░░hMMdmM.  `yNMNh.  .NNhMMh░░░"<< endl;
            cout << "░░░░░░░░░░░░░┊    NOW WITH MORE TEDIUM    ┊░░░░░░░░░hMMyMm   +MMMMMs   dMyMMh░░░"<< endl;
            cout << "░░░░░░░░░░░░░┊       by Juno Morrow       ┊░░░░░░░░░hMMddM-  `sNMNy.  .MNhMMh░░░"<< endl;
            cout << "░░░░░░░░░░░░░┖┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┛░░░░░░░░░hMMMhmN/         :mNyMMMh░░░"<< endl;
            cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░hMMMMddNms/---/omMddMMMMh░░░"<< endl;
            cout << "░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░hMMMMMMmdddmmmddddMMMMMMh░░░"<< endl;
            cout << "░░░░░▓▓▓▓▓▓▓▓▓▓ PRESS ENTER TO CONTINUE ▓▓▓▓▓▓▓▓▓▓░░hMMMMMMMMMMMMMMMMMMMMMMMh░░░"<< endl;
            cout << "░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░ymmmmmmmmmmmmmmmmmmmmmmmy░░░"<< endl;
            cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░ymmmmmmmmmmmmmmmmmmmmmmmy░░░";

<<<<<<< HEAD
/*
=======
>>>>>>> 09990137e1c56aaf683f49a10269873d7ca426cb
            cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░v0.82"<< endl;
            cout << "░░░███╗░░░███╗░█████╗░███████╗████████╗███████╗██████╗░██╗███╗░░░██╗░██████╗░░░░"<< endl;
            cout << "░░░████╗ ████║██╔══██╗██╔════╝╚══██╔══╝██╔════╝██╔══██╗██║████╗░░██║██╔════╝░░░░"<< endl;
            cout << "░░░██╔████╔██║███████║███████╗░░░██║░░░█████╗░░██████╔╝██║██╔██╗░██║██║░░███╗░░░"<< endl;
            cout << "░░░██║╚██╔╝██║██╔══██║╚════██║░░░██║░░░██╔══╝░░██╔══██╗██║██║╚██╗██║██║░░░██║░░░"<< endl;
            cout << "░░░██║░╚═╝░██║██║░░██║███████║░░░██║░░░███████╗██║░░██║██║██║░╚████║╚██████╔╝░░░"<< endl;
            cout << "░░░╚═╝░░░░░╚═╝╚═╝░░╚═╝╚══════╝░░░╚═╝░░░╚══════╝╚═╝░░╚═╝╚═╝╚═╝░░╚═══╝ ╚═════╝░░░░"<< endl;
            cout << "░░░████████╗███████╗██████╗░██╗██╗░░░██╗███╗░░░███╗░░░hdmmmyyyyyh////smmmms░░░░░"<< endl;
            cout << "░░░╚══██╔══╝██╔════╝██╔══██╗██║██║░░░██║████╗ ████║░░░smmmmhhyhhdysyyymmmmo░░░░░"<< endl;
            cout << "░░░░░░██║░░░█████╗░░██║░░██║██║██║░░░██║██╔████╔██║░░ymMMMMMMMMMMMMMMMMMMMNy░░░░"<< endl;
            cout << "░░░░░░██║░░░██╔══╝░░██║░░██║██║██║░░░██║██║╚██╔╝██║░odmmmmmmmmmmmmmmmmmmmmmmo░░░"<< endl;
            cout << "░░░░░░██║░░░███████╗██████╔╝██║╚██████╔╝██║░╚═╝░██║░hMMMMMMMMMMMMMMMMMMMMMMMh░░░"<< endl;
            cout << "░░░░░░╚═╝░░░╚══════╝╚═════╝░╚═╝░╚═════╝░╚═╝░░░░░╚═╝░hMMMMMMmddddmdddddMMMMMMh░░░"<< endl;
            cout << "░░░░░░░░██████╗░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░hMMMMddNdo:...:odMddMMMMh░░░"<< endl;
            cout << "░░░░░░░░╚════██╗░░░░┎┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┓░░hMMMhNm:    `    -mNyMMMh░░░"<< endl;
            cout << "░░░░░░░░░█████╔╝░░░░┊        A LAUNDRY SIM       ┊░░hMMdmM.  `yNMNh.  .NNhMMh░░░"<< endl;
            cout << "░░░░░░░░██╔═══╝░░░░░┊    NOW WITH MORE TEDIUM    ┊░░hMMyMm   +MMMMMs   dMyMMh░░░"<< endl;
            cout << "░░░░░░░░███████╗░░░░┊       by Juno Morrow       ┊░░hMMddM-  `sNMNy.  .MNhMMh░░░"<< endl;
            cout << "░░░░░░░░╚══════╝░░░░┖┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┛░░hMMMhmN/         :mNyMMMh░░░"<< endl;
            cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░hMMMMddNms/---/omMddMMMMh░░░"<< endl;
            cout << "░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░hMMMMMMmdddmmmddddMMMMMMh░░░"<< endl;
            cout << "░░░░░▓▓▓▓▓▓▓▓▓▓ PRESS ENTER TO CONTINUE ▓▓▓▓▓▓▓▓▓▓░░hMMMMMMMMMMMMMMMMMMMMMMMh░░░"<< endl;
            cout << "░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░ymmmmmmmmmmmmmmmmmmmmmmmy░░░"<< endl;
            cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░ymmmmmmmmmmmmmmmmmmmmmmmy░░░";

            cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<< endl;
            cout << "░░░███╗░░░███╗░█████╗░███████╗████████╗███████╗██████╗░██╗███╗░░░██╗░██████╗░░░░"<< endl;
            cout << "░░░████╗ ████║██╔══██╗██╔════╝╚══██╔══╝██╔════╝██╔══██╗██║████╗░░██║██╔════╝░░░░"<< endl;
            cout << "░░░██╔████╔██║███████║███████╗░░░██║░░░█████╗░░██████╔╝██║██╔██╗░██║██║░░███╗░░░"<< endl;
            cout << "░░░██║╚██╔╝██║██╔══██║╚════██║░░░██║░░░██╔══╝░░██╔══██╗██║██║╚██╗██║██║░░░██║░░░"<< endl;
            cout << "░░░██║░╚═╝░██║██║░░██║███████║░░░██║░░░███████╗██║░░██║██║██║░╚████║╚██████╔╝░░░"<< endl;
            cout << "░░░╚═╝░░░░░╚═╝╚═╝░░╚═╝╚══════╝░░░╚═╝░░░╚══════╝╚═╝░░╚═╝╚═╝╚═╝░░╚═══╝ ╚═════╝░░░░"<< endl;
            cout << "░░░████████╗███████╗██████╗░██╗██╗░░░██╗███╗░░░███╗░░░hdmmmyyyyyh////smmmms░░░░░"<< endl;
            cout << "░░░╚══██╔══╝██╔════╝██╔══██╗██║██║░░░██║████╗ ████║░░░smmmmhhyhhdysyyymmmmo░░░░░"<< endl;
            cout << "░░░░░░██║░░░█████╗░░██║░░██║██║██║░░░██║██╔████╔██║░░ymMMMMMMMMMMMMMMMMMMMNy░░░░"<< endl;
            cout << "░░░░░░██║░░░██╔══╝░░██║░░██║██║██║░░░██║██║╚██╔╝██║░odmmmmmmmmmmmmmmmmmmmmmmo░░░"<< endl;
            cout << "░░░░░░██║░░░███████╗██████╔╝██║╚██████╔╝██║░╚═╝░██║░hMMMMMMMMMMMMMMMMMMMMMMMh░░░"<< endl;
            cout << "░░░░░░╚═╝░░░╚══════╝╚═════╝░╚═╝░╚═════╝░╚═╝░░░░░╚═╝░hMMMMMMmddddmdddddMMMMMMh░░░"<< endl;
            cout << "░░░░░░░░██████╗░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░hMMMMddNdo:...:odMddMMMMh░░░"<< endl;
            cout << "░░░░░░░░╚════██╗░░░░┎┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┓░hMMMhNm:    `    -mNyMMMh░░░"<< endl;
            cout << "░░░░░░░░░█████╔╝░░░░┊         A LAUNDRY SIM       ┊░hMMdmM.  `yNMNh.  .NNhMMh░░░"<< endl;
            cout << "░░░░░░░░██╔═══╝░░░░░┊     NOW WITH MORE TEDIUM    ┊░hMMyMm   +MMMMMs   dMyMMh░░░"<< endl;
            cout << "░░░░░░░░███████╗░░░░┊        by Alec McClure      ┊░hMMddM-  `sNMNy.  .MNhMMh░░░"<< endl;
            cout << "░░░░░░░░╚══════╝░░░░┖┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┛░hMMMhmN/         :mNyMMMh░░░"<< endl;
            cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░hMMMMddNms/---/omMddMMMMh░░░"<< endl;
            cout << "░░░░░╔═══════════════════════════════════════════╗░░hMMMMMMmdddmmmddddMMMMMMh░░░"<< endl;
            cout << "░░░░░║          PRESS ENTER TO CONTINUE          ║░░hMMMMMMMMMMMMMMMMMMMMMMMh░░░"<< endl;
            cout << "░░░░░╚═══════════════════════════════════════════╝░░ymmmmmmmmmmmmmmmmmmmmmmmy░░░"<< endl;
            cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░ymmmmmmmmmmmmmmmmmmmmmmmy░░░";
            */







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
                textBuffer1 = "ONE DAY CLOSER TO DEATH";
            }
            dayDeclaration << "DAY " << dayCount;
            textBuffer3 = dayDeclaration.str();
            if (dirtyScore < 40) {
                dirtyScore += 2;
                cleanScore -= 2;
            } else {
                if (dirtyScore >= 40 && dirtyScore <= 49){
                    textBuffer2 = "\"I was going to do laundry today, but I didn't\"";
                    dirtyScore += 2;
                    cleanScore -= 2; }
                if (dirtyScore >= 50 && dirtyScore <= 68){
                    textBuffer2 = "       You have really let yourself go.";
                    dirtyScore += 1;
                    cleanScore -= 1;    }
                if (dirtyScore > 68){
                    textBuffer2 = "       All your clothes are now dirty.";}
            }
            textBuffer4 = "--PRESS ENTER--";
            menuDisplay(command, textBuffer1, textBuffer2,textBuffer3, textBuffer4, textBuffer5, dirtyScore,cleanScore);
            //cout << "test";
            getline(cin,command);

            if (command == "yolo"){
                won = true;
            } else {

                clearBuffer();
            }
            //cin.ignore();


            if (homeInit){
                currentText = "You awake in a dark and filthy room. The air reeks of stale beer and  you feel the crunch of forgotten potato chips beneath your feet. The  evening light slipping through the sole window illuminates the room   just enough to highlight the soiled clothing surrounding you. This is your bedroom. What does this day hold? Is it \"laundry\"?";
            } else {
                currentText = "You once again awake in this disheveled mess of a room surrounded by  filthy clothes.";
                if (won){

                    dirtyScore = 0;
                    cleanScore = 999;
                    currentText = "YOU WIN YOU WIN YOU WIN YOU WIN";
                    textBuffer1 = "YOU WIN YOU WIN YOU WIN YOU WIN";
                    textBuffer2 = "YOU WIN YOU WIN YOU WIN YOU WIN";
                    textBuffer3 = "YOU WIN YOU WIN YOU WIN YOU WIN";
                    textBuffer4 = "YOU WIN YOU WIN YOU WIN YOU WIN";
                    textBuffer5 = "YOU WIN YOU WIN YOU WIN YOU WIN";

                }
            }
            fillBuffer();
            homeInit = false;
            newDay = false;
            menuDisplay(command, textBuffer1, textBuffer2, textBuffer3, textBuffer4, textBuffer5, dirtyScore, cleanScore);

        }

        if (gameState == 1){ //game state 1 is at home
            cout << "     What shall you do?  ";
            getline(cin, command);
            if (dirtyScore < 0){
                dirtyScore = 0;}
            if (cleanScore < 0){
                cleanScore = 0;}
            if (command == "restart"){
                restart();
            } else
            if (command == ""){
                currentText += "...";
                actionCount += 1;}
            else if (command == "laundry" || command == "do laundry") {
                currentText =       "Slow down partner.  If you want to do laundry, you'll have to \"gather\" up some laundry."; }
            else if (command == "gather") {
                if (dirtyScore >= gatherAmount){
                    laundryBag += gatherAmount;
                    dirtyScore -= gatherAmount;

                    stringBuffer << "You still have " << dirtyScore << "       article(s) of dirty clothing lying around.";

                    currentText =       "You throw some old socks into your laundry bag." + stringBuffer.str(); }
                else {
                    currentText =       "You've gathered enough dirty clothes into the laundry bag.  It's time to \"head out\" into the street";
                    readyToGo = true;  } }
            else if (command == "head out" && readyToGo == true) {
                    gameState = 2;}



            else if (command == "no") {
                currentText =       "What do you mean no?";
                actionCount +=2;}
            else if (command == "yes" || command == "sure" || command == "ok") {
                currentText =       "I'm glad you're finally cooperating.  Are you trying to say you want  to do \"laundry\"?";
                actionCount +=2;}
            else if (command == "help") {
                currentText =       "There's this expression.  \"Every man is an island\" or something like  that.  I think that's how it goes.";
                actionCount += 2;}
            else if (command == "cry") {
                currentText =       "There's no crying in baseball.";
                actionCount += 2;}
            else if (command == "die" || command == "commit suicide" || command == "suicide") {
                currentText =       "Whoa there... you should probably call 1 \(800\) 273 8255 before doing  anything drastic.";
                actionCount += 2;}
            else if (command == "go north" || command == "north" || command == "look north" || command == "south" || command == "go south" || command == "west" || command == "go west" || command == "east" || command == "go east" || command == "look south" || command == "look west" || command == "look east") {
                currentText =       "No compass will ever point you in the right direction.";
                actionCount += 2;}
            else if (command == "run away" || command == "run") {
                currentText =       "You run in circles for 5 minutes before realizing that you can't out- run your problems.";
                actionCount += 2;}
            else if (command == "sleep" || command == "go to sleep") {
                currentText =       "You ignore your mounting problems and try to sleep through the day.";
                actionCount += 4;}
            else if (command == "yolo" || command == "YOLO"){
                        won = true;
        }
            else {
                if (nagCount == 0) {
                    currentText =       "Are you sure you don't want to do \"laundry\"?";
                    actionCount +=2;}
                else if (nagCount == 1) {
                    currentText =       "Are you sure you don't want to do \"laundry\"???";
                    actionCount +=2;}
                else if (nagCount == 2) {
                    currentText =       "Society looks down upon the various body odors emanating from your    dirty clothing.  Are you sure you don't want to do \"laundry\"?";
                    actionCount +=2;}
                else if (nagCount == 3) {
                    currentText =       "Not doing laundry just caused you to lose 3 casual friends, but they  weren't that interesting anyways.  You can always do \"laundry\" to     attract new ones.";
                    actionCount +=1;}
                else if (nagCount == 4) {
                    currentText =       "Your once loyal pet cat no longer cuddles in your lap or comes within 10 feet of your malodorous room.  Do you even want to do \"laundry\"?";
                    actionCount +=1;}
                else if (nagCount == 5) {
                    currentText =       "You notice considerable mildew growth on the underside of one of the  smaller piles of clothing.  Do you even want to do \"laundry\"?";
                    actionCount +=1;}
                else if (nagCount > 5) {
                    currentText =       "The putrid smell drifting into the common hallway of your apartment   building causes both of your neighbors who have never met to knock on the door and ask \"Are you dead or do you just need to do \"laundry\"?\"";
                    actionCount +=1;
                    nagCount = 0;}

                nagCount += 1;
            }

        }

        if (gameState == 2){ //game state 2 street
            if (streetInit) {
                nagCount = 0;
                currentText = "You find yourself in the middle of a cold and deserted city street    carrying an overbearing load on your shoulders.  The overly familiar  path to the laundromat is etched into your memory.  You look \"left\" at what is ahead.";
                streetInit = false;
                clearBuffer();
                fillBuffer();
                menuDisplay(command, textBuffer1, textBuffer2, textBuffer3, textBuffer4, textBuffer5, dirtyScore, cleanScore);  }

            cout << "     What shall you do?  ";
            getline(cin, command);

            if (command == "restart"){
                restart();
            } else if (command == ""){
                currentText += "...";   }
            else {
                if (posCount == 0) {
                    if (command == "left" || command == "go left" || command == "walk left") {
                        posCount +=1;
                        currentText = "You turn the corner of your block down the narrow path plowed through the layered snow from the last few weeks.  You pause for a second to  reflect on a trivial misunderstanding from a few days ago and then    consider moving \"forward\"."; }
                    else if ((command == "right" || command == "go right" || command == "walk right") && nagCount == 0){
                        currentText = "You walk 5 feet to the right and then wonder why you're carrying such a heavy load in the wrong direction.";
                        nagCount += 1;  }
                    else if ((command == "forward" || command == "go forward" || command == "straight" || command == "go straight") && nagCount == 0) {
                        currentText = "You walk into the street and almost get hit by a car.";
                        nagCount += 1;  }
                    else {
                        currentText = "I'm pretty sure you want to go \"left\".";   }
                    }
                else if (posCount == 1){
                    if (command == "advance" || command == "forward" || command == "go forward" || command == "straight" || command == "go straight" || command == "continue"){
                        currentText = "You continue down the familiar path, passing other faceless souls,    each going about their own anonymous business.  The laundry bag is    starting to feel heavier.";
                        posCount += 1;}
                    else {
                        currentText = "There are no paths to turn off from, so your only option is to push   \"forward\"";    }}
                else if (posCount == 2){
                     if (command == "advance" || command == "forward" || command == "go forward" || command == "straight" || command == "go straight" || command == "continue"){
                        currentText = "You wonder why you didn't do laundry sooner as you adjust your grip to shift the weight.  You see the laundromat just ahead on the right.";
                        posCount += 1;}
                    else {
                        currentText = "There are no paths to turn off from, so your only option is to push   \"forward\"";    }}
                else if (posCount >= 3){
                     if (command == "right" || command == "go right" || command == "laundromat" || command == "go into the laundromat"){
                       // currentText = "you done it";
                        gameState = 3; }
                        //posCount = 0; }
                    else {
                        currentText = "Surely, you'd rather go to the laundromat on the \"right\"";    } }


                }


            }

        if (gameState == 3){ //game state 3 laundromat
            if (laundromatInit) {
                posCount = 0;
                currentText = "The excessively bright laundromat is full of loud children and others who similarly bowed before the call to action. Closed captioned tele- novelas and Korean religious programming play on the overhead         televisions.";
                laundromatInit = false;
                clearBuffer();
                fillBuffer();
                menuDisplay(command, textBuffer1, textBuffer2, textBuffer3, textBuffer4, textBuffer5, dirtyScore, cleanScore);  }

            cout << "     What shall you do?  ";
            getline(cin, command);

            if (command == "restart"){
                restart();
            } else if (command == ""){
                currentText += "...";   }
            else {
                if (posCount == 0) {
                    if (command == "wash clothes" || command == "laundry" || command == "washer" || command == "washing machine" || command == "wash") { //correct action 1
                        currentText = "You find the closest washing machine that doesn't look like it's going to break down.  Why don't you \"put the laundry in the machine\" ?";
                        posCount += 1;   }
                    /*else if ((command == "" || command == "" || command == "") && nagCount == 0){ //alternative action 1
                        currentText = "";
                        nagCount += 1;  }
                    else if ((command == "" || command == " " || command == "" || " ") && nagCount == 0) { //alternative action 2
                        currentText = "Aren't you here to \"wash clothes\" ?";
                        nagCount += 1;  }*/
                    else {
                        currentText = "Aren't you here to \"wash clothes\" ?";   } //suggest correct action
                    }

                else if (posCount == 1) {
                    if (command == "put the laundry in the machine" || command == "put laundry in the machine") { //correct action 1
                        currentText = "You throw some of your laundry in the machine.  You dropped one of the moldy socks.  You should \"put more laundry in the machine\"";
                        posCount += 1;   }
                    else {
                        currentText = "Perhaps you don't understand how this process works.  Clothes have to be inside the washing machine to get clean, so you need to \"put the   laundry in the machine\"";   } //suggest correct action
                    }

                else if (posCount == 2 || posCount == 3) {
                    if (command == "put more laundry in the machine" ) { //correct action 1
                        if (posCount == 2) {
                            currentText = "You throw more of your laundry in the machine and decide that the sock isn't worth saving. You rationalize this decision by considering it  an anonymous gift to the laundromat's proprietors.  You should \"put   more laundry in the machine\"";    }
                        else {
                            currentText = "You overload the machine with the last bit of filth just like the sign says not to.  It's time to \"start the machine\"";    }
                        posCount += 1;   }
                    else if (command == "sock" || command == "pick up sock" || command == "grab sock"){
                        currentText = "Do you *really* want to touch that sock? ...Wait, don't answer that.";    //suggest correct action
                    } else {
                        currentText = "You're not seriously going to come all the way here to only wash part of your clothes, are you?  Why not \"put more laundry in the machine\" ?";   } //suggest correct action
                    }

                else if (posCount == 4) {
                    if (command == "start the machine" || command == "start" ) { //correct action 1
                        currentText = "You add a barely adequate amount of detergent and swipe your preloaded laundry card.  Those things are really just a scam so they can charge you a dollar for the card and lock in your money.";
                        posCount +=1;   }
                    else if ((command == "" || command == "" || command == "") && nagCount == 0){ //alternative action 1
                        currentText = "";
                        nagCount += 1;  }
                    else if ((command == "" || command == " " || command == "" || " ") && nagCount == 0) { //alternative action 2
                        currentText = "Aren't you here to \"wash clothes\" ?";
                        nagCount += 1;  }
                    else {
                        currentText = "The machine is stupid and needs to be told to \"start\" ";   } //suggest correct action
                    }


                else if (posCount == 5){
                    if (command == "check" || command == "check laundry" || command == "check washing machine" || command == "laundry"){
                        if (readCount == 0){
                            currentText = "You check on your laundry.  It's still in the washing cycle.  How are you going to kill the time?  You did bring a \"book\""; }

                        if (readCount == 1){
                            currentText = "You check on your laundry. It's in the rinse cycle. How are you going to kill the time?  You did bring a \"book\" ?"; }

                        if (readCount == 2){
                            currentText = "You check on your laundry.  It's in the spin cycle.  How are you going to kill the time?  Why don't you keep \"reading\" ?"; }

                        if (readCount > 2){
                            currentText = "Ok, the washing machine is done with its business.";
                            posCount +=1; }
                        }
                    else if (command == "read" || command == "read a book" || command == "book" || command == "reading"){
                        if (readCount == 0){
                            currentText = "You pull a book out of your bag that you've been reading for months.  -THE BOOK OF DISQUIET by Fernando Pessoa- Perhaps you'll \"read\" more?"; }
                        if (readCount == 1){
                            currentText = "It is said that tedium is a disease of the idle or that it attacks    only those who have nothing to do. But this ailment of the soul is in fact more subtle: it attacks people who are predisposed to it and     those who work or who pretend they work(which in this case comes down to the same thing) are less apt to be spared than the truly idle.(...)"; }
                        if (readCount == 2){
                            currentText = "Nothing is worse than the contrast between the natural splendor of the inner life, with its natural Indias and its unexplored lands and the squalor(even when it’s not really squalid) of life’s daily routine. And tedium is more oppressive when there’s not the excuse of idle- ness. The tedium of those who strive hard is the worst of all.(...)"; }
                        if (readCount == 3){
                            currentText = "Tedium is not the disease of being bored because there’s nothing to do, but the more serious disease of feeling that there’s nothing    worth doing. This means that the more there is to do, the more tedium one will feel. (end)";  }
                        if (readCount >= 4){
                            currentText = "Maybe you should check on your wash.  That book sucked anyways.";  }

                        readCount += 1; }
                    else if (command == "something") {
                        currentText = "You do \"something\" and have a great time or whatever."; }
                    else if (command == "phone" || command == "smart phone" || command == "iphone") {
                        currentText = "Your phone is dead.  Why didn't you charge it when you were home      earlier?"; }
                    else {
                        currentText = "Your laundry is probably still washing.  Why don't you \"check\" on it, use your \"phone\", \"read a book\" or \"something\" else?";    }}



                else if (posCount == 6){
                     if (command == "laundry" || command == "dryer" || command == "dry clothes" || command == "switch clothes" || command == "put the clothes in the dryer" || command == "put clothes in the dryer"){
                        currentText = "You promote your clean and wet clothes to the dryer and set it for 36 minutes.";
                        posCount += 1;}
                    else {
                        currentText = "Are you just going to let your wet clothes sit in the washing machine or move them to the \"dryer\" ?";    }}



                else if (posCount >= 7){
                     if (command == "wait" || command == "check"){
                        if (posCount == 7) {
                            currentText = "You check on your clothes and they're still soaked.  Time to \"wait\"   some more.";
                            posCount+=1;
                        }
                        else if (posCount == 8) {
                            currentText = "You check on your clothes and they're still wet. The woman next to you looks at you like you're crazy.  Time to \"wait\" some more.";
                            posCount+=1;
                        }
                        else if (posCount == 9) {
                            currentText = "You check on your clothes and they're getting there.  Time to \"wait\"  some more.";
                            posCount+=1;
                        }
                        else if (posCount == 10) {
                            currentText = "You check on your clothes and they're almost dry.  Time to \"wait\" some more.";
                            posCount+=1;
                        }
                        else if (posCount == 11) {
                            currentText = "Your clothes are finally dry.  It's time to \"go home\""; //this happens on street scene instead of laundromat
                            cleanScore = 69 - dirtyScore;
                            restartInit = true;
                        }

                        }
                    else if ((command == "go home" || command == "home" || command == "leave") && restartInit){

                            streetInit = true;
                            restartInit = false;
                            newDay = false;
                            gameState = 4;}

                    else {
                        currentText = "There's nothing left to do, but \"wait\" unless the dryer is done.";    } }
                }

            }

            if (gameState == 4) {
                newDay = false;

                if (streetInit) {
                    currentText = "You decide to \"quickly walk\" home.";
                 //   laundromatInit = false;

                    clearBuffer();
                    fillBuffer();
                    menuDisplay(command, textBuffer1, textBuffer2, textBuffer3, textBuffer4, textBuffer5, dirtyScore, cleanScore);}

                cout << "     What shall you do??  ";
                getline(cin, command);


                if (command == "restart"){
                    restart();
                } else if (command == ""){
                    currentText += "...";   }
                else {if (command == "quickly walk" || command == "walk" || command == "walk home") {
                    cleanScore += laundryBag;
                    homeInit = true;
                    laundromatInit = true;
                    newDay = true;
                    posCount = 0;
                    dayCount += 13;
                    dirtyScore += 24;
                    cleanScore -= 24;
                    readCount = 0;
                    gameState = 1;  }
                else {
                    currentText = "Just type \"walk home\" and press enter.";}}
            }

        if (won){
            dirtyScore = 0;
            cleanScore = 999;
            currentText = "YOU WIN YOU WIN YOU WIN YOU WIN";
            textBuffer1 = "YOU WIN YOU WIN YOU WIN YOU WIN";
            textBuffer2 = "YOU WIN YOU WIN YOU WIN YOU WIN";
            textBuffer3 = "YOU WIN YOU WIN YOU WIN YOU WIN";
            textBuffer4 = "YOU WIN YOU WIN YOU WIN YOU WIN";
            textBuffer5 = "YOU WIN YOU WIN YOU WIN YOU WIN";
        }
        clearBuffer();
        fillBuffer();

        menuDisplay(command, textBuffer1, textBuffer2, textBuffer3, textBuffer4, textBuffer5, dirtyScore, cleanScore);
    }
    return 0;
}
