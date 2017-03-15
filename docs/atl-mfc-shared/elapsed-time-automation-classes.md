---
title: "Elapsed Time: Automation Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "adding dates"
  - "Automation classes, tempo trascorso"
  - "calculating dates and times"
  - "calcoli, data e ora"
  - "date, calculating intervals"
  - "tempo trascorso, calculating in Automation"
  - "intervals, data e ora"
  - "ora, elapsed"
ms.assetid: 26b34b37-c10e-4b91-82c3-1dc5ffb5361f
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Elapsed Time: Automation Classes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa procedura viene illustrato come calcolare la differenza tra due oggetti `CTime` e ottenere un risultato `CTimeSpan`.  
  
#### Per calcolare il tempo trascorso  
  
1.  Creare due oggetti `COleDateTime`.  
  
2.  Impostare uno degli oggetti `COleDateTime` con l'ora corrente.  
  
3.  Eseguire alcune attività che richiede molto tempo.  
  
4.  Impostare altri oggetti `COleDateTime` con l'ora corrente.  
  
5.  Si consideri la differenza tra due volte.  
  
     [!code-cpp[NVC_ATLMFC_Utilities#178](../atl-mfc-shared/codesnippet/CPP/elapsed-time-automation-classes_1.cpp)]  
  
## Vedere anche  
 [Date and Time: Automation Support](../atl-mfc-shared/date-and-time-automation-support.md)