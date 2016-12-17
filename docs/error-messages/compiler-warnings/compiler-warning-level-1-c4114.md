---
title: "Avviso del compilatore (livello 1) C4114 | Microsoft Docs"
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
  - "C4114"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4114"
ms.assetid: 3983e1c6-e8bb-46dc-8894-e1827db48797
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4114
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

stesso qualificatore di tipo utilizzato più di una volta  
  
 In una dichiarazione o definizione di tipo viene utilizzato più volte un qualificatore di tipo \(**const**, `volatile`, **signed** o `unsigned`\).  Questa situazione determina la generazione di un avviso con le estensioni Microsoft \(\/Ze\) e di un errore in compatibilità ANSI \(\/Za\).  
  
 Il seguente codice di esempio genera l'errore C4114:  
  
```  
// C4114.cpp  
// compile with: /W1 /c  
volatile volatile int i;   // C4114  
```  
  
 Il seguente codice di esempio genera l'errore C4114:  
  
```  
// C4114_b.cpp  
// compile with: /W1 /c  
static const int const * ii;   // C4114  
static const int * const iii;   // OK  
```