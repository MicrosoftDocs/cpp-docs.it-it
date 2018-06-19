---
title: Errore del compilatore C3023 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3023
dev_langs:
- C++
helpviewer_keywords:
- C3023
ms.assetid: 89dcce98-3cd7-4931-a50f-87df1d2ebc9b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7ddae81dbad5f828b754c97247527a891e8c0e2c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33242157"
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