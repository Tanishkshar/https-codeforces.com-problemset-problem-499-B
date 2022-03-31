// You have a new professor of graph theory and he speaks very quickly. You come up with the following plan to keep up with his lecture
// and make notes.

// You know two languages, and the professor is giving the lecture in the first one. The words in both languages consist of lowercase
// English characters, each language consists of several words. For each language, all words are distinct, i.e. they are spelled differently.
// Moreover, the words of these languages have a one-to-one correspondence, that is, for each word in each language, there exists exactly
// one word in the other language having has the same meaning.

// You can write down every word the professor says in either the first language or the second language. Of course, during the lecture you
// write down each word in the language in which the word is shorter. In case of equal lengths of the corresponding words you prefer the word
// of the first language.

// You are given the text of the lecture the professor is going to read. Find out how the lecture will be recorded in your notes.

// Input
// The first line contains two integers, n and m (1 ≤ n ≤ 3000, 1 ≤ m ≤ 3000) — the number of words in the professor's lecture and the number
// of words in each of these languages.

// The following m lines contain the words. The i-th line contains two strings ai, bi meaning that the word ai belongs to the first language,
// the word bi belongs to the second language, and these two words have the same meaning. It is guaranteed that no word occurs in both languages
//, and each word occurs in its language exactly once.

// The next line contains n space-separated strings c1, c2, ..., cn — the text of the lecture. It is guaranteed that each of the strings
// ci belongs to the set of strings {a1, a2, ... am}.

// All the strings in the input are non-empty, each consisting of no more than 10 lowercase English letters.

// Output
// Output exactly n words: how you will record the lecture in your notebook. Output the words of the lecture in the same order as in the input.

// Examples
// inputCopy
// 4 3
// codeforces codesecrof
// contest round
// letter message
// codeforces contest letter contest
// outputCopy
// codeforces round letter round
// inputCopy
// 5 3
// joll wuqrd
// euzf un
// hbnyiyc rsoqqveh
// hbnyiyc joll joll euzf joll
// outputCopy
// hbnyiyc joll joll un joll

