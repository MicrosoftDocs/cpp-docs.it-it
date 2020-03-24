---
title: Funzioni inline (C++)
ms.date: 10/09/2018
f1_keywords:
- __forceinline_cpp
- __inline_cpp
- inline_cpp
- __inline
- _inline
- __forceinline
- _forceinline
helpviewer_keywords:
- inline functions [C++], class members
ms.assetid: 355f120c-2847-4608-ac04-8dda18ffe10c
ms.openlocfilehash: b13007211857d84e4f3b33c80ed6b5beaf6f0bcf
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80178237"
---
# <a name="inline-functions-c"></a>Funzioni inline (C++)

Una funzione definita nel corpo di una dichiarazione di classe è una funzione inline.

## <a name="example"></a>Esempio

Nella seguente dichiarazione di classe, il costruttore `Account` è una funzione inline. Le funzioni membro `GetBalance`, `Deposit`e `Withdraw` non sono specificate come **inline** , ma possono essere implementate come funzioni inline.

```cpp
// Inline_Member_Functions.cpp
class Account
{
public:
    Account(double initial_balance) { balance = initial_balance; }
    double GetBalance();
    double Deposit( double Amount );
    double Withdraw( double Amount );
private:
    double balance;
};

inline double Account::GetBalance()
{
    return balance;
}

inline double Account::Deposit( double Amount )
{
    return ( balance += Amount );
}

inline double Account::Withdraw( double Amount )
{
    return ( balance -= Amount );
}
int main()
{
}
```

> [!NOTE]
>  Nella dichiarazione di classe, le funzioni sono state dichiarate senza la parola chiave **inline** . La parola chiave **inline** può essere specificata nella dichiarazione di classe; il risultato è lo stesso.

Una funzione membro inline specificata deve essere dichiarata allo stesso modo in ogni unità di compilazione. Questo vincolo fa sì che le funzioni inline funzionino come se fossero funzioni con istanze create. Inoltre, deve esserci esattamente una definizione di una funzione inline.

Una funzione membro di classe imposta come valore predefinito il collegamento esterno, a meno che una definizione per tale funzione non contenga l'identificatore **inline** . Nell'esempio precedente viene illustrato che queste funzioni non devono essere dichiarate in modo esplicito con l'identificatore **inline** ; l'uso di **inline** nella definizione della funzione ne determina la funzione inline. Tuttavia, non è consentito dichiarare nuovamente una funzione come **inline** dopo una chiamata a tale funzione.

## <a name="inline-__inline-and-__forceinline"></a>Inline, __inline e \__forceinline

Gli identificatori **inline** e **__inline** indicano al compilatore di inserire una copia del corpo della funzione in ogni posizione in cui viene chiamata la funzione.

L'inserimento (denominato espansione inline o incorporamento) viene eseguito solo se l'analisi del rapporto costo/beneficio del compilatore è vantaggiosa. L'espansione inline riduce il sovraccarico delle chiamate di funzione al costo potenziale di una maggiore lunghezza del codice.

La parola chiave **__forceinline** sostituisce l'analisi costi/benefici e si basa sulla valutazione del programmatore. Prestare attenzione quando si usa **__forceinline**. L'utilizzo indiscriminato di **__forceinline** può comportare un codice di dimensioni maggiori con un miglioramento delle prestazioni marginale oppure, in alcuni casi, anche perdite di prestazioni (ad esempio, a causa di un maggiore paging di un file eseguibile più grande).

L'utilizzo di funzioni inline può rendere il programma più veloce perché elimina il sovraccarico associato alle chiamate di funzione. Le funzioni con espansione inline sono soggette a ottimizzazioni di codice non disponibili per le funzioni normali.

Il compilatore considera come suggerimenti le opzioni di espansione inline e le parole chiave. Non è garantito che le funzioni siano sottoposte all'espansione inline. Non è possibile forzare il compilatore in modo che inline una funzione particolare, anche con la parola chiave **__forceinline** . Quando si esegue la compilazione con **/CLR**, il compilatore non inlineerà una funzione se alla funzione sono applicati attributi di sicurezza.

La parola chiave **inline** è disponibile solo C++in. Le parole chiave **__inline** e **__forceinline** sono disponibili sia in C C++sia in. Per compatibilità con le versioni precedenti, **_inline** e **_forceinline** sono sinonimi per **__inline**e **__forceinline** a meno che non sia specificata l'opzione del compilatore [/za \(Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

