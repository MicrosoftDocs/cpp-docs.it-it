---
title: Specifiche di eccezioni (generazione) (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- exceptions [C++], exception specifications
- throwing exceptions [C++], throw keyword
- C++ exception handling [C++], throwing exceptions
- throw keyword [C++], throw() vs. throw(...)
- throw keyword [C++], exception specifications
ms.assetid: 4d3276df-6f31-4c7f-8cab-b9d2d003a629
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 6577cf489ee1c9d64689938bb8a12660cec96893
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="exception-specifications-throw-noexcept-c"></a>Le specifiche di eccezione (throw, noexcept) (C++)
Specifiche di eccezione sono una funzionalità del linguaggio C++ che indicano lo scopo del programmatore sui tipi di eccezioni che possono essere propagati da una funzione. È possibile specificare che una funzione può o non può uscire da un'eccezione utilizzando un *specifica di eccezione*. Il compilatore può usare queste informazioni per ottimizzare le chiamate alla funzione e la funzione di escape per terminare il programma se un'eccezione imprevista. Esistono due tipi di specifica di eccezione. Il *noexcept specifica* è una novità in C++ 11. Specifica se il set di potenziali eccezioni da fare in modo che la funzione è vuoto. Il *specifica di eccezione dinamiche*, o `throw(optional_type_list)` specifica, è deprecata in C++ 11 ed è supportato solo parzialmente da Visual Studio. Questa specifica di eccezione è stata progettata per fornire informazioni di riepilogo sulle eccezioni che possono essere generate da una funzione, ma in pratica è stato trovato un problema. Stato di non condizionale di una specifica di eccezione dinamiche che è risultata piuttosto utile `throw()` specifica. Ad esempio, la dichiarazione di funzione:  
  
```cpp  
void MyFunction(int i) throw();  
```  
  
 indica al compilatore che la funzione non genera alcuna eccezione. È equivalente all'utilizzo [__declspec(nothrow)](../cpp/nothrow-cpp.md). Tale specifica di eccezione viene considerata facoltativa.  
  
In C++ 11 Standard ISO, il [noexcept](../cpp/noexcept-cpp.md) operatore è stato introdotto come una sostituzione. È supportata in Visual Studio 2015 e versioni successive. Se possibile, utilizzare un `noexcept` espressione per specificare se una funzione può generare eccezioni. Ad esempio, è possibile utilizzare questa dichiarazione di funzione anziché quello precedente:  
  
```cpp  
void MyFunction(int i) noexcept;  
```  
  
Sebbene Visual C++ supporta completamente il `noexcept` espressione, si allontana dallo Standard ISO C++ nella sua implementazione di specifiche di eccezione dinamiche.  Nella tabella riportata di seguito viene riepilogata l'implementazione di Visual C++ delle specifiche di eccezione:  
  
|Specifica di eccezione|Significato|  
|-----------------------------|-------------|  
|`noexcept`<br/>`noexcept(true)`<br/>`throw()`|La funzione non genera eccezioni. Tuttavia, se viene generata un'eccezione di una funzione contrassegnata `throw()`, il compilatore di Visual C++ chiama `std::terminate`, non `std::unexpected`. Vedere [std::unexpected](../c-runtime-library/reference/unexpected-crt.md) per ulteriori informazioni. Se una funzione è contrassegnata `noexcept`, `noexcept(true)`, o `throw()`, il compilatore Visual C++ si presuppone che la funzione non genera eccezioni di C++ e genera codice di conseguenza. Perché le ottimizzazioni del codice possono essere eseguite dal compilatore C++ basato sul presupposto che la funzione non generi eccezioni di C++, se una funzione genera un'eccezione, il programma potrebbe non essere eseguito correttamente.|  
|`noexcept(false)`<br/>`throw(...)`<br/>Nessuna specifica|La funzione può generare un'eccezione di qualsiasi tipo.|  
|`throw(type)`|La funzione può generare un'eccezione di tipo `type`. In Visual C++, questa sintassi è accettata, ma viene interpretato come `noexcept(false)`.|  
  
 Se la gestione delle eccezioni viene utilizzato in un'applicazione, deve essere presente una funzione nello stack di chiamate che gli handle generati eccezioni prima che escono dall'ambito esterno di una funzione contrassegnati `noexcept`, `noexcept(true)`, o `throw()`. Se tutte le funzioni chiamate tra quella che genera un'eccezione e quella che gestisce l'eccezione vengono specificati come `noexcept`, `noexcept(true)`, o `throw()`, il programma viene terminato quando la funzione noexcept propaga l'eccezione.  
  
 Il comportamento di eccezione di una funzione dipende dai fattori seguenti:  
  
-   Se la funzione viene compilata in C o C++.  
  
-   Quale [/EH](../build/reference/eh-exception-handling-model.md) si utilizza l'opzione del compilatore.  
  
-   Se la specifica di eccezione viene specificata in modo esplicito.  
  
 Le specifiche di eccezioni esplicite nelle funzioni C non sono consentite. Una funzione C si presuppone che non generano eccezioni in **/EHsc**e può generare eccezioni strutturate in **/EHs**, **/EHa**, o **/EHac**.  
  
 Nella tabella seguente vengono riepilogate se una funzione di C++ potrebbe potenzialmente generare in varie opzioni di gestione delle eccezioni del compilatore:  
  
|Funzione|/EHsc|/EHs|/EHa|/EHac|  
|--------------|------------|-----------|-----------|------------|  
|Funzione C++ senza alcuna specifica di eccezione|Sì|Sì|Sì|Sì|  
|Funzione C++ con `noexcept`, `noexcept(true)`, o `throw()` specifica di eccezione|No|No|Sì|Sì|  
|Funzione C++ con `noexcept(false)`, `throw(...)`, o `throw(type)` specifica di eccezione|Sì|Sì|Sì|Sì|  
  
## <a name="example"></a>Esempio  
  
```cpp  
// exception_specification.cpp  
// compile with: /EHs  
#include <stdio.h>  
  
void handler() {  
   printf_s("in handler\n");  
}  
  
void f1(void) throw(int) {  
   printf_s("About to throw 1\n");  
   if (1)  
      throw 1;  
}  
  
void f5(void) throw() {  
   try {  
      f1();  
   }  
   catch(...) {  
      handler();  
    }  
}  
  
// invalid, doesn't handle the int exception thrown from f1()  
// void f3(void) throw() {  
//   f1();  
// }  
  
void __declspec(nothrow) f2(void) {  
   try {  
      f1();  
   }  
   catch(int) {  
      handler();  
    }  
}  
  
// only valid if compiled without /EHc   
// /EHc means assume extern "C" functions don't throw exceptions  
extern "C" void f4(void);  
void f4(void) {  
   f1();  
}  
  
int main() {  
   f2();  
  
   try {  
      f4();  
   }  
   catch(...) {  
      printf_s("Caught exception from f4\n");  
   }  
   f5();  
}  
```  
  
```Output  
About to throw 1  
in handler  
About to throw 1  
Caught exception from f4  
About to throw 1  
in handler  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzioni try, throw e catch (C++)](../cpp/try-throw-and-catch-statements-cpp.md)   
 [Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)
