---
title: Stringa e valori letterali carattere (C++)
description: Come dichiarare e definire valori letterali stringa e carattere in C++.
ms.date: 02/18/2020
f1_keywords:
- R
- L
- u
- u8
- LR
- uR
- u8R
helpviewer_keywords:
- literal strings [C++]
- string literals [C++]
ms.assetid: 61de8f6f-2714-4e7b-86b6-a3f885d3b9df
ms.openlocfilehash: 60389ecf01cf16b1cf2a86fc68da94bd558b6d83
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231130"
---
# <a name="string-and-character-literals-c"></a>Stringa e valori letterali carattere (C++)

C++ supporta diversi tipi di stringa e di carattere e permette di esprimere i valori letterali di ogni tipo. Nel codice sorgente, si esprime il contenuto dei valori letterali carattere e stringa usando un set di caratteri. I nomi di caratteri universali e i caratteri di escape consentono di esprimere qualsiasi stringa usando solo il set di caratteri di origine di base. Un valore letterale stringa non elaborata permette di evitare l'uso di caratteri di escape e può essere usato per esprimere tutti i tipi di valori letterali stringa. È anche possibile creare `std::string` valori letterali senza dover eseguire ulteriori passaggi di costruzione o conversione.

```cpp
#include <string>
using namespace std::string_literals; // enables s-suffix for std::string literals

int main()
{
    // Character literals
    auto c0 =   'A'; // char
    auto c1 = u8'A'; // char
    auto c2 =  L'A'; // wchar_t
    auto c3 =  u'A'; // char16_t
    auto c4 =  U'A'; // char32_t

    // Multicharacter literals
    auto m0 = 'abcd'; // int, value 0x61626364

    // String literals
    auto s0 =   "hello"; // const char*
    auto s1 = u8"hello"; // const char*, encoded as UTF-8
    auto s2 =  L"hello"; // const wchar_t*
    auto s3 =  u"hello"; // const char16_t*, encoded as UTF-16
    auto s4 =  U"hello"; // const char32_t*, encoded as UTF-32

    // Raw string literals containing unescaped \ and "
    auto R0 =   R"("Hello \ world")"; // const char*
    auto R1 = u8R"("Hello \ world")"; // const char*, encoded as UTF-8
    auto R2 =  LR"("Hello \ world")"; // const wchar_t*
    auto R3 =  uR"("Hello \ world")"; // const char16_t*, encoded as UTF-16
    auto R4 =  UR"("Hello \ world")"; // const char32_t*, encoded as UTF-32

    // Combining string literals with standard s-suffix
    auto S0 =   "hello"s; // std::string
    auto S1 = u8"hello"s; // std::string
    auto S2 =  L"hello"s; // std::wstring
    auto S3 =  u"hello"s; // std::u16string
    auto S4 =  U"hello"s; // std::u32string

    // Combining raw string literals with standard s-suffix
    auto S5 =   R"("Hello \ world")"s; // std::string from a raw const char*
    auto S6 = u8R"("Hello \ world")"s; // std::string from a raw const char*, encoded as UTF-8
    auto S7 =  LR"("Hello \ world")"s; // std::wstring from a raw const wchar_t*
    auto S8 =  uR"("Hello \ world")"s; // std::u16string from a raw const char16_t*, encoded as UTF-16
    auto S9 =  UR"("Hello \ world")"s; // std::u32string from a raw const char32_t*, encoded as UTF-32
}
```

