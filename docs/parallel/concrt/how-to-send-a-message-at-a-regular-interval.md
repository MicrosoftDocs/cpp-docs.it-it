---
title: 'Procedura: Inviare un messaggio a intervalli regolari'
ms.date: 11/04/2016
helpviewer_keywords:
- timer class, example
- sending messages at regular intervals [Concurrency Runtime]
ms.assetid: 4b60ea6c-97c8-4d69-9f7b-ad79f3548026
ms.openlocfilehash: 05777b0c00f587f588a50733d5113d9a7362d247
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50549617"
---
# <a name="how-to-send-a-message-at-a-regular-interval"></a>Procedura: Inviare un messaggio a intervalli regolari

Questo esempio illustra come usare la concorrenza::/[classe timer](../../parallel/concrt/reference/timer-class.md) per inviare un messaggio a intervalli regolari.

## <a name="example"></a>Esempio

L'esempio seguente usa un `timer` oggetto per segnalare lo stato durante un'operazione di lunga durata. Collegamenti in questo esempio il `timer` dell'oggetto a un [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) oggetto. Il `call` oggetto visualizza un indicatore di stato nella console a intervalli regolari. Il [concurrency::timer::start](reference/timer-class.md#start) metodo il timer viene eseguito in un contesto separato. Il `perform_lengthy_operation` chiamate di funzione il [Concurrency](reference/concurrency-namespace-functions.md#wait) funzione nel contesto principale per simulare un'operazione impegnativa.

[!code-cpp[concrt-report-progress#1](../../parallel/concrt/codesnippet/cpp/how-to-send-a-message-at-a-regular-interval_1.cpp)]

Questo esempio produce l'output di esempio seguente:

```Output
Performing a lengthy operation..........done.
```

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `report-progress.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc report-progress. cpp**

## <a name="see-also"></a>Vedere anche

[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)
