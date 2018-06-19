---
title: Compilatore (livello 2) Avviso C4156 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4156
dev_langs:
- C++
helpviewer_keywords:
- C4156
ms.assetid: 9adf3acb-c0fe-42a8-a4db-5822b1493f77
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 249d90712b4a8b02f10deaa4d87cdbb7a7c17ae3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33296449"
---
# <a name="compiler-warning-level-2-c4156"></a>Compilatore (livello 2) Avviso C4156
eliminazione di un'espressione di matrice senza utilizzare la forma di matrice di 'delete'. forma di matrice con cui sostituita  
  
 Formato non di matrice **eliminare** non è possibile eliminare una matrice. Il compilatore ha convertito **eliminare** per la forma di matrice.  
  
 Questo avviso viene visualizzato solo nelle estensioni Microsoft (/Ze).  
  
## <a name="example"></a>Esempio  
  
```  
// C4156.cpp  
// compile with: /W2  
int main()  
{  
   int (*array)[ 10 ] = new int[ 5 ][ 10 ];  
   delete array; // C4156, changed by compiler to "delete [] array;"  
}  
```