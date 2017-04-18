---
title: Errore del compilatore C3038 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 32a63dcc218d7319b74a4b6941b2b25d6910e4a5
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3038"></a>Errore del compilatore C3038
'var': la variabile nella clausola 'private' non può essere una variabile di riduzione nel contesto di inclusione  
  
 Le variabili incluse nella [riduzione](../../parallel/openmp/reference/reduction.md) clausola di una direttiva parallela non può essere specificata in un [privata](../../parallel/openmp/reference/private-openmp.md) clausola in una direttiva di condivisione del lavoro che viene associato a un costrutto parallelo.  
  
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
