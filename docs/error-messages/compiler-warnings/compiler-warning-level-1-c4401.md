---
title: "Avviso del compilatore (livello 1) C4401 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4401"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4401"
ms.assetid: 2e7ca136-f144-4b40-b847-82976e8643fc
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4401
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'campo di bit': il membro è un campo di bit  
  
 Il codice assembly inline tenta di accedere a un membro del campo di bit.  Poiché il codice assembly inline non può accedere a questo tipo di membro, viene utilizzato l'ultimo limite di compressione prima del membro del campo di bit.  
  
 Per evitare la visualizzazione dell'avviso, effettuare il cast del campo di bit in un tipo appropriato prima di creare il riferimento nel codice assembly inline.  Il seguente codice di esempio genera l'errore C4401:  
  
```  
// C4401.cpp  
// compile with: /W1  
// processor: x86  
typedef struct bitfield {  
   signed bit : 1;  
} mybitfield;  
  
int main() {  
   mybitfield bf;  
   bf.bit = 0;  
   __asm {  
      mov bf.bit,0;   // C4401  
   }  
  
   /* use the following __asm block to resolve the warning  
   int i = (int)bf.bit;  
   __asm {  
      mov i,0;  
   }  
   */  
}  
```