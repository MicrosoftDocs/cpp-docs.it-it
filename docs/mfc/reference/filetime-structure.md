---
title: "Struttura FILETIME | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "FILETIME"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FILETIME (struttura)"
ms.assetid: e09557e2-b6d7-4dd5-a5b9-6328bca88595
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Struttura FILETIME
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `FILETIME` è un valore a 64 bit che rappresenta il numero di 100 intervalli di nanosecondo dal 1° gennaio 1601.  
  
## Sintassi  
  
```  
  
      typedef struct _FILETIME {  
   DWORD dwLowDateTime;   /* low 32 bits  */  
   DWORD dwHighDateTime;  /* high 32 bits */  
} FILETIME, *PFILETIME, *LPFILETIME;  
```  
  
#### Parametri  
 *dwLowDateTime*  
 Specifica i bit meno di 32 all'ora del file.  
  
 *dwHighDateTime*  
 Specifica i bit di livello 32 dell'ora del file.  
  
## Requisiti  
 **Intestazione:** windef.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CTime::CTime](../Topic/CTime::CTime.md)