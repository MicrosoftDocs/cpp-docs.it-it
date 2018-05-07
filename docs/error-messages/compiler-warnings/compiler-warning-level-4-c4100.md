---
title: Compilatore (livello 4) avviso C4100 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4100
dev_langs:
- C++
helpviewer_keywords:
- C4100
ms.assetid: 478ed97d-e502-49e4-9afb-ac2a6c61194b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4d3cf831590af2e1f2f7cd13d93c9d13ba217e11
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-4-c4100"></a>Avviso del compilatore (livello 4) C4100
'identifier': parametro formale senza riferimenti  
  
 Il parametro formale non viene fatto riferimento nel corpo della funzione. Il parametro senza riferimento viene ignorato.  
  
 C4100 possono essere rilasciati anche quando il codice chiama un distruttore in un parametro di tipo primitivo senza riferimenti.  Si tratta di un limite del compilatore Visual C++.  
  
 L'esempio seguente genera l'errore C4100:  
  
```  
// C4100.cpp  
// compile with: /W4  
void func(int i) {   // C4100, delete the unreferenced parameter to  
                     //resolve the warning  
   // i;   // or, add a reference like this  
}  
  
int main()  
{  
   func(1);  
}  
```