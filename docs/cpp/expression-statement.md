---
title: "Istruzione di espressione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "istruzioni di espressione"
  - "istruzioni, espressione"
ms.assetid: 547d7f7a-58be-4ffc-a4b3-d64c7ae7538c
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzione di espressione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le istruzioni di espressione determinano la valutazione delle espressioni.  Un'istruzione di espressione non dà come risultato alcun controllo o iterazione.  
  
 La sintassi per l'istruzione di espressione è semplicemente  
  
## Sintassi  
  
```  
[expression ] ;  
```  
  
## Note  
 Tutte le espressioni in un'istruzione di espressione vengono valutate e tutti gli effetti collaterali vengono completati prima che l'istruzione successiva venga eseguita.  Le istruzioni di espressione più comuni sono assegnazioni e chiamate di funzione.  Poiché l'espressione è facoltativa, un punto e virgola da solo è considerato un'istruzione di espressione vuota, che è denominata istruzione [null](../cpp/null-statement.md).  
  
## Vedere anche  
 [Cenni preliminari sulle istruzioni C\+\+](../cpp/overview-of-cpp-statements.md)