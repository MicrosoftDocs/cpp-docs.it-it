---
title: "Struttura DHtmlUrlEventMapEntry | Microsoft Docs"
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
  - "DHtmlUrlEventMapEntry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DHtmlUrlEventMapEntry (struttura)"
ms.assetid: 43117c1f-1a51-406c-aa2f-fea647080049
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura DHtmlUrlEventMapEntry
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La struttura di `DHtmlUrlEventMapEntry` fornisce il supporto della mappa eventi più URL.  
  
## Sintassi  
  
```  
  
      struct DHtmlUrlEventMapEntry  
{  
   LPCTSTR szUrl;  
   const DHtmlEventMapEntry *pEventMap;  
};  
```  
  
#### Parametri  
 `szUrl`  
 URL.  
  
 *pEventMap*  
 La mappa eventi associata all'URL.  
  
## Requisiti  
 **Intestazione:** afxdhtml.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)