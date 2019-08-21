---
title: Errore del compilatore C2065
ms.date: 08/19/2019
f1_keywords:
- C2065
helpviewer_keywords:
- C2065
ms.assetid: 78093376-acb7-45f5-9323-5ed7e0aab1dc
ms.openlocfilehash: 40d1d0744588c4b7911e84f5e57a6b40372b48cf
ms.sourcegitcommit: 9d4ffb8e6e0d70520a1e1a77805785878d445b8a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/20/2019
ms.locfileid: "69630126"
---
# <a name="compiler-error-c2065"></a>Errore del compilatore C2065

> '*Identifier*': identificatore non dichiarato

Il compilatore non riesce a trovare la dichiarazione per un identificatore. Questo errore può essere dovuto a numerose cause. Le cause più comuni di C2065 sono il fatto che l'identificatore non è stato dichiarato, che l'identificatore è stato digitato in modo errato, che l'intestazione in cui l'identificatore è dichiarata non è inclusa nel file o che `cout` nell'identificatore manca un qualificatore di ambito, ad esempio, anziché `std::cout`. Per ulteriori informazioni sulle dichiarazioni in C++, vedere [dichiarazioni e definizioni (C++)](../../cpp/declarations-and-definitions-cpp.md).

Di seguito sono riportati alcuni problemi comuni e soluzioni in modo più dettagliato.

## <a name="the-identifier-is-undeclared"></a>Identificatore non dichiarato

Se l'identificatore è una variabile o un nome di funzione, è necessario dichiararlo prima di poterlo usare. Una dichiarazione di funzione deve includere anche i tipi dei relativi parametri prima che la funzione possa essere utilizzata. Se la variabile viene dichiarata usando `auto`, il compilatore deve essere in grado di dedurre il tipo dal relativo inizializzatore.

Se l'identificatore è un membro di una classe o di uno struct oppure è dichiarato in uno spazio dei nomi, deve essere qualificato dal nome della classe o dello struct oppure dal nome dello spazio dei nomi, se usato al di fuori dello struct, della classe o dell'ambito dello spazio dei nomi. In alternativa, lo spazio dei nomi deve essere introdotto nell'ambito `using` da una direttiva `using namespace std;`, ad esempio, oppure il nome del membro deve essere inserito `using` nell'ambito da `using std::string;`una dichiarazione, ad esempio. In caso contrario, il nome non qualificato viene considerato un identificatore non dichiarato nell'ambito corrente.

Se l'identificatore è il tag per un tipo definito dall'utente, ad esempio, `class` o `struct`, il tipo del tag deve essere dichiarato prima di poter essere utilizzato. Ad esempio, la Dichiarazione `struct SomeStruct { /*...*/ };` deve esistere prima di poter dichiarare una variabile `SomeStruct myStruct;` nel codice.

Se l'identificatore è un alias di tipo, il tipo deve essere dichiarato tramite una `using` dichiarazione o `typedef` prima di poter essere utilizzato. È ad esempio necessario dichiarare `using my_flags = std::ios_base::fmtflags;` prima che sia possibile utilizzare `my_flags` come alias di tipo per. `std::ios_base::fmtflags`

## <a name="example-misspelled-identifier"></a>Esempio: identificatore con errori di ortografia

Questo errore si verifica in genere quando il nome dell'identificatore non è stato digitato correttamente o l'identificatore utilizza lettere maiuscole e minuscole errate. Il nome nella dichiarazione deve corrispondere esattamente al nome usato.

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

Questo errore può verificarsi se l'ambito dell'identificatore non è corretto. Se viene visualizzato C2065 quando si usa `cout`, questo è il motivo. Quando C++ le funzioni e gli operatori della libreria standard non sono completi dallo spazio dei nomi oppure non è `std` stato portato lo spazio dei nomi nell'ambito `using` corrente tramite una direttiva, il compilatore non riesce a trovarli. Per risolvere il problema, è necessario qualificare completamente i nomi degli identificatori o specificare lo spazio dei `using` nomi con la direttiva.

Questo esempio non viene compilato perché `cout` e `endl` sono definiti nello `std` spazio dei nomi:

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

Gli identificatori dichiarati all' `class`interno `struct`dei tipi `enum class` , o devono essere qualificati anche dal nome dell'ambito che lo contiene quando vengono usati al di fuori di tale ambito.

## <a name="example-precompiled-header-isnt-first"></a>Esempio: l'intestazione precompilata non è prima

