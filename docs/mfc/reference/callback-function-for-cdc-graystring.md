---
title: "Funzione di callback per CDC::GrayString | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Callback Function for CDC::GrayString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni callback, per CDC::GrayString"
ms.assetid: 5217e183-df48-426b-931b-6245022ca36f
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Funzione di callback per CDC::GrayString
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

*OutputFunc* è un segnaposto per il nome della funzione di callback applicazione fornito.  
  
## Sintassi  
  
```  
  
      BOOL CALLBACK EXPORT OutputFunc(   
   HDC hDC,   
   LPARAM lpData,   
   int nCount    
);  
```  
  
#### Parametri  
 `hDC`  
 Identifica un contesto del dispositivo di memoria con una bitmap almeno width e height specificate da `nWidth` e da `nHeight` a `GrayString`.  
  
 `lpData`  
 Punta alla stringa di caratteri da tracciare.  
  
 `nCount`  
 Specifica il numero di caratteri da restituire.  
  
## Valore restituito  
 Il valore restituito della funzione di callback deve essere **TRUE** per indicare la riuscita; in caso contrario è **FALSE**.  
  
## Note  
 La funzione di callback \(*OutputFunc*\) deve disegnare un'immagine alle coordinate \(0,0\) anziché \(*x*, *y\)*.  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::GrayString](../Topic/CDC::GrayString.md)