/*
 :--------:---::::::::::::::***+++===+++++*****++++++++++++++**+**++++====%%%%%====*  .**+++++++++==+==*+:*=++=%%=%%==%=%@@@@%
 --------::::::::::::::::::::**+++=++**********+++++++++++*****::::::::***++=====+.  -*+*+++=%++==+%===+++*++*++*====+==+==+%@
 :::::---:::::::::::::::::::::*******:::****+++++==%%%==+++**********************.  :***+++=%=%=+%=+=%==+=**=**+**+*++*=+*++*+
 ::::::::::::::::::::::::::::******::::::**++++====%%%====+++*******************::-::***+++===%%==%%==%=+====++=+*+==+*++**==+
 ::::::::::::::::::::::::::*******:*:::****++++====%%%%=++=+++++*********************:::***++===%=+%%%%%=+=++==+*+=+*+=+*+++*+
 ::::::::::::::::::::::::********************+++=======%%=++++++++*****************++*******+++++++=%=%%=====+++=+**=+**++**++
 :::::::::**:::::::::****+++++***************+++==+========+++++++++****************++++******+========%%=+=++=+*+=+**++**+=+*
 :::::::***:::*:::****+++++++++++++++++++++++++++++========+++++++===++***********+++++++++****+====%%=====+++++==**===*+%=++=
 :::::******:::*****+++++++++++++++++++==++++++++++++++++=+++++++++=====+++**+++***++++++++++++++==+=====+++====+++==*+==**==+
 ::********:******+++++++++++++=+=====%=====+++++++++++++++++++++++===%%%=+++*++=+**+++====+++++++==+====++++*=++==++==**+=+*+
 :*************++++++==++++++++=====%%%%%%=====+======+++++++++++=======%%===++++==+++=+========++++++===+++++++=++==+++=+*+++
 *****+**++++++=++++++++===+=%=%%%%@%%%%=========+++++++**+++++++=========%========++============+++++++===+++=+++++=+**+=
 ***+++++++++++=====+++=+==%%==%%%%@@@@%%%%=======+++++++*****+*+++++===%%%====%%%====+=%===========++=======++++=++++++==+*+=
 **++++++++++++++========%%%%%%@@%@@@@@%%%========+++*+**********++++++====%%%%%%%%%%%==%%=%%==%%%%====+++++++++++++=====*+*:*
 +++++++=+===+++++=======%@@@%@@@@@@@%%=+=========++***************++++++===%%%%%%%%%%%=%%%%%%%%%%%%===+++++***+++++=+*+*:**:+
 ++++++=============%==%%@@@@@@@@@@@%==++=%======+++*****************++++++====%%%%%%%%%%%%%%%%%%%%%%%===++++++===+*++*+=+++:+
 **+==+%%%%%%=====++===%@@@@@@@@@@@%====%%%====%=+++********************+++++====%%%%%%%%%%@@@%%%%%%%%%==++++===%%%%%%====+=+=
 *+=%==%@@@%%==++++===%@@@@@@@@@@%%===%%%%====%=+++*********::::***********++++===%%%%%%%%%@@@@@@@@%%%%%==+++======%%=%++*+===
 +====+=%@@@%%=++++==%%%%@@@@@@@%%==%%%%=======+++******:::::::::::::*:*******+++===%%%%%@@@@@@@@@@@%%%%====++=++=+++***+*+==+
 =+======%@@%%%%%======%%@@@@@@%%%%%%%====+===+++*****::::::::::::::::::*******+++===%%%%%@@@@@@@@@@@%%%%====++*+****+*+=*===+
 =========@@@@@%%=====%%%%%%%%%%%%%%==========++*******:::::::::::::::::******++++==%%%%%@@@@@@@@@@@%%%%=======++*+**=*+=*=+*:
 =++======%@@@@@@@%%%%%%%%%%%%%%%%%========++++*****************************++=%%%@@@%%%%%%@@@@@@@@%%%%%%=======++=*+=*+=*++::
 +=====%%%%@@@@@@@@%@@#@@@@%%%%%%========++++++++*+++++++++++*************++=%%%@@@%%%%%%%%%%%%%%%%%===%%%=%====++==+=*+=++:::
 ======%%%%%@@#@@@@####@@@@@%%%%%%=====++++++++====%%%%%%%%%%%==+++******++==%%%%%%%%%%%%%%%%%%%%%%%%==%%%%%=%==++=++=++=*:-::
 ======%%%%%@@##########@@@@%%%%%%%=====++====%%%%%%%%%%%%%%%%%%=++++*****+=%%%%%%%%%%%%%%%%%%%%%%%%=++==%%======+=++=**=*-:::
 =======%@@@@@###########@@@@%%%%%%======%%%%=====%%%%%%%%%%%%%%%==++*****+=%%%@@@@@@@@@@@@@%%%%%%%%%++=======%%%==+==+++:::::
 =======%%@@@@###########@@@%%%%%%=%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%==+**:::*=%%%@@@@@@#@@@%@@%%%%==%@%==========%==%++=++*:::::
 =======%%@@@@##########@@@%%%%%%=%%=%%%%%%%%%%%%%%@@@@@@@@%%%%%%%%==+*:--:+=%%@%%%@@@@@%%%========%%%====++=+=%=%%++=+*:***::
 =======%%%@@@############@%%%%%%%%%%%%%%%%%@@@@@####@@%%%@@%%%==%%=++*:---:*===%============+++++++%%%+=+*+=+===%%%+=+**:**::
 =======%%@@@############@@%%%%%%%%%%%%%%%@@@@@@@####@@%=%%%%======++**::---:*+=========++++*******+=@%=+**+++=+=%%%===******:
 ==%%%==%%%@@############@@@%%%%%%%=%%%%%%%%%%%%%%%%%%==========++++*****:---::*++*++********::******%@%=*+=*+=+=%=%==+******:
 %%%%%==%%%@@######@#####@@@%%%%==================%======++++++***********::--:*******:::::::::::****+@@%++***+*+===%%=****++:
 %%%%%==%%%%@@@#####@@##@@@%%%%%========+++++++==++=+++*****:::::*********::---::***::::----:::::*****=@%=*:****+*+=%=+****++*
 %%%%%%=%%%%@@@######@@@@@@@%%%%%======+++++++*****:::::::::::::::********:-----::***::::::::::::****++@%%=++**+*:+=+******+++
 %%%%%%%%%%@@@@@###@@@@@@@@@%%%%%%=====++++****:::::::-------::::**+++++**::-----::*+****************++@%%=+=*++**+*********++
 %%%%%%%%%%@@@@@##@@@###@@@@@%%%%%%====+++++*****::::::-:::::::**++++++++**:::-::::*++++***********++++@@%%==*==*++**++*****++
 %%%%%%%%%%@@@@@##@@@@@@@@@@@@%%%%%%%====++++*****::::::::::***+++++***+++++*******++++++++++++++++++++@@%%==+==+%=+=++*****++
 %%%%%%%%%%@@@@@##@@@@@@@@%@@@@%%%%%%%====++++++************+++====++**+=%%========%==+++++++++++++++==@@%%=++=+*=++=++++****+
 %%%%%%%%%%@@@@@###@@@@@@@@%@@@@@%%%%%=====+++++++++++++++++++====%===%%@@@@%%%%%%%%=++++++++++++======@@%%%=++*+====++++*****
 %%%%%%%%%%%@@@@@###@@@@%%%@%@@@@@%%%%%=========++++++++========+++==%%%%%%%%%%%%%%%=***+++++==========%%%%%=%%=====++++++****
 %%%%%%%%%%%@@@@@@###@@@@%%%%%@@@@@%%%%%%%%%%%=================+++++=======%%%%%%%%=+****++++==========%%%%%===++==++++++++***
 %%%%%%%%%%%@@@@@@@###@@@%%%%%%@@@@%%%%%%%%%%%%%%%%%=====%=======++++===============+++**++++==========@%%%%==++===+++++++****
 %%%%%%%%%%%%@@@@@@@####@@%%=%%%%@@@%%%%%%%%%%%%%%%%%%%%%%%=======++++===============+++++===+++++====%@@%%%===+==+++++++*****
 %%%%@%%%%%%%%@@@@@@@#####@%%@%@@##@@%%%%%%%%%%%%%%%%%%%%%%==%%%%=====%%%%%%=%%%%%%===%%%%%==+++++====@%@%%=====++++++++*****+
 %%%%%%%%%%%%%%@@@@@@@##############@@@%%%%%%%%%%%%%%%%%%%==%%@@@@@@%%%%%%%%%%%%%%%%%%%%=++++++++====%@@%%%%===+++==++****++++
 %%@%%%%@%@%%%%@@@@@@@@#############@@@@@%%%%%%%%%%%%%%=====%@@%%@@@%%%%==%%%%%=======+++****++=====%@@@@%%%%==++++++****+++*+
 %@%%@%%@%%@%%%%%@@@@@@@@############@@@@@@%%%%%%%%%%%%%====%%%%%%%%%%%%%=============+++****++===%%%@@@@%%%%%===++*+*********
 %@@%@%@@%%%%%%%%@@@@@@@@@@@#########@@@@@@@@%%%%%%%%%%%===================%%=========++++***++===%%@@@@@%%%%%%==+++****++****
 @@%%%%@@%%%%@%%%%%@@@@@@@@@@#########@@@@@@@@@%%%%%%%%%%%%===++============%%%=======+++++++++=%%%@@@@@@@@@%%%==+++++++++****
 @%@%@%@@%%%%%@%%%%%%%%%@@@%@@@########@@@@@@@@@@%%%%%%%%%%%%===++=================+++++++++++==%%@@@@@@@@@%%%%%===+==++****++
 @@@@@%@%%%%%%%%%%%%%%%%@@@%@@@@########@@@@@@@@@@@@%%%%%%%%%%%%===========++++++++*********++==%@@@@@@@@@@%%%%%%====++****+++
 @@@@@%%%%%%%%%%%%==%%%%@@@%@@@@@@@######@@%%@@@@@@@@@@%%%%%%%%%%=====++++++++**************++=%@@@@@@@@@@@%%%%%%%==++*+++++++
 %@@@@%%%%%%====%%%%%%%%@@@%@@@@@@@@@@@###@@%%%@@@@@@@@@@@%%%%%%%%%====+++++***************++=%@@@@@@@@@@@@@%%%%%%%=++++++++++
 @@@@@%%%%%%===%%%%%%%%%%@@%@@@@@@@@@@@@@@@@@%%%%%@@@@@@@@@%@%%%%%%%%=====++++++++*****++++==%@##@@@@@@@@@@@@%%%%%%==++++++++*
 @@@@@%%%%%%=====%%==%%%%%%%%@@@@@@@%@@@@@@@@%%%%%%%@@@@@@@@@@@%%%%%%%%%======+++++++======%@####@@@@@@@@@@@@@%%%%%%==++++++**
 @@@@%%=%%%%%====%=====%%%%@%@@@@@@#@%@@@@@@@@%%%%%%%%%%@@@@@@@@@@%%%%%%%%%%%%%%=====%%%%%@#######@@@@@@@##@@@%%%%%%===++++***
 @@@@%%==%%%%===========%%%%%@@@@@@@@%%@@@@@@@@%%%%%%%%%%%%@@@@@@@@@@@%%%%%%%%%%%%%%%%%%%%@########@@@@@#@#@@@@%%%%%%=+++***:*
 @@@@%%%=%%%%============%%%%%@@@@@@@@%%@@@@@@@@@%%%%%%%%%%%%%@@@@@@@@@@@@@@@@@%%%%%%%%%%%@########@@@@#####@@@@%%%%%=++++*:::
 +@@%%%%%%%=%%========+===%%%%%%@@@@@@@%@@@@@@@@@@%%%====%%%%%%%%%%%@@%@@@@@@@%%%%%%%%%%%%@##################@@@%%%%%=++++**::
 -=%%%%%%%%=%%%====+++++==%%%%%%@@@@@#@@%@@@@@@@@@@%%=====%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@##################@@@@%%%%%=+******
 -:%%@@%%%==%%%===+++++===%%%%%%%@@@@#@@@@@@@@@@@@@@%%=======%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%##################@@@@%%%%==+******
 --+@%%%%%%=%%%===+++++====%%%%%%@@@@#@@@@@@@@@#@@@@@%%===============%%%%%%%%%%%%%%%%%%%%%##################@@@@@%%%==+******
 .-*@@@%%@%%=%%%==+++=+=====%%%%%%@%@@@@@@@%@@@@@@@@@@%%=====================%%===========%##################@@@@@@%%==++*****
 .-:%@@@@@@%%%%%%%+========%%%%%@%%%@@@@@@@@%@@@@@@@@@@%==================================%##################@@@@@@%%%==++++++
 .-:=@@@@@@@%%%%%%%=========%%%%%%%@%@@@@@@@@%@@@@@%@@@@%=================================%##################@@@@@@%%====+++++
 .-:=@@@@@@@%%%%%%%%=========%%%%%%@%%%%@@@@@@@@@@@%%@@%@%=================================##################@@@@@@%%%=====+++
 ---+%%%%%%%%%%==%%%===========%%%%%%%%%@%@@@@@@%@@@%@@%%%%================================@##################@@@@%%%%%=======
 ::-:*++=%%=%%%============++++===%%%%%%%%@@@@@@%%%%%%@%%%%%===============================@##################@@@@@%%%========
 :::::*===++++++==+++====++++++++++=%%%%%%@@@@@@@%%%%%%%%%%%%==============================%##################@@@@@@%%======+*
 ::*::::*===+++++++++++++++++++****++=%%%%%%%@@@%%%%=%%%%%%%%==============================%@#################@@@@@@%%%%====+*
 ::*:::::::*++====++++++++++++*****:**+=%%%%%%@@%%%%===%%%%%%%============================%%@###############@@@@@%%%%%%%%%=+++
 .--:::::::-:::*+====++++++++++****::::**+=%%%%%@%%%=%%==%%==%%===========================%%%@#############@@@@@@@%%%%%%%%==++
 .....--::::------*++====+==+++++*****:::**+=%%%%%@%%%%===================================%%%%@##########@#@@###@@@%@@%%%%%===
 .......-----......-:*+=======+++++++++**:**+=%%%%%%%%%==+=======++=======================%%%%%@@##############@@@@%%@@@%%%%==
 .........---...-.----:*+==%===++++++++++*****+==%%%%%%%==+++++==+++++++++==============+=%==%%%%@####@#######@@@@@%%%%%%%%%%=
 .............----------:++======++++++*++++****+===%%%%=++++++++++++++++++++++++===+++++=%====%%%@#@@@@######@@@@@@%%%%%%%%%%
 ...............----...--:**+==%%==++++++++++++**+===%%%==+++++++++++*+**+++++****++++++++=======%%@%%@#######@@@@@@%%%%%%@%%%
 ................---------:++++=%%%%==++++++++++++*++=====+++++++++++************************++++++===%@@####@@@%%%%%%%%%%%%%%
 ......-...........--------:++++=%%%%==++++*+++++++*++++==++++++++++++***************************++++=%%@####@@@@%%%%%%%%%%%%%
 ------...............------:*++==%%%%=+++***+++++++*+*+++=++++******+++***************************++===%%@###@@@%%%%%%%%%@%%%
 ------..............-.------:*+===+==%=+++***++++++***+++++++**********+++++***********************+++==%@@##@@@@%%%%%%%%%@%%


 /*
 FUCKING LIFE
 */

