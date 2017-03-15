---
title: "Pulizia di documenti e visualizzazioni | Microsoft Docs"
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
  - "documenti, pulizia"
  - "documenti, chiusura"
  - "visualizzazioni, pulizia"
ms.assetid: 0c454db2-3644-434d-9e53-8108a7aedfe1
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Pulizia di documenti e visualizzazioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando un documento è in fase di chiusura, il framework chiama innanzitutto la funzione membro [DeleteContents](../Topic/CDocument::DeleteContents.md).  Se è stata allocata memoria nell'heap durante l'operazione del documento, `DeleteContents` è la posizione migliore per rilasciarla.  
  
> [!NOTE]
>  Non è necessario rilasciare i dati del documento nel distruttore del documento.  Nel caso di un'applicazione SDI, l'oggetto documento può essere riutilizzato.  
  
 È possibile eseguire l'override del distruttore di una visualizzazione per liberare la memoria allocata nell'heap.  
  
## Vedere anche  
 [Inizializzazione e pulizia di documenti e visualizzazioni](../mfc/initializing-and-cleaning-up-documents-and-views.md)