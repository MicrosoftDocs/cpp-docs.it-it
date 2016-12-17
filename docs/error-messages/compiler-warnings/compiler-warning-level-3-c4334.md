---
title: "Avviso del compilatore (livello 3) C4334 | Microsoft Docs"
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
  - "C4334"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4334"
ms.assetid: d845857f-bc95-4faf-a079-626a0cf935ba
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4334
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operatore': risultato dello shift a 32 bit convertito in 64 bit in modo implicito \(si intendeva eseguire lo shift a 64\-bit?\)  
  
 Il risultato dello shift a 32 bit è stato convertito in 64 bit in modo implicito, ma è possibile che si intendesse eseguire lo shift a 64 bit.  Per risolvere il problema, utilizzare lo shift a 64 bit o eseguire il cast del risultato dello shift in modo esplicito su 64 bit.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4334:  
  
```  
// C4334.cpp  
// compile with: /W3 /c  
void SetBit(unsigned __int64 *p, int i) {  
   *p |= (1 << i);   // C4334  
   *p |= (1i64 << i);   // OK  
}  
```