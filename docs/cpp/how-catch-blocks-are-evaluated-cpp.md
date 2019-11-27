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

C++ consente di generare eccezioni di qualsiasi tipo, sebbene in genere sia consigliabile generare i tipi derivati da std::exception. Un' C++ eccezione può essere rilevata da un gestore **catch** che specifica lo stesso tipo dell'eccezione generata o da un gestore che può intercettare qualsiasi tipo di eccezione.

Se il tipo di eccezione generata è una classe, che dispone inoltre di una o di più classi base, tale eccezione può essere rilevata da gestori che accettano le classi base del tipo dell'eccezione oppure dai riferimenti alle basi del tipo dell'eccezione. Si noti che quando un'eccezione viene rilevata da un riferimento, viene associata all'oggetto effettivo dell'eccezione generata. In caso contrario, è una copia (molto simile a un argomento di una funzione).

Quando viene generata un'eccezione, è possibile che venga rilevata dai seguenti tipi di gestori **catch** :

- Gestore che accetta qualsiasi tipo (mediante la sintassi costituita dai puntini di sospensione).

- Gestore che accetta lo stesso tipo dell'oggetto eccezione. Poiché si tratta di una copia, i modificatori **const** e **volatile** vengono ignorati.

- Gestore che accetta un riferimento allo stesso tipo dell'oggetto eccezione.

- Gestore che accetta un riferimento a un form **const** o **volatile** dello stesso tipo dell'oggetto eccezione.

- Gestore che accetta una classe base dello stesso tipo dell'oggetto eccezione. Poiché si tratta di una copia, i modificatori **const** e **volatile** vengono ignorati. Il gestore **catch** per una classe base non deve precedere il gestore **catch** per la classe derivata.

- Gestore che accetta un riferimento a una classe base dello stesso tipo dell'oggetto eccezione.

- Gestore che accetta un riferimento a un form **const** o **volatile** di una classe base dello stesso tipo dell'oggetto eccezione.

- Gestore che accetta un puntatore a un elemento in cui un oggetto del puntatore generato può essere convertito tramite le regole di conversione standard del puntatore.

L'ordine in cui vengono visualizzati i gestori **catch** è significativo, perché i gestori per un determinato blocco **try** vengono esaminati in ordine di visualizzazione. Ad esempio, l'inserimento del gestore per una classe base prima del gestore per una classe derivata è un errore. Quando viene trovato un gestore **catch** corrispondente, i gestori successivi non vengono esaminati. Di conseguenza, un gestore **catch** con i puntini di sospensione deve essere l'ultimo gestore per il relativo blocco **try** . Ad esempio:

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

In questo esempio, il gestore **catch** con i puntini di sospensione è l'unico gestore esaminato.

## <a name="see-also"></a>Vedere anche

[Procedure C++ consigliate moderne per le eccezioni e la gestione degli errori](../cpp/errors-and-exception-handling-modern-cpp.md)