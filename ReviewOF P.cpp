

/*
Hello :D
this is simple project of Fondimantal for all developer 
Number system having :
converting Bin ===> Dec;
converting Bin ===> Oct;
converting Bin ===> Hex;

converting Dec ===> Bin;
converting Dec ===> Oct;
converting Dec ===> Hex;

converting Oct ===> Bin;
converting Oct ===> Dec;
converting Oct ===> Hex;

converting Hex ===> Bin;
converting Hex ===> Oct;
converting Hex ===> Dec;

this project applay all learning inside course And Base fo All Programer 

(:======================================== -ZF- ========================================================:)

*/
#include <iostream>
#include<string>
#include<vector>
using namespace std;

enum eConverting { eBToD = 1, eBToO = 2, eBToH = 3, eDToB = 4, eDToO = 5, eDToH = 6, eOToB = 7, eOToD = 8, eOToH = 9, eHToB = 10, eHToD = 11, eHToO = 12};

void ScreenView();
short GetDecimaleFromHex(char hex,short power) {

    char value[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };

    switch (true)
    {
    case 0:
        if (value[0] == hex) {
            return (0* (pow(16, power)));
        }
    case 1:
        if (value[1] == hex) {
            return (1 * (pow(16, power)));
        }
    case 2 :
        if (value[2] == hex) {
            return (2 * (pow(16, power)));
        }
    case 3 :
        if (value[3] == hex) {
            return (3 * (pow(16, power)));
        }
        
    case 4:
        if (value[4] == hex) {
            return (4 * (pow(16, power)));
        }
    case 5:
        if (value[5] == hex) {
            return (5 * (pow(16, power)));
        }
    case 6:
        if (value[6] == hex) {
            return (6* (pow(16, power)));
        }
    case 7:
        if (value[7] == hex) {
            return (7 * (pow(16, power)));
        }
    case 8:
        if (value[8] == hex) {
            return (8 * (pow(16, power)));
        }

    case 9:
        if (value[9] == hex) {
            return (9 * (pow(16, power)));
        }
    case 10:
        if (value[10] == hex) {
            return (10 * (pow(16, power)));
        }
    case 11:
        if (value[11] == hex) {
            return (11 * (pow(16, power)));
        }
    case 12:
        if (value[12] == hex) {
            return (12* (pow(16, power)));
        }
    case 13:
        if (value[13] == hex) {
            return (13 * (pow(16, power)));
        }
    case 14:
        if (value[14] == hex) {
            return (14 * (pow(16, power)));
        }
    case 15:
        if (value[15] == hex) {
            return (15* (pow(16,power)));
        }
    }

    return 0;
}
short GetDecimalFromBinary(short power) {
    return pow(2, power);
}
short GetDecimalFromOctal(char Oct, short power) {

    if (Oct == '0') return 0;

    switch (Oct)
    {
    case '1':
            return 1 * (pow(8, power));
    case '2':
        return 2 * (pow(8, power));
    case '3':
        return 3 * (pow(8, power));
    case '4':
        return 4 * (pow(8, power));
    case '5':
        return 5 * (pow(8, power));
    case '6':
        return 6 * (pow(8, power));
    case '7':
        return 7 * (pow(8, power));
    }

    return 0;
}
short GetOctalFromBinary(short power) {
    return pow(8, power);
}
string AddZero(string s) {
    short size = (short)(4 - s.size());

    string s2 = "";
    for (short i = 0; i < size; i++) {
        s2 += "0";
    }

    s2 += s;

    return s2;
}
string Findequal(string s)
{

    if (s.size() < 4) {
        s = AddZero(s);
    }

    if ("0001" == s) return "1";
    if ("0010" == s) return "2";
    if ("0011" == s) return "3";
    if ("0100" == s) return "4";
    if ("0101" == s) return "5";
    if ("0110" == s) return "6";
    if ("0111" == s) return "7";
    if ("1000" == s) return "8";
    if ("1001" == s) return "9";
    if ("1010" == s) return "A";
    if ("1011" == s) return "B";
    if ("1100" == s) return "C";
    if ("1101" == s) return "D";
    if ("1110" == s) return "E";
    if ("1111" == s) return "F";

    return "0";
}
string ResultOfCalcualtion(vector<string> Vsub) {

    string Result = "";
    for (string s : Vsub) {
        Result += Findequal(s);
    }

     reverse(Result.begin(), Result.end());

     return Result;
}
string GetHexFromBinary(string bin) {
    
    float HowHaveNibble = (float)bin.size() / 4;

    float checking = HowHaveNibble - ((int)HowHaveNibble);
    if (checking == 0.5 ||checking == 0.25 ||checking == 0.75) 
    {
        HowHaveNibble = (int)(HowHaveNibble + 1);
    }

    vector<string> VsubValue;
    string sub = "";
    string defualtStr = bin;
    for (short i = 0; i < HowHaveNibble; i++) {

        short size = defualtStr.size() - 4;

        if (size <= 0) {

            VsubValue.push_back(defualtStr);
            break;
        }

        sub = defualtStr.substr(size, 4);
        VsubValue.push_back(sub);
        defualtStr.erase(size, 4);

    }
    
    
    return ResultOfCalcualtion(VsubValue);
}

