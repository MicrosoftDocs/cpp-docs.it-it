---
title: Errore del compilatore C2065
ms.date: 09/01/2017
f1_keywords:
- C2065
helpviewer_keywords:
- C2065
ms.assetid: 78093376-acb7-45f5-9323-5ed7e0aab1dc
ms.openlocfilehash: 3daf2cd532cd07225b822c80b46fc28274d4e2a8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62408615"
---
# <a name="compiler-error-c2065"></a>Errore del compilatore C2065

> «*identificatore*': identificatore non dichiarato

Il compilatore non trova la dichiarazione di un identificatore. Esistono molte possibili cause di questo errore. Le cause più comuni di errore C2065 sono che non è stato dichiarato l'identificatore, l'identificatore è errato, l'intestazione in cui viene dichiarato l'identificatore non è incluso nel file o l'identificatore non è presente un qualificatore di ambito, ad esempio, `cout` invece di `std::cout`. Per altre informazioni su dichiarazioni in C++, vedere [dichiarazioni e definizioni (C++)](../../cpp/declarations-and-definitions-cpp.md).

Ecco alcuni problemi comuni e soluzioni in modo più dettagliato.

## <a name="the-identifier-is-undeclared"></a>L'identificatore è dichiarato

Se l'identificatore è una variabile o un nome di funzione, è necessario dichiarare prima che possa essere utilizzato. Una dichiarazione di funzione deve includere anche i tipi dei relativi parametri prima di poter usare la funzione. Se la variabile è dichiarata mediante `auto`, il compilatore deve essere in grado di dedurre il tipo dal suo inizializzatore.

Se l'identificatore è un membro di una classe o struct o dichiarato in uno spazio dei nomi, devono essere qualificato dal nome classe o uno struct o il nome dello spazio dei nomi, quando usato all'esterno dell'ambito dello spazio dei nomi, classe o struct. In alternativa, lo spazio dei nomi debba essere inserito nell'ambito per un `using` direttiva, ad esempio `using namespace std;`, o il nome del membro debba essere inserito nell'ambito per un `using` dichiarazione, ad esempio `using std::string;`. In caso contrario, il nome non qualificato viene considerato un identificatore non dichiarato nell'ambito corrente.

Se l'identificatore è il tag per un tipo definito dall'utente, ad esempio, un `class` o `struct`, il tipo di tag deve essere dichiarato prima che possa essere utilizzato. Ad esempio, la dichiarazione `struct SomeStruct { /*...*/ };` deve esistere prima che è possibile dichiarare una variabile `SomeStruct myStruct;` nel codice.

Se l'identificatore è un alias del tipo, il tipo deve essere dichiarato con un `using` dichiarazione o `typedef` prima che possa essere utilizzato. Ad esempio, è necessario dichiarare `using my_flags = std::ios_base::fmtflags;` prima di poter usare `my_flags` come un alias del tipo per `std::ios_base::fmtflags`.

## <a name="example-misspelled-identifier"></a>Esempio: identificatore di errori di ortografia

Questo errore si verifica generalmente quando il nome dell'identificatore è errato o l'identificatore Usa lettere maiuscole e minuscole errate. Il nome nella dichiarazione deve corrispondere esattamente al nome usato.

```cpp
// C2065_spell.cpp
// compile with: cl /EHsc C2065_spell.cpp
#include <iostream>
using namespace std;
int main() {
    int someIdentifier = 42;
    cout << "Some Identifier: " << SomeIdentifier << endl;
    // C2065: 'SomeIdentifier': undeclared identifier
    // To fix, correct the spelling:
    // cout << "Some Identifier: " << someIdentifier << endl;
}
```

## <a name="example-use-an-unscoped-identifier"></a>Esempio: usare un identificatore senza ambito

Questo errore può verificarsi se l'identificatore non è correttamente con ambito. Se viene visualizzato l'errore C2065 quando si usa `cout`, questa è la causa. Quando le funzioni della libreria Standard C++ e gli operatori non sono completamente qualificati dallo spazio dei nomi, o non hanno portato il `std` dello spazio dei nomi nell'ambito corrente utilizzando un `using` direttiva, il compilatore non è possibile trovarli. Per risolvere questo problema, è necessario qualificare i nomi degli identificatori, o senza specificare lo spazio dei nomi con il `using` direttiva.

