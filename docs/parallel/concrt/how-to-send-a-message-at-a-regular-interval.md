---
title: 'Procedura: inviare un messaggio a intervalli regolari | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- timer class, example
- sending messages at regular intervals [Concurrency Runtime]
ms.assetid: 4b60ea6c-97c8-4d69-9f7b-ad79f3548026
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6903a7ec6b833f7591afe79dc91d453b3905cc79
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="how-to-send-a-message-at-a-regular-interval"></a>Procedura: Inviare un messaggio a intervalli regolari
In questo esempio viene illustrato come utilizzare la concorrenza::[classe timer](../../parallel/concrt/reference/timer-class.md) per inviare un messaggio a intervalli regolari.  
  
## <a name="example"></a>Esempio  

 Nell'esempio seguente viene utilizzato un `timer` oggetto per segnalare lo stato durante un'operazione di lunga durata. Collegamenti in questo esempio il `timer` l'oggetto in un [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) oggetto. Il `call` oggetto visualizza un indicatore di stato nella console a intervalli regolari. Il [concurrency::timer::start](reference/timer-class.md#start) metodo il timer viene eseguito in un contesto separato. Il `perform_lengthy_operation` chiamate di funzione di [Concurrency:: Wait](reference/concurrency-namespace-functions.md#wait) funzione nel contesto principale per simulare un'operazione richiede molto tempo.  

  
 [!code-cpp[concrt-report-progress#1](../../parallel/concrt/codesnippet/cpp/how-to-send-a-message-at-a-regular-interval_1.cpp)]  
  
 Questo esempio produce il seguente output di esempio:  
  
```Output  
Performing a lengthy operation..........done.  
```  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `report-progress.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc report-progress. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)