char GetHex(int& value) {

    char Hex[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };

    short result = 0;
    float remender = (float)value / 16;
    int newValue = (int)remender;
    remender -= newValue;

     result = (short)remender * 16;


    value = newValue;

    return Hex[result];
}
char GetBinery(int& value) {

    float remender = (float)value / 2;
    int NewValue = (int)remender;
    remender -= NewValue;

    short Result = (short)remender * 2;

    value = NewValue;

    return (Result == 1) ? '1' : '0';
}
char GetOctal(int& value) {

    char Oct[8] = { '0','1','2','3','4','5','6','7' };
    short result = 0;
    float remender = (float)value / 8;
    int newValue = (int)remender;
    remender -= newValue;

    result = (short)remender * 8;


    value = newValue;

    return Oct[result];
}
short FindLetterOFHex(char hex) {

    switch (hex)
    {
    case '0':
        return 0;
    case '1':
       return 1; 
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    case 'A':
        return 10;
    case 'B':     
        return 11;
    case 'C':
        return 12;
    case 'D':
        return 13;
    case 'E':
        return 14;
    case 'F':
        return 15;
    }

    return 0;
}
short FindDigitOfOCt(char Oct) {

    switch (Oct)
    {
    case '0':
        return 0;

    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    }
    return 0;
}

string convertHexToDecimal(string Hex) {

    if (Hex == "" || Hex == "0") return "0";
    int DecimalVAlue = 0;

    string newHex = Hex;
    for (short i = 0; i <= newHex.size() - 1; i++)
    {
        DecimalVAlue += GetDecimaleFromHex(newHex[(newHex.size() - 1) - i],i);
    }

    return to_string(DecimalVAlue);
}
string convertDecimaleToHex(string Dec) {

    if (Dec == "" || Dec == "0") return "0";

    string Result = "";
    int Value = stoi(Dec);
    while (Value > 0)
    {
        Result += GetHex(Value);
    }

    reverse(Result.begin(), Result.end());

    return Result;
}
string convertDecimalToBinary(string Dec) {
    if (Dec == "" || Dec == "0") return "0";

    string Result = "";
    int Value = stoi(Dec);
    while (Value) {
        Result += GetBinery(Value);
    }

    reverse(Result.begin(), Result.end());

    return Result;
}
string convertBinaryToDecimal(string Bin) {
    if (Bin == "" || Bin == "0") return "";

    int Result = 0;

    for (int short i = 0; i < Bin.size(); i++) {

        if (Bin[(Bin.size() - 1) - i] == '0') continue;

        Result += GetDecimalFromBinary(i);
    }

    return to_string(Result);
}
string convertHexToBinaryDeirc(string Hex) {
    if (Hex == "" || Hex == "0") return "0";

    string BinaryBaseTow_FourBit[16] = { "0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111" };

    string Result = "";
    for (short i = 0; i < Hex.size(); i++) {

        char HEXChar = Hex[i];
        Result += BinaryBaseTow_FourBit[FindLetterOFHex(HEXChar)];
    }


    return Result;
}
string convertOctalToBinaryDeirc(string Oct) {

    if (Oct == "" || Oct == "0") return "0";

    string BinaryBaseTow_ThreeBit[16] = { "000","001","010","011","100","101","110","111" };

    string Result = "";
    for (int i = 0; i < Oct.size(); i++) {

        Result += BinaryBaseTow_ThreeBit[FindDigitOfOCt(Oct[i])];

    }

    return Result;
}
string convertOctalToDecimal(string Octal) {

    if (Octal == "" || Octal == "0") return "0";

    short Result = 0;

    for (int i = 0; i < Octal.size(); i++) {

        Result += GetDecimalFromOctal(Octal[(Octal.size() - 1) - i], i);
    }

    return to_string(Result);
}
string ConvertBinaryToOctal(string Bin) 
{
    if (Bin == "" || Bin == "0") return "0";

    short Result = 0;

    for (int i = 0; i < Bin.size(); i++)
    {
        if (Bin[(Bin.size() - 1) - i] == '0') continue;
        Result += GetOctalFromBinary(i);
    }

    return to_string(Result);
}
string ConvertBinaryToHex(string Bin)
{
    if (Bin == "" || Bin == "0") return "0";
    return GetHexFromBinary(Bin);
}
string convertOctalToHex(string Oct) {
    return convertDecimaleToHex(convertOctalToDecimal(Oct));
}
string convertDecimalToOctal(string Dec) {
    if (Dec == "" || Dec == "0") return "0";

    string Result = "";
    int Value = stoi(Dec);
    while (Value > 0)
    {
        Result += GetOctal(Value);
    }

    reverse(Result.begin(), Result.end());

    return Result;
}
string convertHexToOctal(string Hex) {
    return ConvertBinaryToOctal(convertHexToDecimal(Hex));
}

