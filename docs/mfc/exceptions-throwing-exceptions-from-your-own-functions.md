---
title: "Eccezioni: generazione di eccezioni da funzioni personalizzate | Microsoft Docs"
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
  - "eccezioni, generazione"
  - "funzioni [C++], generazione di eccezioni"
  - "generazione di eccezioni, da funzioni"
ms.assetid: 492976e8-8804-4234-8e8f-30dffd0501be
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Eccezioni: generazione di eccezioni da funzioni personalizzate
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare esclusivamente il paradigma di gestione delle eccezioni MFC per intercettare eccezioni generate dalle funzioni in MFC o in altre librerie.  Oltre alle eccezioni di intercettazione generate dal codice di libreria, è possibile generare le eccezioni del proprio codice se si sta scrivendo le funzioni che possono verificarsi in casi eccezionali.  
  
 Quando viene generata un'eccezione, l'esecuzione della funzione corrente viene interrotta e passa direttamente al blocco di **Catch** del frame più interno di eccezione.  Il meccanismo di eccezione ignora il percorso normale dell'uscita da una funzione.  Pertanto, è necessario assicurarsi di eliminare i blocchi di memoria che si eliminerebbero di uscita normale.  
  
#### Per generare un'eccezione  
  
1.  Utilizzare una delle funzioni di supporto MFC, come `AfxThrowMemoryException`.  Queste funzioni consentono di generare un oggetto eccezione preassegnato del tipo appropriato.  
  
     Nell'esempio seguente, una funzione tenta di allocare due blocchi di memoria e genera un'eccezione se qualsiasi allocazione non riesce:  
  
     [!code-cpp[NVC_MFCExceptions#17](../mfc/codesnippet/CPP/exceptions-throwing-exceptions-from-your-own-functions_1.cpp)]  
  
     Se la prima corrispondenza ha esito negativo, è possibile generare semplicemente l'eccezione di memoria.  Se la prima corrispondenza ha esito positivo ma la seconda ha esito negativo, è necessario liberare il primo blocco di allocazione prima di generare un'eccezione.  Se entrambe le allocazioni riescono, è possibile proseguire normalmente e liberare blocchi quando esce dalla funzione.  
  
     oppure  
  
2.  Utilizzare un'eccezione definita dall'utente per indicare lo stato del problema.  È possibile generare un elemento di qualsiasi tipo, anche un'intera classe, come l'eccezione.  
  
     Nel seguente esempio si tenta di riprodurre un suono da un dispositivo wave e genera un'eccezione se è presente un errore.  
  
     [!code-cpp[NVC_MFCExceptions#18](../mfc/codesnippet/CPP/exceptions-throwing-exceptions-from-your-own-functions_2.cpp)]  
  
> [!NOTE]
>  In MFC vengono impostate automaticamente la gestione delle eccezioni si applica solo ai puntatori a oggetti di `CException` \(e agli oggetti di `CException`\- classi derivate.  Il meccanismo delle eccezioni ignorate MFC del punto dell'esempio precedente.  
  
## Vedere anche  
 [Gestione delle eccezioni](../mfc/exception-handling-in-mfc.md)