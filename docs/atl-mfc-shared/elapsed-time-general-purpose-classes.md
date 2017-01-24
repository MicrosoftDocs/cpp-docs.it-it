---
title: "Elapsed Time: General-Purpose Classes | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
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
  - "calculating dates and times"
  - "calcoli, data e ora"
  - "date, calculating intervals"
  - "tempo trascorso"
  - "tempo trascorso, calcolo"
  - "intervals, data e ora"
  - "ora, elapsed"
ms.assetid: e5c5d3d2-ce1d-409e-875c-98848434e716
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Elapsed Time: General-Purpose Classes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella procedura seguente viene illustrato come calcolare la differenza tra due oggetti `CTime` e ottenere un risultato `CTimeSpan`.  
  
#### Per calcolare il tempo trascorso  
  
1.  Utilizzare gli oggetti `CTimeSpan` e `CTime` per calcolare il tempo trascorso, come segue:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#174](../atl-mfc-shared/codesnippet/CPP/elapsed-time-general-purpose-classes_1.cpp)]  
  
     Dopo aver calcolato `elapsedTime`, è possibile utilizzare le funzioni membro `CTimeSpan` per estrarre i componenti del valore del tempo trascorso.  
  
## Vedere anche  
 [Date and Time: General\-Purpose Classes](../atl-mfc-shared/date-and-time-general-purpose-classes.md)