string ReadString(string Message) {
    string Result = "";
        cout << Message;
        cin >> Result;
      
    return Result;
}


void GoBackToHome() {
    cout << "\n\nEnter any Key To Back Home Menu ==> ";
    system("pause > 0");
    system("cls");
    ScreenView();
}
void PrintConvert(string Message, string Convert) {

    cout << "\n---------------------------------------\n";

    cout << Message << Convert << endl;

    cout << "---------------------------------------\n";


    cout << "Think you For Useing :)";
}

void ScreenConvertBinaryToDecimal() {
    bool IsValidition = false;
    string BinaryVal = "";
    do {
        system("cls");
    cout << "\n\n\t\t\tConvert Binary To Decimal Screen\n";

    if (IsValidition == true) {
        cout << "\t\n\nPlease Checking About Your Input :(\n\n";
        IsValidition = false;
    }

    BinaryVal = ReadString("Enter Binary Base Number => ");
    IsValidition = (BinaryVal == "");

    } while (IsValidition);


    BinaryVal = convertBinaryToDecimal(BinaryVal);
    PrintConvert("The Convert Binary To Decimal Is ===> ", BinaryVal);
}
void ScreenConvertBinaryToOct() {
    bool IsValidition = false;
    string BinaryVal = "";
    do {
        system("cls");
        cout << "\n\n\t\t\tConvert Binary To Octal Screen\n";

        if (IsValidition == true) {
            cout << "\t\n\nPlease Checking About Your Input :(\n\n";
            IsValidition = false;
        }

        BinaryVal = ReadString("Enter Binary Base Number => ");
        IsValidition = (BinaryVal == "");

    } while (IsValidition);


    BinaryVal = "0";
    PrintConvert("The Convert Binary To Decimal Is ===> ", BinaryVal);
}
void ScreenConvertBinaryToHex() {
    bool IsValidition = false;
    string BinaryVal = "";
    do {
        system("cls");
        cout << "\n\n\t\t\tConvert Binary To Hex Decimal Screen\n";

        if (IsValidition == true) {
            cout << "\t\n\nPlease Checking About Your Input :(\n\n";
            IsValidition = false;
        }

        BinaryVal = ReadString("Enter Binary Base Number => ");
        IsValidition = (BinaryVal == "");

    } while (IsValidition);


    BinaryVal = ConvertBinaryToHex(BinaryVal);
    PrintConvert("The Convert Binary To Decimal Is ===> ", BinaryVal);
}

