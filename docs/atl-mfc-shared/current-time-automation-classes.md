---
title: "Current Time: Automation Classes | Microsoft Docs"
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
  - "Automation classes, ora corrente"
  - "ora corrente, COleDateTime object"
  - "routine, getting current time"
  - "ora, getting current"
  - "ora, setting current"
ms.assetid: cc967f17-1189-4cf3-85f9-1969462d5f72
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Current Time: Automation Classes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella procedura seguente viene illustrato come creare un oggetto `COleDateTime` e inizializzarla con l'ora corrente.  
  
#### Per ottenere l'ora corrente  
  
1.  Creare un oggetto `COleDateTime`.  
  
2.  Chiamare il metodo `GetCurrentTime`.  
  
     [!code-cpp[NVC_ATLMFC_Utilities#177](../atl-mfc-shared/codesnippet/CPP/current-time-automation-classes_1.cpp)]  
  
## Vedere anche  
 [Date and Time: Automation Support](../atl-mfc-shared/date-and-time-automation-support.md)