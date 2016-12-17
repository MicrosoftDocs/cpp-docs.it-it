---
title: "Errore dell‘analizzatore di espressioni CXX0024 | Microsoft Docs"
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
  - "CXX0024"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0024"
  - "CXX0024"
ms.assetid: eca6adbd-8ff2-4f51-a1cc-a2e9d5d0a47d
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore dell‘analizzatore di espressioni CXX0024
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

l'operazione richiede un l\-value  
  
 È stata specificata un'espressione che non restituisce l\-value per un'operazione che richiede un valore l\-value.  
  
 Un l\-value \(un valore visualizzato a sinistra di un'istruzione di assegnazione\) è un'espressione che fa riferimento a una posizione di memoria.  
  
 Il valore `buffer[count]`, ad esempio, è un l\-value valido in quanto punta a una determinata posizione di memoria.  Il confronto logico `zed != 0` non è un l\-value valido in quanto restituisce TRUE o FALSE e non un indirizzo di memoria.  
  
 Questo errore è identico all'errore CAN0024.