/*
    このソースコードが嫌な人や書き換えてぇなって人は、自由に書き換えてどう
    ぞ。分かりやすくコメントつけときます。基本的に制御文だらけなので初心者
    でも書き換えはできるかもしれません。
    めんどくさくて、前に書いたgoto文はそのままです。許して下さい。何でもします。(何でもするとは言ってない。)
    ※このプログラムを書き換えてウイルスなどを作らないでください。できるかどうか知らんけどｗ
*/
#include <iostream>//標準ライブラリ
#include <iomanip>//cinの脆弱性をなくすために必要
#include <fstream>//ファイル操作の時に必要
#include <random>//乱数を使用する時に必要
#include <cstdio>
#include <string>
#include <cstring>
#include <windows.h>//タイトルに必要
#pragma comment(lib, "kernel32.lib")
using std::cout;
using std::endl;

int i;
std::string word;

inline void clear()//自作関数 clearする時に使う。
{
    cout << "\x1b[2J\x1b[3J\x1b[H" << endl;//clearするための特殊文字
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
    std::srand((unsigned)time(NULL));
    while (true) {
        i = rand() % 3 + 1;
        int yuti;
        cout << ":";
        //std::cin >> std::setw(256) >> word;
        std::getline(std::cin, word);
        if (word == "おはよう") {
            for (yuti = 0; yuti < 1; ++yuti) {
                switch (i) {
                case 1:
                    cout << "おはよ" << endl;
                    //std::cin.ignore(268435456, '\n');
                    break;
                case 2:
                    cout << "。。。" << endl;
                    break;
                case 3:
                    cout << "そんなこと行ってる暇があったら掃除でもしたら？" << endl;
                    break;
                default:
                    break;
                }
            }
        }
        else if (word == "こんにちは") {
            for (yuti = 0; yuti < 1; ++yuti) {
                switch (i) {
                case 1:
                    cout << "こんにちはー" << endl;
                    break;
                case 2:
                    cout << "。。。" << endl;
                    break;
                default:
                    break;
                }
            }
        }
        else if (word == "こんばんは") {
            for (yuti = 0; yuti < 1; ++yuti) {
                switch (i) {
                case 1:
                    cout << "こんばんはー" << endl;
                    break;
                case 2:
                    cout << "。。。" << endl;
                    break;
                default:
                    break;
                }
            }
        }
        else if (word == "exit" || word == "ばいばい") { //if文の中にある|は、もしどっちか一つの出来たら以下の文を実行という意味
            exit(0);
        }
        else if (word.size() > 0) {
            std::cout << "製作者です。タイプミスしないでください。" << std::endl;
            std::cout << "タイプミスすると終了する設計になっているので終了します。" << std::endl;
            std::cin.clear();
            std::cin.ignore(268435456, '\n');
            exit(0);
        }
    }
    return 0;
}

int reimu()//自作関数
{
    std::string a1 = "1";
    std::string data;
    std::ifstream save("save");
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
    while (true) {
        cout << ":";
        //std::cin >> std::setw(256) >> word;
        std::getline(std::cin, word);
        if (word == "おはよう") {
            cout << "やぁ、おはよう！" << endl;
        }
        else if (word == "こんにちは") {
            cout << "こんにちはなんだぜ!" << endl;
        }
        else if (word == "こんばんは") {
            cout << "こんばんはなんだぜ!" << endl;
        }
        else if (word == "exit" || word == "ばいばい") { //if文の中にある|は、もしどっちか一つの出来たら以下の文を実行という意味
            exit(0);
        }
        else if (word.size() > 0) {
            std::cout << "製作者です。タイプミスしないでください。" << std::endl;
            std::cout << "タイプミスすると終了する設計になっているので終了します。" << std::endl;
            std::cin.clear();
            std::cin.ignore(268435456, '\n');
            exit(0);
        }
    }
    return 0;
}

int marisa()//自作関数
{
    std::string m = "2";
    std::string data;
    std::ifstream save("save");
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
    std::srand((unsigned)time(NULL));
    while (true) {
        i = rand() % 2 + 1;
        cout << ":";
        //std::cin >> std::setw(256) >> word;
        std::getline(std::cin, word);
        if (word == "おはよう") {
            cout << "おはみょん！" << endl;
            std::cin.ignore(268435456, '\n');
        }
        else if (word == "こんにちは") {
            cout << "こんにちみょん！" << endl;
            std::cin.ignore(268435456, '\n');
        }
        else if (word == "こんばんは") {
            cout << "こんばんみょん！" << endl;
            std::cin.ignore(268435456, '\n');
        }
        else if (word == "exit" || word == "ばいばい") { //if文の中にある|は、もしどっちか一つの出来たら以下の文を実行という意味
            exit(0);
        }
        else if (word.size() > 0) {
            std::cout << "製作者です。タイプミスしないでください。" << std::endl;
            std::cout << "タイプミスすると終了する設計になっているので終了します。" << std::endl;
            std::cin.clear();
            std::cin.ignore(268435456, '\n');
            exit(0);
        }
    }
    return 0;
}

int myon()//自作関数
{
    std::string a1 = "3";
    std::string data;
    std::ifstream save("save");
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
    ::SetConsoleTitle(TEXT("人工無能(東方v1.1)"));
    if (argc <= 1) {
        int namber;
        std::string R = "1";// くら
        std::string M = "2";//    べる
        std::string Y = "3";//        時に使う。
        std::string data;    //格納するために使う。
        std::ifstream save("save");
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
        try {
            std::cin >> namber;      // cinは入力関数で、変数がint型なので数字を入力する。(charならば、文字でも可)
        }
        catch (...) {
            std::cin.clear();
            std::cin.ignore(268435456, '\n');
        }
        if (namber == 1) {
            clear();    //clear関数を呼び出してコンソール画面をクリア
            cout << "私、霊夢って言うの。" << endl;
            {
                std::ofstream save("save");  //saveというファイルを作成
                if (!save) {    // !(エクスクラメーションマーク)を付けることで、
                    exit(1);    // もしもsaveというファイルが開けなかったらという文になる。もし開けなかったら終了する。
                }
                save << "1";    // saveというファイルに1を出力
            }
            std::cin.get();      //getchar()に似てる文。
        }
        else if (namber == 2) {
            clear();    //clear関数を呼び出してコンソール画面をクリア
            cout << "魔理沙だぜ！" << endl;
            {
                std::ofstream save("save");  //saveというファイルを作成
                if (!save) {    // !(エクスクラメーションマーク)を付けることで、
                    exit(1);    // もしもsaveというファイルが開けなかったらという文になる。もし開けなかったら終了する。
                }
                save << "2";    // saveというファイルに2を出力
            }
            std::cin.get();      //getchar()に似てる文。
        }
        else if (namber == 3) {
            clear();    //clear関数を呼び出してコンソール画面をクリア
            cout << "みょん！" << endl;
            {
                std::ofstream save("save");  //saveというファイルを作成
                if (!save) {    // !(エクスクラメーションマーク)を付けることで、
                    exit(1);    // もしもsaveというファイルが開けなかったらという文になる。もし開けなかったら終了する。
                }
                save << "3";    // saveというファイルに3を出力
            }
            std::cin.get();      //getchar()に似てる文。
        }
        else if (!std::cin.bad()) {
            std::cin.clear();    //clear関数を呼び出していないことに注意。別の意味です。
            std::cin.ignore(268435456, '\n');
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
    else {
        cout << "\nType miss！\n" << endl;
    }
    return 0;   //戻り値が0
}
