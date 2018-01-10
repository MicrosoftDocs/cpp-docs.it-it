---
title: Compilatore (livello 3) Avviso C4316 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4316
dev_langs: C++
helpviewer_keywords: C4316
ms.assetid: 10371f01-aeb8-40ac-a290-59e63efa5ad4
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8aaa769ddab0f0fc297a153a3d12cacd23e3c12e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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