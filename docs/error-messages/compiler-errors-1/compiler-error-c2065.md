---
title: Errore del compilatore C2065 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2065
dev_langs:
- C++
helpviewer_keywords:
- C2065
ms.assetid: 78093376-acb7-45f5-9323-5ed7e0aab1dc
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 128bd124c2536d86c8b673b54abc4b5505526b41
ms.openlocfilehash: 5a3a0d4389a958f421f23a4dc96a395eaf3e22ab
ms.contentlocale: it-it
ms.lasthandoff: 05/10/2017

---
# <a name="compiler-error-c2065"></a>Errore del compilatore C2065
'identifier': identificatore non dichiarato  
  
Il compilatore non trova la dichiarazione di un identificatore. Se l'identificatore è una variabile, è necessario specificare il tipo della variabile in una dichiarazione, prima che possa essere utilizzato. Se l'identificatore è un nome di funzione, i parametri che utilizza la funzione devono essere specificati in una dichiarazione prima di poter utilizzare la funzione. Se l'identificatore è il tag per un tipo definito dall'utente, ad esempio, un `class` o `struct`, il tipo di tag deve essere dichiarato prima di poter essere utilizzato. Se l'identificatore è un alias del tipo, il tipo deve essere dichiarato tramite un `using` dichiarazione o `typedef` prima di poter utilizzare il tipo.  
  
Esistono molte possibili cause di questo errore. Ecco alcuni dei problemi più comuni:
  
## <a name="example-misspelled-identifier"></a>Esempio: identificatore di errori di ortografia  
  
In genere questo errore si verifica quando il nome dell'identificatore è errato o l'identificatore Usa lettere maiuscole e minuscole errate. Il nome nella dichiarazione deve corrispondere esattamente il nome da usare.  
  
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
  
## <a name="example-missing-header-file"></a>Esempio: manca il file di intestazione  
  
Il file di intestazione che dichiara l'identificatore non sono state incluse. Verificare che il file che contiene la dichiarazione dell'identificatore è incluso in ogni file di origine che lo utilizza.  
  
```cpp  
// C2065_header.cpp  
// compile with: cl /EHsc C2065_spell.cpp 

//#include <stdio.h> 
int main() { 
    fpos_t file_position = 42; // C2065: 'fpos_t': undeclared identifier 
    // To fix, uncomment the #include <stdio.h> line
    // to include the header where fpos_t is defined  
} 
```  
  
Potrebbe essere visualizzato questo errore nei file di origine di app Desktop di Windows se si definisce `VC_EXTRALEAN`, `WIN32_LEAN_AND_MEAN`, o `WIN32_EXTRA_LEAN`. Queste macro del preprocessore escludono alcuni file di intestazione da Windows. h e afxv\_w32.h per aumentare la velocità di compilazione. Cerca in Windows. h e afxv_w32. h per una descrizione aggiornata degli elementi esclusi.  
  
## <a name="eample-missing-closing-quote"></a>Eample: virgoletta di chiusura mancante  
  
Questo errore può verificarsi se manca una virgoletta di chiusura dopo una costante di stringa. Questo è un modo facile confondere il compilatore. 
  
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
  
## <a name="example-use-iterator-outside-for-loop-scope"></a>Ad esempio, usare iteratore all'esterno per l'ambito del ciclo  
  
Questo errore può verificarsi se si dichiara una variabile di iteratore in un `for` ciclo e quindi si tenta di utilizzare tale variabile all'esterno dell'ambito del `for` ciclo. Il compilatore consente il [/Zc: forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) l'opzione del compilatore per impostazione predefinita. Vedere [supporto iteratori di Debug](../../standard-library/debug-iterator-support.md) per ulteriori informazioni.  
  
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
  
## <a name="example-preprocessor-removed-declaration"></a>Esempio: la dichiarazione di rimozione per il preprocessore  
  
Questo errore può verificarsi se si fa riferimento a una funzione o variabile che nel codice compilato in modo condizionale che non viene compilato per la configurazione corrente. Ciò può verificarsi anche se si chiama una funzione in un file di intestazione che non è supportato nell'ambiente di compilazione. Se determinate variabili o funzioni sono disponibili solo quando viene definita una determinata macro del preprocessore, assicurarsi che il codice che chiama le funzioni può essere compilato solo quando la macro del preprocessore stessa è definita. Questo problema è facile individuare nell'IDE, perché la dichiarazione della funzione è disattivata se le macro del preprocessore necessari non sono definite per la configurazione della build corrente.  
  
Questo è un esempio di codice che funziona quando si compila in modalità Debug, ma non al dettaglio:  
  
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
  
## <a name="example-use-an-unscoped-identifier"></a>Ad esempio, usare un identificatore senza ambito  
  
Questo errore può verificarsi se l'identificatore non è definito correttamente. Quando ad esempio, operatori e funzioni della libreria Standard C++ non sono completamente qualificati dallo spazio dei nomi, o non hanno portato il `std` dello spazio dei nomi nell'ambito corrente utilizzando un `using` direttiva, il compilatore non è possibile trovarli. Per risolvere questo problema, è necessario qualificare i nomi di identificatore, o senza specificare lo spazio dei nomi con il `using` direttiva.  
  
In questo esempio non viene compilato perché `cout` e `endl` sono definite nel `std` dello spazio dei nomi:  
  
```cpp  
// C2065_scope.cpp  
// compile with: cl /EHsc C2065_scope.cpp 
// using namespace std;   // Uncomment this line to fix  
#include <iostream>  
int main() {  
    cout << "Hello" << endl;   // C2065 'cout': undeclared identifier 
                               // C2065 'endl': undeclared identifier
    // Or try the following line instead  
    std::cout << "Hello" << std::endl;  
}
```  
  
Identificatori dichiarati all'interno di `class`, `struct`, o `enum class` tipi, inoltre deve essere qualificato dal nome dell'ambito di inclusione.
  
## <a name="example-ccli-type-deduction-failure"></a>Esempio: C + + errore deduzione di tipo CLI  
  
Questo errore può verificarsi quando si chiama una funzione generica, se l'argomento tipo designato non può essere dedotto dai parametri usati. Per ulteriori informazioni, vedere [funzioni generiche (C + + CLI)](../../windows/generic-functions-cpp-cli.md).  
  
```cpp  
// C2065_b.cpp  
// compile with: /clr  
generic <typename ItemType>  
void G(int i) {}  
  
int main() {  
   // global generic function call  
   G<T>(10);   // C2065  
   G<int>(10);   // OK - fix with a specific type argument  
}  
```  
  
## <a name="example-ccli-attribute-parameters"></a>Esempio: C + + i parametri dell'attributo CLI  
  
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

