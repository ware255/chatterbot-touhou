/*

    このソースコードが嫌な人や書き換えてぇなって人は、自由に書き換えてどう
    ぞ。分かりやすくコメントつけときます。基本的に制御文だらけなので初心者
    でも書き換えはできるかもしれません。

    ※このプログラムを書き換えてウイルスなどを作らないでください。できるかどうか知らんけどｗ

*/
#include <iostream>//標準ライブラリ
#include <iomanip>//cinの脆弱性をなくすために必要
#include <fstream>//ファイル操作の時に必要
#include <random>//乱数を使用する時に必要
#include <string>
/*#include <string>
  ↑は、文字を格納する時に必要 ※文字を格納する時に必要なだけなのでconst char str[] = "test";に置き換えていいので
  #include <string>はなくしてもいいです。
*/
#include <cstring>
#include <windows.h>//タイトルに必要
#pragma comment(lib, "kernel32.lib")
using namespace std;    // std::cout や std::cin の std をなくす為に必要

int i;

void clear()//自作関数 clearする時に使う。
{
    cout << "\x1b[2J";          //clearするための特殊文字
    cout << "\x1b[8A" << endl;
    /*
    
    ↑の特殊文字が使えない場合には以下のプログラムに書き換えをしてください。。
    system("cls");      <- Windowsの場合
    system("clear");    <- Linuxの場合

    */
    return;     //void なので戻り値はない。
}

//--------------------霊夢風プログラム--------------------

int hakurei()//自作関数
{
nyuroku1:
    int i = rand() % 2 + 1;
    int yuti;
    char word[256];
    cout << ":";
    cin >> setw(256) >> word;
    if (word == "おはよう") {
        for (yuti = 0; yuti < 1; ++yuti) {
            if (i == 1) {
                cout << "おはよ" << endl;
                cin.ignore(4024, '\n');
            }
            else if (i == 2) {
                cout << "。。。" << endl;
                cin.ignore(4024, '\n');
            }
        }
        goto nyuroku1;
    }
    else if (word == "こんにちは") {
        for (yuti = 0; yuti < 1; ++yuti) {
            if (i == 1) {
                cout << "こんにはー" << endl;
                cin.ignore(4024, '\n');
            }
            else if (i == 2) {
                cout << "。。。" << endl;
                cin.ignore(4024, '\n');
            }
        }
        goto nyuroku1;
    }
    else if (word == "こんばんは") {
        for (yuti = 0; yuti < 1; ++yuti) {
            if (i == 1) {
                cout << "こんばんはー" << endl;
                cin.ignore(4024, '\n');
            }
            else if (i == 2) {
                cout << "。。。" << endl;
                cin.ignore(4024, '\n');
            }
        }
        goto nyuroku1;
    }
    else if (word == "exit" || word == "ばいばい") { //if文の中にある|は、もしどっちか一つの出来たら以下の文を実行という意味
        exit(0);
    }
    else if (cin.fail()) {
        cin.clear();
        cin.ignore(4024, '\n');
        exit(0);
    }
    return 0;
}

int reimu()//自作関数
{
    string a1 = "1";
    string data;
    ifstream save("save");
    if (!save) {    // !(エクスクラメーションマーク)を付けることで、
        exit(1);    // もしもsaveというファイルが開けなかったらという文になる。もし開けなかったら終了する。
    }
    save >> data;
    if (data == a1) {
        cout << "私、霊夢っていうの\n\n" << endl;
        hakurei();      //関数を呼び出す。
    }
    return 0;
}

//--------------------魔理沙風プログラム--------------------

int kirisame()//自作関数
{
nyuroku2:
    char word[256];
    cout << ":";
    cin >> setw(256) >> word;
    if (word == "おはよう") {
        cout << "やぁ、おはよう！" << endl;
        cin.ignore(4024, '\n');
        goto nyuroku2;
    }
    else if (word == "こんにちは") {
        cout << "こんにちはなんだぜ!" << endl;
        cin.ignore(4024, '\n');
        goto nyuroku2;
    }
    else if (word == "こんばんは") {
        cout << "こんばんはなんだぜ!" << endl;
        cin.ignore(4024, '\n');
        goto nyuroku2;
    }
    else if (word == "exit" || word == "ばいばい") { //if文の中にある|は、もしどっちか一つの出来たら以下の文を実行という意味
        exit(0);
    }
    else {
        cin.clear();
        cin.ignore(4024, '\n');
        exit(0);
    }
    return 0;
}

int marisa()//自作関数
{
    string m = "2";
    string data;
    ifstream save("save");
    if (!save) {    // !(エクスクラメーションマーク)を付けることで、
        exit(1);    // もしもsaveというファイルが開けなかったらという文になる。もし開けなかったら終了する。
    }
    save >> data;
    if (data == m) {
        cout << "おっ、おかえり！\n\n" << endl;
        kirisame();     //関数を呼び出す。
    }
    return 0;
}

//--------------------妖夢(みょん)風プログラム--------------------

