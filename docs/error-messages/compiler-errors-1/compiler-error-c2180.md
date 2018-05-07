---
title: Errore del compilatore C2180 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2180
dev_langs:
- C++
helpviewer_keywords:
- C2180
ms.assetid: ea71b39e-b977-48a7-b7bd-af68ef5e263b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a43c179b837e840f800a6c468efdd9cdd6a6604b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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