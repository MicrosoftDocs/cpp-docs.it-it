---
title: Compilatore avviso (livello 1) C4715 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4715
dev_langs:
- C++
helpviewer_keywords:
- C4715
ms.assetid: 1c819bf7-0d8b-4f5e-b338-9cc292870439
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2b060585cd3ba6b51c9c91d42e5f3fecaf74ae1b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4715"></a>Avviso del compilatore (livello 1) C4715
'function': non tutti i percorsi di controllo restituiscono un valore  
  
 La funzione specificata potenzialmente non può restituire un valore.  
  
## <a name="example"></a>Esempio  
  
```  
// C4715a.cpp  
// compile with: /W1 /LD  
int func1( int i )  
{  
   if( i )  
   return 3;  // C4715 warning, nothing returned if i == 0  
}  
```  
  
 Per evitare questo avviso, modificare il codice in modo che tutti i percorsi di assegnino un valore restituito della funzione:  
  
```  
// C4715b.cpp  
// compile with: /LD  
int func1( int i )  
{  
   if( i ) return 3;  
   else return 0;     // OK, always returns a value  
}  
```  
  
 È possibile che il codice può contenere una chiamata a una funzione che non restituisce mai, come nell'esempio seguente:  
  
```  
// C4715c.cpp  
// compile with: /W1 /LD  
void fatal()  
{  
}  
int glue()  
{  
   if(0)  
      return 1;  
   else if(0)  
      return 0;  
   else  
      fatal();   // C4715  
}  
```  
  
 Questo codice genera un avviso, anche perché il compilatore non riconosce che `fatal` non restituisce mai. Per impedire che questo codice di generazione di un messaggio di errore, dichiarare `fatal` utilizzando [__declspec(noreturn)](../../cpp/noreturn.md).