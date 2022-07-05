#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;
class BaseXaracted
{
public:
    BaseXaracted(int s, int z, int l, int i, int o, int lev, int mp, int ol, int def, int $)
        :sila(s), zdorovie(z), lovcosti(l), intelect(i), opytnow(o), level(lev), mana(mp), opytlevel(ol), defend(def), money($)
    {
    }
    void printDate()
    {
        cout << " Уровень: " << level << endl;
        cout << opytnow << "/" << opytlevel << endl;
        cout << "Сила =" << sila << endl;
        cout << "Здоровье: " << zdorovie << "HP" << endl;
        cout << "Ловкость = " << lovcosti << endl;
        cout << "Интеллект = " << intelect << endl;
        cout << "Мана: " << mana << "MP" << endl;
        cout << "Защита = " << defend << endl;
        cout << money << " Золота" << endl;
    }

private:
    int sila;
    int zdorovie;
    int lovcosti;
    int intelect;
    int opytnow;
    int level;
    int mana;
    int opytlevel;
    int defend;
    int money;
};
class Player
{
public:
    Player(string n, string c, BaseXaracted b)
        : name(n),
        clas(c),
        bxd(b)
    {
    }
    void printInfo()
    {
        cout << name << endl;
        cout << "(" << clas << ")" << endl;
        cout << "---------------------" << endl;
        bxd.printDate();
        cout << "---------------------" << endl;
    }
private:
    string name;
    string clas;
    BaseXaracted bxd;
};
class myClass {
public:
    myClass(string nm) {
        setName(nm);
    }
    void setName(string x) {
        name = x;
    }
    string getName() {
        return name;
    }
private:
    string name;
};



void riverstead();
void mainplace();
void stage1();
void stage2();
void stage3();
void stage4(int stone, int gold);
void ratCave();
void attackThief(int& pHealth, int& tHealth);
void thiefDead();
void searchBody();
void questUpdate();
void enemyDead();
void attackEnemy();
void attackEnemy_2();
void searchBodyEnemy();
void searchBodyEnemy_2();
void forest();
void stonevoice();
void plain();
void stonesMountains();
void lake();
void village();
void Gilluars();
void Rainkhard();
void Engelstein();
void SteinArm();
void plainNearGillurias();
void plainNearRainkhard();
void MountainsNearEngelstein();
void lakeNearSteinArm();
void plainNearSteinArm();
void lakeNearGillurias();
void lawalakeNearRainkhard();
void DeadForest();
void end();

