---
title: "Creazione di raccolte di stack e code | Microsoft Docs"
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
  - "classi di raccolte, creazione"
  - "raccolte, coda"
  - "raccolte, stack"
  - "MFC (classi di raccolte), raccolte di code"
  - "MFC (classi di raccolte), raccolte di stack"
  - "raccolte di code"
  - "stack"
  - "raccolte di stack"
ms.assetid: 3c7bc198-35f0-4fc3-aaed-6005a0f22638
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Creazione di raccolte di stack e code
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come creare altre strutture di dati, come [stack](#_core_stacks) e [code](#_core_queues), dalle classi dell'elenco MFC.  Gli esempi utilizzano le classi derivate da `CList`, ma è possibile utilizzare direttamente `CList` a meno che non sia necessario aggiungere la funzionalità.  
  
##  <a name="_core_stacks"></a> Stack  
 Poiché la raccolta di elenchi standard ha un'intestazione che un elemento tail, è facile creare una raccolta di elenchi derivata che riproduce il comportamento di un ultimo\-in\- first out stack.  Uno stack viene illustrato uno stack di cassetti in un self\-service.  Mentre i cassetti vengono aggiunti allo stack, vai sullo stack.  L'ultimo contenitore aggiunto è il primo da rimuovere.  Le funzioni membro `AddHead` e `RemoveHead` della raccolta di elenchi possono essere utilizzate per aggiungere e rimuovere elementi in modo specifico dall'intestazione dell'elenco; pertanto, l'elemento che è stato appena aggiunto è il primo da rimuovere.  
  
#### Per creare una raccolta dello stack  
  
1.  Derivare una nuova classe di elenco da una delle classi esistenti dell'elenco di MFC e aggiungere più funzioni membro per supportare la funzionalità delle operazioni dello stack.  
  
     Nell'esempio seguente viene illustrato come aggiungere funzioni membro agli elementi push dello stack, danno una riportato all'elemento all'inizio dello stack e schioccano l'elemento superiore dello stack:  
  
     [!code-cpp[NVC_MFCCollections#20](../mfc/codesnippet/CPP/creating-stack-and-queue-collections_1.h)]  
  
 Si noti che questo approccio espone la classe sottostante di `CObList`.  L'utente può chiamare qualsiasi funzione membro di `CObList`, se è utile per uno stack o meno.  
  
##  <a name="_core_queues"></a> Code  
 Poiché la raccolta di elenchi standard ha un'intestazione che un elemento tail, ma è altrettanto facile creare una raccolta di elenchi derivata che riproduce il comportamento di una first in first out coda.  Una coda è simile a una riga di persone in un self\-service.  La prima persona nella riga è la prima intensivo.  Mentre non più persone, vai alla fine della riga nel proprio turno.  Le funzioni membro `AddTail` e `RemoveHead` della raccolta di elenchi possono essere utilizzate per aggiungere e rimuovere elementi in modo specifico dall'intestazione o viceversa elenco; pertanto, l'elemento che è stato appena aggiunto sia sempre l'ultimo da rimuovere.  
  
#### Per creare una raccolta della coda  
  
1.  Derivare una nuova classe di elenco da una delle classi predefinite dell'elenco fornito della libreria MFC e aggiungere più funzioni membro per supportare la semantica delle operazioni della coda.  
  
     Nell'esempio seguente viene illustrato come è possibile aggiungere le funzioni membro per aggiungere un elemento alla fine della coda e ottenere l'elemento dall'inizio della coda.  
  
     [!code-cpp[NVC_MFCCollections#21](../mfc/codesnippet/CPP/creating-stack-and-queue-collections_2.h)]  
  
## Vedere anche  
 [Raccolte](../mfc/collections.md)