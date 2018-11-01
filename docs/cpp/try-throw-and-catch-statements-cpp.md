---
title: Istruzioni try, throw e catch (C++)
ms.date: 11/04/2016
f1_keywords:
- catch_cpp
- try_cpp
- throw_cpp
helpviewer_keywords:
- catch keyword [C++]
- keywords [C++], exception handling
- C++ exception handling, statement syntax
- try-catch keyword [C++], about try-catch exception handling
- throw keyword [C++]
- try-catch keyword [C++]
- try-catch keyword [C++], exception handling
- throwing exceptions [C++], throw keyword
- try-catch keyword [C++], throw keyword [C++]s
- throwing exceptions [C++], implementing C++ exception handling
- throwing exceptions [C++]
- throw keyword [C++], throw() vs. throw(...)
ms.assetid: 15e6a87b-b8a5-4032-a7ef-946c644ba12a
ms.openlocfilehash: 81d954b2e757c692bd80604a3f85ffb8c79c4f85
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50455731"
---
# <a name="try-throw-and-catch-statements-c"></a>Istruzioni try, throw e catch (C++)

Per implementare la gestione delle eccezioni in C++, si utilizza **provare**, **throw**, e **catch** espressioni.

In primo luogo, utilizzare un **provare** blocco per racchiudere una o più istruzioni che potrebbero generare un'eccezione.

Un **generano** espressione segnala che una condizione eccezionale, spesso un errore: si è verificata in un **provare** blocco. È possibile usare un oggetto di qualsiasi tipo come operando di un **throw** espressione. Questo oggetto viene in genere utilizzato per comunicare informazioni sull'errore. Nella maggior parte dei casi, è consigliabile usare la [std:: Exception](../standard-library/exception-class.md) classe o una delle classi derivate definite nella libreria standard. Se una di queste classi non è appropriata, è consigliabile derivare una propria classe di eccezione da `std::exception`.

Per gestire le eccezioni che possono essere generate, implementare uno o più **intercettare** blocchi immediatamente dopo una **provare** blocco. Ciascuna **catch** blocco specifica il tipo di eccezione che può gestire.

Questo esempio viene illustrato un **provare** blocco e i relativi gestori. Si supponga che `GetNetworkResource()` acquisisca dati su una connessione di rete e che i due tipi di eccezione siano classi definite dall'utente che derivano da `std::exception`. Si noti che le eccezioni vengono intercettate dal **const** fa riferimento nel **catch** istruzione. È consigliabile generate eccezioni per valore e intercettarle per riferimento const.

## <a name="example"></a>Esempio

```cpp
MyData md;
try {
   // Code that could throw an exception
   md = GetNetworkResource();
}
catch (const networkIOException& e) {
   // Code that executes when an exception of type
   // networkIOException is thrown in the try block
   // ...
   // Log error message in the exception object
   cerr << e.what();
}
catch (const myDataFormatException& e) {
   // Code that handles another exception type
   // ...
   cerr << e.what();
}

// The following syntax shows a throw expression
MyData GetNetworkResource()
{
   // ...
   if (IOSuccess == false)
      throw networkIOException("Unable to connect");
   // ...
   if (readError)
      throw myDataFormatException("Format error");
   // ...
}
```

## <a name="remarks"></a>Note

Il codice dopo il **provare** clausola è la sezione protetta di codice. Il **throw** espressione *genera un'eccezione*, vale a dire, genera, ovvero un'eccezione. Il blocco di codice dopo il **catch** clausola è il gestore di eccezioni. Questo è il gestore che *intercetta* l'eccezione generata se i tipi nel **throw** e **catch** espressioni sono compatibili. Per un elenco di regole che governano corrispondenza dei tipi nei **intercettare** blocchi, vedere [vengono valutati come i blocchi Catch](../cpp/how-catch-blocks-are-evaluated-cpp.md). Se il **intercettare** istruzione specifica i puntini di sospensione (...) anziché un tipo, il **catch** blocco gestisce ogni tipo di eccezione. Quando esegue la compilazione con il [/EHa](../build/reference/eh-exception-handling-model.md) opzione, questi possono includere le eccezioni strutturate C e le eccezioni asincrone generate dal sistema o generati dall'applicazione, ad esempio le violazioni di divisione per zero, a virgola mobile e protezione, della memoria . In quanto **intercettare** blocchi vengono elaborati nell'ordine del programma per trovare un tipo corrispondente, un gestore puntini di sospensione deve essere l'ultimo gestore per la proprietà associata **provare** blocco. Utilizzare con cautela `catch(...)`. Non consentire a un programma di proseguire a meno che il blocco catch non sia in grado di gestire l'eccezione specifica intercettata. Un blocco `catch(...)` viene in genere utilizzato per registrare gli errori ed eseguire una pulizia speciale prima che l'esecuzione del programma venga interrotta.

Oggetto **throw** espressione che non dispone di alcun operando genera nuovamente l'eccezione attualmente gestita. È consigliabile utilizzare questo formato quando si rigenera l'eccezione, perché mantiene le informazioni sul tipo polimorfico dell'eccezione generale. Tale espressione deve essere utilizzata solo un **intercettare** gestore o in una funzione che viene chiamata da un **catch** gestore. L'oggetto eccezione generato nuovamente è l'oggetto eccezione originale, non una copia.

```cpp
try {
   throw CSomeOtherException();
}
catch(...) {
   // Catch all exceptions - dangerous!!!
   // Respond (perhaps only partially) to the exception, then
   // re-throw to pass the exception to some other handler
   // ...
   throw;
}
```

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Eccezioni C++ non gestite](../cpp/unhandled-cpp-exceptions.md)<br/>
[__uncaught_exception](../c-runtime-library/reference/uncaught-exception.md)