---
title: Errore del compilatore C3052 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3052
dev_langs:
- C++
helpviewer_keywords:
- C3052
ms.assetid: 87480c42-1ceb-4775-8d20-88c54a7bb6a6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 96db942b0ed50114378843b9f88fd77b2d24d771
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33244198"
---
# <a name="compiler-error-c3052"></a>Errore del compilatore C3052
'var': la variabile non appare in una clausola di condivisione dati in una clausola default(none)  
  
 Se viene usato [default(none)](../../parallel/openmp/reference/default-openmp.md) , qualsiasi variabile usata nel blocco strutturato deve essere specificata in modo esplicito come [shared](../../parallel/openmp/reference/shared-openmp.md) o [private](../../parallel/openmp/reference/private-openmp.md).  
  
 L'esempio seguente genera l'errore C3052:  
  
```  
// C3052.cpp  
// compile with: /openmp /c  
int main() {  
   int n1 = 1;  
  
   #pragma omp parallel default(none) // shared(n1) private(n1)  
   {  
      n1 = 0;   // C3052 use either a shared or private clause  
   }  
}  
```