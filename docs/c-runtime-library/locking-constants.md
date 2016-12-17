---
title: "Costanti _locking | Microsoft Docs"
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
  - "_LK_RLCK"
  - "_LK_NBLCK"
  - "_LK_LOCK"
  - "_LK_NBRLCK"
  - "_LK_UNLCK"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_LK_LOCK (costante)"
  - "_LK_NBLCK (costante)"
  - "_LK_NBRLCK (costante)"
  - "_LK_RLCK (costante)"
  - "_LK_UNLCK (costante)"
  - "LK_LOCK (costante)"
  - "LK_NBLCK (costante)"
  - "LK_NBRLCK (costante)"
  - "LK_RLCK (costante)"
  - "LK_UNLCK (costante)"
ms.assetid: c3dc92c8-60e3-4d29-9f50-5d217627c8ad
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Costanti _locking
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
#include <sys/locking.h>  
  
```  
  
## Note  
 L'argomento *mode* chiamata nella chiamata alla funzione `_locking` specifica l'azione di blocco da eseguire.  
  
 L'argomento *mode* deve essere una delle seguenti costanti manifesto.  
  
 `_LK_LOCK`  
 Blocca i byte specificati.  Se i byte non possono essere bloccati, la funzione tenterà di bloccarli nuovamente dopo 1 secondo.  Se, dopo 10 tentativi, i byte non possono essere bloccati, la funzione restituisce un errore.  
  
 `_LK_RLCK`  
 Uguale a `_LK_LOCK`.  
  
 `_LK_NBLCK`  
 Blocca i byte specificati.  Se i byte non possono essere bloccati, la funzione restituisce un errore.  
  
 `_LK_NBRLCK`  
 Uguale a `_LK_NBLCK`.  
  
 `_LK_UNLCK`  
 Sblocca i byte specificati. \(I byte devono già essere bloccati.\)  
  
## Vedere anche  
 [\_locking](../c-runtime-library/reference/locking.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)