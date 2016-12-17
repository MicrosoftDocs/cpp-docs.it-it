---
title: "Avviso del compilatore (livello 1) C4083 | Microsoft Docs"
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
  - "C4083"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4083"
ms.assetid: e7d3344e-5645-4d56-8460-d1acc9145ada
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4083
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Previsto 'token'. Trovato l'identificatore 'identificatore'  
  
 Un identificatore si trova nel punto errato di un'istruzione **\#pragma**.  
  
## Esempio  
  
```  
// C4083.cpp  
// compile with: /W1 /LD  
#pragma warning disable:4083    // C4083  
#pragma warning(disable:4083)   //correct  
```  
  
 Controllare la sintassi delle direttive [\#pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md).