---
title: Errore del compilatore C3040 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3040
dev_langs:
- C++
helpviewer_keywords:
- C3040
ms.assetid: 29e857ac-74f0-4ec6-becf-9026e38c160e
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
ms.openlocfilehash: c08ab7349cf2087599a637fb8bbd06e68b00e332
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3040"></a>Errore del compilatore C3040
'var': il tipo di variabile nella clausola 'reduction' incompatibile con l'operatore di riduzione 'operator'  
  
 Una variabile in un [riduzione](../../parallel/openmp/reference/reduction.md) clausola non può essere utilizzata con l'operatore di riduzione.  
  
 L'esempio seguente genera l'errore C3040:  
  
```  
// C3040.cpp  
// compile with: /openmp /c  
#include "omp.h"  
double d;  
  
int main() {  
   #pragma omp parallel reduction(&:d)   // C3040  
      ;  
  
   #pragma omp parallel reduction(-:d)  // OK  
      ;  
}  
```