int input;
int stages[5] = { 1, 0, 0, 0, 0 };
string qUpdates;
string qStages;
string qUpdates_2;
string qStages_2;
string qUpdates_3;
string qStages_3;
string qUpdates_4;
string qStages_4;
string qUpdates_5;
string qStages_5;
string qUpdates_6;
string qStages_6;
string qUpdates_7;
string qStages_7;
string qUpdates_8;
string qStages_8;
string qUpdates_9;
string qStages_9;
string qUpdates_10;
string qStages_10;
string qUpdates_11;
string qStages_11;
string qUpdates_12;
string qStages_12;
string qUpdates_13;
string qStages_13;
string qUpdates_14;
string qStages_14;
string qUpdates_15;
string qStages_15;
string qUpdates_16;
string qStages_16;
string qUpdates_17;
string qStages_17;
string qUpdates_18;
string qStages_18;
string qUpdates_19;
string qStages_19;
string qUpdates_20;
string qStages_20;
string qUpdates_21;
string qStages_21;
string qUpdates_22;
string qStages_22;
string qUpdates_23;
string qStages_23;
string qUpdates_24;
string qStages_24;
string qUpdates_25;
string qStages_25;
string qUpdates_26;
string qStages_26;
string qUpdates_27;
string qStages_27;
string qUpdates_28;
string qStages_28;
string qUpdates_29;
string qStages_29;
string qUpdates_30;
string qStages_30;
string qUpdates_31;
string qStages_31;
string qUpdates_32;
string qStages_32;
string qUpdates_33;
string qStages_33;
string qUpdates_34;
string qStages_34;
string qUpdates_35;
string qStages_35;
string qUpdates_36;
string qStages_36;
string qUpdates_37;
string qStages_37;
string qUpdates_38;
string qStages_38;
string qUpdates_39;
string qStages_39;
string qUpdates_40;
string qStages_40;
string qUpdates_41;
string qStages_41;
string qUpdates_42;
string qStages_42;
string qUpdates_43;
string qStages_43;
string qUpdates_44;
string qStages_44;
string qUpdates_45;
string qStages_45;
string qUpdates_46;
string qStages_46;
string qUpdates_47;
string qStages_47;
string qUpdates_48;
string qStages_48;
string qUpdates_49;
string qStages_49;
string qUpdates_50;
string qStages_50;
string qUpdates_51;
string qStages_51;
string qUpdates_52;
string qStages_52;
string qUpdates_53;
string qStages_53;
string qUpdates_54;
string qStages_54;
string qUpdates_55;
string qStages_55;
string qUpdates_56;
string qStages_56;
string sideqStages_1;
string sideqUpdates_1;
string sideqStages_2;
string sideqUpdates_2;
string sideqStages_3;
string sideqUpdates_3;
string sideqStages_4;
string sideqUpdates_4;
string sideqStages_5;
string sideqUpdates_5;
string sideqStages_6;
string sideqUpdates_6;
string sideqStages_7;
string sideqUpdates_7;
string sideqStages_8;
string sideqUpdates_8;
string sideqStages_9;
string sideqUpdates_9;
string sideqStages_10;
string sideqUpdates_10;
string sideqStages_11;
string sideqUpdates_11;
string sideqStages_12;
string sideqUpdates_12;
string sideqStages_13;
string sideqUpdates_13;
string sideqStages_14;
string sideqUpdates_14;
string sideqStages_15;
string sideqUpdates_15;
string sideqStages_16;
string sideqUpdates_16;
string sideqStages_17;
string sideqUpdates_17;
string sideqStages_18;
string sideqUpdates_18;
string sideqStages_19;
string sideqUpdates_19;
string sideqStages_20;
string sideqUpdates_20;
string sideqStages_21;
string sideqUpdates_21;
string sideqStages_22;
string sideqUpdates_22;
string sideqStages_23;
string sideqUpdates_23;
string sideqStages_24;
string sideqUpdates_24;
string sideqStages_25;
string sideqUpdates_25;
string sideqStages_26;
string sideqUpdates_26;
string sideqStages_27;
string sideqUpdates_27;
string sideqStages_28;
string sideqUpdates_28;
string sideqStages_29;
string sideqUpdates_29;
string sideqStages_30;
string sideqUpdates_30;
string sideqStages_31;
string sideqUpdates_31;
string sideqStages_32;
string sideqUpdates_32;
string sideqStages_33;
string sideqUpdates_33;
string sideqStages_34;
string sideqUpdates_35;
string sideqStages_36;
string sideqUpdates_36;
string sideqStages_37;
string sideqUpdates_37;
string sideqStages_38;
string sideqUpdates_38;
string sideqStages_39;
string sideqUpdates_39;
string sideqStages_40;
string sideqUpdates_40;
string sideqStages_41;
string sideqUpdates_41;
string sideqStages_42;
string sideqUpdates_42;
string sideqStages_43;
string sideqUpdates_43;
string sideqStages_44;
string sideqUpdates_44;
string sideqStages_45;
string sideqUpdates_45;
string sideqStages_46;
string sideqUpdates_46;
string sideqStages_47;
string sideqUpdates_47;
string sideqStages_48;
string sideqUpdates_48;
string sideqStages_49;
string sideqUpdates_49;
string sideqStages_50;
string sideqUpdates_50;
string sideqStages_51;
string sideqUpdates_51;
string sideqStages_52;
string sideqUpdates_52;
string sideqStages_53;
string sideqUpdates_53;
string sideqStages_54;
string sideqUpdates_54;
string sideqStages_55;
string sideqUpdates_55;
string sideqStages_56;
string sideqUpdates_56;
string sideqStages_57;
string sideqUpdates_57;
string sideqStages_58;
string sideqUpdates_58;
string sideqStages_59;
string sideqUpdates_59;
string sideqStages_60;
string sideqUpdates_60;
string sideqStages_61;
string sideqUpdates_61;
string sideqStages_62;
string sideqUpdates_62;
string sideqStages_63;
string sideqUpdates_63;
string sideqStages_64;
string sideqUpdates_64;
string sideqStages_65;
string sideqUpdates_65;
string sideqStages_66;
string sideqUpdates_66;
string sideqStages_67;
string sideqUpdates_67;
string sideqStages_68;
string sideqUpdates_68;
string sideqStages_69;
string sideqUpdates_69;
string sideqStages_70;
string sideqUpdates_70;
string sideqStages_71;
string sideqUpdates_71;
int main() {
    char option;
    char quit_from_the_game{};
    char settings{};
    char sound{};
    char screen{};
    char controller{};
    char gamepad{};
    char keyboard_mouse;
    char characters{};
    char start_the_game{};
    char load_the_game{};
    char adventures{};
    char main_menu{};
    setlocale(0, "");


    srand(time(NULL));

    system("cls");
    cout << "*****************DungeonASS**************************" << endl;
    cout << "*______________Доступные опции:___________________**" << endl;
    cout << "*_________________________________________________**" << endl;
    cout << "*________1________Начать игру ____________________**" << endl;
    cout << "*________2________Достижения______________________**" << endl;
    cout << "*________3______Загрузить игру____________________**" << endl;
    cout << "*________4_______Персонажи________________________**" << endl;
    cout << "*________5_______Настройки________________________**" << endl;
    cout << "*________6_______История__________________________**" << endl;
    cout << "*________7______Выход из игры_____________________**" << endl;
    cout << "****************************************************" << endl;
    cout << "Нажми кнопку чтобы перейти к определнной вкладке: ";

    cout << "\n ";

    switch (main_menu)
    {
    case '1':
        system("Cls");
    case '2':
        system("CLS");
        cout << "УЙДИ ШАКАЛ НЕЧЕЛОВЕЧЕСКИЙ" << endl;
        break;
    case '3':
        break;
    case '4':
        break;
    case '5':
        system("Cls");
            switch (settings)

                    cout << "*****************Настройки***************************" << endl;
                cout << "*              Доступные настройки:                    **" << endl;
                cout << "*                                                      **" << endl;
                cout << "*                Разрешение                            **" << endl;
                cout << "*                Управление                            **" << endl;
                cout << "*              Контрастность                           **" << endl;
                cout << "*                  Звук                                **" << endl;
                cout << "*                                                      **" << endl;
                cout << "*                                                      **" << endl;
                cout << "*                  Назад                               **" << endl;
                cout << "*********************************************************" << endl;
                cin >> settings;
                break;
       case '8': cout << "Разрешение" << endl;
        system("Cls");
        cout << "*****************Разрешение*******************************" << endl;
        cout << "*              Доступные настройки:                    **" << endl;
        cout << "*                                                      **" << endl;
        cout << "*                800x600                               **" << endl;
        cout << "*               1024x760                               **" << endl;
        cout << "*              1280x1024                               **" << endl;
        cout << "*    Автоматическая подстройка под шакала              **" << endl;
        cout << "*                                                      **" << endl;
        cout << "*                                                      **" << endl;
        cout << "*                  Назад                               **" << endl;
        cout << "*********************************************************" << endl;
        cin >> screen;
        break;
    case '9': cout << "Управление" << endl;
        system("Cls");
        cout << "*****************DungeonASS******************************" << endl;
        cout << "*             Доступные настройки:                     **" << endl;
        cout << "*                                                      **" << endl;
        cout << "*            Управление ГЕЙмпадом                      **" << endl;
        cout << "*             Клавиатура/мышь                          **" << endl;
        cout << "*                                                      **" << endl;
        cout << "*                                                      **" << endl;
        cout << "*                                                      **" << endl;
        cout << "*                                                      **" << endl;
        cout << "*                  Назад                               **" << endl;
        cout << "*********************************************************" << endl;
        cin >> screen;
        switch (controller)
    case '12': cout << "Управление геймпадом" << endl;
        break;
    case '13': cout << "Клавиатура/мышь" << endl;
        break;
        break;
    case '10': cout << "Контрастность" << endl;
        break;
    case '11': cout << "Звук" << endl;
        if (sound == 'y')
        {
        }
        else if (sound == 'n');
        break;
    }

    system("cls");
    int sila = 150, zdorovie = 1500, lovcosti = 200, intelect = 500, opytnow = 0, level = 1, mana = 0, opytlevel = 100, defend = 100;
    int sila_e = 80, zdorovie_e = 1800, lovcosti_e = 250, intelect_e = 600, level_e = 1, mana_e = 0, defend_e = 150, money = 500, zdorovie_n
        , zdorovie_en;
    string x, c;
    string Enemy_1, Enemy_2, Enemy_3;
    int y, r, f, cl, hit, cikl;
    int ht1, ht2, ht3, ht4, ht5, ht6, ht7, ht8, ht9, ht10, hl, enem1, enem2, enem3;
    string hit_1, hit_2, hit_3, hit_4, hit_5, hit_6, hit_7, hit_8, hit_9, hit_10, hill;
    cout << "Приветствую тебя! Мы - г(н)иды этой игры. Добро пожаловать в мой проект под названием DungeonASS. Здесь тебя ждут не забываемые приключения со злыми КСКшникаим, и не очень... В общем, назовись человек не человеческий" << endl;
    cout << "Имя твоего dungeon:";
    cin >> x;
    myClass ob1(x);
    system("cls");
    cout << "Выбери класс dungeon:" << endl << "1)Azovsky ghoul" << endl << "2)Dungeon_Master" << endl << "3)Fisting_Master" << endl;
    cin >> cl;
    system("cls");
    if (cl == 1)
    {
        c = "Azovsky ghoul";
        cout << "Азовский гуль\n Способен дать противнику по щам, также сильно долбануть с ноги в лицо\n";
        sila += 50;
        zdorovie += 200;
        intelect += 50;
        lovcosti += 50;
        defend += 200;
        mana += 75;
        hit_1 = "Удар\n Слабый удар рукой ";
        hit_2 = "Средний удар\n Средний удар по щам";
        hit_3 = "Сильный удар\n Сильный пинок с ноги ";
        hit_4 = "";
        hit_5 = "";
        hit_6 = "";
        hit_7 = "";
        hit_8 = "";
        hit_9 = "";
        hit_10 = "";
    }

    if (cl == 2)
    {
        c = "Dungeon_Master";
        cout << "Dungeon_Master\n Dungeon_Master\n";
        sila += 30;
        zdorovie += 465;
        intelect += 30;
        lovcosti += 150;
        defend += 150;
        mana += 50;
        hit_1 = "Удар рукой\n Обычный удар рукой";
        hit_2 = "Скрытый удар\n Наносит скрытй удар, тем самым увеличивая урон";
        hit_3 = "Отравляющий удар\n Пронзает противника отравленным ножом";
        hit_4 = "";
        hit_5 = "";
        hit_6 = "";
        hit_7 = "";
        hit_8 = "";
        hit_9 = "";
        hit_10 = "";
    }
    if (cl == 3)
    {
        c = "Fisting_Master";
        cout << "Fisting_Master\n";
        sila += 55;
        zdorovie += 500;
        intelect += 50;
        mana += 65;
        defend += 180;
        mana += 55;
        hit_1 = "Слабый удар рукой\n Обыкновенный удар рукой";
        hit_2 = "Разгон\n Разгоняется в противника, толкая его плечом";
        hit_3 = "Расскекающий удар \n Сильно действенный удар по противнику";
        hit_4 = "";
        hit_5 = "";
        hit_6 = "";
        hit_7 = "";
        hit_8 = "";
        hit_9 = "";
        hit_10 = "";
    }
    system("cls");
    qUpdates = "Начало квеста";
    qStages = "Поговорить с Бенгиром на главной площади";
    questUpdate();

    riverstead();
    BaseXaracted bxd(sila, zdorovie, lovcosti, intelect, opytnow, level, mana, opytlevel, defend, money);
    Player p(x, c, bxd);
    p.printInfo();
switch (start_the_game) {

    case 1:
        qUpdates = "Начало квеста";
        qStages = "Поговорить с Бенгиром на главной площади";
        questUpdate();

        riverstead();
    }
    return 0;

}

