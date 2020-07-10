---
title: Funzioni inline (C++)
description: La parola chiave inline C++ può essere usata per suggerire funzioni inline al compilatore.
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
ms.openlocfilehash: 454a727f0c002dc476e5fdab217efc3dea716e14
ms.sourcegitcommit: 80c8a512b361bd84e38958beb1a1bf6db7434021
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/09/2020
ms.locfileid: "86180709"
---
# <a name="inline-functions-c"></a>Funzioni inline (C++)

Una funzione definita nel corpo di una dichiarazione di classe è una funzione inline.

## <a name="example"></a>Esempio

Nella seguente dichiarazione di classe, il costruttore `Account` è una funzione inline. Le funzioni membro `GetBalance` , `Deposit` e `Withdraw` non sono specificate come, **`inline`** ma possono essere implementate come funzioni inline.

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
> Nella dichiarazione di classe, le funzioni sono state dichiarate senza la **`inline`** parola chiave. La **`inline`** parola chiave può essere specificata nella dichiarazione di classe; il risultato è lo stesso.

Una funzione membro inline specificata deve essere dichiarata allo stesso modo in ogni unità di compilazione. Questo vincolo fa sì che le funzioni inline funzionino come se fossero funzioni con istanze create. Inoltre, deve esserci esattamente una definizione di una funzione inline.

Una funzione membro di classe imposta come valore predefinito il collegamento esterno, a meno che una definizione per la funzione non contenga l' **`inline`** identificatore. L'esempio precedente mostra che non è necessario dichiarare queste funzioni in modo esplicito con l' **`inline`** identificatore. **`inline`** L'utilizzo di nella definizione della funzione ne determina la funzione inline. Non è tuttavia consentito dichiarare nuovamente una funzione come **`inline`** dopo una chiamata a tale funzione.

## <a name="inline-__inline-and-__forceinline"></a>`inline`, `__inline` e `__forceinline`

Gli **`inline`** **`__inline`** identificatori e indicano al compilatore di inserire una copia del corpo della funzione in ogni posizione in cui viene chiamata la funzione.

L' *inserimento,* denominato *espansione inline* o incorporamento, si verifica solo se l'analisi del vantaggio economico del compilatore Mostra che è utile. L'espansione inline riduce al minimo l'overhead della chiamata di funzione al costo potenziale delle dimensioni del codice più grandi.

La **`__forceinline`** parola chiave esegue l'override dell'analisi dei vantaggi economici e si basa invece sulla sentenza del programmatore. Prestare attenzione quando si utilizza **`__forceinline`** . L'utilizzo indiscriminato di può comportare **`__forceinline`** un codice di dimensioni maggiori con un miglioramento delle prestazioni marginale oppure, in alcuni casi, anche le perdite di prestazioni (a causa del maggiore paging di un eseguibile di dimensioni maggiori, ad esempio).

L'utilizzo di funzioni inline può rendere il programma più veloce perché elimina il sovraccarico associato alle chiamate di funzione. Le funzioni con espansione inline sono soggette a ottimizzazioni di codice non disponibili per le funzioni normali.

Il compilatore considera come suggerimenti le opzioni di espansione inline e le parole chiave. Non vi è alcuna garanzia che le funzioni vengano inline. Non è possibile forzare il compilatore in modo che inline una funzione particolare, anche con la **`__forceinline`** parola chiave. Quando si **`/clr`** esegue la compilazione con, il compilatore non incorpora una funzione se alla funzione sono applicati attributi di sicurezza.

La **`inline`** parola chiave è disponibile solo in C++. Le **`__inline`** **`__forceinline`** parole chiave e sono disponibili sia in C che in C++. Per compatibilità con le versioni precedenti, **`_inline`** e **`_forceinline`** sono sinonimi per **`__inline`** e, a **`__forceinline`** meno che non sia specificata l'opzione del compilatore [ `/Za` \( Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

La **`inline`** parola chiave indica al compilatore che è preferibile l'espansione inline. Tuttavia, il compilatore può creare un'istanza separata della funzione (istanziare) e creare collegamenti standard di chiamate anziché inserire il codice inline. Questo comportamento può verificarsi in due casi:

- Funzioni ricorsive.

- Funzioni a cui si fa riferimento tramite un puntatore in un punto diverso dell'unità di conversione.

Questi motivi potrebbero interferire con l'incorporamento, *come altri*, a discrezione del compilatore; non è necessario basarsi sull'identificatore per fare in modo che **`inline`** una funzione venga inline.

Come per le normali funzioni, non esiste un ordine definito per la valutazione dell'argomento in una funzione inline. Infatti, può essere diverso dall'ordine di valutazione degli argomenti quando viene passato usando il normale protocollo di chiamata di funzione.

L' [`/Ob`](../build/reference/ob-inline-function-expansion.md) opzione di ottimizzazione del compilatore consente di determinare se l'espansione della funzione inline si verifica effettivamente.

[`/LTCG`](../build/reference/ltcg-link-time-code-generation.md)esegue l'incorporamento tra moduli, indipendentemente dal fatto che sia richiesto nel codice sorgente.

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

Le funzioni membro di una classe possono essere dichiarate inline, usando la **`inline`** parola chiave o inserendo la definizione di funzione nella definizione della classe.

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

**Specifiche di Microsoft**

La **`__inline`** parola chiave equivale a **`inline`** .

Anche con **`__forceinline`** , il compilatore non può inline codice in tutte le circostanze. Il compilatore non può incorporare una funzione se:

- La funzione o il relativo chiamante viene compilato con **`/Ob0`** (l'opzione predefinita per le compilazioni di debug).

- La funzione e il chiamante utilizzano tipi diversi di gestione delle eccezioni (gestione delle eccezioni C++ per la prima, gestione delle eccezioni strutturata per il secondo).

- La funzione ha un elenco di argomenti variabile.

- La funzione usa l'assembly inline, a meno che non venga compilato con **`/Ox`** , **`/O1`** o **`/O2`** .

- La funzione è ricorsiva e non è **`#pragma inline_recursion(on)`** impostata. Con la direttiva pragma, per le funzioni ricorsive viene eseguita l'espansione inline a una profondità predefinita di 16 chiamate. Per ridurre la profondità di incorporamento, utilizzare [`inline_depth`](../preprocessor/inline-depth.md) pragma.

- La funzione è virtuale e viene chiamata virtualmente. Per chiamate dirette alle funzioni virtuali può essere eseguita l'espansione inline.

- Il programma utilizza l'indirizzo della funzione e la chiamata viene effettuata tramite il puntatore alla funzione stessa. Per chiamate dirette alle funzioni di cui ne avevano l'indirizzo può essere eseguita l'espansione inline.

- La funzione viene inoltre contrassegnata con il [`naked`](../cpp/naked-cpp.md) [`__declspec`](../cpp/declspec.md) modificatore.

Se il compilatore non è in grado di incorporare una funzione dichiarata con **`__forceinline`** , genera un avviso di livello 1, eccetto nei casi seguenti:

- La funzione viene compilata utilizzando/od o/Ob0. In questi casi non è prevista alcuna inlining.

- La funzione è definita esternamente, in una libreria inclusa o in un'altra unità di conversione oppure è una destinazione di chiamata virtuale o una destinazione di chiamata indiretta. Il compilatore non è in grado di identificare il codice non inline che non è in grado di trovare nell'unità di conversione corrente.

Le funzioni ricorsive possono essere sostituite con il codice inline a una profondità specificata dal [`inline_depth`](../preprocessor/inline-depth.md) pragma, fino a un massimo di 16 chiamate. Dopo tale profondità, le chiamate di funzioni ricorsive vengono considerate come chiamate a un'istanza della funzione.  La profondità a cui le funzioni ricorsive vengono esaminate dall'euristica inline non può superare i 16. Il [`inline_recursion`](../preprocessor/inline-recursion.md) pragma controlla l'espansione inline di una funzione attualmente in espansione. Per informazioni correlate, vedere l'opzione del compilatore/OB ( [incorporamento della funzione](../build/reference/ob-inline-function-expansion.md) ).

**TERMINA specifica Microsoft**

Per ulteriori informazioni sull'utilizzo dell'identificatore **inline** , vedere:

- [Funzioni membro di classi inline](../cpp/inline-functions-cpp.md)

- [Definizione delle funzioni C++ inline con dllexport e dllimport](../cpp/defining-inline-cpp-functions-with-dllexport-and-dllimport.md)

## <a name="when-to-use-inline-functions"></a>Quando usare le funzioni inline

Le funzioni inline risultano particolarmente adatte per le piccole funzioni come l'accesso ai membri dati privati. Lo scopo principale di queste funzioni di accesso a una o due righe è quello di restituire informazioni sullo stato degli oggetti. Le funzioni brevi sono sensibili al sovraccarico delle chiamate di funzione. Le funzioni più lunghe dedicano proporzionalmente meno tempo alla sequenza chiamante e restituendo e traggono meno vantaggio dall'incorporamento.

Una `Point` classe può essere definita nel modo seguente:

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

Supponendo che la manipolazione delle coordinate sia un'operazione relativamente comune in un client di tale classe, specificando le due funzioni di accesso ( `x` e `y` nell'esempio precedente), come in **`inline`** genere Salva l'overhead in:

- Chiamate di funzione (incluso il passaggio dei parametri e il posizionamento dell'indirizzo dell'oggetto nello stack)

- Conservazione dello stack frame del chiamante

- Nuova installazione di stack frame

- Comunicazione del valore restituito

- Ripristino del vecchio stack frame

- Return

## <a name="inline-functions-vs-macros"></a>Funzioni inline e macro

Le funzioni inline sono simili alle macro, perché il codice della funzione viene espanso in corrispondenza del punto della chiamata in fase di compilazione. Tuttavia, le funzioni inline vengono analizzate dal compilatore e le macro vengono espanse dal preprocessore. Di conseguenza, vi sono molte importanti differenze:

- Le funzioni inline seguono tutti i protocolli di indipendenza dai tipi applicati alle funzioni normali.

- Le funzioni inline vengono specificate usando la stessa sintassi di qualsiasi altra funzione, con la differenza che includono la **`inline`** parola chiave nella dichiarazione di funzione.

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

Lo scopo dell'espressione `toupper(getc(stdin))` è che un carattere deve essere letto dal dispositivo console ( `stdin` ) e, se necessario, convertito in maiuscolo.

A causa dell'implementazione della macro, `getc` viene eseguito una volta per determinare se il carattere è maggiore o uguale a "a" e una volta per determinare se è minore o uguale a "z". Se si trova in questo intervallo, `getc` viene eseguito nuovamente per convertire il carattere in lettere maiuscole. Significa che il programma attende due o tre caratteri quando, idealmente, deve attendere solo uno.

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

[`noinline`](../cpp/noinline.md)<br/>
[`auto_inline`](../preprocessor/auto-inline.md)
