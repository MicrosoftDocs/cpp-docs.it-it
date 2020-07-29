---
title: Gestire le eccezioni strutturate in C++
description: Come gestire le eccezioni strutturate usando il modello di gestione delle eccezioni C++.
ms.date: 09/19/2019
helpviewer_keywords:
- structured exception handling [C++], vs. C++ exception handling
- structured exception handling [C++], vs. unstructured
- exceptions [C++], wrapper class
- C++ exception handling [C++], vs. structured exception handling
- wrapper classes [C++], C exception
ms.assetid: f21d1944-4810-468e-b02a-9f77da4138c9
ms.openlocfilehash: 0f92bbe64db028ec6a7fd6ae2cc217c707d3e2c5
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221588"
---
# <a name="handle-structured-exceptions-in-c"></a>Gestire le eccezioni strutturate in C++

La differenza principale tra la gestione delle eccezioni strutturate (SEH) e la gestione delle eccezioni C++ è che il modello di gestione delle eccezioni C++ gestisce i tipi, mentre il modello di gestione delle eccezioni strutturate C gestisce le eccezioni di un tipo. in particolare, **`unsigned int`** . In altre parole, le eccezioni C sono identificate da un intero senza segno, mentre le eccezioni C++ sono identificate dal tipo di dati. Quando viene generata un'eccezione strutturata in C, ciascun gestore possibile esegue un filtro che esamina il contesto di eccezione C e determina se accettare l'eccezione, passarla a un altro gestore o ignorarla. Quando viene generata un'eccezione in C++, può essere di qualsiasi tipo.

Una seconda differenza è che il modello di gestione delle eccezioni strutturate C viene definito *asincrono*, in quanto le eccezioni si verificano secondarie al normale flusso di controllo. Il meccanismo di gestione delle eccezioni C++ è completamente *sincrono*, il che significa che le eccezioni si verificano solo quando vengono generate.

Quando si usa l'opzione del compilatore [/EHS o/EHsc](../build/reference/eh-exception-handling-model.md) , nessun gestore di eccezioni C++ gestisce le eccezioni strutturate. Queste eccezioni vengono gestite solo da **`__except`** gestori di eccezioni strutturate o da **`__finally`** gestori di terminazione strutturati. Per informazioni, vedere [gestione delle eccezioni strutturata (C/C++)](structured-exception-handling-c-cpp.md).

Con l'opzione del compilatore [/EHA](../build/reference/eh-exception-handling-model.md) , se viene generata un'eccezione C in un programma C++, può essere gestita da un gestore di eccezioni strutturato con il filtro associato o da un **`catch`** gestore C++, a seconda di quale sia il contesto di eccezione in modo dinamico. Ad esempio, questo programma C++ di esempio genera un'eccezione C all'interno di un **`try`** contesto c++:

## <a name="example---catch-a-c-exception-in-a-c-catch-block"></a>Esempio: intercettare un'eccezione C in un blocco catch C++

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

In un esempio semplice come quello precedente, l'eccezione C può essere rilevata solo dai puntini di sospensione (**...**) **`catch`** gestore. Nessuna informazione sul tipo o la natura dell'eccezione viene comunicata al gestore. Sebbene questo metodo funzioni, in alcuni casi potrebbe essere necessario definire una trasformazione tra i due modelli di gestione delle eccezioni in modo che ogni eccezione C sia associata a una classe specifica. Per trasformare una classe, è possibile definire una classe "wrapper" dell'eccezione C, che può essere utilizzata o derivata da per attribuire un tipo di classe specifico a un'eccezione C. In questo modo, ogni eccezione C può essere gestita separatamente da uno specifico **`catch`** gestore C++, anziché da tutti in un singolo gestore.

La classe wrapper potrebbe avere un'interfaccia composta da alcune funzioni membro che determinano il valore dell'eccezione e che accedono alle informazioni sul contesto delle eccezioni estese fornite dal modello di eccezione C. Potrebbe inoltre essere necessario definire un costruttore predefinito e un costruttore che accetti un **`unsigned int`** argomento (per fornire la rappresentazione di eccezione C sottostante) e un costruttore di copia bit per bit. Di seguito è illustrata una possibile implementazione di una classe wrapper di eccezione C:

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

Per utilizzare questa classe, installare una funzione di conversione delle eccezioni C personalizzata che viene chiamata dal meccanismo interno di gestione delle eccezioni ogni volta che viene generata un'eccezione C. All'interno della funzione Translation è possibile generare qualsiasi eccezione tipizzata (forse un `SE_Exception` tipo o un tipo di classe derivato da `SE_Exception` ) che può essere rilevata da un gestore C++ corrispondente appropriato **`catch`** . La funzione Translation può invece restituire, che indica che l'eccezione non è stata gestita. Se la funzione di conversione genera un'eccezione C, viene chiamato il metodo [Terminate](../c-runtime-library/reference/terminate-crt.md) .

Per specificare una funzione di conversione personalizzata, chiamare la funzione [_set_se_translator](../c-runtime-library/reference/set-se-translator.md) con il nome della funzione di conversione come argomento singolo. La funzione di conversione che si scrive viene chiamata una volta per ogni chiamata di funzione nello stack con **`try`** blocchi. Non esiste alcuna funzione di conversione predefinita. Se non si specifica una chiamando **_set_se_translator**, l'eccezione C può essere rilevata solo da un gestore di puntini di sospensione **`catch`** .

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

[Combinazione di eccezioni C (strutturate) e C++](../cpp/mixing-c-structured-and-cpp-exceptions.md)