In questo esempio non viene compilato perché `cout` e `endl` sono definiti nel `std` dello spazio dei nomi:

```cpp
// C2065_scope.cpp
// compile with: cl /EHsc C2065_scope.cpp
#include <iostream>
// using namespace std;   // Uncomment this line to fix

int main() {
    cout << "Hello" << endl;   // C2065 'cout': undeclared identifier
                               // C2065 'endl': undeclared identifier
    // Or try the following line instead
    std::cout << "Hello" << std::endl;
}
```

Gli identificatori dichiarati all'interno di `class`, `struct`, o `enum class` tipi devono essere qualificati dal nome del proprio ambito di inclusione anche quando vengono usate all'esterno di tale ambito.

## <a name="example-precompiled-header-isnt-first"></a>Esempio: intestazione precompilata non prima

Questo errore può verificarsi se si inseriscono tutte le direttive del preprocessore, ad esempio #include, #define, o #pragma, prima di #include di un file di intestazione precompilata. Se il file di origine Usa un file di intestazione precompilata (vale a dire, se viene compilato usando il **/Yu** opzione del compilatore), vengono ignorate tutte le direttive del preprocessore prima il file di intestazione precompilata.

In questo esempio non viene compilato perché `cout` e `endl` sono definiti nel \<iostream > intestazione, che viene ignorato perché è incluso prima il file di intestazione precompilata. Per compilare questo esempio, creare tutti i tre file, quindi compilato stdafx. cpp, quindi compilare C2065_pch.cpp.

```cpp
// stdafx.h
#include <stdio.h>
```

```cpp
// stdafx.cpp
// Compile by using: cl /EHsc /W4 /c /Ycstdafx.h stdafx.cpp
#include <stdafx.h>
```

```cpp
// C2065_pch.cpp
// compile with: cl /EHsc /W4 /Yustdafx.h C2065_pch.cpp
#include <iostream>
#include "stdafx.h"
using namespace std;

int main() {
    cout << "Hello" << endl;   // C2065 'cout': undeclared identifier
                               // C2065 'endl': undeclared identifier
}
```

Per risolvere questo problema, aggiungere il #include di \<iostream > al file di intestazione precompilata oppure spostamento del file di intestazione precompilata è incluso nel file di origine.

## <a name="example-missing-header-file"></a>Esempio: manca il file di intestazione

Il file di intestazione che dichiara l'identificatore non è stata inclusa. Assicurarsi che il file che contiene la dichiarazione per l'identificatore sia incluso in ogni file di origine che lo utilizza.

```cpp
// C2065_header.cpp
// compile with: cl /EHsc C2065_header.cpp

//#include <stdio.h>
int main() {
    fpos_t file_position = 42; // C2065: 'fpos_t': undeclared identifier
    // To fix, uncomment the #include <stdio.h> line
    // to include the header where fpos_t is defined
}
```

È anche possibile se si usa un elenco di inizializzatori senza includere la \<initializer_list > dell'intestazione.

```cpp
// C2065_initializer.cpp
// compile with: cl /EHsc C2065_initializer.cpp

// #include <initializer_list>
int main() {
    for (auto strList : {"hello", "world"})
        if (strList == "hello") // C2065: 'strList': undeclared identifier
            return 1;
    // To fix, uncomment the #include <initializer_list> line
}
```

Si potrebbe essere visualizzato questo errore nei file di origine di app Desktop di Windows se si definiscono `VC_EXTRALEAN`, `WIN32_LEAN_AND_MEAN`, o `WIN32_EXTRA_LEAN`. Queste macro del preprocessore escludere alcuni file di intestazione da Windows. h e afxv\_compila w32.h per aumentare la velocità. Cerca in Windows. h e afxv_w32.h una descrizione aggiornata degli elementi esclusi.

## <a name="example-missing-closing-quote"></a>Esempio: virgoletta di chiusura mancante

Questo errore può verificarsi se non sono presenti una virgoletta di chiusura dopo una costante di stringa. Questo è un modo facile confondere il compilatore. Si noti che la virgoletta di chiusura mancanti potrà essere diverse righe prima della posizione di errore segnalato.

