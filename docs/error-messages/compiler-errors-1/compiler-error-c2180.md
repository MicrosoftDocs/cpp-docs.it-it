---
title: Errore del compilatore C2180 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2180
dev_langs:
- C++
helpviewer_keywords:
- C2180
ms.assetid: ea71b39e-b977-48a7-b7bd-af68ef5e263b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fdea36a8c6c7bf5e561c161dc7180ab3b563c0ee
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2180"></a>Errore del compilatore C2180
l'espressione di controllo ha tipo 'tipo'  
  
 L'espressione di controllo in un'istruzione `if`, `while`, `for` o `do` è un cast dell'espressione a `void`. Per risolvere il problema, sostituire l'espressione di controllo con una che produce un valore `bool` o un tipo che può essere convertito in `bool`.  
  
 L'esempio seguente genera l'errore C2180:  
  
```  
// C2180.c  
  
int main() {  
   while ((void)1)   // C2180  
      return 1;  
   while (1)         // OK  
      return 0;  
}  
```