---
title: "Modifiche importanti apportate a Visual C++ 2015 Update 1 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 1c0b1c2b-e1cf-4767-885b-b98df9b3730e
caps.latest.revision: 7
caps.handback.revision: 7
ms.author: "mithom"
manager: "ghogen"
---
# Modifiche importanti apportate a Visual C++ 2015 Update 1
Quando si esegue l'aggiornamento a Visual C\+\+ 2015 Update 1 potrebbero verificarsi errori di compilazione e\/o runtime nel codice precedentemente compilato ed eseguito correttamente. Le modifiche apportate al compilatore o al comportamento in fase di esecuzione che provocano questi problemi sono note come *modifiche importanti* e in genere sono richieste dalle modifiche nel linguaggio C\+\+ standard, nelle firme di funzione o nel layout degli oggetti in memoria.  
  
 Nella parte restante di questo articolo sono descritte le modifiche importanti in Visual C\+\+ 2015 Update 1 e in questo articolo i termini "nuovo comportamento" o "ora" fanno riferimento a quella versione. I termini "vecchio comportamento" e "precedente" fanno riferimento alla versione iniziale di Visual Studio 2015 e alle versioni precedenti. Per informazioni sulle modifiche importanti apportate tra Visual Studio 2013 e Visual Studio 2015, vedere [Modifiche importanti in Visual C\+\+ 2015](../porting/visual-cpp-change-history-2003-20151.md).  
  