void ScreenConvertDecimalToBinary() {
    bool IsValidition = false;
    string DecimalVal = "";
    do {
        system("cls");
        cout << "\n\n\t\t\tConvert Decimal To Binary Screen\n";

        if (IsValidition == true) {
            cout << "\t\n\nPlease Checking About Your Input :(\n\n";
            IsValidition = false;
        }

        DecimalVal = ReadString("Enter Decimal Base Number => ");
        IsValidition = (DecimalVal == "");

    } while (IsValidition);


    DecimalVal = convertDecimalToBinary(DecimalVal);
    PrintConvert("The Convert Decimal To Binary Is ===> ", DecimalVal);
}
void ScreenConvertDecimalToOct() {
    bool IsValidition = false;
    string DecimalVal = "";
    do {
        system("cls");
        cout << "\n\n\t\t\tConvert Decimal To Octal Screen\n";

        if (IsValidition == true) {
            cout << "\t\n\nPlease Checking About Your Input :(\n\n";
            IsValidition = false;
        }

        DecimalVal = ReadString("Enter Decimal Base Number => ");
        IsValidition = (DecimalVal == "");

    } while (IsValidition);


    DecimalVal = convertDecimalToOctal(DecimalVal);
    PrintConvert("The Convert Decimal To Octal Is ===> ", DecimalVal);
}
void ScreenConvertDecimalToHex() {
    bool IsValidition = false;
    string DecimalVal = "";
    do {
        system("cls");
        cout << "\n\n\t\t\tConvert Decimal To Hex Decimal Screen\n";

        if (IsValidition == true) {
            cout << "\t\n\nPlease Checking About Your Input :(\n\n";
            IsValidition = false;
        }

        DecimalVal = ReadString("Enter Decimal Base Number => ");
        IsValidition = (DecimalVal == "");

    } while (IsValidition);


    DecimalVal = convertDecimaleToHex(DecimalVal);
    PrintConvert("The Convert Decimal To Hex Decimal Is ===> ", DecimalVal);
}

void ScreenConvertOctalToBinary() {
    bool IsValidition = false;
    string OctalVal = "";
    do {
        system("cls");
        cout << "\n\n\t\t\tConvert Octal To Binary Screen\n";

        if (IsValidition == true) {
            cout << "\t\n\nPlease Checking About Your Input :(\n\n";
            IsValidition = false;
        }

        OctalVal = ReadString("Enter Octal Base Number => ");
        IsValidition = (OctalVal == "");

    } while (IsValidition);


    OctalVal = convertOctalToBinaryDeirc(OctalVal);
    PrintConvert("The Convert Octal To Binary Is ===> ", OctalVal);
}
void ScreenConvertOctalToDecimal() {
    bool IsValidition = false;
    string OctalVal = "";
    do {
        system("cls");
        cout << "\n\n\t\t\tConvert Octal To Decimal Screen\n";

        if (IsValidition == true) {
            cout << "\t\n\nPlease Checking About Your Input :(\n\n";
            IsValidition = false;
        }

        OctalVal = ReadString("Enter Octal Base Number => ");
        IsValidition = (OctalVal == "");

    } while (IsValidition);


    OctalVal = convertOctalToDecimal(OctalVal);
    PrintConvert("The Convert Octal To Decimal Is ===> ", OctalVal);
}
void ScreenConvertOctalToHex() {
    bool IsValidition = false;
    string OctalVal = "";
    do {
        system("cls");
        cout << "\n\n\t\t\tConvert Octal To Hex Decimal Screen\n";

        if (IsValidition == true) {
            cout << "\t\n\nPlease Checking About Your Input :(\n\n";
            IsValidition = false;
        }

        OctalVal = ReadString("Enter Octal Base Number => ");
        IsValidition = (OctalVal == "");

    } while (IsValidition);


    OctalVal = convertOctalToHex(OctalVal);
    PrintConvert("The Convert Octal To Hex Decimal Is ===> ", OctalVal);
}

void ScreenConvertHexToBinary() {
    bool IsValidition = false;
    string HexVal = "";
    do {
        system("cls");
        cout << "\n\n\t\t\tConvert Hex Decimal To Binary Screen\n";

        if (IsValidition == true) {
            cout << "\t\n\nPlease Checking About Your Input :(\n\n";
            IsValidition = false;
        }

        HexVal = ReadString("Enter Hex Decimal Base Number => ");
        IsValidition = (HexVal == "");

    } while (IsValidition);


    HexVal = convertHexToBinaryDeirc(HexVal);
    PrintConvert("The Convert Hex Decimal To Binary Is ===> ", HexVal);
}
void ScreenConvertHexToDecimal() {
    bool IsValidition = false;
    string HexVal = "";
    do {
        system("cls");
        cout << "\n\n\t\t\tConvert Hex Decimal To Decimal Screen\n";

        if (IsValidition == true) {
            cout << "\t\n\nPlease Checking About Your Input :(\n\n";
            IsValidition = false;
        }

        HexVal = ReadString("Enter Hex Decimal Base Number => ");
        IsValidition = (HexVal == "");

    } while (IsValidition);


    HexVal = convertHexToDecimal(HexVal);
    PrintConvert("The Convert Hex Decimal To Decimal Is ===> ", HexVal);
}
void ScreenConvertHexToOctal() {
    bool IsValidition = false;
    string HexVal = "";
    do {
        system("cls");
        cout << "\n\n\t\t\tConvert Hex Decimal To Octal Screen\n";

        if (IsValidition == true) {
            cout << "\t\n\nPlease Checking About Your Input :(\n\n";
            IsValidition = false;
        }

        HexVal = ReadString("Enter Hex Decimal Base Number => ");
        IsValidition = (HexVal == "");

    } while (IsValidition);


    HexVal = convertHexToOctal(HexVal);
    PrintConvert("The Convert Hex Decimal To Octal Is ===> ", HexVal);
}

