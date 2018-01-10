---
title: 'Procedura: implementare vari modelli Producer-Consumer | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- producer-consumer patterns, implementing [Concurrency Runtime]
- implementing producer-consumer patterns [Concurrency Runtime]
ms.assetid: 75f2c7cc-5399-49ea-98eb-847fe6747169
caps.latest.revision: "17"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0efafe17cd524c241e709d3c3c59233a130cdf95
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-implement-various-producer-consumer-patterns"></a>Procedura: Implementare vari modelli producer-consumer
In questo argomento viene descritto come implementare il modello producer-consumer nell'applicazione. In questo modello, il *producer* invia messaggi a un blocco di messaggi e il *consumer* legge i messaggi dal blocco.  
  
 L'argomento vengono illustrati due scenari. Nel primo scenario, il consumer deve ricevere ogni messaggio inviato dal produttore. Nel secondo scenario, il consumer esegue periodicamente il polling per i dati e pertanto non deve ricevere ogni messaggio.  
  
 Entrambi gli esempi in questo argomento usano gli agenti, blocchi dei messaggi e funzioni di passaggio dei messaggi per trasmettere i messaggi dal producer al consumer. L'agente di produttori utilizza il [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) funzione per scrivere messaggi in un [Concurrency:: ITarget](../../parallel/concrt/reference/itarget-class.md) oggetto. L'agente utente utilizza il [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) funzione per leggere i messaggi da un [Concurrency:: ISource](../../parallel/concrt/reference/isource-class.md) oggetto. Entrambi gli agenti contengono un valore di sentinel per coordinare la fine dell'elaborazione.  
  
 Per ulteriori informazioni sugli agenti asincroni, vedere [agenti asincroni](../../parallel/concrt/asynchronous-agents.md). Per ulteriori informazioni sui blocchi dei messaggi e funzioni di passaggio dei messaggi, vedere [blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md) e [Message (funzioni) passando](../../parallel/concrt/message-passing-functions.md).  
  
## <a name="example"></a>Esempio  
 In questo esempio, l'agente di producer invia una serie di numeri all'agente del consumer. Il consumer riceve ognuno di questi numeri e ne calcola la Media. L'applicazione scrive la media nella console.  
  
 Questo esempio viene utilizzato un [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) oggetto per consentire il producer di messaggi in coda. Il `unbounded_buffer` implementa `ITarget` e `ISource` in modo che il produttore e il consumer può inviare e ricevere messaggi da e verso un buffer condiviso. Il `send` e `receive` funzioni coordinano le attività di propagazione dei dati dal producer al consumer.  
  
 [!code-cpp[concrt-producer-consumer-average#1](../../parallel/concrt/codesnippet/cpp/how-to-implement-various-producer-consumer-patterns_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
The average is 50.  
```  
  
## <a name="example"></a>Esempio  
 In questo esempio, l'agente di producer invia una serie di quotazioni all'agente del consumer. L'agente consumer periodicamente legge l'offerta corrente e stampato nella console.  
  
 In questo esempio è simile al precedente, ad eccezione del fatto che usa un [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) oggetto per consentire il producer di condividere un messaggio al consumer. Come nell'esempio precedente, `overwrite_buffer` implementa `ITarget` e `ISource` in modo che il produttore e il consumer può agire su un buffer di messaggi condiviso.  
  
 [!code-cpp[concrt-producer-consumer-quotes#1](../../parallel/concrt/codesnippet/cpp/how-to-implement-various-producer-consumer-patterns_2.cpp)]  
  
 Questo esempio produce il seguente output di esempio.  
  
```Output  
Current quote is 24.44.  
Current quote is 24.44.  
Current quote is 24.65.  
Current quote is 24.99.  
Current quote is 23.76.  
Current quote is 22.30.  
Current quote is 25.89.  
```  
  
 A differenza di con un `unbounded_buffer` oggetto, il `receive` funzione rimuove il messaggio dal `overwrite_buffer` oggetto. Se il consumer legge dal buffer dei messaggi di più di una volta prima che il producer sovrascrive il messaggio, il ricevitore ottiene lo stesso messaggio ogni volta.  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `producer-consumer.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc producer-consumer. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)