```cpp
// C2065_quote.cpp
// compile with: cl /EHsc C2065_quote.cpp
#include <iostream>

int main() {
    // Fix this issue by adding the closing quote to "Aaaa"
    char * first = "Aaaa, * last = "Zeee";
    std::cout << "Name: " << first
        << " " << last << std::endl; // C2065: 'last': undeclared identifier
}
```

## <a name="example-use-iterator-outside-for-loop-scope"></a>Esempio: usare iteratore all'esterno di ambito del ciclo

Questo errore può verificarsi se si dichiara una variabile di iteratore in una `for` ciclo e quindi si prova a usare la variabile iteratore all'esterno dell'ambito del `for` ciclo. Il compilatore consente il [/Zc: forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) l'opzione del compilatore per impostazione predefinita. Visualizzare [Debug Iterator Support](../../standard-library/debug-iterator-support.md) per altre informazioni.

```cpp
// C2065_iter.cpp
// compile with: cl /EHsc C2065_iter.cpp
#include <iostream>
#include <string>

int main() {
    // char last = '!';
    std::string letters{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    for (const char& c : letters) {
        if ('Q' == c) {
            std::cout << "Found Q!" << std::endl;
        }
        // last = c;
    }
    std::cout << "Last letter was " << c << std::endl; // C2065
    // Fix by using a variable declared in an outer scope.
    // Uncomment the lines that declare and use 'last' for an example.
    // std::cout << "Last letter was " << last << std::endl; // C2065
}
```

## <a name="example-preprocessor-removed-declaration"></a>Esempio: dichiarazione di rimozione per il preprocessore

Questo errore può verificarsi se si fa riferimento a una funzione o variabile che nel codice compilato in modo condizionale che non viene compilato per la configurazione corrente. Ciò può verificarsi anche se si chiama una funzione in un file di intestazione che non è attualmente supportato nell'ambiente di compilazione. Se determinate variabili o funzioni sono disponibili solo quando viene definita una determinata macro del preprocessore, assicurarsi che il codice che chiama le funzioni può essere compilato solo quando viene definita la macro del preprocessore stesso. Questo problema è facile individuare nell'IDE, perché la dichiarazione della funzione è disabilitata se la macro del preprocessore necessari non sono definite per la configurazione della build corrente.

Questo è un esempio di codice da usare quando si compila in modalità Debug, ma non delle vendite al dettaglio:

```cpp
// C2065_defined.cpp
// Compile with: cl /EHsc /W4 /MT C2065_defined.cpp
#include <iostream>
#include <crtdbg.h>
#ifdef _DEBUG
    _CrtMemState oldstate;
#endif
int main() {
    _CrtMemDumpStatistics(&oldstate);
    std::cout << "Total count " << oldstate.lTotalCount; // C2065
    // Fix by guarding references the same way as the declaration:
    // #ifdef _DEBUG
    //    std::cout << "Total count " << oldstate.lTotalCount;
    // #endif
}
```

## <a name="example-ccli-type-deduction-failure"></a>Esempio: C++/ Errore di deduzione del tipo CLI

Questo errore può verificarsi quando si chiama una funzione generica, se l'argomento tipo designato non può essere dedotto dai parametri utilizzati. Per altre informazioni, vedere [funzioni generiche (C++/CLI)](../../extensions/generic-functions-cpp-cli.md).

```cpp
// C2065_b.cpp
// compile with: cl /clr C2065_b.cpp
generic <typename ItemType>
void G(int i) {}

int main() {
   // global generic function call
   G<T>(10);     // C2065
   G<int>(10);   // OK - fix with a specific type argument
}
```

## <a name="example-ccli-attribute-parameters"></a>Esempio: C++/ Parametri dell'attributo CLI

Questo errore può essere generato anche in seguito alle operazioni di conformità del compilatore eseguite per Visual C++ 2005: controllo dei parametri per gli attributi di Visual C++.

```cpp
// C2065_attributes.cpp
// compile with: cl /c /clr C2065_attributes.cpp
[module(DLL, name=MyLibrary)];   // C2065
// try the following line instead
// [module(dll, name="MyLibrary")];

[export]
struct MyStruct {
   int i;
};
```
