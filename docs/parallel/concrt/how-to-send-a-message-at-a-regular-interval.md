---
title: "Procedura: Inviare un messaggio a intervalli regolari | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "timer (classe), esempio"
  - "invio di messaggi a intervalli regolari [Runtime di concorrenza]"
ms.assetid: 4b60ea6c-97c8-4d69-9f7b-ad79f3548026
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Procedura: Inviare un messaggio a intervalli regolari
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo esempio viene illustrato come utilizzare la concorrenza::[classe timer](../../parallel/concrt/reference/timer-class.md) per inviare un messaggio a intervalli regolari.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene utilizzato un `timer` oggetto per segnalare lo stato durante un'operazione di lunga durata. Collegamenti in questo esempio il `timer` dell'oggetto a un [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) oggetto. Il `call` oggetto visualizza un indicatore di stato nella console a intervalli regolari. Il [concurrency::timer::start](../Topic/timer::start%20Method.md) (metodo), il timer viene eseguito in un contesto separato. Il `perform_lengthy_operation` chiamate di funzione di [Concurrency:: Wait](../Topic/wait%20Function.md) funzione nel contesto principale per simulare un'operazione richiede molto tempo.  
  
 [!code-cpp[concrt-report-progress#1](../../parallel/concrt/codesnippet/CPP/how-to-send-a-message-at-a-regular-interval_1.cpp)]  
  
 Questo esempio produce il seguente output di esempio:  
  
```Output  
Performing a lengthy operation..........done.  
```  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `report-progress.cpp` quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc report-progress. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)
