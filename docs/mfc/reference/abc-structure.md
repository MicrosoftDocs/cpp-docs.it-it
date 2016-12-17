---
title: "Struttura ABC | Microsoft Docs"
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
  - "ABC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ABC (struttura)"
ms.assetid: 32663839-c3b7-4f47-896c-b15329c96bc8
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura ABC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di **ABC** contiene la larghezza di un carattere in un tipo di carattere TrueType.  
  
## Sintassi  
  
```  
  
      typedef struct _ABC { /* abc */  
   int abcA;  
   UINT abcB;  
   int abcC;  
} ABC;  
```  
  
#### Parametri  
 *abcA*  
 Specifica la spaziatura A del carattere.  La spaziatura A rappresenta la distanza da aggiungere alla posizione corrente prima di creare il glifo di caratteri.  
  
 *abcB*  
 Specifica la spaziatura B del carattere.  La spaziatura di B corrisponde alla larghezza della porzione disegnata del glifo di caratteri.  
  
 *abcC*  
 Specifica la spaziatura C del carattere.  La spaziatura C rappresenta la distanza da aggiungere alla posizione corrente per fornire spazio vuoto a destra del glifo di caratteri.  
  
## Note  
 La larghezza totale di un carattere è la somma degli spazi A, B e C.  Gli spazi A e C possono essere negativi ad indicare rientranze o sporgenze.  
  
## Requisiti  
 **File di intestazione:** wingdi.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::GetCharABCWidths](../Topic/CDC::GetCharABCWidths.md)