void riverstead() {

    system("cls");
    cout << "\n Ты оказался на распутье куда двинешься" << "? " << endl;
    cout << "\n 1. На главную площадь" << endl;
    cout << "\n 2. Пещеры" << endl;
    cout << "\n 3. В леса" << endl;
    cout << "\n> ";
    cin >> input;
    switch (input) {

    case 1:
        mainplace();

    case 2:
        ratCave();
    case 3:
        forest();

    }
}

void mainplace() {
    int gold;
    int stone;

    if (stages[0] == 1) {
        system("cls");
        cout << "\n Бенгир: не хочешь ли ты помочь старику, герой?" << endl;
        cout << "\n 1. Что тебе нужно, старик? " << endl;
        cout << "\n 2. У меня сейчас нет времени" << endl;
        cout << "\n> ";
        cin >> input;
        switch (input) {

        case 1:
            stage1();

        case 2:
            system("cls");
            cout << "\n Когда ты освободишься, я буду здесь." << endl;
            cout << "\n ";
            system("pause");
            riverstead();

        }
    }

    if (stages[1] == 1) {
        stage2();
    }

    if (stages[2] == 1) {
        stage3();
    }
}

void stage1() {

    system("cls");
    cout << "\n Я потерял очень ценный камень, помоги мне его найти  " << endl;
    cout << "\n Он обладает великой силой " << endl;
    cout << "\n ";
    system("pause");

    system("cls");
    cout << "\n Я вернусь сюда ближе к закату, прощу, помоги мне" << endl;
    cout << "\n Как ты его найдешь, я буду здесь " << endl;
    cout << "\n ";
    system("pause");

    system("cls");
    cout << "\n Я затерял его где-то в пещерах глубоко под городом" << endl;
    cout << "\n ";
    system("pause");

    system("cls");
    cout << "\n Что я решил?" << endl;
    cout << "\n 1. Я помогу тебе " << endl;
    cout << "\n 2. Я не думаю, что я готов к этому" << endl;
    cout << "\n> ";
    cin >> input;
    switch (input) {

    case 1:
        stages[0] = 0;
        stages[2] = 1;
        system("cls");
        cout << "\n Благодарю, " << "" << "Я буду ждать тебя здесь, на следкющий день" << endl;
        cout << "\n ";
        system("pause");

        qUpdates = "Квест обновлен";
        qStages = "Найдите камень";
        questUpdate();

        riverstead();

    case 2:
        stages[0] = 0;
        stages[1] = 1;
        system("cls");
        cout << "\n Может быть, я найду того, кто сможет" << endl;
        cout << "\n ";
        system("pause");
        riverstead();

    }
}