Questo errore può verificarsi se si inseriscono direttive per il preprocessore, ad esempio #include, #define o #pragma, prima del #include di un file di intestazione precompilato. Se il file di origine usa un file di intestazione precompilato, ovvero se viene compilato usando l'opzione del compilatore **/Yu** , tutte le direttive per il preprocessore prima che il file di intestazione precompilato venga ignorato.

Questo esempio non viene compilato perché `cout` e `endl` sono definiti nell' \<intestazione iostream >, che viene ignorata perché è inclusa prima del file di intestazione precompilata. Per compilare questo esempio, creare tutti e tre i file, quindi compilare stdafx. cpp, quindi compilare C2065_pch. cpp.

```cpp
// pch.h (stdafx.h in Visual Studio 2017 and earlier)
#include <stdio.h>
```

```cpp
// pch.cpp (stdafx.cpp in Visual Studio 2017 and earlier)
// Compile by using: cl /EHsc /W4 /c /Ycstdafx.h stdafx.cpp
#include "pch.h"
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

Per risolvere il problema, aggiungere la #include di \<iostream > nel file di intestazione precompilata o spostarla dopo che il file di intestazione precompilata è incluso nel file di origine.

## <a name="example-missing-header-file"></a>Esempio: file di intestazione mancante

Non è stato incluso il file di intestazione che dichiara l'identificatore. Verificare che il file che contiene la dichiarazione per l'identificatore sia incluso in ogni file di origine che lo utilizza.

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

Un'altra possibile possibile è se si usa un elenco di inizializzatori \<senza includere l'intestazione initializer_list >.

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

Questo errore può essere visualizzato nei file di origine dell'app desktop di Windows `VC_EXTRALEAN`se `WIN32_LEAN_AND_MEAN`si definisce `WIN32_EXTRA_LEAN`, o. Queste macro del preprocessore escludono alcuni file di intestazione da Windows.\_h e afxv W32. h per velocizzare le compilazioni. Cercare in Windows. h e afxv_w32. h una descrizione aggiornata degli elementi esclusi.

## <a name="example-missing-closing-quote"></a>Esempio: virgolette di chiusura mancanti

Questo errore può verificarsi se non è presente una virgoletta di chiusura dopo una costante di stringa. Si tratta di un modo semplice per confondere il compilatore. Si noti che la virgoletta di chiusura mancante può essere costituita da più righe prima della posizione dell'errore indicata.

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

## <a name="example-use-iterator-outside-for-loop-scope"></a>Esempio: usare l'iteratore all'esterno dell'ambito del ciclo

Questo errore può verificarsi se si dichiara una variabile iteratore in `for` un ciclo, quindi si tenta di usare tale variabile iteratore al `for` di fuori dell'ambito del ciclo. Il compilatore Abilita l'opzione del compilatore [/Zc: forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) per impostazione predefinita. Per ulteriori informazioni, vedere supporto degli iteratori di [debug](../../standard-library/debug-iterator-support.md) .

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

## <a name="example-preprocessor-removed-declaration"></a>Esempio: dichiarazione rimossa dal preprocessore

Questo errore può verificarsi se si fa riferimento a una funzione o a una variabile presente in codice compilato in modo condizionale che non viene compilato per la configurazione corrente. Questa situazione può verificarsi anche se si chiama una funzione in un file di intestazione che attualmente non è supportata nell'ambiente di compilazione. Se alcune variabili o funzioni sono disponibili solo quando si definisce una particolare macro del preprocessore, assicurarsi che il codice che chiama tali funzioni possa essere compilato solo quando viene definita la stessa macro del preprocessore. Questo problema è facile da individuare nell'IDE, perché la dichiarazione per la funzione è disattivata se le macro del preprocessore richieste non sono definite per la configurazione della build corrente.

Questo è un esempio di codice che funziona quando si compila in debug, ma non al dettaglio:

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

## <a name="example-ccli-type-deduction-failure"></a>Esempio: C++Errore di deduzione del tipo/CLI

Questo errore può verificarsi quando si chiama una funzione generica, se l'argomento di tipo previsto non può essere dedotto dai parametri utilizzati. Per ulteriori informazioni, vedere [funzioni genericheC++(/CLI)](../../extensions/generic-functions-cpp-cli.md).

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

## <a name="example-ccli-attribute-parameters"></a>Esempio: C++Parametri dell'attributo/CLI

Questo errore può anche essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio 2005: controllo dei parametri per gli attributi visivi C++ .

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
