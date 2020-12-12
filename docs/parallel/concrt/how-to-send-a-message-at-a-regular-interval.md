---
description: 'Altre informazioni su: procedura: inviare un messaggio a intervalli regolari'
title: 'Procedura: inviare un messaggio a intervalli regolari'
ms.date: 11/04/2016
helpviewer_keywords:
- timer class, example
- sending messages at regular intervals [Concurrency Runtime]
ms.assetid: 4b60ea6c-97c8-4d69-9f7b-ad79f3548026
ms.openlocfilehash: f65226d8101ddbadaee97a16f63512b9c8dcb41e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97197284"
---
# <a name="how-to-send-a-message-at-a-regular-interval"></a>Procedura: inviare un messaggio a intervalli regolari

Questo esempio illustra come usare la classe Concurrency::[timer](../../parallel/concrt/reference/timer-class.md) per inviare un messaggio a intervalli regolari.

## <a name="example"></a>Esempio

Nell'esempio seguente viene usato un `timer` oggetto per segnalare lo stato di avanzamento durante un'operazione di lunga durata. In questo esempio l' `timer` oggetto viene collegato a un oggetto [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) . L' `call` oggetto stampa un indicatore di stato nella console a intervalli regolari. Il metodo [Concurrency:: timer:: Start](reference/timer-class.md#start) esegue il timer in un contesto separato. La `perform_lengthy_operation` funzione chiama la funzione [Concurrency:: wait](reference/concurrency-namespace-functions.md#wait) sul contesto principale per simulare un'operazione che richiede molto tempo.

[!code-cpp[concrt-report-progress#1](../../parallel/concrt/codesnippet/cpp/how-to-send-a-message-at-a-regular-interval_1.cpp)]

Questo esempio produce l'output di esempio seguente:

```Output
Performing a lengthy operation..........done.
```

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `report-progress.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **cl.exe/EHsc report-progress. cpp**

## <a name="see-also"></a>Vedi anche

[libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio del messaggio](../../parallel/concrt/message-passing-functions.md)