void stage2() {

    system("cls");
    cout << "\n Могу ли я тебя переубедить и помочт мне найти этот камень?" << endl;
    cout << "\n 1. Да, я готов" << endl;
    cout << "\n 2. Нет, я не готов" << endl;
    cout << "\n> ";
    cin >> input;
    switch (input) {

    case 1:
        stages[0] = 0;
        stages[1] = 0;
        stages[2] = 1;
        system("cls");
        cout << "\n Великолепно, я буду ждать тебя здесь" << endl;
        cout << "\n ";
        system("pause");

        qUpdates = "Квест обновлен";
        qStages = "Убейте противника в пещерах ";
        questUpdate();

        riverstead();

    case 2:
        system("cls");
        cout << "\n Я буду здесь, если ты передумаешь" << endl;
        cout << "\n ";
        system("pause");
        riverstead();

    }
}

void stage3() {

    system("cls");
    cout << "\n Ты готов помочь мне с моим заданием для тебя? " << endl;
    cout << "\n 1. Да, я готов " << endl;
    cout << "\n> ";
    cin >> input;
    switch (input) {

    case 1:
        system("cls");
        cout << "\n Будем надеяться, что Тифер все еще будет там к тому времени, когда ты соберетесь это сделать." << endl;
        cout << "\n ";
        system("pause");
        riverstead();

    }
}

