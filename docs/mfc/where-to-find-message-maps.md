---
title: "Dove trovare le mappe messaggi | Microsoft Docs"
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
  - "individuazione di mappe messaggi"
  - "macro, mappa messaggi"
  - "mappe messaggi, ricerca"
  - "macro di mappe messaggi"
ms.assetid: bf59fbc8-b222-42d3-b5d3-0a79aa3cb923
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Dove trovare le mappe messaggi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si crea un nuovo struttura di applicazione tramite una procedura guidata, la creazione guidata applicazione genera una mappa messaggi per ogni classe che la destinazione comando crea automaticamente.  Ciò include l'applicazione, documento, visualizzazione e classi derivate della finestra cornice.  Alcune delle mappe messaggi già dispongono delle voci fornite dalla creazione guidata applicazione per determinati messaggi e controlli predefiniti e alcuni sono solo segnaposto per i gestori aggiunto.  
  
 La mappa messaggi della classe si trova nel file di .CPP per la classe.  Utilizzo delle mappe messaggi di base e la creazione guidata applicazione crea, utilizzare la Finestra Proprietà per aggiungere voci per i messaggi e ordinate che ogni classe gestisce.  Una mappa messaggi tipica potrebbe essere simile a quello riportato di seguito dopo avere aggiunto alcune voci:  
  
 [!code-cpp[NVC_MFCMessageHandling#1](../mfc/codesnippet/CPP/where-to-find-message-maps_1.cpp)]  
  
 La mappa messaggi è costituito da una raccolta di macro.  Due macro, [BEGIN\_MESSAGE\_MAP](../Topic/BEGIN_MESSAGE_MAP.md) e [END\_MESSAGE\_MAP](../Topic/END_MESSAGE_MAP.md), inquadrano la mappa messaggi.  Altre macro, ad esempio `ON_COMMAND`, inseriscono i contenuti della mappa messaggi.  
  
> [!NOTE]
>  Le macro di mapping dei messaggi non vengono seguite da punto e virgola.  
  
 Quando si utilizza la procedura guidata aggiungi classe per creare una nuova classe, fornisce una mappa messaggi per la classe.  In alternativa, è possibile creare una mappa messaggi manualmente tramite l'editor del codice sorgente.  
  
## Vedere anche  
 [Come vengono cercate le mappe messaggi nel framework](../mfc/how-the-framework-searches-message-maps.md)