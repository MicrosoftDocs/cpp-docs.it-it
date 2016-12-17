---
title: "Avviso del compilatore (livello 1) C4167 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4167"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4167"
ms.assetid: 74a420bd-9371-4167-b1ee-74dd8680f97b
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4167
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

funzione: disponibile solo come funzione intrinseca  
  
 **\#pragma function** prova a forzare nel compilatore l'uso di una chiamata convenzionale a una funzione che deve essere usata nel formato intrinseco, pertanto la direttiva pragma viene ignorata.  
  
 Per evitare la visualizzazione dell'avviso, rimuovere **\#pragma function**.  
  
## Esempio  
  
```  
// C4167.cpp // compile with: /W1 #include <malloc.h> #pragma function(_alloca )   // C4167: _alloca() is intrinsic only int main(){}  
```