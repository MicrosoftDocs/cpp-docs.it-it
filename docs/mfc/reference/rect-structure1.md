---
title: "Struttura RECT | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "LPRECT"
  - "RECT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LPRECT (struttura)"
  - "RECT (struttura)"
ms.assetid: 1b3160de-64e9-40d1-89eb-af3e0fd6acf0
caps.latest.revision: 13
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura RECT
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura `RECT` definisce le coordinate degli angoli in alto a sinistra e in basso a destra di un rettangolo.  
  
## Sintassi  
  
```  
  
      typedef struct tagRECT {   
   LONG left;  
   LONG top;  
   LONG right;  
   LONG bottom;  
} RECT;  
```  
  
## Membri  
 `left`  
 Specifica la coordinata x dell'angolo superiore sinistro di un rettangolo.  
  
 `top`  
 Specifica la coordinata y dell'angolo superiore sinistro di un rettangolo.  
  
 `right`  
 Specifica la coordinata x dell'angolo inferiore destro di un rettangolo.  
  
 `bottom`  
 Specifica la coordinata y dell'angolo inferiore destro di un rettangolo.  
  
## Esempio  
 [!code-cpp[NVC_MFC_Utilities#38](../../mfc/codesnippet/CPP/rect-structure1_1.cpp)]  
  
## Requisiti  
 **Intestazione:** windef.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CRect Class](../../atl-mfc-shared/reference/crect-class.md)