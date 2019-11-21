---
title: Modalità di valutazione dei blocchi catch (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- try-catch keyword [C++], catchable types
- catch keyword [C++], types of catch handlers
- C++ exception handling, catch handlers
- exception handling, catching and deleting exceptions
- types [C++], exception handling
ms.assetid: 202dbf07-8ace-4b3b-b3ae-4b45c275e0b4
ms.openlocfilehash: 027dc87923a588ea891dbf6dd835e2baba75a1cb
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74245849"
---
# <a name="how-catch-blocks-are-evaluated-c"></a>Modalità di valutazione dei blocchi catch (C++)

C++ consente di generare eccezioni di qualsiasi tipo, sebbene in genere sia consigliabile generare i tipi derivati da std::exception. A C++ exception can be caught by a **catch** handler that specifies the same type as the thrown exception, or by a handler that can catch any type of exception.

Se il tipo di eccezione generata è una classe, che dispone inoltre di una o di più classi base, tale eccezione può essere rilevata da gestori che accettano le classi base del tipo dell'eccezione oppure dai riferimenti alle basi del tipo dell'eccezione. Si noti che quando un'eccezione viene rilevata da un riferimento, viene associata all'oggetto effettivo dell'eccezione generata. In caso contrario, è una copia (molto simile a un argomento di una funzione).

When an exception is thrown, it may be caught by the following types of **catch** handlers:

- Gestore che accetta qualsiasi tipo (mediante la sintassi costituita dai puntini di sospensione).

- A handler that accepts the same type as the exception object; because it is a copy, **const** and **volatile** modifiers are ignored.

- Gestore che accetta un riferimento allo stesso tipo dell'oggetto eccezione.

- A handler that accepts a reference to a **const** or **volatile** form of the same type as the exception object.

- A handler that accepts a base class of the same type as the exception object; since it is a copy, **const** and **volatile** modifiers are ignored. The **catch** handler for a base class must not precede the **catch** handler for the derived class.

- Gestore che accetta un riferimento a una classe base dello stesso tipo dell'oggetto eccezione.

- A handler that accepts a reference to a **const** or **volatile** form of a base class of the same type as the exception object.

- Gestore che accetta un puntatore a un elemento in cui un oggetto del puntatore generato può essere convertito tramite le regole di conversione standard del puntatore.

The order in which **catch** handlers appear is significant, because handlers for a given **try** block are examined in order of their appearance. Ad esempio, l'inserimento del gestore per una classe base prima del gestore per una classe derivata è un errore. After a matching **catch** handler is found, subsequent handlers are not examined. As a result, an ellipsis **catch** handler must be the last handler for its **try** block. Esempio:

```cpp
// ...
try
{
    // ...
}
catch( ... )
{
    // Handle exception here.
}
// Error: the next two handlers are never examined.
catch( const char * str )
{
    cout << "Caught exception: " << str << endl;
}
catch( CExcptClass E )
{
    // Handle CExcptClass exception here.
}
```

In this example, the ellipsis **catch** handler is the only handler that is examined.

## <a name="see-also"></a>Vedere anche

[Modern C++ best practices for exceptions and error handling](../cpp/errors-and-exception-handling-modern-cpp.md)