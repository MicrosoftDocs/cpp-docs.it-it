---
title: Errore del compilatore C3285 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3285
dev_langs:
- C++
helpviewer_keywords:
- C3285
ms.assetid: 04e8f210-d67e-4810-b153-e1efe2986c8f
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: a517ec1b163f3092b8dd161bee6cb348ab0129c1
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3285"></a>Errore del compilatore C3285
istruzione 'for each' non utilizzabile con variabili di tipo 'type'  
  
 L'istruzione `for each` ripete un gruppo di istruzioni incorporate per ciascun elemento di una matrice o di una raccolta di oggetti.  
  
 Per altre informazioni, vedere [for each, in](../../dotnet/for-each-in.md) .  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3285.  
  
```  
// C3285.cpp  
// compile with: /clr  
int main() {  
   for each (int i in 0) {}   // C3285   
  
   array<int> ^p = { 1, 2, 3 };  
   for each (int j in p) {}   // OK  
}  
```