void ShooesConvert(eConverting number) 
{
    switch (number)
    {
    case eBToD:
        system("cls");
        ScreenConvertBinaryToDecimal();
        GoBackToHome();
        break;
    case eBToO:
        system("cls");
        ScreenConvertBinaryToOct();
        GoBackToHome();
        break;
    case eBToH:
        system("cls");
        ScreenConvertBinaryToHex();
        GoBackToHome();
        break;
    case eDToB:
        system("cls");
        ScreenConvertDecimalToBinary();
        GoBackToHome();
        break;
    case eDToO:
        system("cls");
        ScreenConvertDecimalToOct();
        GoBackToHome();
        break;
    case eDToH:
        system("cls");
        ScreenConvertDecimalToHex();
        GoBackToHome();
        break;
    case eOToB:
        system("cls");
        ScreenConvertOctalToBinary();
        GoBackToHome();
        break;
    case eOToD:
        system("cls");
        ScreenConvertOctalToDecimal();
        GoBackToHome();
        break;
    case eOToH:
        system("cls");
        ScreenConvertOctalToHex();
        GoBackToHome();
        break;
    case eHToB:
        system("cls");
        ScreenConvertHexToBinary();
        GoBackToHome();
        break;
    case eHToD:
        system("cls");
        ScreenConvertHexToDecimal();
        GoBackToHome();
        break;
    case eHToO:
        system("cls");
        ScreenConvertHexToOctal();
        GoBackToHome();
        break;
    }
}
void MessageGoodBey() {
    system("cls");

    cout << "\n\n\n\t\tThis is Converting Of System Computer Logic :)\n";
    cout << "\t\t\t Thanks For Using by 'ZF' :D\n\n";

    system("pause > 0");
}
void ScreenView() {

    bool checkCorrectNumber = true;
    short NumberShooes = 0;
    do {
     system("cls");
     cout << "\t\t\t";
    for (int i = 0; i < 30; i++) {
        cout << "-";

        if (i == 29) cout << endl;
    }

    cout << "\t\t\t| shooes what do you Convert |" << endl << endl;

    cout << "\t\t\t|01| Convert Binary To Decimal."<<endl;
    cout << "\t\t\t|02| Convert Binary To Octal."<<endl;
    cout << "\t\t\t|03| Convert Binary To Hex Decimal." << endl;

    cout << "\t\t\t|04| Convert Decimal To Binary."<<endl;
    cout << "\t\t\t|05| Convert Decimal To Octal." << endl;
    cout << "\t\t\t|06| Convert Decimal To Hex Decimal." << endl;

    cout << "\t\t\t|07| Convert Octal To Binary."<<endl;
    cout << "\t\t\t|08| Convert Octal To Decimal." << endl;
    cout << "\t\t\t|09| Convert Octal To Hex Decimal." << endl;

    cout << "\t\t\t|10| Convert Hex Decimal To Binary." << endl;
    cout << "\t\t\t|11| Convert Hex Decimal To Decimal." << endl;
    cout << "\t\t\t|12| Convert Hex Decimal To Octal." << endl;
    cout << "\t\t\t|13|             Exit" << endl;

    cout << "\t\t\t";
    for (int i = 0; i < 30; i++) {
        cout << "-";

        if (i == 29) cout << endl;
    }


    cout << "\nShooes Number To Convert [1-12] => ";
    cin >> NumberShooes;

    if (NumberShooes > 13 || NumberShooes < 1) 
    {
        checkCorrectNumber = false;

        cout << "\n\n\t\t\tPlease Enter Coorect Number " << endl;
        system("pause  > 0");
    }
    else 
    {
        checkCorrectNumber = true;
    }

    } while (!checkCorrectNumber);

    if (NumberShooes == 13) 
    {
        MessageGoodBey(); 
            return;
    };
   
    ShooesConvert((eConverting)NumberShooes);

}

int main()
{
   ScreenView();
    return 0;
}

