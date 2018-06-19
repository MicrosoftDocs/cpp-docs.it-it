---
title: Compilatore (livello 3) Avviso C4316 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4316
dev_langs:
- C++
helpviewer_keywords:
- C4316
ms.assetid: 10371f01-aeb8-40ac-a290-59e63efa5ad4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 609f3bbe9f338c5d53491190512ce2b9c290cdb8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33298382"
---
# <a name="compiler-warning-level-3-c4316"></a>Compilatore (livello 3) Avviso C4316
Oggetto allocato nell'heap potrebbe non essere allineato per questo tipo.  
  
 Un oggetto eccessiva allineato allocato utilizzando `operator new` potrebbe non disporre l'allineamento specificato. Eseguire l'override [operatore new](../../c-runtime-library/operator-new-crt.md) e [operatore delete](../../c-runtime-library/operator-delete-crt.md) per eccesso tipi allineati in modo che utilizzino le routine di allocazione allineata, ad esempio, [aligned_malloc](../../c-runtime-library/reference/aligned-malloc.md) e [aligned_free](../../c-runtime-library/reference/aligned-free.md). L'esempio seguente genera l'errore C4316:  
  
```cpp  
// C4316.cpp  
// Test: cl /W3 /c C4316.cpp  
  
__declspec(align(32)) struct S {}; // C4324  
  
int main() {  
    new S; // C4316  
}  
```