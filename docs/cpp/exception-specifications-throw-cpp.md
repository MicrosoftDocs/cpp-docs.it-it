---
description: 'Altre informazioni su: specifiche di eccezione (throw, noexcept) (C++)'
title: Specifiche di eccezione (throw, noexcept) (C++)
ms.date: 01/18/2018
helpviewer_keywords:
- exceptions [C++], exception specifications
- throwing exceptions [C++], throw keyword
- C++ exception handling [C++], throwing exceptions
- throw keyword [C++]
- noexcept keyword [C++]
ms.assetid: 4d3276df-6f31-4c7f-8cab-b9d2d003a629
ms.openlocfilehash: a6b3cb808caf464dc3dd19ea4d34e9d68f09d0d4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97164799"
---
# <a name="exception-specifications-throw-noexcept-c"></a>Specifiche di eccezione (throw, noexcept) (C++)

Le specifiche di eccezione sono una funzionalità del linguaggio C++ che indica le finalità del programmatore sui tipi di eccezione che possono essere propagati da una funzione. È possibile specificare che una funzione può o meno uscire da un'eccezione usando una specifica di *eccezione*. Il compilatore può utilizzare queste informazioni per ottimizzare le chiamate alla funzione e per terminare il programma se un'eccezione imprevista esegue l'escape della funzione.

Prima di C++ 17 esistevano due tipi di specifiche di eccezione. La *specifica noexcept* è una novità di c++ 11. Specifica se il set di potenziali eccezioni che possono sfuggire alla funzione è vuoto. La specifica di *eccezione dinamica*, o `throw(optional_type_list)` specifica, è stata deprecata in c++ 11 ed è stata rimossa in c++ 17, ad eccezione di `throw()` , che è un alias per `noexcept(true)` . Questa specifica di eccezione è stata progettata per fornire informazioni di riepilogo sulle eccezioni che possono essere generate da una funzione, ma in pratica è stato riscontrato un problema. La specifica di un'eccezione dinamica che è stata rivelata un po' utile è stata la specifica non condizionale `throw()` . Ad esempio, la dichiarazione di funzione:

```cpp
void MyFunction(int i) throw();
```

indica al compilatore che la funzione non genera alcuna eccezione. Tuttavia, nella modalità **/std: c++ 14** questo può causare un comportamento non definito se la funzione genera un'eccezione. È quindi consigliabile usare l'operatore [noexcept](../cpp/noexcept-cpp.md) anziché quello precedente:

```cpp
void MyFunction(int i) noexcept;
```

Nella tabella seguente viene riepilogata l'implementazione di Microsoft C++ delle specifiche di eccezione:

|Specifica di eccezione|Significato|
|-----------------------------|-------------|
|**`noexcept`**<br/>`noexcept(true)`<br/>`throw()`|La funzione non genera eccezioni. In [/std: modalità c++ 14](../build/reference/std-specify-language-standard-version.md) (impostazione predefinita) **`noexcept`** e `noexcept(true)` sono equivalenti. Quando viene generata un'eccezione da una funzione dichiarata **`noexcept`** o `noexcept(true)` , viene richiamato [std:: terminate](../standard-library/exception-functions.md#terminate) . Quando viene generata un'eccezione da una funzione dichiarata come `throw()` in modalità **/std: c++ 14** , il risultato è un comportamento non definito. Non viene richiamata alcuna funzione specifica. Si tratta di una divergenza rispetto allo standard C++ 14, che richiedeva al compilatore di richiamare [std:: Unexpected](../standard-library/exception-functions.md#unexpected).  <br/> **Visual Studio 2017 versione 15,5 e successive**: in **/std: la modalità c++ 17** ,, **`noexcept`** `noexcept(true)` e `throw()` sono tutti equivalenti. In modalità **/std: c++ 17** , `throw()` è un alias per `noexcept(true)` . In modalità **/std: c++ 17** , quando viene generata un'eccezione da una funzione dichiarata con una di queste specifiche, [std:: terminate](../standard-library/exception-functions.md#terminate)  viene richiamato come richiesto dallo standard c++ 17.|
|`noexcept(false)`<br/>`throw(...)`<br/>Nessuna specifica|La funzione può generare un'eccezione di qualsiasi tipo.|
|`throw(type)`| (**C++ 14 e versioni precedenti**) La funzione può generare un'eccezione di tipo `type` . Il compilatore accetta la sintassi, ma lo interpreta come `noexcept(false)` . In modalità **/std: c++ 17** il compilatore genera un avviso C5040.|

Se in un'applicazione viene usata la gestione delle eccezioni, deve essere presente una funzione nello stack di chiamate che gestisce le eccezioni generate prima di uscire dall'ambito esterno di una funzione contrassegnata come, **`noexcept`** `noexcept(true)` o `throw()` . Se tutte le funzioni chiamate tra quello che genera un'eccezione e quella che gestisce l'eccezione sono specificate come **`noexcept`** , `noexcept(true)` (o `throw()` nella modalità **/std: c++ 17** ), il programma viene terminato quando la funzione noexcept propaga l'eccezione.

Il comportamento dell'eccezione di una funzione dipende dai fattori seguenti:

- Quale [modalità di compilazione standard del linguaggio](../build/reference/std-specify-language-standard-version.md) è impostata.
- Se la funzione viene compilata in C o C++.

- Quale opzione del compilatore [/eh](../build/reference/eh-exception-handling-model.md) usare.

- Se la specifica di eccezione viene specificata in modo esplicito.

Le specifiche di eccezioni esplicite nelle funzioni C non sono consentite. Si presuppone che una funzione C non generi eccezioni in **/EHsc** e possa generare eccezioni strutturate in **/EHS**, **/EHA** o **/EHac**.

Nella tabella seguente viene riepilogato se una funzione C++ può generare potenzialmente in diverse opzioni di gestione delle eccezioni del compilatore:

|Funzione|/EHsc|/EHs|/EHa|/EHac|
|--------------|------------|-----------|-----------|------------|
|Funzione C++ senza alcuna specifica di eccezione|Sì|Sì|Sì|Sì|
|Funzione C++ con **`noexcept`** , `noexcept(true)` o `throw()` specifica di eccezione|No|No|Sì|Sì|
|Funzione C++ con `noexcept(false)` , `throw(...)` o `throw(type)` specifica di eccezione|Sì|Sì|Sì|Sì|

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

[Istruzioni try, throw e catch (C++)](../cpp/try-throw-and-catch-statements-cpp.md)<br/>
[Procedure consigliate per C++ moderne per le eccezioni e la gestione degli errori](errors-and-exception-handling-modern-cpp.md)
