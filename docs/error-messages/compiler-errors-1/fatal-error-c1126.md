---
title: "Errore irreversibile C1126 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1126"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1126"
ms.assetid: f22b26a6-8ad7-47cf-a237-196c8ea60aca
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1126
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': l'allocazione automatica supera dimensione  
  
 Lo spazio allocato per le variabili locali di una funzione, oltre a una quantità limitata di spazio utilizzata nel compilatore, ad esempio 20 byte supplementari per le funzioni sottoponibili a swapping, è superiore al limite.  
  
 Per correggere l'errore, utilizzare `malloc` o `new` per allocare grandi quantità di dati.