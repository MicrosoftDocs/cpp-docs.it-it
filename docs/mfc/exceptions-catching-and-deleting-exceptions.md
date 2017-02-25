---
title: "Eccezioni: rilevamento ed eliminazione di eccezioni | Microsoft Docs"
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
  - "AND_CATCH (macro)"
  - "blocchi catch, intercettazione ed eliminazione di eccezioni"
  - "gestione eccezioni, intercettazione ed eliminazione di eccezioni"
  - "eccezioni, eliminazione"
  - "esecuzione, restituzione dall'interno di un blocco catch"
  - "gestione eccezioni try-catch, intercettazione ed eliminazione di eccezioni"
ms.assetid: 7c233ff0-89de-4de0-a68a-9e9cdb164311
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Eccezioni: rilevamento ed eliminazione di eccezioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le seguenti istruzioni ed esempi viene mostrato come intercettare ed eliminare le eccezioni.  Per ulteriori informazioni su **Prova**, **Catch** e le parole chiave di `throw`, vedere [Gestione delle eccezioni C\+\+](../cpp/cpp-exception-handling.md).  
  
 I gestori di eccezioni devono eliminare gli oggetti exception che gestiscono, poiché l'omissione di eliminare l'eccezione causa una perdita di memoria ogni volta che tale codice intercetta un'eccezione.  
  
 Il blocco di **Catch** deve eliminare un'eccezione quando:  
  
-   Il blocco di **Catch** genera una nuova eccezione.  
  
     Naturalmente, non è necessario eliminare eccezione se si genera nuovamente la stessa eccezione:  
  
     [!code-cpp[NVC_MFCExceptions#3](../mfc/codesnippet/CPP/exceptions-catching-and-deleting-exceptions_1.cpp)]  
  
-   Restituzione di esecuzione dall'interno del blocco di **Catch**.  
  
> [!NOTE]
>  Nell'eliminare `CException`, utilizzare la funzione membro di **Elimina** per eliminare l'eccezione.  Non utilizzare la parola chiave di **eliminazione**, poiché può non riuscire se l'eccezione non si trova sull'heap.  
  
#### Per individuare ed eliminare le eccezioni  
  
1.  Utilizzare la parola chiave di **Prova** per installare un blocco di **Prova**.  Eseguire le istruzioni del programma che potrebbero generare un'eccezione all'interno di un blocco di **Prova**.  
  
     Utilizzare la parola chiave di **Catch** per installare un blocco di **Catch**.  Codice di gestione delle eccezioni del posto di un blocco di **Catch**.  Il codice nel blocco di **Catch** viene eseguito solo se il codice all'interno del blocco di **Prova** genera un'eccezione di tipo specificato nell'istruzione di **Catch**.  
  
     Illustrato lo scheletro come **Prova** e i blocchi di **Catch** in genere vengono disposti:  
  
     [!code-cpp[NVC_MFCExceptions#4](../mfc/codesnippet/CPP/exceptions-catching-and-deleting-exceptions_2.cpp)]  
  
     Quando viene generata un'eccezione, il controllo passa al primo blocco di **Catch** di cui la dichiarazione dell'eccezione corrisponde al tipo dell'eccezione.  È possibile gestire in modo selettivo i diversi tipi di eccezioni con i blocchi sequenziali di **Catch** elencato di seguito:  
  
     [!code-cpp[NVC_MFCExceptions#5](../mfc/codesnippet/CPP/exceptions-catching-and-deleting-exceptions_3.cpp)]  
  
 Per ulteriori informazioni, vedere [Eccezioni: Conversione da macro di eccezione MFC](../mfc/exceptions-converting-from-mfc-exception-macros.md).  
  
## Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)