// my strange fucking life
// RUDENKO... ONE... HATE??? LOVE??? LOVE-HATE???? HATE-LOVE????
// I really don't know.
/*
 ░░░░▄▄█████▄▄░░░░░░░░░▄▄████▄▄░░░░
 ░░▄███████████░ONE░▄███████████▄░░
 ░████████████▀░░░░███████████████▄
 ██████████████▄░░░░███████████████
 ███████LOVE█████▄▄░░▀█████HATE████
 ███████████████▀▀░░▄▄█████████████
 ░█████████████▄░░▀███████████████░
 ░░▀██TANISHK█████▄░░▀██SRI██▀░░
 ░░░▀█████████████▀░▄██████████▀░░░
 ░░░░░▀██████████▀░▄█████████▀░░░░░
 ░░░░░░░░▀███████▄▀███████▀░░░░░░░░
 ░░░░░░░░░░░▀▀█████▄██▀▀░░░░░░░░░░░
 ░░░░░░░░░░░░░░░▀▀█▀▀░░░░░░░░░░░░░░

 //YES. I'm crazy. crazy in love. crazy in hate. everything is hard


 `````````````````````````````````gg```````
 ````````````````````````````g1a1111111g```
 ````gg111g```````````````gaaa111111111aaa1
 `g1aaaaa111111g`````````gaa1ggg11111111a1aa
 gaa1g1111111111aa1``````ga1ggg1111111111111aag`
 ``ga1gg1111111111111aa`````aaa1aaaa1111111111111a`
 ``ag`g1111111111111111ag```aaaaaa11g111111111111a`
 `11`g11111111111111111aa`````gaag``g111111111111gg
 gagg1111111111111111aaaa`````1ag``11111111111111gg
 gagg1111NASTYA1aaaaaaa``````1a1gg1RUDENKO111111g1`
 ga1g1111111111111gggggg`````aaaaaa1111111111111ga`
 ga11111111111111111111111aa```aaaaaa1111111111gag`
 `1a111111111111111111aaaaag````aaaa11111111111a1``
 ``aa11111111111111111aaa`````aaa1111111111111a1
 aaa1111111HATE1a1aaa````1aa111g111LOVEa11a1
 1aaa11111111111gggg111aaaa111111111a11aag`
 ``aaaa1111111111111ggga1aaaaaaaa11a11aa```
 ```gaaaa11111111111a111g```aaa111a1aag````
 `````gaaaaa111111111111a``aaa111aaa1``````
 ````````1aaaaa11111111ga`gaaa111aa````````
 ``````````gaaaaaa1111111`aaa11aa1`````````
 `````````````1aaaaaa1111aaa1aaag``````````
 ````````````````gaaaaONEaaaa1g````````````
 ```````````````````g1aaa1aag``````````````
 ```````````````````````11g````````````````

 =%*%%%@@==%%=%%%@=%%%%==@@@@+:::=%@%%%%%@%%===%@@@@@@%@@%%%@@+%%%===%%+**==%=@%=%@@%%=%%**++*=+***=%@@@@@@@@%%
 %++%%%%%@%%%%%+*%%@%@@@@@%%%=====%*===%%=%%%====%@@%%=%@%%%%+++=+**==%%%%%@@@=+*=%@@%%@==**%%%%%**:+@@@@@@@@@%
 %%%@%++=%%%%==++=%%%==%=%%=====%===%%%%%%%%%==++++++=%@@@%==%====+*+%=%%=%===%+=%@@%=@@%@@@@@%%+=%++@@@#@@%@%%
 =%+%%++**++@%%===%===+=%===%%@@@%%%=%=++===%%%%=%%@@@@@@@=+++==%=+++=%%=%%=+%%%%+=@%@@%=%%@@@@@%=%*+@@@@#@@%%=
 %=%%%%+*+%=+=%%%%%==%%%%%@@%%%@@%=*+-:+=**:+==%%@%%%%%@%%%:+:**==*++**===%%%%@%%@%%%@%%%%@%@@%%@@%==*@@@#@@%%%
 %@@@%%@@@@@%=%=%%%%%%@@@@@@@@@%%+*:::+*-::*+%%====%@@@@@%%=**:::+*::*+**==%%==%%%%%%%%@@@@@@@@@@@%*+%@@@@#@@=%
 @@@%%=+@@@@=+=%%%@@@@@@@###@@+*++**+=*+++=+*=%%%@@@@@@@@%%%=+****==+:::*:+*==%%%%%%=+=%@@%@@@@@@%===@%@@@##@%@
 @@@==%=@@@@++=%%@@@@@@@@@@@+::=+======+==+++%%%@@@@@@@@#@##@+=*++*==+***::*=++++=%%%%==@%%%%@@@@@%%@@%@@@@@@%=
 @@%%@%%@%@@%%%@@@@@@@@@@@=*+*%=%%%=======*+%%%@@@@@@@######@==%+++*==***:*::*++%%%=+====@@@@%%=%@@@@@%%@@@@@@=
 %%@%=%=%%%%%@@@@@#@@@@@=+++%%%@@@=%==+****+==%%%%%%%@@@@@@@@=+==++***++***:::*:+=%===%%=%@@@@@%%@%@%%%%%@@@@@@
 @%=+*+%%=%@@@@@@##@#@%=%%@@%@@@@%=+*::**:*-.--:***++++=======++**=%++**+::::::++*+==%==%@@@@@@@@@%==@@%@@@@@@@
 %%%%%=%=%@@@@##@@#@%%%%%@@@@%%==+++**::--:...........----::***::-.-+=+=*:---::**=++++%%%@@%%@@%%%%%@%%%@%@@@@#
 @@@@@%%@@@@@@@@@@@@@@@%=%=++++**:**:::::::...................--:::-..-+*:::--:**+%=+++=%%%@@=+==%%=%%%@###@@@@
 @@@@%%%@@##@@@@####@@%===+*:::::------:**:. . ....................--..-:-:::--**++%=++++=+==%%=%%=%@%%@@##@@@@
 %%@%%@@@@########@@%%=++*****::-:::::*++*--............................---:*--==++=%%+++*++++**++%%==%%%@@@@@@
 @%=%@@###########@@%%%=+*++++**+++++++==*-......----.....................--:**@@=+==%=+*****::*::++==%%%%@#@@@
 =%%@###########@@@%==+=+++++**:***+++==*--..---:::---.....................*=**%@@=+==%+*******::**:*+++==@@@@@
 @%@@@########@@@%%=++=+****+*++++*+==+*----:+:**------.....................--.-=@@=+=%=+*******:::::-+%++=%@@@
 %@@@#####@#@@@%====+++++**:*:::****=+*:::+**%*:.--:--...... .................--.-+@%====+*:*****:**::::***==%%
 @@@#@@#####%%=%%++==+++++++++++**===****==@@=+---::---..........................--:%@===++*******:::::----:*+*
 @@@#####@@@%*++++*=+++++++++++*:=%=+**+%%@@==*::**::----............................*%%=%==+*****:*****:::-:**
 @@@@#####@+++**+**+++++++++***+=%=+**+=%%=+==++++*:::----............................-*==+===+++*********:::::
 @@@@@####@=:*::-***+=+++++***++=+***+++==%%===**+**::::------------....................-+====%=++=+++*:*****::
 @@###@#@%%@=::*:*+*++++++++++*+*:--:::*=+=+=+***+*****::::::-----------..................-+%%%%==++++++*****++
 @@@#@@=@@@@@++=++=+==+++++++***::--..-:*::**::::*************:::::::-----..................-====%=++=+++**::::
 %@@@@%@+@%#@%=%=======+++++***::---. ........---::**+++++++++++++++*::--------...............-=%=%%=+=+++*::::
 @%@%@%%%%@##@%=%%======+++****++*:-.. ..........-::*+++++==+++++====+**::------....-...........-=%%====+++**::
 @%%%@%%@=%@#@@%%%%=%==+**++=======+:--...  ........-:++++++*:--:%=+++++**:----.....-.............:===++++++***
 @%=%@@@@@%%#@@@@%%%==++*++=%%%%%%%%%=*:-..............:--------:+-..----------.....-...............+===+++++**
 =%==@@@@@@@=%@@@@%%%%=%==%%%%%%@@@@@%%=+:----........--..------:--.................-................-==+++++++
 +=+==@@@@@@@@%=%@@@%%%%@@@%%%@@@###@@@%%==*:--.  ..*+-..----:-:--..................--.................-+++++++
 +%%%==@@@@@@@@@@%=%%%%@@@==%@@####@@@@%%%%=*::-----:.-----::-+:-...................--...................-+++++
 @@@%%%+@@@@#@@@#@@@@@@@@%==%@#@@#@%%%%%%%%%=++**::::*+++***:+*::---------..........--...  ................-+++
 @@@%%@%+%@@@###@##@#@@@@%%%%@##@%%%%%%%%%%======%%%%=++++=+==+**::::-------.......---...   ..................-
 %%%%%@@@==%=%@@@@@@#####@%%%%@#@%%%%%%%%=========%%%====%%%==++++***:::::-------------...  ...................
 =%%%%@@@@@%@@@@#######@#####@@@@%%%%%%%=========%%%%%%%%%@%%%===++++***:::::-------::-........................
 @@@@@@@@@@%@@@@@@@@############@%%%%%%===============%%%@@%%=========+++****:::::::::---......................
 ++=%%@@@@@%@#@@@@##@##############@%%%==============%%@%%%%%%%==========++++++******::-----...................
 +==%=@@@@@@@@@@@@@###################%%=================%%%%%%%%%%%%%========+++++++*:::----..................
 +++%%=%@@@@@@@@@@@#####################%%======================%%%%%%%=======++=====++*::----...........--....
 +++==+++=%@@@@@%@@@#######################@%%%%%%===========%%%%%%%%%%%==============++*::----------....-.....
 *:**+***=+%@@@%%%@@#############################@@%%%%%%%%%%@@@@%%%%%%%%%%%%========+++**::::--------------...
 --:-:*-:+*@@%%+==@@@############################################@@@%%%%%%%%%=========+++++**::::-------------.
 -:::*+++++@@%%==%#@###############################################@@%%%%%%%==========++++++***::::------------
 ***::**+==@@%%+=%@@@###############################################@@%%%%%%========+++++++++***:::::::----...-
 -...--:*+=@@%%=%@@@#################################################@@%%%%%======+++++++++*********:::::--....
 ++++===+=%%@@%%@@@######@@#######################################@@@@@@@%%%%====++*******************::::--...
 +=+++*++==%@@%@%@@######@@####################################@@@@@@@@@@@%%%%===++++**********:::::::::::--...

 */

