---
description: 'Altre informazioni su: istruzioni try, throw e catch (C++)'
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
ms.openlocfilehash: 78dc76a9db5a4b1b6b8c23d1807b683d0dbae969
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97186428"
---
# <a name="try-throw-and-catch-statements-c"></a>Istruzioni try, throw e catch (C++)

Per implementare la gestione delle eccezioni in C++, si utilizzano **`try`** **`throw`** le **`catch`** espressioni, e.

Utilizzare innanzitutto un **`try`** blocco per racchiudere una o più istruzioni che potrebbero generare un'eccezione.

Un' **`throw`** espressione segnala che si è verificata una condizione eccezionale, spesso un errore, in un **`try`** blocco. È possibile utilizzare un oggetto di qualsiasi tipo come operando di un' **`throw`** espressione. Questo oggetto viene in genere utilizzato per comunicare informazioni sull'errore. Nella maggior parte dei casi, è consigliabile usare la classe [std:: Exception](../standard-library/exception-class.md) o una delle classi derivate definite nella libreria standard. Se una di queste classi non è appropriata, è consigliabile derivare una propria classe di eccezione da `std::exception`.

Per gestire le eccezioni che possono essere generate, implementare uno o più **`catch`** blocchi immediatamente dopo un **`try`** blocco. Ogni **`catch`** blocco specifica il tipo di eccezione che può gestire.

Questo esempio mostra un **`try`** blocco e i relativi gestori. Si supponga che `GetNetworkResource()` acquisisca dati su una connessione di rete e che i due tipi di eccezione siano classi definite dall'utente che derivano da `std::exception`. Si noti che le eccezioni vengono rilevate per **`const`** riferimento nell' **`catch`** istruzione. È consigliabile generate eccezioni per valore e intercettarle per riferimento const.

## <a name="example"></a>Esempio

```cpp
MyData md;
try {
   // Code that could throw an exception
   md = GetNetworkResource();
}
catch (const networkIOException& e) {
   // Code that executes when an exception of type
   // networkIOException is thrown in the try block
   // ...
   // Log error message in the exception object
   cerr << e.what();
}
catch (const myDataFormatException& e) {
   // Code that handles another exception type
   // ...
   cerr << e.what();
}

// The following syntax shows a throw expression
MyData GetNetworkResource()
{
   // ...
   if (IOSuccess == false)
      throw networkIOException("Unable to connect");
   // ...
   if (readError)
      throw myDataFormatException("Format error");
   // ...
}
```

## <a name="remarks"></a>Commenti

Il codice dopo la **`try`** clausola è la sezione protetta del codice. L' **`throw`** espressione *genera*, ovvero genera, un'eccezione. Il blocco di codice dopo la **`catch`** clausola è il gestore di eccezioni. Si tratta del gestore che *rileva* l'eccezione generata se i tipi nelle **`throw`** **`catch`** espressioni e sono compatibili. Per un elenco di regole che regolano la corrispondenza dei tipi in **`catch`** blocchi, vedere [come vengono valutati i blocchi catch](../cpp/how-catch-blocks-are-evaluated-cpp.md). Se l' **`catch`** istruzione specifica i puntini di sospensione (...) anziché un tipo, il **`catch`** blocco gestisce tutti i tipi di eccezione. Quando si esegue la compilazione con l'opzione [/EHA](../build/reference/eh-exception-handling-model.md) , possono essere incluse le eccezioni strutturate C e le eccezioni asincrone generate dal sistema o dall'applicazione, ad esempio la protezione della memoria, la divisione per zero e le violazioni a virgola mobile. Poiché i **`catch`** blocchi vengono elaborati nell'ordine del programma per trovare un tipo corrispondente, un gestore di puntini di sospensione deve essere l'ultimo gestore per il **`try`** blocco associato. Utilizzare con cautela `catch(...)`. Non consentire a un programma di proseguire a meno che il blocco catch non sia in grado di gestire l'eccezione specifica intercettata. Un blocco `catch(...)` viene in genere utilizzato per registrare gli errori ed eseguire una pulizia speciale prima che l'esecuzione del programma venga interrotta.

Un' **`throw`** espressione priva di operando genera nuovamente l'eccezione attualmente gestita. È consigliabile utilizzare questo formato quando si rigenera l'eccezione, perché mantiene le informazioni sul tipo polimorfico dell'eccezione generale. Tale espressione deve essere utilizzata solo in un **`catch`** gestore o in una funzione chiamata da un **`catch`** gestore. L'oggetto eccezione generato nuovamente è l'oggetto eccezione originale, non una copia.

```cpp
try {
   throw CSomeOtherException();
}
catch(...) {
   // Catch all exceptions - dangerous!!!
   // Respond (perhaps only partially) to the exception, then
   // re-throw to pass the exception to some other handler
   // ...
   throw;
}
```

## <a name="see-also"></a>Vedi anche

[Procedure consigliate per C++ moderne per le eccezioni e la gestione degli errori](../cpp/errors-and-exception-handling-modern-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Eccezioni C++ non gestite](../cpp/unhandled-cpp-exceptions.md)<br/>
[__uncaught_exception](../c-runtime-library/reference/uncaught-exception.md)