void stage4(int& gold, int& sword) {

    system("cls");
    cout << "\n Ты нашёл мой камень?" << endl;
    cout << "\n 1. Да, это  было легко" << endl;
    cout << "\n 2. Да, это было невероятно трудно" << endl;
    cout << "\n> ";
    cin >> input;

    system("cls");
    cout << "\n Это великолепно! Ты заслужил свою награду" << endl;
    cout << "\n Как и обещал" << endl;
    cout << "\n ";
    system("pause");

    sword = 0;
    system("cls");
    cout << "\n Предмет потерян - камень Моргиуса" << endl;
    cout << "\n ";
    system("pause");

    gold = gold + 250;
    system("cls");
    cout << "\n Предмет добавлен - 250 золота " << endl;
    cout << "\n ";
    system("pause");

    qUpdates = "Задание выполнено";
    qStages = " ";
    questUpdate();

    end();

}

void ratCave() {

    int pHealth;
    int pDamage;
    int tHealth;
    int tDamage;
    int turn;

    if (stages[0] == 1 || stages[1] == 1) {
        system("cls");
        cout << "\n На самом деле у меня нет веской причины приходить сюда" << endl;
        cout << "\n ";
        system("pause");
        riverstead();
    }

    system("cls");
    cout << "\n Тифер: Я предупреждаю тебя, незнакомец. Уходи сейчас же!" << endl;
    cout << "\n 1. Я пришел сюда за камнем, и без него я не уйду" << endl;
    cout << "\n 2. Хорошо, я ухожу" << endl;
    cout << "\n> ";
    cin >> input;
    switch (input) {

    case 1:
        system("cls");
        cout << "\n Ты не уйдешь отсюда живым" << endl;
        cout << "\n ";
        system("pause");

        pHealth = rand() % 40 + 80;
        tHealth = rand() % 20 + 40;

        turn = rand() % 2;

        if (turn == 1) {
            system("cls");
            cout << "\n Тифер ходит первым" << endl;
            cout << "\n ";
            system("pause");

            tDamage = rand() % 5 + 10;

            pHealth = pHealth - tDamage;
            system("cls");
            cout << "\n Тифер атакует вас на " << tDamage << " урона" << endl;
            cout << "\n ";
            system("pause");

        }

        else {
            system("cls");
            cout << "\n Вы ходите первым" << endl;
            cout << "\n ";
            system("pause");
        }

        attackThief(pHealth, tHealth);

    case 2:
        system("cls");
        cout << "\n Вот что я подумал." << endl;
        cout << "\n ";
        system("pause");
        riverstead();

    }
}

