---
title: "Funzioni di passaggio dei messaggi | Microsoft Docs"
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
  - "funzioni di passaggio dei messaggi"
ms.assetid: 42477c9e-a8a6-4dc4-a98e-93c6dc8c4dd0
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# Funzioni di passaggio dei messaggi
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La libreria di agenti asincroni fornisce diverse funzioni che consentono di passare i messaggi tra i componenti.  
  
 Queste funzioni di passaggio dei messaggi vengono utilizzate con vari tipi di blocco dei messaggi.  Per ulteriori informazioni sui tipi di blocco dei messaggi definiti dal runtime di concorrenza, vedere [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).  
  
##  <a name="top"></a> Sezioni  
 In questo argomento vengono descritte le funzioni di passaggio dei messaggi seguenti:  
  
-   [send e asend](#send)  
  
-   [receive e try\_receive](#receive)  
  
-   [Esempi](#examples)  
  
##  <a name="send"></a> send e asend  
 La funzione [concurrency::send](../Topic/send%20Function.md) invia un messaggio alla destinazione specificata in modo sincrono, mentre la funzione [concurrency::asend](../Topic/asend%20Function.md) invia un messaggio alla destinazione specificata in modo asincrono.  Entrambe le funzioni `send` e `asend` attendono finché la destinazione non indica l'accettazione o il rifiuto del messaggio.  
  
 La funzione di `send` attende finché la destinazione non accetta o rifiuta il messaggio prima di restituire un valore.  La funzione `send` restituisce `true` se il messaggio è stato recapito; in caso contrario, `false`.  Poiché la funzione `send` viene utilizzata in modo sincrono, la funzione `send` attende la ricezione del messaggio da parte della destinazione prima di restituire un valore.  
  
 Al contrario, la funzione `asend` non attende l'accettazione o il rifiuto del messaggio da parte della destinazione prima di restituire un valore.  La funzione `asend` restituisce invece `true` se la destinazione accetta il messaggio;  in caso contrario, `asend` restituisce `false` per indicare che la destinazione ha rifiutato il messaggio o ha posticipato la decisione sull'accettazione del messaggio.  
  
 \[[Top](#top)\]  
  
##  <a name="receive"></a> receive e try\_receive  
 Le funzioni [concurrency::receive](../Topic/receive%20Function.md) e [concurrency::try\_receive](../Topic/try_receive%20Function.md) leggono i dati da un'origine specificata.  La funzione `receive` attende che i dati diventino disponibili, mentre la funzione `try_receive` restituisce immediatamente un valore.  
  
 Utilizzare la funzione `receive` quando è necessario avere i dati per continuare.  Utilizzare la funzione `try_receive` se non è necessario bloccare il contesto corrente o non è necessario avere i dati per continuare.  
  
 \[[Top](#top)\]  
  
##  <a name="examples"></a> Esempi  
 Per gli esempi in cui vengono utilizzate le funzioni `send`, `asend` e `receive` vedere gli argomenti seguenti:  
  
-   [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)  
  
-   [Procedura: Implementare vari modelli producer\-consumer](../../parallel/concrt/how-to-implement-various-producer-consumer-patterns.md)  
  
-   [Procedura: Fornire funzioni lavoro alle classi call e transformer](../../parallel/concrt/how-to-provide-work-functions-to-the-call-and-transformer-classes.md)  
  
-   [Procedura: Usare la classe transformer in una pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md)  
  
-   [Procedura: Effettuare una scelta tra le attività completate](../../parallel/concrt/how-to-select-among-completed-tasks.md)  
  
-   [Procedura: Inviare un messaggio a intervalli regolari](../../parallel/concrt/how-to-send-a-message-at-a-regular-interval.md)  
  
-   [Procedura: Usare il filtro di blocco dei messaggi](../../parallel/concrt/how-to-use-a-message-block-filter.md)  
  
 \[[Top](#top)\]  
  
## Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Funzione send](../Topic/send%20Function.md)   
 [Funzione asend](../Topic/asend%20Function.md)   
 [Funzione receive](../Topic/receive%20Function.md)   
 [Funzione try\_receive](../Topic/try_receive%20Function.md)