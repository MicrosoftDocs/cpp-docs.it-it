---
title: Compilatore avviso (livello 1) C4822 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4822
dev_langs:
- C++
helpviewer_keywords:
- C4822
ms.assetid: 0f231a30-2eb0-4722-aaa0-e2d19d3e7eea
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d9491d522c65eba3599c3618d510c57b55682876
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33283022"
---
# <a name="compiler-warning-level-1-c4822"></a>Avviso del compilatore (livello 1) C4822
'member': una funzione membro della classe locale non ha corpo  
  
 Una funzione membro della classe locale è stata dichiarata ma non definita nella classe. Per usare una funzione membro della classe locale, è necessario definirla nella classe. Non è possibile dichiararla nella classe e definirla all'esterno della classe.  
  
 Qualsiasi definizione esterna alla classe per una funzione membro della classe locale costituisce un errore.  
  
 L'esempio seguente genera l'errore C4822:  
  
```  
// C4822.cpp  
// compile with: /W1  
int main() {  
   struct C {  
      void func1(int);   // C4822  
      // try the following line instead  
      // void func1(int){}  
  };  
}  
```