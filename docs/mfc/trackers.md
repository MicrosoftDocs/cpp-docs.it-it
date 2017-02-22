---
title: "Tracker | Microsoft Docs"
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
  - "applicazioni [OLE], tracker"
  - "CDC (classe), tracker"
  - "CRectTracker (classe), implementazione di tracker"
  - "applicazioni OLE [C++], tracker"
  - "contenitori OLE, tracker"
  - "applicazioni server OLE, tracker"
  - "tracker"
  - "gestione di elementi OLE"
ms.assetid: dcd09399-6637-4621-80e5-d12670429787
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Tracker
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe di [CRectTracker](../mfc/reference/crecttracker-class.md) fornisce un'interfaccia utente tra elementi rettangolari nell'applicazione e dell'utente fornendo vari stili di visualizzazione.  Questi stili sono pieni, tratteggiate, o bordo tratteggiato; un modello tratteggiate che comprende l'elemento; e quadratini di ridimensionamento che possono essere posizionati all'esterno o interno di un bordo.  I tracker vengono spesso utilizzati insieme agli elementi OLE, ovvero, oggetti derivati da `COleClientItem`.  Rettangoli tracker di forniscono segnali visivi allo stato corrente dell'elemento.  
  
 L'esempio [OCLIENT](../top/visual-cpp-samples.md) OLE MFC viene illustrato un'interfaccia comune utilizzo di tracker e di elementi client OLE dal punto di vista di un'applicazione contenitore.  Per una dimostrazione degli stili diversi e le possibilità di un tracker object, vedere a MFC l'esempio generale [TRACKER](../top/visual-cpp-samples.md).  
  
 Per ulteriori informazioni sull'implementazione di tracker nell'applicazione OLE, vedere [Tracker: Implementare i tracker nell'applicazione OLE](../mfc/trackers-implementing-trackers-in-your-ole-application.md)  
  
## Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)   
 [COleClientItem Class](../mfc/reference/coleclientitem-class.md)