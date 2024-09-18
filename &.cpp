#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

void show_record() {
    system("cls");
    string name;
    float scr;
    ifstream f("score.txt");
    f >> name >> scr;
    cout << "\n\n\t\t*************************************************************" << endl;
    cout << "\n\n\t\t " << name << " has secured the Highest Score " << scr << endl;
    cout << "\n\n\t\t*************************************************************" << endl;
    f.close();
//    getch();
}

void reset_score() {
    system("cls");
    ofstream f("score.txt", ios::trunc);
    f.close();
}

void help() {
    system("cls");
    cout << "\n\n                              HELP" << endl;
    cout << "\n -------------------------------------------------------------------------" << endl;
    cout << "\n ......................... C++ program Quiz Game..........." << endl;
    cout << "\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND" << endl;
    cout << "\n >> In warmup round you will be asked a total of 3 questions to test your general" << endl;
    cout << "\n    knowledge. You will be eligible to play the game if you can give atleast 2" << endl;
    cout << "\n    right answers otherwise you can't play the Game..........." << endl;
    cout << "\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked" << endl;
    cout << "\n    total 10 questions each right answer will be awarded $100,000." << endl;
    cout << "\n    By this way you can win upto ONE MILLION cash prize in USD............... " << endl;
    cout << "\n >> You will be given 4 options and you have to press A, B ,C or D for the" << endl;
    cout << "\n    right option" << endl;
    cout << "\n >> You will be asked questions continuously if you keep giving the right answers." << endl;
    cout << "\n >> No negative marking for wrong answers" << endl;

    cout << "\n\n\t*********************BEST OF LUCK*********************************" << endl;
    cout << "\n\n\t*****C++ PROGRAM QUIZ GAME is developed by CODE WITH C++ TEAM********" << endl;
}

void edit_score(float score, string plnm) {
    system("cls");
    float sc = 0;
    string nm;
    ifstream f("score.txt");
    if (f.is_open()) {
        f >> nm >> sc;
        f.close();
    }
    if (score >= sc) {
        ofstream f("score.txt", ios::trunc);
        f << plnm << "\n" << score;
        f.close();
    }
}

