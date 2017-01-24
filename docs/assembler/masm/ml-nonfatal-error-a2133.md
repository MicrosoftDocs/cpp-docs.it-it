---
title: "ML Nonfatal Error A2133 | Microsoft Docs"
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
  - "A2133"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A2133"
ms.assetid: 5ba50911-22c8-43b7-90e2-946fc612e05f
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Nonfatal Error A2133
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**valore del registro sovrascritto dal RICHIAMO**  
  
 Un log è stato passato come argomento a una routine, ma il codice generato da [RICHIAMO](../../assembler/masm/invoke.md) per passare altri argomenti ha eliminato il contenuto del registro di sistema.  
  
 L'ASCIA, ATTIVITÀ, registri AH, di EAX, di DX, di DL, il DH e di EDX può essere utilizzata dall'assemblatore per eseguire la conversione di dati.  
  
 Utilizzare un log diverso.  
  
## Vedere anche  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)