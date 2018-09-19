---
title: Gestire le eccezioni strutturate in C++ | Microsoft Docs
ms.custom: ''
ms.date: 08/14/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- structured exception handling [C++], vs. C++ exception handling
- structured exception handling [C++], vs. unstructured
- exceptions [C++], wrapper class
- C++ exception handling [C++], vs. structured exception handling
- wrapper classes [C++], C exception
ms.assetid: f21d1944-4810-468e-b02a-9f77da4138c9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 48acd13aced14bfd8acbeb4c306a5749010636d7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46086038"
---
# <a name="handle-structured-exceptions-in-c"></a>Gestire le eccezioni strutturate in C++

La differenza principale tra C strutturata (SEH) di gestione delle eccezioni e gestione delle eccezioni C++ è che il modello gestisce i tipi di gestione delle eccezioni C++, mentre C del modello di gestione strutturata delle eccezioni gestisce le eccezioni di uno tipo. in particolare **unsigned int**. In altre parole, le eccezioni C sono identificate da un intero senza segno, mentre le eccezioni C++ sono identificate dal tipo di dati. Quando viene generata un'eccezione strutturata in C, ogni possibile gestore esegue un filtro che esamina il contesto di eccezione C e determina se accettare l'eccezione, passarla a un altro gestore o ignorarla. Quando viene generata un'eccezione in C++, può essere di qualsiasi tipo.

Una seconda differenza consiste nel fatto che il modello di gestione delle eccezioni strutturata di C è detto *asincrona*, perché si verificano eccezioni secondario per il normale flusso di controllo. Meccanismo di gestione delle eccezioni C++ è totalmente *sincrono*, il che significa che si verifichino eccezioni solo quando vengono generate.

Quando si usa la [/EHs o /EHsc](../build/reference/eh-exception-handling-model.md) opzione del compilatore, senza eccezioni di handle strutturato gestori eccezioni C++. Queste eccezioni vengono gestite solo da **catch** gestori di eccezioni strutturato o **finally** strutturati i gestori di terminazione. Per informazioni, vedere [Structured Exception Handling (C/C++)](structured-exception-handling-c-cpp.md).

Sotto il [/EHa](../build/reference/eh-exception-handling-model.md) l'opzione del compilatore, se viene generata un'eccezione C in un programma C++, può essere gestito da un gestore di eccezioni strutturate con il filtro associato o da un C++ **catch** gestore, a seconda del valore è dinamicamente più vicino al contesto dell'eccezione. Ad esempio, il seguente programma C++ genera un'eccezione C all'interno di C++ **provare** contesto:

## <a name="example---catch-a-c-exception-in-a-c-catch-block"></a>Esempio - Catch blocco genera un'eccezione C in C++

```cpp
// exceptions_Exception_Handling_Differences.cpp
// compile with: /EHa
#include <iostream>

using namespace std;
void SEHFunc( void );

int main() {
   try {
      SEHFunc();
   }
   catch( ... ) {
      cout << "Caught a C exception."<< endl;
   }
}

void SEHFunc() {
   __try {
      int x, y = 0;
      x = 5 / y;
   }
   __finally {
      cout << "In finally." << endl;
   }
}
```

```Output
In finally.
Caught a C exception.
```

## <a name="c-exception-wrapper-classes"></a>Classi wrapper di eccezione C

In un esempio semplice come quello precedente, l'eccezione C può essere rilevata solo dai puntini di sospensione (**...** ) **catch** gestore. Nessuna informazione sul tipo o la natura dell'eccezione viene comunicata al gestore. Anche se questo metodo funziona, in alcuni casi è possibile definire una trasformazione tra i modelli di gestione delle eccezioni due in modo che ogni eccezione C è associato a una classe specifica. A tale scopo, è possibile definire la classe "wrapper" di eccezione C che può essere utilizzata o da cui può essere derivata per associare un tipo di classe specifico a un'eccezione C. In questo modo, ogni eccezione C può essere gestita separatamente da una specifica C++ **catch** gestore, anziché tutti gli elementi in un singolo gestore.