int main() {
    int countr, r, r1, count, i, n;
    float score;
    char choice;
    string playername;

    mainhome:
    system("cls");
    cout << "\t\t\tC++ PROGRAM QUIZ GAME" << endl;
    cout << "\n\t\t________________________________________" << endl;
    cout << "\n\t\t\t   WELCOME " << endl;
    cout << "\n\t\t\t      to " << endl;
    cout << "\n\t\t\t   THE GAME " << endl;
    cout << "\n\t\t________________________________________" << endl;
    cout << "\n\t\t________________________________________" << endl;
    cout << "\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    " << endl;
    cout << "\n\t\t________________________________________" << endl;
    cout << "\n\t\t________________________________________" << endl;
    cout << "\n\t\t > Press S to start the game" << endl;
    cout << "\n\t\t > Press V to view the highest score  " << endl;
    cout << "\n\t\t > Press R to reset score" << endl;
    cout << "\n\t\t > press H for help            " << endl;
    cout << "\n\t\t > press Q to quit             " << endl;
    cout << "\n\t\t________________________________________\n\n";
/*    choice = toupper(getch());
    if (choice == 'V') {
        show_record();
        goto mainhome;
    } else if (choice == 'H') {
        help();
        getch();
        goto mainhome;
    } else if (choice == 'R') {
        reset_score();
        getch();
        goto mainhome;
    } else if (choice == 'Q') {
        exit(1);
    } else if (choice == 'S') {
        system("cls");*/

        cout << "\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:";
        getline(cin, playername);

        system("cls");
        cout << "\n ------------------  Welcome " << playername << " to C++ Program Quiz Game --------------------------" << endl;
        cout << "\n\n Here are some tips you might wanna know before playing:" << endl;
        cout << "\n -------------------------------------------------------------------------" << endl;
        cout << "\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND" << endl;
        cout << "\n >> In warmup round you will be asked a total of 3 questions to test your" << endl;
        cout << "\n    general knowledge. You are eligible to play the game if you give atleast 2" << endl;
        cout << "\n    right answers, otherwise you can't proceed further to the Challenge Round." << endl;
        cout << "\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a" << endl;
        cout << "\n    total of 10 questions. Each right answer will be awarded $100,000! " << endl;
        cout << "\n    By this way you can win upto ONE MILLION cash prize!!!!!.........." << endl;
        cout << "\n >> You will be given 4 options and you have to press A, B ,C or D for the" << endl;
        cout << "\n    right option." << endl;
        cout << "\n >> You will be asked questions continuously, till right answers are given" << endl;
        cout << "\n >> No negative marking for wrong answers!" << endl;
        cout << "\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!" << endl;
        cout << "\n\n\n Press Y  to start the game!\n";
        cout << "\n Press any other key to return to the main menu!";
/        if (toupper(getch()) == 'Y') {
            goto home;
        } else {
            goto mainhome;
            system("cls");
        }

        home:
        system("cls");
        count = 0;
        for (i = 1; i <= 3; i++) {
            system("cls");
            r1 = i;

            switch (r1) {
                case 1:
                    cout << "\n\nWhich of the following is a Palindrome number?";
                    cout << "\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234";
                    if (toupper(getch()) == 'C') {
                        cout << "\n\nCorrect!!!" << endl;
                        count++;
                        getch();
                        break;
                    } else {
                        cout << "\n\nWrong!!! The correct answer is C.23232" << endl;
                        getch();
                        break;
                    }

                    case 2:
                        cout << "\n\n\nThe country with the highest environmental performance index is...";
                        cout << "\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland";
                        if (toupper(getch()) == 'C') {
                            cout << "\n\nCorrect!!!" << endl;
                            count++;
                            getch();
                            break;
                        } else {
                            cout << "\n\nWrong!!! The correct answer is C.Switzerland" << endl;
                            getch();
                            break;
                        }

                        case 3:
                            cout << "\n\n\nWhich animal laughs like human being?";
                            cout << "\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee";
                            if (toupper(getch()) == 'B') {
                                cout << "\n\nCorrect!!!" << endl;
                                count++;
                                getch();
                                break;
                            } else {
                                cout << "\n\nWrong!!! The correct answer is B.Hyena" << endl;
                                getch();
                                break;
                            }

                            case 4:
                                cout << "\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?";
                                cout << "\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo";
                                if (toupper(getch()) == 'B') {
                                    cout << "\n\nCorrect!!!" << endl;
                                    count++;
                                    getch();
                                    break;
                                } else {
                                    cout << "\n\nWrong!!! The correct answer is B.Lucas Podolski" << endl;
                                    getch();
                                    break;
                                }

                                case 5:
                                    cout << "\n\n\nWhich is the third highest mountain in the world?";
                                    cout << "\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro";
                                    if (toupper(getch()) == 'B') {
                                        cout << "\n\nCorrect!!!" << endl;
                                        count++;
                                        getch();
                                        break;
                                    } else {
                                        cout << "\n\nWrong!!! The correct answer is B.Mt. Kanchanjungha" << endl;
                                        getch();
                                        break;
                                    }

                                    case 6:
                                        cout << "\n\n\nWhat is the group of frogs known as?";
                                        cout << "\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army";
                                        if (toupper(getch()) == 'D') {
                                            cout << "\n\nCorrect!!!" << endl;
                                            count++;
                                            getch();
                                            break;
                                        } else {
                                            cout << "\n\nWrong!!! The correct answer is D.An Army" << endl;
                                            getch();
                                            break;
                                        }
                                        default:
                                            break;
                            }

                            if (count >= 2) {
                                goto test;
                            } else {
                                system("cls");
                                cout << "\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME" << endl;
                                getch();
                                goto mainhome;
                            }
                        }

                        test:
                        system("cls");
                        cout << "\n\n\t*** CONGRATULATION " << playername << " you are eligible to play the Game ***" << endl;
                        cout << "\n\n\n\t!Press any key to Start the Game!";
                        if (toupper(getch()) == 'p') {
                            goto game;
                        }
                    game:
                        system("cls");
                        countr = 0;
                        for (i = 1; i <= 10; i++) {
                            system("cls");
                            r = i;

                            switch (r) {
                                case 1:
                                    cout << "\n\nWhat is the National Game of England?";
                                    cout << "\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball";
                                    if (toupper(getch()) == 'C') {
                                        cout << "\n\nCorrect!!!" << endl;
                                        countr++;
                                        getch();
                                        break;
                                    } else {
                                        cout << "\n\nWrong!!! The correct answer is C.Cricket" << endl;
                                        getch();
                                        goto score;
                                        break;
                                    }

                                    case 2:
                                        cout << "\n\n\nStudy of Earthquake is called............,";
                                        cout << "\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology";
                                        if (toupper(getch()) == 'A') {
                                            cout << "\n\nCorrect!!!" << endl;
                                            countr++;
                                            getch();
                                            break;
                                        } else {
                                            cout << "\n\nWrong!!! The correct answer is A.Seismology" << endl;
                                            getch();
                                            goto score;
                                            break;
                                        }

                                        case 3:
                                            cout << "\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ";
                                            cout << "\n\nA.6\t\tB.7\n\nC.8\t\tD.9";
                                            if (toupper(getch()) == 'C') {
                                                cout << "\n\nCorrect!!!" << endl;
                                                countr++;
                                                getch();
                                                break;
                                            } else {
                                                cout << "\n\nWrong!!! The correct answer is C.8" << endl;
                                                getch();
                                                goto score;
                                                break;
                                            }

                                            case 4:
                                                cout << "\n\n\nThe Laws of Electromagnetic Induction were given by?";
                                                cout << "\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb";
                                                if (toupper(getch()) == 'A') {
                                                    cout << "\n\nCorrect!!!" << endl;
                                                    countr++;
                                                    getch();
                                                    break;
                                                } else {
                                                    cout << "\n\nWrong!!! The correct answer is A.Faraday" << endl;
                                                    getch();
                                                    goto score;
                                                    break;
                                                }

                                                case 5:
                                                    cout << "\n\n\nIn what unit is electric power measured?";
                                                    cout << "\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units";
                                                    if (toupper(getch()) == 'B') {
                                                        cout << "\n\nCorrect!!!" << endl;
                                                        countr++;
                                                        getch();
                                                        break;
                                                    } else {
                                                        cout << "\n\nWrong!!! The correct answer is B.Watt" << endl;
                                                        getch();
                                                        goto score;
                                                        break;
                                                    }

                                                    case 6:
                                                        cout << "\n\n\nWhich element is found in Vitamin B12?";
                                                        cout << "\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron";
                                                        if (toupper(getch()) == 'B') {
                                                            cout << "\n\nCorrect!!!" << endl;
                                                            countr++;
                                                            getch();
                                                            break;
                                                        } else {
                                                            cout << "\n\nWrong!!! The correct answer is B.Cobalt" << endl;
                                                            goto score;
                                                            getch();
                                                            break;
                                                        }

                                                        case 7:
                                                            cout << "\n\n\nWhat is the National Name of Japan?";
                                                            cout << "\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon";
                                                            if (toupper(getch()) == 'D') {
                                                                cout << "\n\nCorrect!!!" << endl;
                                                                countr++;
                                                                getch();
                                                                break;
                                                            } else {
                                                                cout << "\n\nWrong!!! The correct answer is D.Nippon" << endl;
                                                                getch();
                                                                goto score;
                                                                break;
                                                            }

                                                            case 8:
                                                                cout << "\n\n\nHow many times a piece of paper can be folded at the most?";
                                                                cout << "\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper";
                                                                if (toupper(getch()) == 'B') {
                                                                    cout << "\n\nCorrect!!!" << endl;
                                                                    countr++;
                                                                    getch();
                                                                    break;
                                                                } else {
                                                                    cout << "\n\nWrong!!! The correct answer is B.7" << endl;
                                                                    getch();
                                                                    goto score;
                                                                    break;
                                                                }

                                                                case 9:
                                                                    cout << "\n\n\nWhat is the capital of Denmark?";
                                                                    cout << "\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray";
                                                                    if (toupper(getch()) == 'A') {
                                                                        cout << "\n\nCorrect!!!" << endl;
                                                                        countr++;
                                                                        getch();
                                                                        break;
                                                                    } else {
                                                                        cout << "\n\nWrong!!! The correct answer is A.Copenhagen" << endl;
                                                                        getch();
                                                                        goto score;
                                                                        break;
                                                                    }

                                                                    case 10:
                                                                        cout << "\n\n\nWhich is the longest River in the world?";
                                                                        cout << "\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon";
                                                                        if (toupper(getch()) == 'A') {
                                                                            cout << "\n\nCorrect!!!" << endl;
                                                                            countr++;
                                                                            getch();
                                                                            break;
                                                                        } else {
                                                                            cout << "\n\nWrong!!! The correct answer is A.Nile" << endl;
                                                                            getch();
                                                                            goto score;
                                                                            break;
                                                                        }

                                                                        case 11:
                                                                            cout << "\n\n\nWhat is the color of the Black Box in aeroplanes?";
                                                                            cout << "\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red";
                                                                            if (toupper(getch()) == 'C') {
                                                                                cout << "\n\nCorrect!!!" << endl;
                                                                                countr++;
                                                                                getch();
                                                                                break;
                                                                            } else {
                                                                                cout << "\n\nWrong!!! The correct answer is C.Orange" << endl;
                                                                                getch();
                                                                                goto score;
                                                                                break;
                                                                            }

                                                                            case 12:
                                                                                cout << "\n\n\nWhich city is known at 'The City of Seven Hills'?";
                                                                                cout << "\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin";
                                                                                if (toupper(getch()) == 'A') {
                                                                                    cout << "\n\nCorrect!!!" << endl;
                                                                                    countr++;
                                                                                    getch();
                                                                                    break;
                                                                                } else {
                                                                                    cout << "\n\nWrong!!! The correct answer is A.Rome" << endl;
                                                                                    getch();
                                                                                    goto score;
                                                                                    break;
                                                                                }

                                                                                case 13:
                                                                                    cout << "\n\n\nName the country where there no mosquitoes are found?";
                                                                                    cout << "\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France";
                                                                                    if (toupper(getch()) == 'D') {
                                                                                        cout << "\n\nCorrect!!!" << endl;
                                                                                        countr++;
                                                                                        getch();
                                                                                        break;
                                                                                    } else {
                                                                                        cout << "\n\nWrong!!! The correct answer is D.France" << endl;
                                                                                        getch();
                                                                                        goto score;
                                                                                        break;
                                                                                    }

                                                                                    case 14:
                                                                                        cout << "\n\n\nWho is the author of 'Pulpasa Cafe'?";
                                                                                        cout << "\n\nA.Narayan Wagle\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Khagendra Sangraula";
                                                                                        if (toupper(getch()) == 'A') {
                                                                                            cout << "\n\nCorrect!!!" << endl;
                                                                                            countr++;
                                                                                            getch();
                                                                                            break;
                                                                                        } else {
                                                                                            cout << "\n\nWrong!!! The correct answer is A.Narayan Wagle" << endl;
                                                                                            getch();
                                                                                            goto score;
                                                                                            break;
                                                                                        }

                                                                                        case 15:
                                                                                            cout << "\n\n\nWhich Blood Group is known as the Universal Recipient?";
                                                                                            cout << "\n\nA.A\t\tB.AB\n\nC.B\t\tD.O";
                                                                                            if (toupper(getch()) == 'B') {
                                                                                                cout << "\n\nCorrect!!!" << endl;
                                                                                                countr++;
                                                                                                getch();
                                                                                                break;
                                                                                            } else {
                                                                                                cout << "\n\nWrong!!! The correct answer is B.AB" << endl;
                                                                                                getch();
                                                                                                goto score;
                                                                                                break;
                                                                                            }

                                                                                            case 16:
                                                                                                cout << "\n\n\nWhat is the unit of measurement of distance between Stars?";
                                                                                                cout << "\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer";
                                                                                                if (toupper(getch()) == 'A') {
                                                                                                    cout << "\n\nCorrect!!!" << endl;
                                                                                                    countr++;
                                                                                                    getch();
                                                                                                    break;
                                                                                                } else {
                                                                                                    cout << "\n\nWrong!!! The correct answer is A.Light Year" << endl;
                                                                                                    getch();
                                                                                                    goto score;
                                                                                                    break;
                                                                                                }

                                                                                                case 17:
                                                                                                    cout << "\n\n\nThe country famous for Samba Dance is........";
                                                                                                    cout << "\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia";
                                                                                                    if (toupper(getch()) == 'A') {
                                                                                                        cout << "\n\nCorrect!!!" << endl;
                                                                                                        countr++;
                                                                                                        getch();
                                                                                                        break;
                                                                                                    } else {
                                                                                                        cout << "\n\nWrong!!! The correct answer is A.Brazil" << endl;
                                                                                                        getch();
                                                                                                        goto score;
                                                                                                        break;
                                                                                                    }

                                                                                                    case 18:
                                                                                                        cout << "\n\n\nWind speed is measure by__________?";
                                                                                                        cout << "\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n";
                                                                                                        if (toupper(getch()) == 'D') {
                                                                                                            cout << "\n\nCorrect!!!" << endl;
                                                                                                            countr++;
                                                                                                            getch();
                                                                                                            break;
                                                                                                        } else {
                                                                                                            cout << "\n\nWrong!!! The correct answer is D.Anemometer" << endl;
                                                                                                            getch();
                                                                                                            goto score;
                                                                                                            break;
                                                                                                        }

                                                                                                        case 19:
                                                                                                            cout << "\n\n\nWhich city in the world is popularly known as The City of Temple?";
                                                                                                            cout << "\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n";
                                                                                                            if (toupper(getch()) == 'C') {
                                                                                                                cout << "\n\nCorrect!!!" << endl;
                                                                                                                countr++;
                                                                                                                getch();
                                                                                                                break;
                                                                                                            } else {
                                                                                                                cout << "\n\nWrong!!! The correct answer is C.Kathmandu" << endl;
                                                                                                                getch();
                                                                                                                goto score;
                                                                                                                break;
                                                                                                            }

                                                                                                            case 20:
                                                                                                                cout << "\n\n\nWhich hardware was used in the First Generation Computer?";
                                                                                                                cout << "\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I";
                                                                                                                if (toupper(getch()) == 'B') {
                                                                                                                    cout << "\n\nCorrect!!!" << endl;
                                                                                                                    countr++;
                                                                                                                    getch();
                                                                                                                    break;
                                                                                                                } else {
                                                                                                                    cout << "\n\nWrong!!! The correct answer is B.Valves" << endl;
                                                                                                                    getch();
                                                                                                                    goto score;
                                                                                                                    break;
                                                                                                                }

                                                                                                                case 21:
                                                                                                                    cout << "\n\n\nOzone plate is being destroyed regularly because of____ ?";
                                                                                                                    cout << "\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C";
                                                                                                                    if (toupper(getch()) == 'D') {
                                                                                                                        cout << "\n\nCorrect!!!" << endl;
                                                                                                                        countr++;
                                                                                                                        getch();
                                                                                                                        break;
                                                                                                                    } else {
                                                                                                                        cout << "\n\nWrong!!! The correct answer is D. C.F.C" << endl;
                                                                                                                        getch();
                                                                                                                        goto score;
                                                                                                                        break;
                                                                                                                    }

                                                                                                                    case 22:
                                                                                                                        cout << "\n\n\nWho won the Women's Australian Open Tennis in 2007?";
                                                                                                                        cout << "\n\nA.Martina Hingis\t\tB.Maria Sarapova\n\nC.Kim Clijster\t\tD.Serena Williams";
                                                                                                                        if (toupper(getch()) == 'D') {
                                                                                                                            cout << "\n\nCorrect!!!" << endl;
                                                                                                                            countr++;
                                                                                                                            getch();
                                                                                                                            break;
                                                                                                                        } else {
                                                                                                                            cout << "\n\nWrong!!! The correct answer is D.Serena Williams" << endl;
                                                                                                                            getch();
                                                                                                                            goto score;
                                                                                                                            break;
                                                                                                                        }

                                                                                                                        case 23:
                                                                                                                            cout << "\n\n\nWhich film was awarded the Best Motion Picture at Oscar in 2010?";
                                                                                                                            cout << "\n\nA.The Secret in their Eyes\t\tB.Shutter Island\n\nC.The King's Speech\t\tD.The Reader";
                                                                                                                            if (toupper(getch()) == 'C') {
                                                                                                                                cout << "\n\nCorrect!!!" << endl;
                                                                                                                                countr++;
                                                                                                                                getch();
                                                                                                                                break;
                                                                                                                            } else {
                                                                                                                                cout << "\n\nWrong!!! The correct answer is C.The King's Speech" << endl;
                                                                                                                                getch();
                                                                                                                                goto score;
                                                                                                                                break;
                                                                                                                            }
                                                                                                                    }
                                                                                                                }
                                                                                                            score:
                                                                                                                system("cls");
                                                                                                                score = (float)countr * 100000;
                                                                                                                if (score > 0.00 && score < 1000000) {
                                                                                                                    cout << "\n\n\t\t**************** CONGRATULATION *****************" << endl;
                                                                                                                    cout << "\n\t You won $" << score << endl;
                                                                                                                    goto go;
                                                                                                                } else if (score == 1000000.00) {
                                                                                                                    cout << "\n\n\n \t\t**************** CONGRATULATION ****************" << endl;
                                                                                                                    cout << "\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!! " << endl;
                                                                                                                    cout << "\n\t\t You won $" << score << endl;
                                                                                                                    cout << "\t\t Thank You!!!" << endl;
                                                                                                                } else {
                                                                                                                    cout << "\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********" << endl;
                                                                                                                    cout << "\n\t\t Thanks for your participation" << endl;
                                                                                                                    cout << "\n\t\t TRY AGAIN";
                                                                                                                    goto go;
                                                                                                                }

                                                                                                                go:
                                                                                                                    cout << "\n\n Press Y if you want to play next game" << endl;
                                                                                                                    cout << " Press any key if you want to go main menu" << endl;
                                                                                                                    if (toupper(getch()) == 'Y')
                                                                                                                        goto home;
                                                                                                                    else {
                                                                                                                        edit_score(score, playername);
                                                                                                                        goto mainhome;
                                                                                                                    }
                                                                                                            }
                                                                                                        }
                                                                                                    }


