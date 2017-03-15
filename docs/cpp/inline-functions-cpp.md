---
title: "Funzioni inline (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__forceinline_cpp"
  - "__inline_cpp"
  - "inline_cpp"
  - "__forceinline"
  - "__inline"
  - "inline"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni inline, membri di classi"
ms.assetid: 355f120c-2847-4608-ac04-8dda18ffe10c
caps.latest.revision: 11
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzioni inline (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una funzione definita nel corpo di una dichiarazione di classe è una funzione inline.  
  
## Esempio  
 Nella seguente dichiarazione di classe, il costruttore `Account` è una funzione inline.  Le funzioni membro `GetBalance`, `Deposit` e `Withdraw` non sono specificate come **inline** ma possono essere implementate come funzioni inline.  
  
```  
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
>  Nella dichiarazione di classe, le funzioni sono state dichiarate senza la parola chiave **inline**.  La parola chiave **inline** può essere specificata nella dichiarazione di classe; il risultato è analogo.  
  
 Una funzione membro inline specificata deve essere dichiarata allo stesso modo in ogni unità di compilazione.  Questo vincolo fa sì che le funzioni inline funzionino come se fossero funzioni con istanze create.  Inoltre, deve esserci esattamente una definizione di una funzione inline.  
  
 Una funzione membro della classe viene impostata in modo predefinito su un collegamento esterno a meno che una definizione di tale funzione non contenga l'identificatore **inline**.  Nell'esempio precedente viene illustrato che queste funzioni non debbano essere dichiarate in modo esplicito con l'identificatore **inline**; l'utilizzo di **inline** nella definizione della funzione la rende una funzione inline.  Tuttavia, non è valido ridichiarare una funzione come **inline** dopo una chiamata a tale funzione.  
  
## Inline, \_\_inline e \_\_forceinline  
 Gli identificatori `inline` e `__inline` indicano al compilatore di inserire una copia del corpo della funzione in ogni punto in cui la funzione stessa viene richiamata.  
  
 L'inserimento \(denominato espansione inline o incorporamento\) viene eseguito solo se l'analisi del rapporto costo\/beneficio del compilatore è vantaggiosa.  L'espansione inline riduce il sovraccarico delle chiamate di funzione al costo potenziale di una maggiore lunghezza del codice.  
  
 La parola chiave `__forceinline` sostituisce l'analisi del rapporto costo\/beneficio e si basa sul giudizio del programmatore.  Prestare attenzione quando si usa `__forceinline`.  L'utilizzo indiscriminato di `__forceinline` può aumentare le dimensioni del codice con un guadagno solo marginale in termini di prestazioni oppure, in alcuni casi, addirittura con perdita di prestazioni \(ad esempio a causa del paging elevato di un file eseguibile maggiore\).  
  
 L'utilizzo di funzioni inline può rendere il programma più veloce perché elimina il sovraccarico associato alle chiamate di funzione.  Le funzioni con espansione inline sono soggette a ottimizzazioni di codice non disponibili per le funzioni normali.  
  
 Il compilatore considera come suggerimenti le opzioni di espansione inline e le parole chiave.  Non è garantito che le funzioni siano sottoposte all'espansione inline.  Non è possibile forzare il compilatore all'esecuzione dell'espansione inline di una data funzione, anche con la parola chiave `__forceinline`.  Durante la compilazione con **\/clr**, il compilatore non eseguirà l'espansione inline di una funzione se alla funzione sono applicati attributi di sicurezza.  
  
 La parola chiave **inline** è disponibile solo in C\+\+.  Le parole chiave `__inline` `__forceinline` sono disponibili sia in C che in C\+\+.  Per compatibilità con le versioni precedenti, **\_inline** è un sinonimo di `__inline`.  
  
 La parola chiave **inline** indica al compilatore che l'espansione inline è preferibile.  Tuttavia, il compilatore può creare un'istanza separata della funzione \(istanziare\) e creare collegamenti standard di chiamate anziché inserire il codice inline.  Questa situazione può verificarsi nei due casi seguenti:  
  
-   Funzioni ricorsive.  
  
-   Funzioni a cui si fa riferimento tramite un puntatore in un punto diverso dell'unità di conversione.  
  
 Questi motivi, *come anche altri*, possono interferire con l'incorporamento a discrezione del compilatore. La forzatura dell'espansione inline di una funzione non deve dipendere dall'identificatore **inline**.  
  
 Analogamente alle funzioni normali, non è definito alcun ordine di valutazione degli argomenti di una funzione inline.  Tale ordine infatti può essere diverso da quello in cui gli argomenti vengono valutati una volta passati usando il protocollo normale di chiamata di funzione.  
  
 L'opzione di ottimizzazione del compilatore [\/Ob](../build/reference/ob-inline-function-expansion.md) consente di determinare se l'espansione di funzione inline viene effettivamente eseguita.  
  
 [\/LTCG](../build/reference/ltcg-link-time-code-generation.md) esegue l'operazione di incorporamento tra moduli indipendentemente dal fatto che sia stata richiesta nel codice sorgente.  
  
### Esempio 1  
  
```  
// inline_keyword1.cpp  
// compile with: /c  
inline int max( int a , int b ) {  
   if( a > b )   
      return a;  
   return b;  
}  
```  
  
 Le funzioni membro di una classe possono essere dichiarate come funzioni inline usando la parola chiave **inline** o inserendo la definizione di funzione nella definizione della classe.  
  
### Esempio 2  
  
```  
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
  
### Sezione specifica Microsoft  
 La parola chiave `__inline` è equivalente a **inline** in SQL.  
  
 Anche se si usa `__forceinline`, il compilatore non è in grado di incorporare codice in qualsiasi circostanza.  Il compilatore non esegue l'espansione inline di una funzione se si verificano le condizioni seguenti:  
  
-   La funzione o il relativo chiamante viene compilato con \/Ob0 \(l'opzione predefinita per le compilazioni di debug\).  
  
-   La funzione e il chiamante usano tipi diversi di gestione delle eccezioni \(gestione delle eccezioni C\+\+ per la prima, gestione delle eccezioni strutturata per il secondo\).  
  
-   La funzione ha un elenco di argomenti variabile.  
  
-   La funzione usa l'assembly inline, a meno che non venga compilata con \/Og, \/Ox, \/O1 oppure \/O2.  
  
-   La funzione è ricorsiva e non è associata a **\#pragma inline\_recursion\(on\)**.  Con la direttiva pragma, per le funzioni ricorsive viene eseguita l'espansione inline a una profondità predefinita di 16 chiamate.  Per ridurre il livello di profondità, usare la direttiva pragma [inline\_depth](../preprocessor/inline-depth.md).  
  
-   La funzione è virtuale e viene chiamata virtualmente.  Per chiamate dirette alle funzioni virtuali può essere eseguita l'espansione inline.  
  
-   Il programma usa l'indirizzo della funzione e la chiamata viene effettuata tramite il puntatore alla funzione stessa.  Per chiamate dirette alle funzioni di cui ne avevano l'indirizzo può essere eseguita l'espansione inline.  
  
-   La funzione viene anche contrassegnata con il modificatore [naked](../cpp/naked-cpp.md) [\_\_declspec](../cpp/declspec.md).  
  
 Se il compilatore non è in grado di rendere inline una funzione dichiarata con `__forceinline`, genera un avviso di livello 1.  
  
 Le funzioni ricorsive possono essere sostituite in modalità inline a una profondità specificata dalla direttiva pragma [inline\_depth](../preprocessor/inline-depth.md), fino a un massimo di 16 chiamate.  Dopo tale profondità, le chiamate di funzioni ricorsive vengono considerate come chiamate a un'istanza della funzione.  La profondità con cui le funzioni ricorsive vengono valutate dalle funzionalità euristiche inline non può superare i 16 livelli.  La direttiva pragma [inline\_recursion](../preprocessor/inline-recursion.md) controlla l'espansione inline corrente di una funzione.  Per altre informazioni, vedere l'opzione del compilatore \(\/Ob\) per l'[espansione delle funzioni inline](../build/reference/ob-inline-function-expansion.md).  
  
### Fine sezione specifica Microsoft  
 Per altre informazioni sull'utilizzo dell'identificatore **inline**, vedere:  
  
-   [Funzioni membro di classi inline](../cpp/inline-functions-cpp.md)  
  
-   [Funzioni inline e macro](../misc/inline-functions-versus-macros.md)  
  
-   [Quando usare le funzioni inline](../misc/when-to-use-inline-functions.md)  
  
-   [Definizione delle funzioni C\+\+ inline con dllexport e dllimport](../cpp/defining-inline-cpp-functions-with-dllexport-and-dllimport.md)  
  
## Quando usare le funzioni inline  
 Le funzioni inline risultano particolarmente adatte per le piccole funzioni come l'accesso ai membri dati privati.  Lo scopo principale di queste funzioni di accesso a una o due righe è di restituire le informazioni sullo stato degli oggetti; le funzioni brevi sono sensibili al sovraccarico delle chiamate di funzione.  Le funzioni più lunghe impiegano proporzionalmente meno tempo nella sequenza di chiamata\/restituzione e traggono meno vantaggio dall'incorporamento.  
  
 La classe `Point`, introdotta in [Risultati delle chiamata di funzione](../misc/function-call-results.md) può essere ottimizzata nel modo seguente:  
  
```  
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
  
 Presupponendo che la modifica delle coordinate sia un'operazione relativamente comune in un client di tale classe, se si specificano le due funzioni di accesso \(`x` e `y` nell'esempio precedente\) come **inline** generalmente il sovraccarico viene salvato in:  
  
-   Chiamate di funzione \(incluso il passaggio dei parametri e il posizionamento dell'indirizzo dell'oggetto nello stack\)  
  
-   Conservazione dello stack frame del chiamante  
  
-   Nuova impostazione dello stack frame  
  
-   Comunicazione del valore restituito  
  
-   Ripristino dello stack frame precedente  
  
-   Valore restituito  
  
## Confronto tra funzioni inline emacro  
 Sebbene le funzioni inline siano simili alle macro \(perché il codice della funzione viene espanso, in fase di compilazione, al momento della chiamata\), le funzioni inline vengono analizzate dal compilatore, mentre le macro vengono espanse dal preprocessore.  Di conseguenza, vi sono molte importanti differenze:  
  
-   Le funzioni inline seguono tutti i protocolli di indipendenza dai tipi applicati alle funzioni normali.  
  
-   Le funzioni inline sono specificate usando la stessa sintassi di qualsiasi altra funzione, con la differenza che includono la parola chiave **inline** nella dichiarazione di funzione.  
  
-   Le espressioni passate come argomenti alle funzioni inline sono valutate una sola volta.  In alcuni casi, le espressioni passate come argomenti alle macro possono essere valutate più volte.  
  
 Nell'esempio seguente viene illustrata una macro che converte le lettere minuscole in lettere maiuscole:  
  
```  
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
  
 Lo scopo dell'espressione `toupper(getc(stdin))` è che un carattere venga letto dal dispositivo di console \(`stdin`\) e, se necessario, convertito in lettere maiuscole.  
  
 A causa dell'implementazione della macro, `getc` viene eseguito una volta, per determinare se il carattere è maggiore o uguale ad "a", e una volta per determinare se è minore o uguale a "Z". Se si trova in questo intervallo, `getc` viene eseguito nuovamente per convertire il carattere in lettere maiuscole.  Ciò significa che il programma attende due o tre caratteri, quando l'ideale sarebbe che ne attendesse uno solo.  
  
 Le funzioni inline rimediano al problema descritto in precedenza:  
  
```  
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
  
  **Esempio di input: `a`**   
 **Esempio di Output: `A`**    
## Vedere anche  
 [noinline](../cpp/noinline.md)   
 [auto\_inline](../preprocessor/auto-inline.md)