#pragma comment(linker, "/stack:20000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <cstdint>
#include <cstring>
#include <string>
#include <cstdlib>
#include <vector>
#include <bitset>
#include <map>
#include <queue>
#include <ctime>
#include <stack>
#include <set>
#include <list>
#include <random>
#include <deque>
#include <functional>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <complex>
#include <numeric>
#include <immintrin.h>
#include <cassert>
#include <array>

using namespace std;

#ifdef LOCAL
#define CURTIME() cerr << clock() * 1.0 / CLOCKS_PER_SEC << endl
#else
#define CURTIME() ;
#endif
double __begin;
#define DTIME(ccc)     \
    __begin = clock(); \
    ccc;               \
    cerr << "Time of work = " << (clock() - __begin) / CLOCKS_PER_SEC << endl;

#define mp make_pair
typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef int itn;

template <class T1, class T2, class T3>
struct triple
{
    T1 a;
    T2 b;
    T3 c;
    triple() : a(T1()), b(T2()), c(T3()){};
    triple(T1 _a, T2 _b, T3 _c) : a(_a), b(_b), c(_c) {}
};
template <class T1, class T2, class T3>
bool operator<(const triple<T1, T2, T3> &t1, const triple<T1, T2, T3> &t2)
{
    if (t1.a != t2.a)
        return t1.a < t2.a;
    else if (t1.b != t2.b)
        return t1.b < t2.b;
    else
        return t1.c < t2.c;
}
template <class T1, class T2, class T3>
bool operator>(const triple<T1, T2, T3> &t1, const triple<T1, T2, T3> &t2)
{
    if (t1.a != t2.a)
        return t1.a > t2.a;
    else if (t1.b != t2.b)
        return t1.b > t2.b;
    else
        return t1.c > t2.c;
}
#define tri triple<int, int, int>
#define trll triple<ll, ll, ll>

#define FI(n) for (int i = 0; i < (n); ++i)
#define FJ(n) for (int j = 0; j < (n); ++j)
#define FK(n) for (int k = 0; k < (n); ++k)
#define FL(n) for (int l = 0; l < (n); ++l)
#define FQ(n) for (int q = 0; q < (n); ++q)
#define FOR(i, a, b) for (int i = (a), __e = (int)(b); i < __e; ++i)
#define all(a) std::begin(a), std::end(a)
#define reunique(v) v.resize(unique(v.begin(), v.end()) - v.begin())

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> v;
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    vector<string> v1, v4;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v1.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        string s3 = v1[i];
        for (int i = 0; i < m; i++)
        {
            if (s3 == v[i].first || s3 == v[i].second)
            {
                int mini1 = v[i].first.length();
                int mini2 = v[i].second.length();
                if (mini2 >= mini1)
                    v4.push_back(v[i].first);
                else
                    v4.push_back(v[i].second);
            }
        }
    }

    for (auto &x : v4)
    {
        cout << x << " ";
    }
    return 0;
}
