---
title: Errore del compilatore C2141 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2141
dev_langs:
- C++
helpviewer_keywords:
- C2141
ms.assetid: 10cf770f-0500-4220-ac90-a863b7ea5fe6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9b10ec44943aa7e50388708bb1b73a0b37291a63
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33167294"
---
# <a name="compiler-error-c2141"></a>Errore del compilatore C2141
overflow della dimensione della matrice  
  
 Una matrice supera il limite di 2GB. Ridurre le dimensioni della matrice.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2141.  
  
```  
// C2141.cpp  
// processor: IPF  
class A {  
   short m_n;  
};  
  
int main()  
{  
   A* pA = (A*)(-1);  
   pA = new A[0x8000000000000001];   // C2141  
  
   A* pA2 = (A*)(-1);  
   pA2 = new A[0x80000000000000F];   // OK  
}  
```