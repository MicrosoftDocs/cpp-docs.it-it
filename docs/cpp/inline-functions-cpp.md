---
title: Funzioni inline (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __forceinline_cpp
- __inline_cpp
- inline_cpp
dev_langs:
- C++
helpviewer_keywords:
- inline functions [C++], class members
ms.assetid: 355f120c-2847-4608-ac04-8dda18ffe10c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 31738407b788f69998681442f15a8f1c104477a3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46017821"
---
# <a name="inline-functions-c"></a>Funzioni inline (C++)

Una funzione definita nel corpo di una dichiarazione di classe è una funzione inline.

## <a name="example"></a>Esempio

Nella seguente dichiarazione di classe, il costruttore `Account` è una funzione inline. Le funzioni membro `GetBalance`, `Deposit`, e `Withdraw` non vengono specificate come **inline** ma possono essere implementate come funzioni inline.

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
>  Nella dichiarazione di classe, le funzioni sono state dichiarate senza la **inline** (parola chiave). Il **inline** parola chiave può essere specificato nella dichiarazione di classe, il risultato è lo stesso.

Una funzione membro inline specificata deve essere dichiarata allo stesso modo in ogni unità di compilazione. Questo vincolo fa sì che le funzioni inline funzionino come se fossero funzioni con istanze create. Inoltre, deve esserci esattamente una definizione di una funzione inline.

Una funzione membro della classe per impostazione predefinita su un collegamento esterno a meno che non contiene una definizione di tale funzione il **inline** identificatore. L'esempio precedente mostra che queste funzioni non necessitano dichiarate in modo esplicito con la **inline** identificatore; utilizzando **inline** nella funzione di definizione rende una funzione inline. Tuttavia, è valido ridichiarare una funzione come **inline** dopo una chiamata a tale funzione.

## <a name="inline-inline-and-forceinline"></a>Inline, inline, e \__forceinline

Il **inline** e **inline** identificatori di indicano al compilatore di inserire una copia del corpo della funzione in ogni posizione viene chiamata la funzione.

L'inserimento (denominato espansione inline o incorporamento) viene eseguito solo se l'analisi del rapporto costo/beneficio del compilatore è vantaggiosa. L'espansione inline riduce il sovraccarico delle chiamate di funzione al costo potenziale di una maggiore lunghezza del codice.

Il **forceinline** (parola chiave) sostituisce l'analisi del costo/beneficio e si basa sul giudizio del programmatore invece. Prestare attenzione quando si usa **forceinline**. Utilizzo indiscriminato di **forceinline** può comportare la dimensioni del codice con solo marginale prestazionali o, in alcuni casi, anche il calo delle prestazioni (a causa di un aumento di paging di un file eseguibile maggiore, ad esempio).

L'utilizzo di funzioni inline può rendere il programma più veloce perché elimina il sovraccarico associato alle chiamate di funzione. Le funzioni con espansione inline sono soggette a ottimizzazioni di codice non disponibili per le funzioni normali.

Il compilatore considera come suggerimenti le opzioni di espansione inline e le parole chiave. Non è garantito che le funzioni siano sottoposte all'espansione inline. Non è possibile forzare il compilatore di rendere inline una particolare funzione, anche con il **forceinline** (parola chiave). Durante la compilazione con **/clr**, il compilatore creerà non inline una funzione se sono presenti attributi di sicurezza applicati alla funzione.

Il **inline** (parola chiave) è disponibile solo in C++. Il **inline** e **forceinline** parole chiave sono disponibili in C e C++. Per garantire la compatibilità con versioni precedenti **inline** è un sinonimo **inline**.

Il **inline** parola chiave indica al compilatore che l'espansione inline è preferibile. Tuttavia, il compilatore può creare un'istanza separata della funzione (istanziare) e creare collegamenti standard di chiamate anziché inserire il codice inline. Questa situazione può verificarsi nei due casi seguenti:

- Funzioni ricorsive.

- Funzioni a cui si fa riferimento tramite un puntatore in un punto diverso dell'unità di conversione.

Questi motivi possono interferire con incorporamenti *come anche altri*, a discrezione del compilatore; è non devono dipendere le **inline** identificatore per fare in modo da rendere inline una funzione.

Analogamente alle funzioni normali, non è definito alcun ordine di valutazione degli argomenti di una funzione inline. Tale ordine infatti può essere diverso da quello in cui gli argomenti vengono valutati una volta passati usando il protocollo normale di chiamata di funzione.

Il [/Ob](../build/reference/ob-inline-function-expansion.md) opzione di ottimizzazione del compilatore consente di determinare se espansione funzioni inline viene effettivamente eseguita.

[/LTCG](../build/reference/ltcg-link-time-code-generation.md) esegue intramodulo indipendentemente dal fatto che è stata richiesta nel codice sorgente.

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

Funzioni membro della classe possono essere dichiarate inline usando la **inline** parola chiave o inserendo la definizione di funzione all'interno della definizione di classe.

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

### <a name="microsoft-specific"></a>Sezione specifica Microsoft

Il **inline** equivale alla parola chiave **inline**.

Nonostante **forceinline**, il compilatore non è codice inline in qualsiasi circostanza. Il compilatore non esegue l'espansione inline di una funzione se si verificano le condizioni seguenti:

- La funzione o il relativo chiamante viene compilato con /Ob0 (l'opzione predefinita per le compilazioni di debug).

- La funzione e il chiamante usano tipi diversi di gestione delle eccezioni (gestione delle eccezioni C++ per la prima, gestione delle eccezioni strutturata per il secondo).

- La funzione ha un elenco di argomenti variabile.

- La funzione usa l'assembly inline, a meno che non venga compilata con /Og, /Ox, /O1 oppure /O2.

- La funzione è ricorsiva e non è associata a **inline_recursion (On) #pragma**. Con la direttiva pragma, per le funzioni ricorsive viene eseguita l'espansione inline a una profondità predefinita di 16 chiamate. Per ridurre il livello di profondità, usare [inline_depth](../preprocessor/inline-depth.md) pragma.

- La funzione è virtuale e viene chiamata virtualmente. Per chiamate dirette alle funzioni virtuali può essere eseguita l'espansione inline.

- Il programma usa l'indirizzo della funzione e la chiamata viene effettuata tramite il puntatore alla funzione stessa. Per chiamate dirette alle funzioni di cui ne avevano l'indirizzo può essere eseguita l'espansione inline.

- La funzione viene anche contrassegnata con il [naked](../cpp/naked-cpp.md) [declspec](../cpp/declspec.md) modificatore.

Se il compilatore non può rendere inline una funzione dichiarata con **forceinline**, verrà generato un avviso di livello 1, tranne quando:

- La funzione viene compilata con/Ob0 o /Od. Non l'incorporamento è previsto in questi casi.

- La funzione è definita all'esterno, in una libreria inclusa o un'altra unità di conversione, o è una destinazione di chiamata virtuale o di destinazione di chiamata indiretta. Il compilatore non è possibile identificare il codice non inline che non riesce a trovare nell'unità di conversione corrente.

Funzioni ricorsive possono essere sostituite inline a una profondità specificata per il [inline_depth](../preprocessor/inline-depth.md) pragma, fino a un massimo di 16 chiamate. Dopo tale profondità, le chiamate di funzioni ricorsive vengono considerate come chiamate a un'istanza della funzione.  La profondità con cui le funzioni ricorsive vengono valutate dalle funzionalità euristiche inline non può superare i 16 livelli. Il [inline_recursion](../preprocessor/inline-recursion.md) pragma controlla l'espansione inline di una funzione attualmente in espansione. Vedere le [espansione funzioni Inline](../build/reference/ob-inline-function-expansion.md) (/ Ob) l'opzione del compilatore per le informazioni correlate.

**Fine sezione specifica Microsoft**

Per altre informazioni sull'uso di **inline** identificatore, vedere:

- [Funzioni membro di classi inline](../cpp/inline-functions-cpp.md)

- [Definizione delle funzioni C++ inline con dllexport e dllimport](../cpp/defining-inline-cpp-functions-with-dllexport-and-dllimport.md)

## <a name="when-to-use-inline-functions"></a>Quando usare le funzioni inline

Le funzioni inline risultano particolarmente adatte per le piccole funzioni come l'accesso ai membri dati privati. Lo scopo principale di queste funzioni di accesso a una o due righe è di restituire le informazioni sullo stato degli oggetti; le funzioni brevi sono sensibili al sovraccarico delle chiamate di funzione. Le funzioni più lunghe impiegano proporzionalmente meno tempo nella sequenza di chiamata/restituzione e traggono meno vantaggio dall'incorporamento.

Oggetto `Point` classe può essere definita come segue:

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

Supponendo che modifica delle coordinate sia un'operazione relativamente comune in un client di tale classe, specificando le due funzioni di accesso (`x` e `y` nell'esempio precedente) come **inline** in genere consente di salvare il overhead in:

- Chiamate di funzione (incluso il passaggio dei parametri e il posizionamento dell'indirizzo dell'oggetto nello stack)

- Conservazione dello stack frame del chiamante

- Nuova impostazione dello stack frame

- Comunicazione del valore restituito

- Ripristino dello stack frame precedente

- INVIO

## <a name="inline-functions-vs-macros"></a>Funzioni inline e macro

Sebbene le funzioni inline siano simili alle macro (perché il codice della funzione viene espanso, in fase di compilazione, al momento della chiamata), le funzioni inline vengono analizzate dal compilatore, mentre le macro vengono espanse dal preprocessore. Di conseguenza, vi sono molte importanti differenze:

- Le funzioni inline seguono tutti i protocolli di indipendenza dai tipi applicati alle funzioni normali.

- Le funzioni inline sono specificate utilizzando la stessa sintassi come qualsiasi altra funzione, ad eccezione del fatto che includano il **inline** parola chiave nella dichiarazione di funzione.

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

Lo scopo dell'espressione `toupper(getc(stdin))` è che un carattere venga letto dal dispositivo di console (`stdin`) e, se necessario, convertito in lettere maiuscole.

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