I valori letterali stringa non hanno prefisso o prefissi `u8`, `L`, `u`e  `U` per indicare rispettivamente le codifiche di caratteri narrow (a byte singolo o multibyte), UTF-8, caratteri wide (UCS-2 o UTF-16), UTF-16 e UTF-32. Un valore letterale stringa non elaborata può avere `R` `u8R` `LR` i prefissi,,, `uR` e `UR` per gli equivalenti della versione non elaborata di queste codifiche.  Per creare valori temporanei o statici `std::string` , è possibile usare valori letterali stringa o valori letterali stringa non elaborati con un `s` suffisso. Per ulteriori informazioni, vedere la sezione [valori letterali stringa](#string-literals) riportata di seguito. Per altre informazioni sul set di caratteri di origine di base, sui nomi di caratteri universali e sull'uso di caratteri dalle tabelle codici estese nel codice sorgente, vedere [set di caratteri](../cpp/character-sets.md).

## <a name="character-literals"></a>Valori letterali carattere

Un *valore letterale carattere* è costituito da un carattere costante. È rappresentato dal carattere racchiuso tra virgolette singole. Sono disponibili cinque tipi di valori letterali carattere:

- Valori letterali carattere ordinari di tipo **`char`** , ad esempio`'a'`

- Valori letterali carattere UTF-8 di tipo **`char`** ( **`char8_t`** in c++ 20), ad esempio`u8'a'`

- Valori letterali a caratteri wide di tipo **`wchar_t`** , ad esempio`L'a'`

- Valori letterali carattere UTF-16 di tipo **`char16_t`** , ad esempio`u'a'`

- Valori letterali carattere UTF-32 di tipo **`char32_t`** , ad esempio`U'a'`

Il carattere usato per un valore letterale carattere può essere un carattere qualsiasi, ad eccezione dei caratteri riservati barra rovesciata ( **`\`** ), virgolette singole ( **`'`** ) o nuova riga. I caratteri riservati possono essere specificati con una sequenza di escape. È possibile specificare i caratteri usando nomi di caratteri universali, a condizione che le dimensioni del tipo siano sufficienti a contenere il carattere.

### <a name="encoding"></a>Codifica

I valori letterali carattere sono codificati in modo diverso in base al prefisso.

- Un valore letterale carattere senza prefisso è un valore letterale carattere normale. Il valore di un valore letterale carattere ordinario contenente un singolo carattere, una sequenza di escape o un nome di carattere universale che può essere rappresentato nel set di caratteri di esecuzione ha un valore uguale al valore numerico della codifica nel set di caratteri di esecuzione. Un valore letterale carattere ordinario che contiene più di un carattere, una sequenza di escape o un nome di carattere universale è un *valore letterale multicarattere*. Un valore letterale multicarattere o un valore letterale carattere normale che non può essere rappresentato nel set di caratteri di esecuzione è di tipo **`int`** e il relativo valore è definito dall'implementazione. Per MSVC, vedere la sezione **specifica di Microsoft** riportata di seguito.

- Un valore letterale carattere che inizia con il `L` prefisso è un valore letterale a caratteri wide. Il valore di un valore letterale a caratteri wide contenente un singolo carattere, una sequenza di escape o un nome di carattere universale ha un valore uguale al valore numerico della codifica nel set di caratteri wide di esecuzione, a meno che il valore letterale carattere non abbia una rappresentazione nel set di caratteri wide di esecuzione, nel qual caso il valore è definito dall'implementazione. Il valore di un valore letterale a caratteri wide contenente più caratteri, sequenze di escape o nomi di caratteri universali è definito dall'implementazione. Per MSVC, vedere la sezione **specifica di Microsoft** riportata di seguito.

- Un valore letterale carattere che inizia con il `u8` prefisso è un valore letterale carattere UTF-8. Il valore di un valore letterale carattere UTF-8 contenente un singolo carattere, una sequenza di escape o un nome di carattere universale ha un valore uguale al valore del punto di codice ISO 10646 se può essere rappresentato da una singola unità di codice UTF-8 (corrispondente ai controlli C0 e al blocco Unicode Basic Latin). Se il valore non può essere rappresentato da una singola unità di codice UTF-8, il programma non è in formato corretto. Il formato di un valore letterale carattere UTF-8 contenente più di un carattere, una sequenza di escape o un nome di carattere universale non è valido.

- Un valore letterale carattere che inizia con il `u` prefisso è un valore letterale carattere UTF-16. Il valore di un valore letterale carattere UTF-16 contenente un singolo carattere, una sequenza di escape o un nome di carattere universale ha un valore uguale al valore del punto di codice ISO 10646, se può essere rappresentato da una singola unità di codice UTF-16 (corrispondente al piano multilingue di base). Se il valore non può essere rappresentato da una singola unità di codice UTF-16, il programma non è in formato corretto. Un valore letterale carattere UTF-16 contenente più di un carattere, una sequenza di escape o un nome di carattere universale non è in formato corretto.

- Un valore letterale carattere che inizia con il `U` prefisso è un valore letterale carattere UTF-32. Il valore di un valore letterale carattere UTF-32 contenente un singolo carattere, una sequenza di escape o un nome di carattere universale ha un valore uguale al valore del punto di codice ISO 10646. Un valore letterale carattere UTF-32 contenente più di un carattere, una sequenza di escape o un nome di carattere universale non è in formato corretto.

### <a name="escape-sequences"></a><a name="bkmk_Escape"></a>Sequenze di escape

Esistono tre tipi di sequenze di escape: semplici, ottali ed esadecimali. Le sequenze di escape possono essere uno dei valori seguenti:

|valore|Sequenza di escape|
|-----------|---------------------|
| carattere di nuova riga | \\n |
| barra rovesciata | \\\\ |
| tabulazione orizzontale | \\t |
| punto interrogativo | ? o \\? |
| tabulazione verticale | \\v |
| virgoletta singola | \\' |
| BACKSPACE | \\b |
| virgoletta doppia | \\" |
| ritorno a capo | \\r |
| carattere null | \\0 |
| avanzamento carta | \\f |
| ottale | \\ooo |
| avviso (campana) | \\a |
| esadecimale | \\xhhh |

Una sequenza di escape ottale è una barra rovesciata seguita da una sequenza di una a tre cifre ottali. Una sequenza di escape ottale termina in corrispondenza del primo carattere che non è una cifra ottale, se rilevata prima della terza cifra. Il valore ottale massimo possibile è `\377` .

Una sequenza di escape esadecimale è una barra rovesciata seguita dal carattere `x` , seguita da una sequenza di una o più cifre esadecimali. Gli zero iniziali vengono ignorati. In un valore letterale carattere con prefisso normale o U8, il valore esadecimale più elevato è 0xFF. In un valore letterale carattere wide con prefisso L o u il valore esadecimale più elevato è 0xFFFF. In un valore letterale carattere wide con prefisso U il valore esadecimale più elevato è 0xFFFFFFFF.

Questo codice di esempio illustra alcuni esempi di caratteri di escape che usano valori letterali carattere normali. La stessa sintassi della sequenza di escape è valida per gli altri tipi di valore letterale carattere.

```cpp
#include <iostream>
using namespace std;

int main() {
    char newline = '\n';
    char tab = '\t';
    char backspace = '\b';
    char backslash = '\\';
    char nullChar = '\0';

    cout << "Newline character: " << newline << "ending" << endl;
    cout << "Tab character: " << tab << "ending" << endl;
    cout << "Backspace character: " << backspace << "ending" << endl;
    cout << "Backslash character: " << backslash << "ending" << endl;
    cout << "Null character: " << nullChar << "ending" << endl;
}
/* Output:
Newline character:
ending
Tab character:  ending
Backspace character:ending
Backslash character: \ending
Null character:  ending
*/
```

Il carattere barra rovesciata ( **`\`** ) è un carattere di continuazione di riga quando viene inserito alla fine di una riga. Se si desidera che un carattere barra rovesciata venga visualizzato come valore letterale carattere, è necessario digitare due barre rovesciate in una riga ( **`\\`** ). Per altre informazioni sul carattere di continuazione di riga, vedere [Phases of Translation](../preprocessor/phases-of-translation.md).

#### <a name="microsoft-specific"></a>Specifico di Microsoft

Per creare un valore da un valore letterale multicarattere narrow, il compilatore converte il carattere o la sequenza di caratteri tra virgolette singole in valori a 8 bit all'interno di un intero a 32 bit. Più caratteri nel valore letterale carattere riempiono i byte corrispondenti secondo le necessità, dal più significativo al meno significativo. Il compilatore converte quindi il valore integer nel tipo di destinazione seguendo le normali regole. Ad esempio, per creare un **`char`** valore, il compilatore accetta il byte di ordine inferiore. Per creare un **`wchar_t`** **`char16_t`** valore o, il compilatore prende la parola meno ordinata. Il compilatore avvisa che il risultato sarà troncato se si assegnano bit al di sopra del byte o della parola assegnati.

```cpp
char c0    = 'abcd';    // C4305, C4309, truncates to 'd'
wchar_t w0 = 'abcd';    // C4305, C4309, truncates to '\x6364'
int i0     = 'abcd';    // 0x61626364
```

Una sequenza di escape ottale che sembra contenere più di tre cifre viene considerata come una sequenza ottale a 3 cifre, seguita dalle cifre successive come caratteri in un valore letterale multicarattere, che può dare risultati sorprendenti. Ad esempio:

```cpp
char c1 = '\100';   // '@'
char c2 = '\1000';  // C4305, C4309, truncates to '0'
```

Le sequenze di escape che sembrano contenere caratteri non ottali vengono valutate come una sequenza ottale fino all'ultimo carattere ottale, seguita dai caratteri rimanenti come caratteri successivi in un valore letterale multicarattere. Viene generato un avviso C4125 se il primo carattere non ottale è una cifra decimale. Ad esempio:

```cpp
char c3 = '\009';   // '9'
char c4 = '\089';   // C4305, C4309, truncates to '9'
char c5 = '\qrs';   // C4129, C4305, C4309, truncates to 's'
```

Una sequenza di escape ottale con un valore maggiore di `\377` genera l'errore C2022:'*value-in-Decimal*': troppo grande per il carattere.

Una sequenza di escape che sembra contenere caratteri esadecimali e non esadecimali viene valutata come valore letterale multicarattere che contiene una sequenza di escape esadecimale fino all'ultimo carattere esadecimale, seguito da caratteri non esadecimali. Una sequenza di escape esadecimale che non contiene cifre esadecimali causa l'errore del compilatore C2153: "i valori letterali esadecimali devono avere almeno una cifra esadecimale".

```cpp
char c6 = '\x0050'; // 'P'
char c7 = '\x0pqr'; // C4305, C4309, truncates to 'r'
```

Se un valore letterale carattere wide con prefisso `L` contiene una sequenza multicarattere, il valore viene ricavato dal primo carattere e il compilatore genera l'avviso C4066. I caratteri successivi vengono ignorati, a differenza del comportamento dell'equivalente valore letterale multicarattere comune.

```cpp
wchar_t w1 = L'\100';   // L'@'
wchar_t w2 = L'\1000';  // C4066 L'@', 0 ignored
wchar_t w3 = L'\009';   // C4066 L'\0', 9 ignored
wchar_t w4 = L'\089';   // C4066 L'\0', 89 ignored
wchar_t w5 = L'\qrs';   // C4129, C4066 L'q' escape, rs ignored
wchar_t w6 = L'\x0050'; // L'P'
wchar_t w7 = L'\x0pqr'; // C4066 L'\0', pqr ignored
```

La sezione **specifica di Microsoft** termina qui.

### <a name="universal-character-names"></a><a name="bkmk_UCN"></a> Nomi di caratteri universali

Nei valori letterali carattere e nei valori letterali stringa (elaborati) nativi, qualsiasi carattere potrà essere rappresentato da un nome di carattere universale.  I nomi di caratteri universali sono formati da un prefisso `\U` seguito da un punto di codice Unicode a otto cifre oppure da un prefisso `\u` seguito da un punto di codice Unicode a quattro cifre. Tutte e otto o quattro cifre devono rispettivamente essere presenti per costituire un nome di carattere universale in formato corretto.

```cpp
char u1 = 'A';          // 'A'
char u2 = '\101';       // octal, 'A'
char u3 = '\x41';       // hexadecimal, 'A'
char u4 = '\u0041';     // \u UCN 'A'
char u5 = '\U00000041'; // \U UCN 'A'
```

#### <a name="surrogate-pairs"></a>Coppie di surrogati

I nomi di caratteri universali non possono codificare i valori nell'intervallo di punti di codice surrogati D800-DFFF. Per le coppie di surrogati Unicode, specificare il nome di carattere universale usando `\UNNNNNNNN`, dove NNNNNNNN è il punto di codice a otto cifre per il carattere. Se necessario, il compilatore genera una coppia di surrogati.

In C++03 il linguaggio consentiva solo la rappresentazione di un subset di caratteri con i rispettivi nomi di caratteri universali e consentiva alcuni nomi di caratteri universali che non rappresentano effettivamente caratteri Unicode validi. Questo errore è stato risolto nello standard C++ 11. In C++11, sia i valori letterali carattere sia i valori letterali stringa possono usare i nomi di caratteri universali.  Per altre informazioni sui nomi di caratteri universali, vedere [Character Sets](../cpp/character-sets.md). Per altre informazioni su Unicode, vedere [Unicode](/windows/win32/intl/unicode). Per altre informazioni sulle coppie di surrogati, vedere la pagina relativa alle [coppie di surrogati e ai caratteri supplementari](/windows/win32/Intl/surrogates-and-supplementary-characters).

## <a name="string-literals"></a><a name="string-literals"></a>Valori letterali stringa

Un valore letterale stringa rappresenta una sequenza di caratteri che insieme formano una stringa con terminazione null. I caratteri devono essere racchiusi tra virgolette doppie. Sono disponibili i seguenti tipi di valori letterali stringa:

### <a name="narrow-string-literals"></a>Valori letterali stringa ristretti

Un valore letterale stringa ristretto è una matrice senza prefisso, delimitata da virgolette doppie e con terminazione null di tipo `const char[n]` , dove n è la lunghezza della matrice in byte. Un valore letterale stringa a caratteri "narrow" può contenere qualsiasi carattere grafico eccetto le virgolette doppie (`"`), la barra rovesciata (`\`) o un carattere di nuova riga. Un valore letterale stringa a caratteri "narrow" può anche contenere le sequenze di escape sopra elencate e i nomi di caratteri universali che rientrano in un byte.

```cpp
const char *narrow = "abcd";

// represents the string: yes\no
const char *escaped = "yes\\no";
```

#### <a name="utf-8-encoded-strings"></a>Stringhe codificate UTF-8

Una stringa con codifica UTF-8 è una matrice con prefisso U8, delimitata da virgolette doppie e con terminazione null di tipo `const char[n]` , dove *n* è la lunghezza della matrice codificata in byte. Un valore letterale stringa con prefisso u8 può contenere qualsiasi carattere grafico eccetto le virgolette doppie (`"`), la barra rovesciata (`\`) o un carattere di nuova riga. Un valore letterale stringa con prefisso u8 può anche contenere le sequenze di escape sopra elencate e qualsiasi nome di carattere universale.

```cpp
const char* str1 = u8"Hello World";
const char* str2 = u8"\U0001F607 is O:-)";
```

### <a name="wide-string-literals"></a>Valori letterali stringa wide

Un valore letterale stringa a caratteri "wide" è una matrice con terminazione null della costante **`wchar_t`** che è preceduta da' `L` ' e contiene qualsiasi carattere grafico eccetto le virgolette doppie ( **`"`** ), la barra rovesciata ( **`\`** ) o il carattere di nuova riga. Un valore letterale stringa a caratteri wide può contenere le sequenze di escape sopra elencate e qualsiasi nome di carattere universale.

```cpp
const wchar_t* wide = L"zyxw";
const wchar_t* newline = L"hello\ngoodbye";
```

#### <a name="char16_t-and-char32_t-c11"></a>char16_t e char32_t (C++11)

C++ 11 introduce i **`char16_t`** tipi di carattere portabili (Unicode a 16 bit) e **`char32_t`** (unicode a 32 bit):

```cpp
auto s3 = u"hello"; // const char16_t*
auto s4 = U"hello"; // const char32_t*
```

### <a name="raw-string-literals-c11"></a>Valori letterali stringa non elaborata (C++ 11)

Un valore letterale stringa non elaborata è una matrice con terminazione null, di qualsiasi tipo di carattere, che contiene qualsiasi carattere grafico, incluse le virgolette doppie ( **`"`** ), la barra rovesciata ( **`\`** ) o il carattere di nuova riga. I valori letterali stringa non elaborata vengono spesso usati nelle espressioni regolari che usano le classi di caratteri e nelle stringhe HTML e XML. Per gli esempi vedere la pagina relativa alle [domande frequenti di Bjarne Stroustrup su C++11](http://www.stroustrup.com/C++11FAQ.html).

```cpp
// represents the string: An unescaped \ character
const char* raw_narrow = R"(An unescaped \ character)";
const wchar_t* raw_wide = LR"(An unescaped \ character)";
const char*       raw_utf8  = u8R"(An unescaped \ character)";
const char16_t* raw_utf16 = uR"(An unescaped \ character)";
const char32_t* raw_utf32 = UR"(An unescaped \ character)";
```

Un delimitatore è una sequenza definita dall'utente di un massimo di 16 caratteri che precede immediatamente la parentesi di apertura di un valore letterale stringa non elaborata e segue immediatamente la parentesi di chiusura.  Ad esempio, in `R"abc(Hello"\()abc"` la sequenza delimitatore è `abc` e il contenuto stringa è `Hello"\(`. È possibile usare un delimitatore per evitare ambiguità tra stringhe non elaborate contenenti sia virgolette doppie che parentesi. Questo valore letterale stringa causa un errore del compilatore:

```cpp
// meant to represent the string: )"
const char* bad_parens = R"()")";  // error C2059
```

Tuttavia, un delimitatore è in grado di risolvere tale errore:

```cpp
const char* good_parens = R"xyz()")xyz";
```

È possibile costruire un valore letterale stringa non elaborata contenente una nuova riga (non il carattere di escape) nell'origine:

```cpp
// represents the string: hello
//goodbye
const wchar_t* newline = LR"(hello
goodbye)";
```

### <a name="stdstring-literals-c14"></a>valori letterali std:: String (C++ 14)

`std::string`i valori letterali sono implementazioni della libreria standard di valori letterali definiti dall'utente (vedere di seguito) rappresentati come `"xyz"s` (con un `s` suffisso). Questo tipo di valore letterale stringa produce un oggetto temporaneo di tipo `std::string` ,, `std::wstring` `std::u32string` o `std::u16string` , a seconda del prefisso specificato. Quando non viene usato alcun prefisso, come sopra, `std::string` viene generato un oggetto. `L"xyz"s`genera un oggetto `std::wstring` . `u"xyz"s`produce un oggetto [std:: u16string](../standard-library/string-typedefs.md#u16string)e `U"xyz"s` produce un oggetto [std:: u32string](../standard-library/string-typedefs.md#u32string).

```cpp
//#include <string>
//using namespace std::string_literals;
string str{ "hello"s };
string str2{ u8"Hello World" };
wstring str3{ L"hello"s };
u16string str4{ u"hello"s };
u32string str5{ U"hello"s };
```

Il `s` suffisso può essere usato anche su valori letterali stringa non elaborati:

```cpp
u32string str6{ UR"(She said "hello.")"s };
```

`std::string`i valori letterali sono definiti nello spazio dei nomi `std::literals::string_literals` nel \<string> file di intestazione. Poiché `std::literals::string_literals` e `std::literals` sono entrambi dichiarati come [spazi dei nomi inline](../cpp/namespaces-cpp.md), `std::literals::string_literals` viene automaticamente considerato come se appartenesse direttamente nello spazio dei nomi `std` .

### <a name="size-of-string-literals"></a>Dimensioni dei valori letterali stringa

Per le `char*` stringhe ANSI e altre codifiche a byte singolo (ma non UTF-8), le dimensioni (in byte) di un valore letterale stringa sono il numero di caratteri più 1 per il carattere null di terminazione. Per tutti gli altri tipi di stringa, le dimensioni non sono strettamente correlate al numero di caratteri. UTF-8 USA fino a quattro **`char`** elementi per codificare alcune *unità di codice*e **`char16_t`** o **`wchar_t`** codificati come UTF-16 possono usare due elementi (per un totale di quattro byte) per codificare una singola *unità di codice*. Questo esempio illustra la dimensione di un valore letterale stringa a caratteri wide in byte:

```cpp
const wchar_t* str = L"Hello!";
const size_t byteSize = (wcslen(str) + 1) * sizeof(wchar_t);
```

Si noti che `strlen()` e `wcslen()` non includono la dimensione del carattere null di terminazione, la cui dimensione è uguale alla dimensione dell'elemento del tipo stringa: un byte in `char*` una `char8_t*` stringa o, due byte `wchar_t*` in `char16_t*` stringhe o e quattro byte sulle `char32_t*` stringhe.

La lunghezza massima di un valore letterale stringa è 65.535 byte. Questo limite si applica sia ai valori letterali stringa a caratteri narrow che a quelli a caratteri wide.

### <a name="modifying-string-literals"></a>Modifica di valori letterali stringa

Poiché i valori letterali stringa (esclusi `std::string` i valori letterali) sono costanti, il tentativo di modificarli, ad esempio, `str[2] = 'A'` genera un errore del compilatore.

#### <a name="microsoft-specific"></a>Specifico di Microsoft

In Microsoft C++ è possibile usare un valore letterale stringa per inizializzare un puntatore a non const **`char`** o **`wchar_t`** . Questa inizializzazione non const è consentita nel codice C99, ma è deprecata in C++ 98 e rimossa in C++ 11. Il tentativo di modificare la stringa genera una violazione di accesso, come nel seguente esempio:

```cpp
wchar_t* str = L"hello";
str[2] = L'a'; // run-time error: access violation
```

È possibile fare in modo che il compilatore generi un errore quando un valore letterale stringa viene convertito in un puntatore a caratteri non const quando si imposta l'opzione del compilatore [ `/Zc:strictStrings` (Disabilita conversione del tipo di valore letterale stringa)](../build/reference/zc-strictstrings-disable-string-literal-type-conversion.md) . È consigliabile usarlo per il codice portabile conforme agli standard. È anche consigliabile usare la **`auto`** parola chiave per dichiarare i puntatori inizializzati dal valore letterale stringa, perché viene risolto nel tipo corretto (const). Ad esempio, l'esempio di codice seguente rileva un tentativo di scrittura in un valore letterale stringa in fase di compilazione:

```cpp
auto str = L"hello";
str[2] = L'a'; // C3892: you cannot assign to a variable that is const.
```

In alcuni casi, i valori letterali stringa identici possono essere inseriti in un pool per risparmiare spazio nel file eseguibile. Nel pool di valori letterali stringa il compilatore genera tutti i riferimenti a un valore letterale stringa particolare in modo che punti alla stessa posizione di memoria, anziché avere ogni riferimento che punta a un'istanza separata del valore letterale stringa. Per abilitare la condivisione delle stringhe, usare l' [`/GF`](../build/reference/gf-eliminate-duplicate-strings.md) opzione del compilatore.

La sezione **specifica di Microsoft** termina qui.

### <a name="concatenating-adjacent-string-literals"></a>Concatenazione dei valori letterali stringa adiacenti

I valori letterali stringa adiacenti a caratteri wide o narrow sono concatenati. La seguente dichiarazione:

```cpp
char str[] = "12" "34";
```

è identica a questa dichiarazione:

```cpp
char atr[] = "1234";
```

e a questa dichiarazione:

```cpp
char atr[] =  "12\
34";
```

L'uso di codici di escape esadecimali incorporati per specificare i valori letterali stringa può provocare risultati imprevisti. L'esempio seguente prova a creare un valore letterale stringa contenente il carattere ASCII 5, seguito dai caratteri f, i, v ed e:

```cpp
"\x05five"
```

Il risultato effettivo è un 5F esadecimale, ovvero il codice ASCII per un carattere di sottolineatura, seguito dai caratteri i, v ed e. Per ottenere il risultato corretto, è possibile usare una di queste sequenze di escape:

```cpp
"\005five"     // Use octal literal.
"\x05" "five"  // Use string splicing.
```

`std::string`i valori letterali, dal momento che sono `std::string` tipi, possono essere concatenati con l' **`+`** operatore definito per i [`basic_string`](../standard-library/basic-string-class.md) tipi. Possono essere concatenati anche in modo analogo ai valori letterali stringa adiacenti. In entrambi i casi, la codifica della stringa e il suffisso devono corrispondere:

```cpp
auto x1 = "hello" " " " world"; // OK
auto x2 = U"hello" " " L"world"; // C2308: disagree on prefix
auto x3 = u8"hello" " "s u8"world"s; // OK, agree on prefixes and suffixes
auto x4 = u8"hello" " "s u8"world"z; // C3688, disagree on suffixes
```

### <a name="string-literals-with-universal-character-names"></a>Valori letterali stringa con nomi di caratteri universali

I valori letterali stringa (elaborata) nativi possono usare i nomi di caratteri universali per rappresentare qualsiasi carattere a condizione che il nome di carattere universale possa essere codificato come uno o più caratteri nel tipo di stringa.  Ad esempio, un nome di carattere universale che rappresenta un carattere esteso non può essere codificato in una stringa stretta usando la tabella codici ANSI, ma può essere codificato in stringhe strette in alcune tabelle codici a più byte o in stringhe UTF-8 o in una stringa di caratteri "wide". In C++ 11 il supporto Unicode viene esteso dai `char16_t*` tipi di `char32_t*` stringa e:

```cpp
// ASCII smiling face
const char*     s1 = ":-)";

// UTF-16 (on Windows) encoded WINKING FACE (U+1F609)
const wchar_t*  s2 = L"😉 = \U0001F609 is ;-)";

// UTF-8  encoded SMILING FACE WITH HALO (U+1F607)
const char*     s3 = u8"😇 = \U0001F607 is O:-)";

// UTF-16 encoded SMILING FACE WITH OPEN MOUTH (U+1F603)
const char16_t* s4 = u"😃 = \U0001F603 is :-D";

// UTF-32 encoded SMILING FACE WITH SUNGLASSES (U+1F60E)
const char32_t* s5 = U"😎 = \U0001F60E is B-)";
```

## <a name="see-also"></a>Vedere anche

[Set di caratteri](../cpp/character-sets.md)\
[Valori letterali numerici, booleani e puntatore](../cpp/numeric-boolean-and-pointer-literals-cpp.md)\
[Valori letterali definiti dall'utente](../cpp/user-defined-literals-cpp.md)
