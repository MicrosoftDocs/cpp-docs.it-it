---
title: "Struttura ABCFLOAT | Microsoft Docs"
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
  - "ABCFLOAT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ABCFLOAT (struttura)"
ms.assetid: 338e7e15-9d2c-42d0-aa80-273acfde5cc5
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura ABCFLOAT
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura `ABCFLOAT` contiene le larghezze A, B e C di un carattere per un determinato tipo di carattere.  
  
## Sintassi  
  
```  
  
      typedef struct _ABCFLOAT { /* abcf */  
   FLOAT abcfA;  
   FLOAT abcfB;  
   FLOAT abcfC;  
} ABCFLOAT;  
```  
  
#### Parametri  
 *abcfA*  
 Specifica la spaziatura A del carattere.  La spaziatura A rappresenta la distanza da aggiungere alla posizione corrente prima di creare il glifo di caratteri.  
  
 *abcfB*  
 Specifica la spaziatura B del carattere.  La spaziatura di B corrisponde alla larghezza della porzione disegnata del glifo di caratteri.  
  
 *abcfC*  
 Specifica la spaziatura C del carattere.  La spaziatura C rappresenta la distanza da aggiungere alla posizione corrente per fornire spazio vuoto a destra del glifo di caratteri.  
  
## Note  
 Le larghezze A, B e C sono misurate lungo la linea di base del tipo di carattere.  L'incremento del carattere \(larghezza totale\) di un carattere è la somma degli spazi A, B e C.  Gli spazi A e C possono essere negativi ad indicare rientranze o sporgenze.  
  
## Requisiti  
 **File di intestazione:** wingdi.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::GetCharABCWidths](../Topic/CDC::GetCharABCWidths.md)