La parola chiave **inline** indica al compilatore che è preferibile l'espansione inline. Tuttavia, il compilatore può creare un'istanza separata della funzione (istanziare) e creare collegamenti standard di chiamate anziché inserire il codice inline. Questa situazione può verificarsi nei due casi seguenti:

- Funzioni ricorsive.

- Funzioni a cui si fa riferimento tramite un puntatore in un punto diverso dell'unità di conversione.

Questi motivi potrebbero interferire con l'incorporamento, *come altri*, a discrezione del compilatore; non dipendere dall'identificatore **inline** per fare in modo che una funzione venga impostata come inline.

Analogamente alle funzioni normali, non è definito alcun ordine di valutazione degli argomenti di una funzione inline. Tale ordine infatti può essere diverso da quello in cui gli argomenti vengono valutati una volta passati utilizzando il protocollo normale di chiamata di funzione.

L'opzione di ottimizzazione del compilatore [/ob](../build/reference/ob-inline-function-expansion.md) consente di determinare se l'espansione della funzione inline si verifica effettivamente.

[/LTCG](../build/reference/ltcg-link-time-code-generation.md) esegue l'incorporamento tra moduli indipendentemente dal fatto che sia stato richiesto nel codice sorgente.

### <a name="example-1"></a>Esempio 1

```cpp
// inline_keyword1.cpp
// compile with: /c
inline int max( int a , int b ) {
   if( a > b )
      return a;
   return b;
}
```

Le funzioni membro di una classe possono essere dichiarate inline usando la parola chiave **inline** o inserendo la definizione di funzione nella definizione della classe.

### <a name="example-2"></a>Esempio 2

```cpp
// inline_keyword2.cpp
// compile with: /EHsc /c
#include <iostream>
using namespace std;

class MyClass {
public:
   void print() { cout << i << ' '; }   // Implicitly inline
private:
   int i;
};
```

**Sezione specifica Microsoft**

La parola chiave **__inline** equivale a **inline**.

Anche con **__forceinline**, il compilatore non può incorporare codice in tutte le circostanze. Il compilatore non esegue l'espansione inline di una funzione se si verificano le condizioni seguenti:

- La funzione o il relativo chiamante viene compilato con /Ob0 (l'opzione predefinita per le compilazioni di debug).

- La funzione e il chiamante utilizzano tipi diversi di gestione delle eccezioni (gestione delle eccezioni C++ per la prima, gestione delle eccezioni strutturata per il secondo).

- La funzione ha un elenco di argomenti variabile.

- La funzione usa l'assembly inline, a meno che non venga compilata con /Og, /Ox, /O1 oppure /O2.

- La funzione è ricorsiva e non è accompagnata da **#pragma inline_recursion (on)** . Con la direttiva pragma, per le funzioni ricorsive viene eseguita l'espansione inline a una profondità predefinita di 16 chiamate. Per ridurre la profondità di incorporamento, utilizzare [inline_depth](../preprocessor/inline-depth.md) pragma.

- La funzione è virtuale e viene chiamata virtualmente. Per chiamate dirette alle funzioni virtuali può essere eseguita l'espansione inline.

- Il programma utilizza l'indirizzo della funzione e la chiamata viene effettuata tramite il puntatore alla funzione stessa. Per chiamate dirette alle funzioni di cui ne avevano l'indirizzo può essere eseguita l'espansione inline.

- La funzione viene inoltre contrassegnata con il modificatore [naked](../cpp/naked-cpp.md) [__declspec](../cpp/declspec.md) .

Se il compilatore non è in grado di incorporare una funzione dichiarata con **__forceinline**, viene generato un avviso di livello 1, eccetto nei casi seguenti:

- La funzione viene compilata utilizzando/od o/Ob0. In questi casi non è prevista alcuna inlining.

- La funzione è definita esternamente, in una libreria inclusa o in un'altra unità di conversione oppure è una destinazione di chiamata virtuale o una destinazione di chiamata indiretta. Il compilatore non è in grado di identificare il codice non inline che non è in grado di trovare nell'unità di conversione corrente.

Le funzioni ricorsive possono essere sostituite da inline a una profondità specificata dal pragma [inline_depth](../preprocessor/inline-depth.md) , fino a un massimo di 16 chiamate. Dopo tale profondità, le chiamate di funzioni ricorsive vengono considerate come chiamate a un'istanza della funzione.  La profondità con cui le funzioni ricorsive vengono valutate dalle funzionalità euristiche inline non può superare i 16 livelli. Il pragma [inline_recursion](../preprocessor/inline-recursion.md) controlla l'espansione inline di una funzione attualmente in espansione. Per informazioni correlate, vedere l'opzione del compilatore/OB ( [incorporamento della funzione](../build/reference/ob-inline-function-expansion.md) ).

**Fine sezione specifica Microsoft**

Per ulteriori informazioni sull'utilizzo dell'identificatore **inline** , vedere:

- [Funzioni membro di classe inline](../cpp/inline-functions-cpp.md)

- [Definizione delle funzioni C++ inline con dllexport e dllimport](../cpp/defining-inline-cpp-functions-with-dllexport-and-dllimport.md)

## <a name="when-to-use-inline-functions"></a>Quando usare le funzioni inline

Le funzioni inline risultano particolarmente adatte per le piccole funzioni come l'accesso ai membri dati privati. Lo scopo principale di queste funzioni di accesso a una o due righe è di restituire le informazioni sullo stato degli oggetti; le funzioni brevi sono sensibili al sovraccarico delle chiamate di funzione. Le funzioni più lunghe impiegano proporzionalmente meno tempo nella sequenza di chiamata/restituzione e traggono meno vantaggio dall'incorporamento.

Una classe `Point` può essere definita come segue:

```cpp
// when_to_use_inline_functions.cpp
class Point
{
public:
    // Define "accessor" functions as
    //  reference types.
    unsigned& x();
    unsigned& y();
private:
    unsigned _x;
    unsigned _y;
};

inline unsigned& Point::x()
{
    return _x;
}
inline unsigned& Point::y()
{
    return _y;
}
int main()
{
}
```

Supponendo che la manipolazione delle coordinate sia un'operazione relativamente comune in un client di tale classe, specificando le due funzioni di accesso (`x` e `y` nell'esempio precedente) come **inline** , in genere il sovraccarico viene salvato in:

- Chiamate di funzione (incluso il passaggio dei parametri e il posizionamento dell'indirizzo dell'oggetto nello stack)

- Conservazione dello stack frame del chiamante

- Nuova impostazione dello stack frame

- Comunicazione del valore restituito

- Ripristino dello stack frame precedente

- Return

## <a name="inline-functions-vs-macros"></a>Funzioni inline e macro

Sebbene le funzioni inline siano simili alle macro (perché il codice della funzione viene espanso, in fase di compilazione, al momento della chiamata), le funzioni inline vengono analizzate dal compilatore, mentre le macro vengono espanse dal preprocessore. Di conseguenza, vi sono molte importanti differenze:

- Le funzioni inline seguono tutti i protocolli di indipendenza dai tipi applicati alle funzioni normali.

- Le funzioni inline vengono specificate usando la stessa sintassi di qualsiasi altra funzione, con la differenza che includono la parola chiave **inline** nella dichiarazione di funzione.

- Le espressioni passate come argomenti alle funzioni inline sono valutate una sola volta. In alcuni casi, le espressioni passate come argomenti alle macro possono essere valutate più volte.

Nell'esempio seguente viene illustrata una macro che converte le lettere minuscole in lettere maiuscole:

```cpp
// inline_functions_macro.c
#include <stdio.h>
#include <conio.h>

#define toupper(a) ((a) >= 'a' && ((a) <= 'z') ? ((a)-('a'-'A')):(a))

int main() {
   char ch;
   printf_s("Enter a character: ");
   ch = toupper( getc(stdin) );
   printf_s( "%c", ch );
}
//  Sample Input:  xyz
// Sample Output:  Z
```

Lo scopo dell'espressione `toupper(getc(stdin))` è che un carattere deve essere letto dal dispositivo console (`stdin`) e, se necessario, convertito in maiuscolo.

A causa dell'implementazione della macro, `getc` viene eseguito una volta, per determinare se il carattere è maggiore o uguale ad "a", e una volta per determinare se è minore o uguale a "Z". Se si trova in questo intervallo, `getc` viene eseguito nuovamente per convertire il carattere in lettere maiuscole. Ciò significa che il programma attende due o tre caratteri, quando l'ideale sarebbe che ne attendesse uno solo.

Le funzioni inline rimediano al problema descritto in precedenza:

```cpp
// inline_functions_inline.cpp
#include <stdio.h>
#include <conio.h>

inline char toupper( char a ) {
   return ((a >= 'a' && a <= 'z') ? a-('a'-'A') : a );
}

int main() {
   printf_s("Enter a character: ");
   char ch = toupper( getc(stdin) );
   printf_s( "%c", ch );
}
```

```Output
Sample Input: a
Sample Output: A
```

## <a name="see-also"></a>Vedere anche

[noinline](../cpp/noinline.md)<br/>
[auto_inline](../preprocessor/auto-inline.md)
