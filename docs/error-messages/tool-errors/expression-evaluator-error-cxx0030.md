---
title: "Errore dell‘analizzatore di espressioni CXX0030 | Microsoft Docs"
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
  - "CXX0030"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0030"
  - "CXX0030"
ms.assetid: ada8b48c-09c8-49bf-ae23-313ed663c4fe
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore dell‘analizzatore di espressioni CXX0030
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Espressione non analizzabile.  
  
 L'analizzatore di espressioni del debugger non ha ottenuto un valore per l'espressione secondo le istruzioni specificate.  È possibile che l'espressione faccia riferimento a memoria esterna allo spazio degli indirizzi del programma \(un esempio è la dereferenziazione di un puntatore null\).  In Windows non è consentito l'accesso a memoria esterna allo spazio degli indirizzi del programma.  
  
 Si consiglia di riscrivere l'espressione utilizzando delle parentesi in modo da controllare l'ordine di valutazione.  
  
 Questo errore è identico all'errore CAN0030.