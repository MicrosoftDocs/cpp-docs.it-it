---
title: Errore del compilatore C3023 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3023
dev_langs:
- C++
helpviewer_keywords:
- C3023
ms.assetid: 89dcce98-3cd7-4931-a50f-87df1d2ebc9b
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 33de0d3890e7862ed72df6be6b7a157695c63ea9
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3023"></a>Errore del compilatore C3023
'value': rilevato token imprevisto nell'argomento della clausola 'clause' OpenMP  
  
 I valori passati a una clausola non erano validi.  
  
 L'esempio seguente genera l'errore C3023:  
  
```  
// C3023.cpp  
// compile with: /openmp /link vcomps.lib  
#include <stdio.h>  
#include "omp.h"  
  
int main() {  
   int i;  
  
   #pragma omp parallel for schedule(dynamic 10)   // C3023  
   for (i = 0; i < 10; ++i) ;  
  
   #pragma omp parallel for schedule(dynamic;10)   // C3023  
   for (i = 0; i < 10; ++i) ;  
  
   // OK  
   #pragma omp parallel for schedule(dynamic, 10)  
   for (i = 0; i < 10; ++i)  
   ;  
}  
```
