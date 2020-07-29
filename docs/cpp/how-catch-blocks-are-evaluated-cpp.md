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
ms.openlocfilehash: 21d68b25fa3695a9b5637dcace081424f99911d8
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87188102"
---
# <a name="how-catch-blocks-are-evaluated-c"></a>Modalità di valutazione dei blocchi catch (C++)

C++ consente di generare eccezioni di qualsiasi tipo, sebbene in genere sia consigliabile generare i tipi derivati da std::exception. Un'eccezione C++ può essere rilevata da un **`catch`** gestore che specifica lo stesso tipo dell'eccezione generata o da un gestore che può intercettare qualsiasi tipo di eccezione.

Se il tipo di eccezione generata è una classe, che dispone inoltre di una o di più classi base, tale eccezione può essere rilevata da gestori che accettano le classi base del tipo dell'eccezione oppure dai riferimenti alle basi del tipo dell'eccezione. Si noti che quando un'eccezione viene rilevata da un riferimento, viene associata all'oggetto effettivo dell'eccezione generata. In caso contrario, è una copia (molto simile a un argomento di una funzione).

Quando viene generata un'eccezione, è possibile che venga rilevata dai tipi di **`catch`** gestori seguenti:

- Gestore che accetta qualsiasi tipo (mediante la sintassi costituita dai puntini di sospensione).

- Gestore che accetta lo stesso tipo dell'oggetto eccezione. Poiché si tratta di una copia **`const`** , **`volatile`** i modificatori e vengono ignorati.

- Gestore che accetta un riferimento allo stesso tipo dell'oggetto eccezione.

- Gestore che accetta un riferimento a un **`const`** form o **`volatile`** dello stesso tipo dell'oggetto eccezione.

- Gestore che accetta una classe base dello stesso tipo dell'oggetto eccezione. Poiché si tratta di una copia **`const`** , **`volatile`** i modificatori e vengono ignorati. Il **`catch`** gestore per una classe base non deve precedere il **`catch`** gestore per la classe derivata.

- Gestore che accetta un riferimento a una classe base dello stesso tipo dell'oggetto eccezione.

- Gestore che accetta un riferimento a un **`const`** form o **`volatile`** di una classe di base dello stesso tipo dell'oggetto eccezione.

- Gestore che accetta un puntatore a un elemento in cui un oggetto del puntatore generato può essere convertito tramite le regole di conversione standard del puntatore.

L'ordine in cui **`catch`** vengono visualizzati i gestori è significativo, perché i gestori per un determinato **`try`** blocco vengono esaminati in ordine di visualizzazione. Ad esempio, l'inserimento del gestore per una classe base prima del gestore per una classe derivata è un errore. Una volta **`catch`** individuato un gestore corrispondente, i gestori successivi non vengono esaminati. Di conseguenza, un gestore dei puntini **`catch`** di sospensione deve essere l'ultimo gestore per il relativo **`try`** blocco. Ad esempio:

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

In questo esempio, il gestore dei puntini di sospensione **`catch`** è l'unico gestore esaminato.

## <a name="see-also"></a>Vedere anche

[Procedure consigliate per C++ moderne per le eccezioni e la gestione degli errori](../cpp/errors-and-exception-handling-modern-cpp.md)
