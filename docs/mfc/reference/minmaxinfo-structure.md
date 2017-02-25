---
title: "Struttura MINMAXINFO | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MINMAXINFO"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MINMAXINFO (struttura)"
ms.assetid: be6fb578-f98a-4581-9ada-be9df308ed2f
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Struttura MINMAXINFO
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `MINMAXINFO` contiene informazioni sulle dimensioni di una finestra e posizione ingrandita e la dimensione minima e massima di verifica.  
  
## Sintassi  
  
```  
  
      typedef struct tagMINMAXINFO {  
   POINT ptReserved;  
   POINT ptMaxSize;  
   POINT ptMaxPosition;  
   POINT ptMinTrackSize;  
   POINT ptMaxTrackSize;  
} MINMAXINFO;  
```  
  
#### Parametri  
 *ptReserved*  
 Riservato per utilizzo interno.  
  
 *ptMaxSize*  
 Specifica la larghezza ingrandita \(point.x\) e l'altezza ingrandita \(point.y\) della finestra.  
  
 `ptMaxPosition`  
 Specifica il percorso della parte sinistra della finestra ingrandita \(point.x\) e la posizione della parte superiore della finestra ingrandita \(point.y\).  
  
 *ptMinTrackSize*  
 Specifica la larghezza minima di rilevamento \(point.x\) e l'altezza minima di rilevamento \(point.y\) della finestra.  
  
 *ptMaxTrackSize*  
 Specifica la larghezza di rilevamento massima \(point.x\) e l'altezza di rilevamento massima \(point.y\) della finestra.  
  
## Requisiti  
 **Intestazione:** winuser.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnGetMinMaxInfo](../Topic/CWnd::OnGetMinMaxInfo.md)