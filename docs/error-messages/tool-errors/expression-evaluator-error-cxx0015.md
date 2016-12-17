---
title: "Errore dell‘analizzatore di espressioni CXX0015 | Microsoft Docs"
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
  - "CXX0015"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0015"
  - "CXX0015"
ms.assetid: 35efaf77-d578-48d8-bfc5-fdeb2a46a8b5
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore dell‘analizzatore di espressioni CXX0015
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

espressione troppo complessa \(overflow dello stack\)  
  
 L'espressione immessa è troppo complessa o eccessivamente annidata per la quantità di memoria disponibile per l'analizzatore di espressioni di C.  
  
 L'overflow si verifica in genere a causa delle troppe operazioni in sospeso.  
  
 Modificare l'espressione in modo che ogni suo componente possa essere valutato immediatamente e non dopo il calcolo di altre parti dell'espressione.  
  
 Suddividere l'espressione in più comandi.  
  
 Questo errore è identico all'errore CAN0015.