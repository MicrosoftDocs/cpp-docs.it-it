---
title: Errore del compilatore C3007 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3007
dev_langs:
- C++
helpviewer_keywords:
- C3007
ms.assetid: e415ef42-bdc9-4f32-8198-5e25b289a089
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d1424683db17247c6e31d0d26bce31f420353968
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33262390"
---
# <a name="compiler-error-c3007"></a>Errore del compilatore C3007
'arg': la clausola nella direttiva 'directive' OpenMP non accetta un argomento  
  
 È stato specificato un argomento in una direttiva OpenMP che non accetta argomenti.  
  
 L'esempio seguente genera l'errore C3007:  
  
```  
// C3007.c  
// compile with: /openmp  
int main()  
{  
   #pragma omp parallel for ordered(2)   // C3007  
}  
```