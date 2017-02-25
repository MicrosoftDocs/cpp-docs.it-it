---
title: "Inizializzazione di documenti e visualizzazioni | Microsoft Docs"
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
  - "documenti, inizializzazione"
  - "inizializzazione di documenti"
  - "inizializzazione di oggetti, oggetti documento"
  - "inizializzazione di visualizzazioni"
  - "visualizzazioni, inizializzazione"
ms.assetid: 33cb8643-8a16-478c-bc26-eccc734e3661
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Inizializzazione di documenti e visualizzazioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I documenti vengono creati in due modi diversi, in modo che la classe del documento debba supportare entrambi i metodi.  Innanzitutto, l'utente può creare un nuovo documento vuoto, con il comando Nuovo File.  In tal caso, inizializzare il documento nell'override della funzione membro [OnNewDocument](../Topic/CDocument::OnNewDocument.md) della classe [CDocument](../mfc/reference/cdocument-class.md).  In secondo luogo, l'utente può utilizzare il comando Apri dal menu File per creare un nuovo documento i cui contenuti vengono letti da un file.  In tal caso, inizializzare il documento nell'override della funzione membro [OnNewDocument](../Topic/CDocument::OnOpenDocument.md) della classe **CDocument**.  Se entrambe le inizializzazioni sono uguali, è possibile chiamare una funzione membro comune da entrambi gli override, o `OnOpenDocument` chiamare `OnNewDocument` per inizializzare un documento pulito e quindi completare l'operazione di apertura.  
  
 Le visualizzazioni vengono create dopo che sono stati creati i documenti.  Il momento migliore per inizializzare una visualizzazione è dopo che il framework ha completato la creazione del documento, della finestra cornice e della visualizzazione.  È possibile inizializzare la visualizzazione eseguendo l'override della funzione membro [OnInitialUpdate](../Topic/CView::OnInitialUpdate.md) di [CView](../mfc/reference/cview-class.md).  Se è necessario inizializzare nuovamente o sistemare qualcosa ogni volta che il documento viene modificato, è possibile eseguire l'override di [OnUpdate](../Topic/CView::OnUpdate.md).  
  
## Vedere anche  
 [Inizializzazione e pulizia di documenti e visualizzazioni](../mfc/initializing-and-cleaning-up-documents-and-views.md)