void attackThief(int& pHealth, int& tHealth) {

    int pDamage;
    int tDamage;

    pDamage = rand() % 10 + 10;
    tDamage = rand() % 5 + 10;

    system("cls");
    cout << "\n Ваше здоровье: " << pHealth << endl;
    cout << "\n Здоровье противника:  " << tHealth << endl;
    cout << "\n Что предпримешь?" << endl;
    cout << "\n 1. Атаковать Тифера" << endl;
    cout << "\n 2. Сбежать от Тифера" << endl;
    cout << "\n> ";
    cin >> input;
    switch (input) {

    case 1:
        tHealth = tHealth - pDamage;
        system("cls");
        cout << "\n Вы атакуете проивника на " << pDamage << " урона" << endl;
        cout << "\n ";
        system("pause");

        if (tHealth < 1) {
            system("cls");
            cout << "\n Вы убили Тифера" << endl;
            cout << "\n ";
            system("pause");
            thiefDead();
        }

        pHealth = pHealth - tDamage;
        system("cls");
        cout << "\n Противник атакует вас в размере" << tDamage << " урона" << endl;
        cout << "\n ";
        system("pause");

        if (pHealth < 1) {
            system("cls");
            cout << "\n Вы были убиты Тифером" << endl;
            cout << "\n ";
            system("pause");
            exit(0);
        }

        attackThief(pHealth, tHealth);

    case 2:
        system("cls");
        cout << "\n Ваша попытка бежать не увенчалась успехом" << endl;
        cout << "\n ";
        system("pause");
        attackThief(pHealth, tHealth);

    }
}


void searchBody() {

    int gold{};
    int sword;

    gold = gold + 45;
    sword = 1;
    stages[2] = 0;
    stages[3] = 1;

    system("cls");
    cout << "\n Вы нашли камень Моргиуса и 45 золота" << endl;
    cout << "\n ";
    system("pause");

    qUpdates = "Квест обновлен";
    qStages = "Вернуться";
    questUpdate();

}

