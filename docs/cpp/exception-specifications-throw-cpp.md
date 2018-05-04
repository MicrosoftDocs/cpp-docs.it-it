---
title: Le specifiche di eccezione (throw, noexcept) (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 01/18/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- exceptions [C++], exception specifications
- throwing exceptions [C++], throw keyword
- C++ exception handling [C++], throwing exceptions
- throw keyword [C++]
- noexcept keyword [C++]
ms.assetid: 4d3276df-6f31-4c7f-8cab-b9d2d003a629
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9ab09d5aadb489208b2e7591c2bf0f60ab836da4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="exception-specifications-throw-noexcept-c"></a>Le specifiche di eccezione (throw, noexcept) (C++)

Specifiche di eccezione sono una funzionalità del linguaggio C++ che indicano lo scopo del programmatore sui tipi di eccezioni che possono essere propagati da una funzione. È possibile specificare che una funzione può o non può uscire da un'eccezione utilizzando un *specifica di eccezione*. Il compilatore può usare queste informazioni per ottimizzare le chiamate alla funzione e la funzione di escape per terminare il programma se un'eccezione imprevista. 

Prima di C++ 17 non vi sono due tipi di specifica di eccezione. Il *noexcept specifica* è una caratteristica introdotta in C++ 11. Specifica se il set di potenziali eccezioni da fare in modo che la funzione è vuoto. Il *specifica di eccezione dinamiche*, o `throw(optional_type_list)` specifica, è stata deprecata in C++ 11 e rimossa in C++ 17, ad eccezione di `throw()`, che è un alias per `noexcept(true)`. Questa specifica di eccezione è stata progettata per fornire informazioni di riepilogo sulle eccezioni che possono essere generate da una funzione, ma in pratica è stato trovato un problema. Stato di non condizionale di una specifica di eccezione dinamiche che è risultata piuttosto utile `throw()` specifica. Ad esempio, la dichiarazione di funzione:

```cpp
void MyFunction(int i) throw();
```
indica al compilatore che la funzione non genera alcuna eccezione. Tuttavia, in **/std:c + + 14** modalità questo potrebbe causare un comportamento indefinito se la funzione genera un'eccezione. Pertanto è consigliabile utilizzare il [noexcept](../cpp/noexcept-cpp.md) operatore anziché quello precedente:

```cpp
void MyFunction(int i) noexcept;
```
La tabella seguente riepiloga l'implementazione di Microsoft Visual C++ delle specifiche di eccezione:

|Specifica di eccezione|Significato|
|-----------------------------|-------------|
|`noexcept`<br>`noexcept(true)`<br>`throw()`|La funzione non genera eccezioni. In [/std:c + + 14](../build/reference/std-specify-language-standard-version.md) modalità (vale a dire l'impostazione predefinita), `noexcept` e `noexcept(true)` sono equivalenti. Quando viene generata un'eccezione da una funzione dichiarata `noexcept` o `noexcept(true)`, [std:: Terminate](../standard-library/exception-functions.md#terminate) viene richiamato. Quando viene generata un'eccezione da una funzione dichiarata come `throw()` in **/std:c + + 14** modalità, il risultato è un comportamento indefinito. Non viene richiamata alcuna funzione specifico. Si tratta di una divergenza dal standard C++ 14, che ha richiesto al compilatore di richiamare [std::unexpected](../standard-library/exception-functions.md#unexpected).  <br> **Visual Studio 2017 15,5 e versioni successive**: In **/std:c + + 17** modalità `noexcept`, `noexcept(true)`, e `throw()` sono tutte equivalenti. In **/std:c + + 17** modalità `throw()` è un alias per `noexcept(true)`. In **/std:c + + 17** modalità, se viene generata un'eccezione da una funzione dichiarata con uno qualsiasi di queste specifiche, [std:: Terminate](../standard-library/exception-functions.md#terminate) viene richiamato come richiesto dal standard C++ 17.|
|`noexcept(false)`<br/>`throw(...)`<br/>Nessuna specifica|La funzione può generare un'eccezione di qualsiasi tipo.|
|`throw(type)`| (**C++ 14 e versioni precedenti**) la funzione può generare un'eccezione di tipo `type`. Il compilatore accetta la sintassi, ma lo interpreta come `noexcept(false)`. In **/std:c + + 17** modalità, il compilatore genera l'avviso C5040.|

Se la gestione delle eccezioni viene utilizzato in un'applicazione, deve essere presente una funzione nello stack di chiamate che gli handle generati eccezioni prima che escono dall'ambito esterno di una funzione contrassegnati `noexcept`, `noexcept(true)`, o `throw()`. Se tutte le funzioni chiamate tra quella che genera un'eccezione e quella che gestisce l'eccezione vengono specificati come `noexcept`, `noexcept(true)` (o `throw()` in **/std:c + + 17** modalità), il programma viene terminato quando il funzione noexcept propaga l'eccezione.

Il comportamento di eccezione di una funzione dipende dai fattori seguenti:

- Quale [modalità di compilazione standard di linguaggio](../build/reference/std-specify-language-standard-version.md) è impostata.
- Se la funzione viene compilata in C o C++.

- Quale [/EH](../build/reference/eh-exception-handling-model.md) si utilizza l'opzione del compilatore.

- Se la specifica di eccezione viene specificata in modo esplicito.

Le specifiche di eccezioni esplicite nelle funzioni C non sono consentite. Una funzione C si presuppone che non generano eccezioni in **/EHsc**e può generare eccezioni strutturate in **/EHs**, **/EHa**, o **/EHac**.

Nella tabella seguente vengono riepilogate se una funzione di C++ potrebbe potenzialmente generare in varie opzioni di gestione delle eccezioni del compilatore:

|Funzione|/EHsc|/EHs|/EHa|/EHac|
|--------------|------------|-----------|-----------|------------|
|Funzione C++ senza alcuna specifica di eccezione|Yes|Sì|Sì|Yes|
|Funzione C++ con `noexcept`, `noexcept(true)`, o `throw()` specifica di eccezione|No|No|Sì|Yes|
|Funzione C++ con `noexcept(false)`, `throw(...)`, o `throw(type)` specifica di eccezione|Yes|Sì|Sì|Yes|

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

 [try, throw e catch istruzioni (C++)](../cpp/try-throw-and-catch-statements-cpp.md) [gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)