-   [Modifiche importanti apportate al compilatore](#BK_compiler)  
  
##  <a name="BK_compiler"></a> Compilatore Visual C\+\+  
  
-   **Classi base virtuali private ed ereditarietà indiretta**  
  
     Le versioni precedenti del compilatore consentivano a una classe derivata di chiamare le funzioni di membro relative alle classi base *indirettamente derivate*`private virtual`. Questo comportamento precedente non era corretto e non è conforme allo standard C\+\+. Il compilatore non accetta più il codice scritto in questo modo e genera l'errore del compilatore C2280 di conseguenza.  
  
 **errore C2280: *'void \*S3::\_\_delDtor\(unsigned int\)'*: tentativo di fare riferimento a una funzione eliminata**     Esempio \(prima\)  
  
    ```cpp  
    class base { protected: base(); ~base(); }; class middle: private virtual base {};class top: public virtual middle {}; void destroy(top *p) { delete p;  // }  
    ```  
  
     Esempio \(dopo\)  
  
    ```cpp  
    class base;  // as above class middle: protected virtual base {}; class top: public virtual middle {}; void destroy(top *p) { delete p; }  
    ```  
  
     \-oppure\-  
  
    ```  
    class base;  // as above class middle: private virtual base {}; class top: public virtual middle, private virtual bottom {}; void destroy(top *p) { delete p; }  
    ```  
  
-   **Funzioni operator new e operator delete in overload**  
  
     Le versioni precedenti del compilatore consentivano di dichiarare static le funzioni non membro `operator new` e non membro `operator delete` negli spazi dei nomi diversi dallo spazio dei nomi globale.  Questo comportamento precedente creava il rischio che il programma non chiamasse l'implementazione dell'operator `new` o `delete` prevista dal programmatore, determinando un comportamento errato in fase di esecuzione senza avvisare. Il compilatore non accetta più il codice scritto in questo modo e genera invece l'errore del compilatore C2323.  
  
 **errore C2323: *'operator new'*: le funzioni non membro operator new o delete potrebbero non essere dichiarate static o trovarsi in uno spazio dei nomi diverso da quello globale.**     Esempio \(prima\)  
  
    ```cpp  
  
    static inline void * __cdecl operator new(size_t cb, const std::nothrow_t&)  // error C2323  
    ```  
  
     Esempio \(dopo\)  
  
    ```cpp  
  
    void * __cdecl operator new(size_t cb, const std::nothrow_t&)  // removed 'static inline'  
    ```  
  
     Inoltre, nonostante il compilatore non fornisca una diagnostica specifica, il formato dell'operatore new inline viene considerato non valido.  
  
-   **Chiamata di 'operator *type*\(\)' \(conversione definita dall'utente\) in tipi non classe**  
  
     Le versioni precedenti del compilatore consentivano di chiamare 'operator *type*\(\)' su tipi non classe ignorandolo senza avvisare. Questo comportamento precedente creava un rischio di generazione di codice errato senza avvisare, determinando un comportamento imprevedibile in fase di esecuzione. Il compilatore non accetta più il codice scritto in questo modo e genera invece l'errore del compilatore C2228.  
  
 **errore C2228: l'elemento a sinistra di '.operator*type*' deve avere una classe\/struct\/unione**     Esempio \(prima\)  
  
    ```cpp  
    typedef int index_t; void bounds_check(index_t index); void login(int column) { bounds_check(column.operator index_t());  // error C2228 }  
    ```  
  
     Esempio \(dopo\)  
  
    ```cpp  
    typedef int index_t; void bounds_check(index_t index); void login(int column) { bounds_check(column);  // removed cast to 'index_t', 'index_t' is an alias of 'int' }  
    ```  
  
-   **Typename ridondante negli identificatori di tipi elaborati**  
  
     Le versioni precedenti del compilatore consentivano `typename` negli identificatori di tipi elaborati; il codice scritto in questo modo non è semanticamente corretto. Il compilatore non accetta più il codice scritto in questo modo e genera invece l'errore del compilatore C3406.  
  
 **errore C3406: 'typename' non può essere usato in un identificatore di tipo elaborato**     Esempio \(prima\)  
  
    ```cpp  
    template <typename class T> class container;  
    ```  
  
     Esempio \(dopo\)  
  
    ```cpp  
    template <class T>  // alternatively, could be 'template <typename T>'; 'typename' is not elaborating a type specifier in this case class container;  
    ```  
  
-   **Deduzione del tipo di matrici da un elenco di inizializzatori**  
  
     Le versioni precedenti del compilatore non supportavano la deduzione del tipo di matrici da un elenco di inizializzatori. Il compilatore supporta ora questa forma di deduzione del tipo e, di conseguenza, le chiamate a modelli di funzione con gli elenchi di inizializzatori potrebbero essere ambigue o potrebbe essere scelto un altro overload rispetto alle versioni precedenti del compilatore. Per risolvere questi problemi, il programma deve ora specificare in modo esplicito l'overload previsto dal programmatore.  
  
     Quando questo nuovo comportamento fa sì che la risoluzione dell'overload consideri un candidato aggiuntivo che sia altrettanto efficace del candidato storico, la chiamata diventa ambigua e il compilatore genera l'errore del compilatore C2668 di conseguenza.  
  
 **errore C2668: '*function*': chiamata ambigua a funzione in overload.**     Esempio 1: chiamata ambigua a funzione in overload \(prima\)  
  
    ```cpp  
    // In previous versions of the compiler, code written in this way would unambiguously call f(int, Args...) template <typename... Args> void f(int, Args...);  // template <int N, typename... Args> void f(const int (&)[N], Args...); int main() { // The compiler now considers this call ambiguous, and issues a compiler error  f({3});  error C2668: 'f' ambiguous call to overloaded function }  
    ```  
  
     Esempio 1: chiamata ambigua a funzione in overload \(dopo\)  
  
    ```cpp  
    template <typename... Args> void f(int, Args...);  // template <int N, typename... Args> void f(const int (&)[N], Args...); int main() { // To call f(int, Args...) when there is just one expression in the initializer list, remove the braces from it. f(3); }  
    ```  
  
     Quando questo nuovo comportamento fa sì che la risoluzione dell'overload consideri un candidato aggiuntivo che sia una corrispondenza migliore rispetto al candidato storico, la chiamata viene risolta senza ambiguità nel nuovo candidato, causando una modifica nel comportamento del programma che è probabilmente diverso da quello previsto dal programmatore.  
  
     Esempio 2: modifica nella risoluzione dell'overload \(prima\)  
  
    ```cpp  
    // In previous versions of the compiler, code written in this way would unambiguously call f(S, Args...) struct S { int i; int j; }; template <typename... Args> void f(S, Args...); template <int N, typename... Args> void f(const int *&)[N], Args...); int main() { // The compiler now resolves this call to f(const int (&)[N], Args...) instead  f({1, 2}); }  
    ```  
  
     Esempio 2: modifica nella risoluzione dell'overload \(dopo\)  
  
    ```cpp  
    struct S;  // as before template <typename... Args> void f(S, Args...); template <int N, typename... Args> void f(const int *&)[N], Args...); int main() { // To call f(S, Args...), perform an explicit cast to S on the initializer list. f(S{1, 2}); }  
    ```  
  
-   **Ripristino di avvisi di istruzione switch**  
  
     Una versione precedente del compilatore rimuoveva gli avvisi preesistenti correlati alle istruzioni `switch`; questi avvisi sono ora stati ripristinati. Il compilatore genera ora gli avvisi ripristinati e gli avvisi correlati a casi specifici \(incluso il caso predefinito\) sono ora rilasciati sulla riga contenente il caso che causa l'errore, anziché l'ultima riga dell'istruzione switch. Dal momento che gli avvisi vengono ora emessi su diverse righe rispetto al passato, di conseguenza gli avvisi precedentemente eliminato con `#pragma warning(disable:####)` non potranno più essere eliminati come previsto. Per eliminare questi avvisi come previsto, potrebbe essere necessario spostare la direttiva `#pragma warning(disable:####)` a una riga sopra il primo caso potenzialmente danneggiato. Di seguito sono elencati gli avvisi ripristinati.  
  
 **avviso C4060: istruzione switch senza etichette 'case' o 'default' avviso C4061: l'enumeratore '*bit1*' nell'istruzione switch dell'enum '*flags*' non viene gestito da un'etichetta case in modo esplicito avviso C4062: l'enumeratore '*bit1*' nell'istruzione switch dell'enum '*flags*' non viene gestito avviso C4063: case '*bit32*' non è un valore valido per l'istruzione switch dell'enum '*flags*' avviso C4064: switch dell'enum '*flags*' incompleto avviso C4065: l'istruzione switch contiene l'etichetta 'default' ma nessuna etichetta 'case' avviso C4808: case '*value*' non è un valore valido per la condizione switch di tipo '*bool*' avviso C4809: l'etichetta 'default' dell'istruzione switch è ridondante. Le etichette 'case' coprono già tutti i casi possibili**     Esempio di C4063 \(prima\)  
  
    ```cpp  
    class settings { public: enum flags { bit0 = 0x1, bit1 = 0x2, ... }; ... }; int main() { auto val = settings::bit1; switch (val) { case settings::bit0: break; case settings::bit1: break;  case settings::bit0 | settings::bit1:  // warning C4063 break; } };  
    ```  
  
     Esempio di C4063 \(dopo\)  
  
    ```cpp  
    class settings {...};  // as above int main() { // since C++11, use std::underlying_type to determine the underlying type of an enum typedef std::underlying_type<settings::flags>::type flags_t; auto val = settings::bit1; switch (static_cast<flags_t>(val)) { case settings::bit0: break; case settings::bit1: break; case settings::bit0 | settings::bit1:  // ok break; } };  
    ```  
  
     Gli esempi di altri avvisi ripristinati vengono forniti nella relativa documentazione.  
  
-   **\#include: usare l'identificatore di directory padre '..' nel percorso** \(influisce solo su \/Wall \/WX\)  
  
     Le versioni precedenti del compilatore non è stato rilevato l’utilizzo dell’identificatore di directory padre ‘... ‘ nel percorso del `#include` direttive. Il codice scritto in questo modo è in genere usato in modo da includere le intestazioni che esistono di fuori del progetto usando in modo non corretto percorsi relativi al progetto. Questo comportamento precedente creava il rischio che il programma potesse essere compilato con l'inclusione di un file di origine diversa rispetto a quello previsto dal programmatore, o che i percorsi relativi non sarebbero stati portabili in altri ambienti di compilazione. Il compilatore ora rileva e invia una notifica al programmatore riguardo il codice scritto in questo modo e genera un avviso del compilatore C4464 facoltativo, se abilitato.  
  
 **avviso C4464: il percorso include relativo contiene '..'**     Esempio \(prima\)  
  
    ```cpp  
    #include "..\headers\C4426.h"  // emits warning C4464  
    ```  
  
     Esempio \(dopo\)  
  
    ```cpp  
    #include "C4426.h"  // add absolute path to 'headers\' to your project's include directories  
    ```  
  
     Inoltre, nonostante il compilatore non fornisca una diagnostica specifica, è anche consigliabile che l'identificatore di directory padre ".." non venga usato per specificare le directory include del progetto.  
  
-   **\#pragma optimize\(\) estende oltre la fine del file di intestazione** \(influisce solo su \/Wall \/WX\)  
  
     Le versioni precedenti del compilatore non rilevavano le modifiche alle impostazioni del flag di ottimizzazione non incluse in un file di intestazione all'interno di un'unità di conversione. Il compilatore ora rileva e invia una notifica al programmatore riguardo il codice scritto in questo modo e genera un avviso del compilatore C4426 facoltativo nella posizione della direttiva `#include` danneggiata, se abilitata. Questo avviso viene generato solo se le modifiche sono in conflitto con i flag di ottimizzazione impostati dagli argomenti della riga di comando nel compilatore.  
  
 **avviso C4426: flag di ottimizzazione modificati dopo l'inclusione dell'intestazione, probabilmente a causa di \#pragma optimize\(\)**     Esempio \(prima\)  
  
    ```cpp  
    // C4426.h #pragma optimize("g", off) ... // C4426.h ends // C4426.cpp #include "C4426.h"  // warning C4426  
    ```  
  
     Esempio \(dopo\)  
  
    ```cpp  
    // C4426.h #pragma optimize("g", off) ... #pragma optimize("", on)  // restores optimization flags set via command-line arguments // C4426.h ends // C4426.cpp #include "C4426.h"  
    ```  
  
-   **Stati \#pragma warning\(push\)** e **\#pragma warning\(pop\)** non corrispondenti \(influisce solo su \/Wall \/WX\)  
  
     Le precedenti versioni del compilatore non rilevavano l'abbinamento delle modifiche di stato `#pragma warning(push)` con le modifiche di stato `#pragma warning(pop)` in un file di origine differente, che raramente rappresenta lo scopo previsto. Questo comportamento precedente creava il rischio che il programma fosse compilato con un set di avvisi abilitato diverso da quello previsto dal programmatore, determinando un probabile comportamento errato in fase di esecuzione senza avvisare. Il compilatore ora rileva e invia una notifica al programmatore riguardo il codice scritto in questo modo e genera un avviso del compilatore C5031 facoltativo nella posizione della direttiva `#pragma warning(pop)`, se abilitata. Questo avviso include una nota che fa riferimento alla posizione della direttiva \#pragma warning\(push\) corrispondente.  
  
 **avviso C5031: \#pragma warning\(pop\): probabile mancata corrispondenza, che visualizza lo stato di avviso inserito in un file differente**     Esempio \(prima\)  
  
    ```cpp  
    // C5031_part1.h #pragma warning(push) #pragma warning(disable:####) ... // C5031_part1.h ends without #pragma warning(pop) // C5031_part2.h ... #pragma warning(pop)  // pops a warning state not pushed in this source file ... // C5031_part1.h ends // C5031.cpp #include "C5031_part1.h" // leaves #pragma warning(push) 'dangling' ... #include "C5031_part2.h" // matches 'dangling' #pragma warning(push), resulting in warning C5031 ...   
    ```  
  
     Esempio \(dopo\)  
  
    ```cpp  
    // C5031_part1.h #pragma warning(push) #pragma warning(disable:####) ... #pragma warning(pop)  // pops the warning state pushed in this source file // C5031_part1.h ends without #pragma warning(pop) // C5031_part2.h #pragma warning(push)  // pushes the warning state pushed in this source file #pragma warning(disable:####) ... #pragma warning(pop) // C5031_part1.h ends // C5031.cpp #include "C5031_part1.h" // #pragma warning state changes are self-contained and independent of other source files or their #include order. ... #include "C5031_part2.h" ...   
    ```  
  
     Nonostante non comune, il codice scritto in questo modo è talvolta intenzionale. Il codice scritto in questo modo è sensibile alle modifiche nell'ordine `#include`; se possibile, è consigliabile che i file del codice sorgente gestiscano lo stato di avviso in modo autonomo.  
  
-   **Stato \#pragma warning\(push\) senza corrispondenza** \(influisce solo su \/Wall \/WX\)  
  
     Le versioni precedenti del compilatore non rilevavano modifiche di stato `#pragma warning(push)` senza corrispondenza alla fine di un'unità di conversione. Il compilatore ora rileva e invia una notifica al programmatore riguardo il codice scritto in questo modo e genera un avviso del compilatore C5032 nella posizione della direttiva \#pragma warning\(push\) senza corrispondenza, se abilitata. Questo avviso viene generato solo se non sono presenti errori di compilazione nell'unità di conversione.  
  
 **avviso C5032: rilevata la direttiva \#pragma warning\(push\) senza alcuna direttiva \#pragma warning\(pop\) corrispondente**     Esempio \(prima\)  
  
    ```cpp  
    // C5032.h #pragma warning(push) #pragma warning(disable:####) ... // C5032.h ends without #pragma warning(pop) // C5032.cpp #include "C5032.h" ... // C5032.cpp ends -- the translation unit is completed without #pragma warning(pop), resulting in warning C5032 on line 1 of C5032.h  
    ```  
  
     Esempio \(dopo\)  
  
    ```cpp  
    // C5032.h #pragma warning(push) #pragma warning(disable:####) ... #pragma warning(pop) // matches #pragma warning (push) on line 1 // C5032.h ends // C5032.cpp #include "C5032.h" ... // C5032.cpp ends -- the translation unit is completed without unmatched #pragma warning(push)  
    ```  
  
-   **Potrebbero essere generati avvisi aggiuntivi in seguito al migliorato rilevamento dello stato della direttiva \#pragma warning**  
  
     Le versioni precedenti del compilatore rilevavano le modifiche di stato della direttiva \#pragma warning in maniera non sufficiente a generare tutti gli avvisi previsti. Questo comportamento comportava il rischio che alcuni avvisi sarebbero stati eliminati in modo efficace in circostanze diverse rispetto a quelle previste dal programmatore. Il compilatore ora tiene traccia dello stato della direttiva \#pragma warning in modo più affidabile, specialmente per quanto riguarda le modifiche dello stato della direttiva \#pragma warning all'interno dei modelli, e facoltativamente rilascia nuovi avvisi C5031 e C5032 che aiutano il programmatore a trovare gli usi imprevisti di `#pragma warning(push)` e `#pragma warning(pop)`.  
  
     In seguito al migliorato rilevamento delle modifiche di stato della direttiva \#pragma warning, è ora possibile generare gli avvisi in precedenza eliminati in modo errato oppure gli avvisi relativi ai problemi in precedenza diagnosticati in modo errato.  
  
-   **Identificazione del codice non eseguibile migliorata**  
  
     Le modifiche della Libreria standard C\+\+ e la migliorata capacità di incorporare le chiamate di funzione inline rispetto alle versioni precedenti del compilatore potrebbero consentire al compilatore di dimostrare che determinato codice è ora non eseguibile. Questo nuovo comportamento può comportare nuove e più frequenti visualizzazioni dell'avviso C4720.  
  
 **avviso C4720: codice non eseguibile**     In molti casi, l'avviso potrebbe essere generato solo durante la compilazione con ottimizzazioni abilitate, dal momento che le ottimizzazioni potrebbero incorporare più chiamate di funzione, eliminare il codice ridondante o altrimenti consentire di determinare che determinato codice non è eseguibile. Si è osservato che le nuove istanze dell'avviso C4720 si sono verificate di frequente nei blocchi try\/catch, in special modo in relazione all'uso di [std::find](assetId:///std::find?qualifyHint=False&autoUpgrade=True).  
  
     Esempio \(prima\)  
  
    ```cpp  
    try { auto iter = std::find(v.begin(), v.end(), 5); } catch(…) { do_something();  // ok }  
    ```  
  
     Esempio \(dopo\)  
  
    ```cpp  
    try { auto iter = std::find(v.begin(), v.end(), 5); } catch(…) { do_something();  // warning C4702: unreachable code }  
    ```