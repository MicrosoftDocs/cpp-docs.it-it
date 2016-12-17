---
title: "Procedura: Implementare vari modelli producer-consumer | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modelli producer-consumer, implementazione [Runtime di concorrenza]"
  - "implementazione di modelli producer-consumer [Runtime di concorrenza]"
ms.assetid: 75f2c7cc-5399-49ea-98eb-847fe6747169
caps.latest.revision: 17
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: Implementare vari modelli producer-consumer
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene descritto come implementare il modello producer\-consumer nell'applicazione.  In questo modello il *producer* invia i messaggi a un blocco dei messaggi e il *consumer* legge i messaggi da tale blocco.  
  
 Nell'argomento vengono illustrati due scenari.  Nel primo scenario il consumer deve ricevere ogni messaggio inviato dal producer.  Nel secondo scenario il consumer esegue periodicamente il polling dei dati e pertanto non deve ricevere ogni messaggio.  
  
 In entrambi gli esempi di questo argomento vengono utilizzati gli agenti, i blocchi dei messaggi e le funzioni di passaggio dei messaggi per trasmettere i messaggi dal producer al consumer.  L'agente del producer utilizza la funzione [concurrency::send](../Topic/send%20Function.md) per scrivere i messaggi in un oggetto [concurrency::ITarget](../../parallel/concrt/reference/itarget-class.md).  L'agente del consumer utilizza la funzione [concurrency::receive](../Topic/receive%20Function.md) per leggere i messaggi da un oggetto [concurrency::ISource](../../parallel/concrt/reference/isource-class.md).  Entrambi gli agenti contengono un valore sentinel per coordinare la fine dell'elaborazione.  
  
 Per ulteriori informazioni sugli agenti asincroni, vedere [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md).  Per ulteriori informazioni sui blocchi dei messaggi e sulle funzioni di passaggio dei messaggi, vedere [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md) e [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md).  
  
## Esempio  
 In questo esempio l'agente del producer invia una serie di numeri all'agente del consumer.  Il consumer riceve ognuno di questi numeri e ne calcola la media.  L'applicazione scrive la media nella console.  
  
 In questo esempio viene utilizzato un oggetto [concurrency::unbounded\_buffer](../Topic/unbounded_buffer%20Class.md) per consentire al producer di accodare i messaggi.  La classe `unbounded_buffer` implementa `ITarget` e `ISource` in modo tale che il producer e il consumer possano inviare e ricevere i messaggi da un buffer condiviso.  Le funzioni `send` e `receive` coordinano l'attività di propagazione dei dati dal producer al consumer.  
  
 [!code-cpp[concrt-producer-consumer-average#1](../../parallel/concrt/codesnippet/CPP/how-to-implement-various-producer-consumer-patterns_1.cpp)]  
  
 Questo esempio produce l'output che segue.  
  
  **The average is 50.**   
## Esempio  
 In questo esempio l'agente del producer invia una serie di quotazioni di Bora all'agente del consumer.  L'agente del consumer legge periodicamente la quotazione corrente e la visualizza sulla console.  
  
 Questo esempio è simile al precedente, ad eccezione del fatto che viene utilizzato l'oggetto [concurrency::overwrite\_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) per consentire al producer di condividere un messaggio con il consumer.  Come nell'esempio precedente, la classe `overwrite_buffer` implementa `ITarget` e `ISource` in modo tale che il producer e il consumer possano agire su un buffer dei messaggi condiviso.  
  
 [!code-cpp[concrt-producer-consumer-quotes#1](../../parallel/concrt/codesnippet/CPP/how-to-implement-various-producer-consumer-patterns_2.cpp)]  
  
 Questo esempio produce l'output seguente:  
  
  **Current quote is 24.44.**  
**Current quote is 24.44.**  
**Current quote is 24.65.**  
**Current quote is 24.99.**  
**Current quote is 23.76.**  
**Current quote is 22.30.**  
**Current quote is 25.89.** Diversamente da un oggetto `unbounded_buffer`, la funzione `receive` non rimuove il messaggio dall'oggetto `overwrite_buffer`.  Se il consumer legge più volte dal buffer dei messaggi prima che il producer sovrascriva il messaggio, il destinatario otterrà ogni volta lo stesso messaggio.  
  
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `producer-consumer.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc producer\-consumer.cpp**  
  
## Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)