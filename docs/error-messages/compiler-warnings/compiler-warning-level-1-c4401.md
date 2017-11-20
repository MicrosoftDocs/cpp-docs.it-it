---
title: Compilatore avviso (livello 1) C4401 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4401
dev_langs: C++
helpviewer_keywords: C4401
ms.assetid: 2e7ca136-f144-4b40-b847-82976e8643fc
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: cabb50ca025390cd00f4c9db68f3aa97d606fa57
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4401"></a>Avviso del compilatore (livello 1) C4401
'campo di bit': membro è un campo di bit  
  
 Il codice assembly inline tenta di accedere a un membro di campo di bit. Assembly inline non possono accedere i membri di campo di bit, all'ultimo limite di compressione prima del membro di campo di bit viene utilizzato.  
  
 Per evitare questo avviso, eseguire il cast il campo di bit a un tipo appropriato prima di creare il riferimento nel codice assembly inline. L'esempio seguente genera l'errore C4401:  
  
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