void questUpdate() {

    system("cls");
    cout << "\n " << qUpdates << " Камень Моргиуса" << endl;
    cout << "\n ";
    system("pause");

    if (qStages != " ") {
        system("cls");
        cout << "\n " << qStages << endl;
        cout << "\n ";
        system("pause");
    }

}
void attackEnemy()
{
}
void forest() {

    int pHealth;
    int pDamage;
    int tHealth;
    int tDamage;
    int turn;

    if (stages[0] == 1 || stages[1] == 1) {
        system("cls");
        cout << "\n На самом деле у меня нет веской причины приходить сюда" << endl;
        cout << "\n ";
        system("pause");
        riverstead();
    }

    system("cls");
    cout << "\n Уродливый огр: Что ты?... Емда? " << endl;
    cout << "\n 1. Ну и мерзость... Сдохни" << endl;
    cout << "\n 2. Пожалуй, пойду отсюда" << endl;
    cout << "\n> ";
    cin >> input;
    switch (input) {

    case 1:
        system("cls");
        cout << "\n Я тебе съесть!" << endl;
        cout << "\n ";
        system("pause");

        pHealth = rand() % 40 + 80;
        tHealth = rand() % 20 + 40;

        turn = rand() % 2;

        if (turn == 1) {
            system("cls");
            cout << "\n противник ходит первым" << endl;
            cout << "\n ";
            system("pause");

            tDamage = rand() % 5 + 10;

            pHealth = pHealth - tDamage;
            system("cls");
            cout << "\n противник атакует вас на " << tDamage << " урона" << endl;
            cout << "\n ";
            system("pause");

        }

        else {
            system("cls");
            cout << "\n Вы ходите первым" << endl;
            cout << "\n ";
            system("pause");
        }

        attackEnemy(pHealth, tHealth);

    case 2:
        system("cls");
        cout << "\n Вот что я подумал." << endl;
        cout << "\n ";
        system("pause");
        riverstead();

    }
}

void attackEnemy(int& pHealth, int& tHealth) {

    int pDamage;
    int tDamage;

    pDamage = rand() % 10 + 10;
    tDamage = rand() % 5 + 10;

    system("cls");
    cout << "\n Ваше здоровье: " << pHealth << endl;
    cout << "\n Здоровье противника:  " << tHealth << endl;
    cout << "\n Что предпримешь?" << endl;
    cout << "\n 1. Атаковать противника" << endl;
    cout << "\n 2. Сбежать от противника" << endl;
    cout << "\n> ";
    cin >> input;
    switch (input) {

    case 1:
        tHealth = tHealth - pDamage;
        system("cls");
        cout << "\n Вы атакуете проивника на " << pDamage << " урона" << endl;
        cout << "\n ";
        system("pause");

        if (tHealth < 1) {
            system("cls");
            cout << "\n Вы убили противника" << endl;
            cout << "\n ";
            system("pause");
            thiefDead();
        }

        pHealth = pHealth - tDamage;
        system("cls");
        cout << "\n Противник атакует вас в размере" << tDamage << " урона" << endl;
        cout << "\n ";
        system("pause");

        if (pHealth < 1) {
            system("cls");
            cout << "\n Вы были убиты противником" << endl;
            cout << "\n ";
            system("pause");
            exit(0);
        }

        attackThief(pHealth, tHealth);

    case 2:
        system("cls");
        cout << "\n Ваша попытка бежать не увенчалась успехом" << endl;
        cout << "\n ";
        system("pause");
        attackThief(pHealth, tHealth);

    }
}

void thiefDead() {


    system("cls");
    cout << "\n Что дальше?" << endl;
    cout << "\n 1. Найти тело противника" << endl;
    cout << "\n 2. Покинуть место" << endl;
    cout << "\n> ";
    cin >> input;
    switch (input) {

    case 1:
        searchBody();

    case 2:
        riverstead();

    }
}
void searchBodyEnemy() {

    int gold{};
    int canvas;

    gold = gold + 15;
    canvas = 1;
    stages[2] = 0;
    stages[3] = 1;

    system("cls");
    cout << "\n Вы нашли камень Полотно и 15 золота" << endl;
    cout << "\n ";
    system("pause");

}