La classe wrapper potrebbe avere un'interfaccia composta da alcune funzioni membro che determinano il valore dell'eccezione e che accedono alle informazioni sul contesto delle eccezioni estese fornite dal modello di eccezione C. È anche possibile definire un costruttore predefinito e un costruttore che accetta un **unsigned int** argomento (per fornire la rappresentazione di eccezione C sottostante) e un costruttore di copia bit per bit. Di seguito è riportata una possibile implementazione di una classe wrapper di eccezione C:

```cpp
// exceptions_Exception_Handling_Differences2.cpp
// compile with: /c
class SE_Exception {
private:
   SE_Exception() {}
   SE_Exception( SE_Exception& ) {}
   unsigned int nSE;
public:
   SE_Exception( unsigned int n ) : nSE( n ) {}
   ~SE_Exception() {}
   unsigned int getSeNumber() {
      return nSE;
   }
};
```

Per usare questa classe, installare una funzione di tipo traduzione di eccezione C personalizzata che viene chiamata dal meccanismo ogni volta che viene generata un'eccezione C di gestione delle eccezioni interne. All'interno della funzione di conversione, è possibile generare qualsiasi eccezione tipizzata (probabilmente un `SE_Exception` , tipo o un tipo di classe derivato `SE_Exception`) che può essere rilevata da un C++ corrispondente appropriata **catch** gestore. La funzione di conversione può eseguire semplicemente una restituzione che indica che l'eccezione non è stata gestita. Se la funzione di conversione se stesso genera un'eccezione C, [terminare](../c-runtime-library/reference/terminate-crt.md) viene chiamato.

Per specificare una funzione di conversione personalizzata, chiamare il [set_se_translator](../c-runtime-library/reference/set-se-translator.md) funzione con il nome della funzione di conversione come unico argomento. La funzione di conversione che si scrive viene chiamata una volta per ogni chiamata di funzione nello stack con **provare** blocchi. Non vi è alcuna funzione di conversione predefinita; Se non si specifica una chiamando **set_se_translator**, l'eccezione C può essere rilevata solo dai puntini di sospensione **catch** gestore.

## <a name="example---use-a-custom-translation-function"></a>Esempio: usare una funzione di conversione personalizzata

Ad esempio, il codice riportato di seguito installa una funzione di conversione personalizzata, quindi genera un'eccezione C di cui viene eseguito il wrapping nella classe `SE_Exception`:

```cpp
// exceptions_Exception_Handling_Differences3.cpp
// compile with: /EHa
#include <stdio.h>
#include <eh.h>
#include <windows.h>

class SE_Exception {
private:
   SE_Exception() {}
   unsigned int nSE;
public:
   SE_Exception( SE_Exception& e) : nSE(e.nSE) {}
   SE_Exception(unsigned int n) : nSE(n) {}
   ~SE_Exception() {}
   unsigned int getSeNumber() { return nSE; }
};

void SEFunc() {
    __try {
        int x, y = 0;
        x = 5 / y;
    }
    __finally {
        printf_s( "In finally\n" );
    }
}

void trans_func( unsigned int u, _EXCEPTION_POINTERS* pExp ) {
    printf_s( "In trans_func.\n" );
    throw SE_Exception( u );
}

int main() {
    _set_se_translator( trans_func );
    try {
        SEFunc();
    }
    catch( SE_Exception e ) {
        printf_s( "Caught a __try exception with SE_Exception.\n" );
        printf_s( "nSE = 0x%x\n", e.getSeNumber() );
    }
}
```

```Output
In trans_func.
In finally
Caught a __try exception with SE_Exception.
nSE = 0xc0000094
```

## <a name="see-also"></a>Vedere anche

[Combinazione di eccezioni di C++ e C (strutturato)](../cpp/mixing-c-structured-and-cpp-exceptions.md)
