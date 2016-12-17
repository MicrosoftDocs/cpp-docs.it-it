---
title: "Derivazione di una classe documento da CDocument | Microsoft Docs"
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
  - "CDocument (classe), derivazione da"
  - "classi [C++], derivazione da CDocument"
  - "classi derivate, funzioni sottoposte spesso a override"
  - "classi documento, funzioni sottoposte spesso a override"
  - "oggetti documento, derivati"
ms.assetid: e6a198e0-9799-43c0-83c5-04174d8b532c
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Derivazione di una classe documento da CDocument
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I documenti contengono oggetti e i dati dell'applicazione.  Per utilizzare la classe document Procedura fornita creazioni guidate applicazione MFC, effettuare le operazioni seguenti:  
  
-   Derivare la classe da **CDocument** per ogni tipo di documento.  
  
-   Aggiungere le variabili membro per archiviare i dati di ciascun documento.  
  
-   Funzione membro di **CDocument**`Serialize` override nella classe del documento.  `Serialize` scrivere e leggere i dati del documento da e su disco.  
  
## Altro vengono illustrate le funzioni eseguire l'override spesso  
 È inoltre possibile eseguire l'override di altre funzioni membro di **CDocument**.  In particolare, è spesso necessario eseguire l'override di [OnNewDocument](../Topic/CDocument::OnNewDocument.md) e [OnOpenDocument](../Topic/CDocument::OnOpenDocument.md) per inizializzare i membri dati e [DeleteContents](../Topic/CDocument::DeleteContents.md) di documento per eliminare i dati allocate in modo dinamico.  Per informazioni sui membri overridable, vedere la classe [CDocument](../mfc/reference/cdocument-class.md) in *Riferimento MFC*.  
  
## Vedere anche  
 [Utilizzo di documenti](../mfc/using-documents.md)