---
title: Errore del compilatore C3038 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3038
dev_langs:
- C++
helpviewer_keywords:
- C3038
ms.assetid: 140ada3e-5636-43ef-a4ee-22a9f66a771f
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 3ddd3aaface0e500dc92778333cd3672398909da
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3038"></a>Errore del compilatore C3038
'var': la variabile nella clausola 'private' non può essere una variabile di riduzione nel contesto di inclusione  
  
 Le variabili incluse nella clausola [reduction](../../parallel/openmp/reference/reduction.md) di una direttiva parallela non possono essere specificate in una clausola [private](../../parallel/openmp/reference/private-openmp.md) in una direttiva per la condivisione del lavoro associata a un costrutto parallelo.  
  
 L'esempio seguente genera l'errore C3038:  
  
```  
// C3038.cpp  
// compile with: /openmp /c  
int g_i, g_i2;  
  
int main() {  
   int i;  
  
   #pragma omp parallel reduction(+: g_i)  
   {  
      #pragma omp for private(g_i)   // C3038  
      // try the following line instead  
      // #pragma omp for private(g_i2)  
      for (i = 0; i < 10; ++i)  
         g_i += i;  
   }  
}  
```