int youmu()//自作関数
{
nyuroku3:
    char word[256];
    i = rand() % 2 + 1;
    cout << ":";
    cin >> setw(256) >> word;
    if (word == "おはよう") {
        cout << "おはみょん！" << endl;
        cin.ignore(4024, '\n');
        goto nyuroku3;
    }
    else if (word == "こんにちは") {
        cout << "こんにちみょん！" << endl;
        cin.ignore(4024, '\n');
        goto nyuroku3;
    }
    else if (word == "こんばんは") {
        cout << "こんばんみょん！" << endl;
        cin.ignore(4024, '\n');
        goto nyuroku3;
    }
    else if (word == "exit" ||word == "ばいばい") { //if文の中にある|は、もしどっちか一つの出来たら以下の文を実行という意味
        exit(0);
    }
    else {
        cin.clear();
        cin.ignore(4024, '\n');
        exit(-1);               //失敗したので-1
    }
    return 0;
}

int myon()//自作関数
{
    string a1 = "3";
    string data;
    ifstream save("save");
    if (!save) {    // !(エクスクラメーションマーク)を付けることで、
        exit(1);    // もしもsaveというファイルが開けなかったらという文になる。もし開けなかったら終了する。
    }
    save >> data;
    if (data == a1) {
        cout << "おかえりなさいませ。今日は、何をしますか？\n\n" << endl;
        youmu();        //関数を呼び出す。
    }
    
    return 0;
}

//ここからはメイン関数

int main(int argc, char** argv)//main関数
{
    ::SetConsoleTitle(TEXT("人工無能(東方)"));
    if (argc <= 1) {
        int namber;
        string R = "1";// くら
        string M = "2";//    べる
        string Y = "3";//        時に使う。
        string data;    //格納するために使う。
        ifstream save("save");
        save >> data;   //saveの中に入っている数字をdataに格納
        if (data == R) {
            reimu();        //reimu関数を呼び出す。
        }
        else if (data == M) {
            marisa();       //marisa関数を呼び出す。
        }
        else if (data == Y) {
            myon();         //myon関数を呼び出す。
        }
        cout << "誰風にしますか？" << "数字を選択してください。\n" << endl;
        cout << "1 - 博麗霊夢風" << endl;
        cout << "2 - 霧雨魔理沙風" << endl;
        cout << "3 - 魂魄妖夢(みょん)風\n\n" << endl;
        cout << "選択:";    //endlがないことに注意
        cin >> namber;      // cinは入力関数で、変数がint型なので数字を入力する。(charならば、文字でも可)

        if (namber == 1) {
            clear();    //clear関数を呼び出してコンソール画面をクリア
            cout << "私、霊夢って言うの。" << endl;
            cin.ignore(1024, '\n');
            {
                ofstream save("save");  //saveというファイルを作成
                if (!save) {    // !(エクスクラメーションマーク)を付けることで、
                    exit(1);    // もしもsaveというファイルが開けなかったらという文になる。もし開けなかったら終了する。
                }
                save << "1";    // saveというファイルに1を出力
            }
            cin.get();      //getchar()に似てる文。
        }
        else if (namber == 2) {
            clear();    //clear関数を呼び出してコンソール画面をクリア
            cout << "魔理沙だぜ！" << endl;
            cin.ignore(1024, '\n');
            {
                ofstream save("save");  //saveというファイルを作成
                if (!save) {    // !(エクスクラメーションマーク)を付けることで、
                    exit(1);    // もしもsaveというファイルが開けなかったらという文になる。もし開けなかったら終了する。
                }
                save << "2";    // saveというファイルに2を出力
            }
            cin.get();      //getchar()に似てる文。
        }
        else if (namber == 3) {
            clear();    //clear関数を呼び出してコンソール画面をクリア
            cout << "みょん！" << endl;
            cin.ignore(1024, '\n');
            {
                ofstream save("save");  //saveというファイルを作成
                if (!save) {    // !(エクスクラメーションマーク)を付けることで、
                    exit(1);    // もしもsaveというファイルが開けなかったらという文になる。もし開けなかったら終了する。
                }
                save << "3";    // saveというファイルに3を出力
            }
            cin.get();      //getchar()に似てる文。
        }
        else if (!cin.bad()) {
            cin.clear();    //clear関数を呼び出していないことに注意。別の意味です。
            cin.ignore(1024, '\n');
            exit(0);
        }
    }
    else if (strcmp(argv[1], "--help") == 0) {
        cout << "このプログラムは、主(ware255)が自己満足のために作ったプログラムです。\n" << endl;
        cout << "コマンドラインで使いたい時に使う引数" << endl;
        cout << "例 ~$ 人工無能 [オプション]\n" << endl;
        cout << "人工無能 --help    :ヘルプ" << endl;
        cout << "人工無能 1         :霊夢風" << endl;
        cout << "人工無能 2         :魔理沙風" << endl;
        cout << "人工無能 3         :妖夢(みょん)風\n" << endl;
        exit(0);
    }
    else if (strcmp(argv[1], "1") == 0) {
        reimu();
    }
    else if (strcmp(argv[1], "2") == 0) {
        marisa();
    }
    else if (strcmp(argv[1], "3") == 0) {
        myon();
    }
    return 0;   //戻り値が0
}
