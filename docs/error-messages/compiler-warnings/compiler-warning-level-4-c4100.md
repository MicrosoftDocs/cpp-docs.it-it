---
title: Compilatore (livello 4) avviso C4100 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4100
dev_langs: C++
helpviewer_keywords: C4100
ms.assetid: 478ed97d-e502-49e4-9afb-ac2a6c61194b
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 72236ee0c100388906689121a0936daf23c58e89
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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