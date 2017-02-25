---
title: "Funzione di callback per CDC::EnumObjects | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Callback Function for CDC::EnumObjects"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni callback, per CDC::EnumObjects"
ms.assetid: 380088b1-88a5-4fb4-bbb5-dd9e8386572b
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Funzione di callback per CDC::EnumObjects
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il nome *ObjectFunc* è un segnaposto per il nome della funzione fornito dall'applicazione.  
  
## Sintassi  
  
```  
  
      int CALLBACK EXPORT ObjectFunc(   
   LPSTR lpszLogObject,   
   LPSTR* lpData    
);  
```  
  
#### Parametri  
 *lpszLogObject*  
 Punta a una struttura dati [LOGBRUSH](../../mfc/reference/logbrush-structure.md) o [LOGPEN](../../mfc/reference/logpen-structure.md) contenente informazioni sugli attributi logici dell'oggetto.  
  
 `lpData`  
 Punta ai dati passati forniti dall'applicazione alla funzione `EnumObjects`.  
  
## Valore restituito  
 La funzione di callback restituisce un `int`.  Il valore di questo valore restituito viene definito dall'utente.  Se la funzione di callback restituisce 0, `EnumObjects` arresta prima l'enumerazione.  
  
## Note  
 Il nome effettivo deve essere esportato.  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::EnumObjects](../Topic/CDC::EnumObjects.md)