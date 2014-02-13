#include <iostream>
#include <string>
#include <vector>  // For the command handling function.
#include <cctype>  // Will be used to eliminate case sensitivity problems.

using namespace std;

// -------------------------------------------------------------------------------------------------

void section_command(string Cmd, string &wd1, string &wd2)
{
    string sub_str;
    vector<string> words;
    char search = ' ';
    size_t i, j;

    // Split Command into vector
    for(i = 0; i < Cmd.size(); i++)
    {
        if(Cmd.at(i) != search)
        {
            sub_str.insert(sub_str.end(), Cmd.at(i));
        }
        if(i == Cmd.size() - 1)
        {
            words.push_back(sub_str);
            sub_str.clear();
        }
        if(Cmd.at(i) == search)
        {
            words.push_back(sub_str);
            sub_str.clear();
        }
    }
    // Clear out any blanks
    // I work backwords through the vectors here as a cheat not to invaldate the iterator
    for(i = words.size() - 1; i > 0; i--)
    {
        if(words.at(i) == "")
        {
            words.erase(words.begin() + i);
        }
    }
    // Make words upper case
    // Right here is where the functions from cctype are used
    for(i = 0; i < words.size(); i++)
    {
        for(j = 0; j < words.at(i).size(); j++)
        {
            if(islower(words.at(i).at(j)))
            {
                words.at(i).at(j) = toupper(words.at(i).at(j));
            }
        }
    }
    // Very simple. For the moment I only want the first to words at most (verb / noun).
    if(words.size() == 0)
    {
        cout << "No command given" << endl;
    }
    if(words.size() == 1)
    {
        wd1 = words.at(0);
    }
    if(words.size() == 2)
    {
        wd1 = words.at(0);
        wd2 = words.at(1);
    }
    if(words.size() > 2)
    {
        cout << "Command too long. Only type one or two words (direction or verb and noun)" << endl;
    }
}

void menuDisplay(string command, string textLine1, string textLine2){
            cout << endl;
            cout << "o==============================================================================o"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||   "<< textLine1                                                      <<"   ||"<< endl;
            cout << "||   "<< textLine2                                                      <<"   ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "oo----------------------------------------------------------------------------oo"<< endl;
            cout << "     " << command << endl;
            cout << endl;
            cout << endl;
            cout << "o==============================================================================o"<< endl;

}

// ----------------------------------------------------------------------------------------

int main()
{
    int intro;
    string command;
    string word_1;
    string word_2;
    string textLine1, textLine2;

    while(word_1 != "QUIT") // I have provided an escape condition from the loop here
    {
        command.clear();


        if (intro < 1) {

            cout << "   ooo   ooo    o     ooo   ooooo  ooooo  oooo   ooooo  o   o   ooo             "<< endl;
            cout << "   oo ooo oo   o o   o        o    oo     o   o    o    oo  o  o   o            "<< endl;
            cout << "   oo  o  oo  ooooo   ooo     o    ooooo  oooo     o    o o o  o                "<< endl;
            cout << "   oo     oo  o   o      o    o    oo     o  o     o    o  oo  o ooo            "<< endl;
            cout << "   oo     oo  o   o   ooo     o    ooooo  o   o  ooooo  o   o   ooo             "<< endl;
            cout << "                                                                                "<< endl;
            cout << "   ooooo  ooooo  ooo    ooooo  o   o  o   o      hdmmmyyyyyh////smmmms          "<< endl;
            cout << "     o    oo     o  o     o    o   o  oo oo      smmmmhhyhhdysyyymmmmo          "<< endl;
            cout << "     o    ooooo  o   o    o    o   o  o o o     ymMMMMMMMMMMMMMMMMMMMNy         "<< endl;
            cout << "     o    oo     o  o     o    o   o  o   o    odmmmmmmmmmmmmmmmmmmmmmmo        "<< endl;
            cout << "     o    ooooo  ooo    ooooo   ooo   o   o    hMMMMMMMMMMMMMMMMMMMMMMMh        "<< endl;
            cout << "                                               hMMMMMMmddddmdddddMMMMMMh        "<< endl;
            cout << "                                               hMMMMddNdo:...:odMddMMMMh        "<< endl;
            cout << "     A LAUNDRY SIMULATOR                       hMMMhNm:    `    -mNyMMMh        "<< endl;
            cout << "     by Alec McClure                           hMMdmM.  `yNMNh.  .NNhMMh        "<< endl;
            cout << "                                               hMMyMm   +MMMMMs   dMyMMh        "<< endl;
            cout << "                                               hMMddM-  `sNMNy.  .MNhMMh        "<< endl;
            cout << "                                               hMMMhmN/         :mNyMMMh        "<< endl;
            cout << "                                               hMMMMddNms/---/omMddMMMMh        "<< endl;
            cout << "                                               hMMMMMMmdddmmmddddMMMMMMh        "<< endl;
            cout << "                                               hMMMMMMMMMMMMMMMMMMMMMMMh        "<< endl;
            cout << "     PRESS ENTER TO CONTINUE                   ymmmmmmmmmmmmmmmmmmmmmmmy        "<< endl;
            cout << "                                               ymmmmmmmmmmmmmmmmmmmmmmmy        "<< endl;

            intro++;
        }
        cin.ignore();

        textLine1 =        "You find yourself in the deepest, darkest and filthiest of bedrooms,  ";
        textLine2 =        "covered in soiled clothing.  To launder or not to launder?            ";

        if (intro > 0){
            //for (int i = 0; i++; i < 23) {
            cout << "o==============================================================================o"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||   "<< textLine1                                                      <<"   ||"<< endl;
            cout << "||   "<< textLine2                                                      <<"   ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "||                                                                            ||"<< endl;
            cout << "oo----------------------------------------------------------------------------oo"<< endl;
            cout << "     " << command << endl;
            cout << endl;
            cout << endl;
            cout << "o==============================================================================o"<< endl;
        }
        //getline(cin, command);
        //if ( command ==
        /*cin.ignore();
        cout << "Valid Commands:" << endl;
        cout << "help: list valid commands  " << endl;
        cout << "score: list valid commands  " << endl;
        cout << "help: list valid commands  " << endl;
*/
        cout << "What shall I do?  ";
        getline(cin, command);
        menuDisplay(command, textLine1, textLine2);
        command.clear();
       /* cout << "Your raw command was " << command << endl;

        word_1.clear();
        word_2.clear();

        // Call the function that handles the command line format.
        section_command(command, word_1, word_2);

        // For test purposes, output the command after formatting by the function.
        if(word_1.size() > 0)
        {
            cout << word_1 << " " << word_2 << endl;
        }
        cout << endl;
        */
    }
    return 0;
}
