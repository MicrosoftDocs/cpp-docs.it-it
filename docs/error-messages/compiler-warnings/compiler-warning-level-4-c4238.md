---
title: "Avviso del compilatore (livello 4) C4238 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4238"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4238"
ms.assetid: 5d4051d3-7b0f-43ea-8c8d-d194bfdceb71
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso del compilatore (livello 4) C4238
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata estensione non standard: rvalue di classe utilizzato come lvalue  
  
 Per la compatibilità con le versioni di Visual C\+\+ precedenti, le estensioni Microsoft \(**\/Ze**\) consentono di utilizzare un tipo di classe come rvalue in un contesto che ne accetta l'indirizzo in modo implicito o esplicito.  In alcuni casi, questa operazione può essere rischiosa, come nell'esempio riportato di seguito.  
  
## Esempio  
  
```  
// C4238.cpp  
// compile with: /W4 /c  
struct C {  
   C() {}  
};  
  
C * pC = &C();   // C4238  
```  
  
 Questa procedura genera un errore in compatibilità ANSI \([\/Za](../../build/reference/za-ze-disable-language-extensions.md)\).