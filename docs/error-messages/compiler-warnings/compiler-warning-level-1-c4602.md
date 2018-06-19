---
title: Compilatore avviso (livello 1) C4602 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4602
dev_langs:
- C++
helpviewer_keywords:
- C4602
ms.assetid: c1f0300f-e2a2-4c9e-a7c3-4c7318d10509
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b2c25fd983f1ac7cebcc568a0b47c06c4d8e23a9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33279527"
---
# <a name="compiler-warning-level-1-c4602"></a>Avviso del compilatore (livello 1) C4602
\#pragma pop_macro: 'macro name' Nessuna #pragma push_macro per questo identificatore  
  
 Se si usa [pop_macro](../../preprocessor/pop-macro.md) per una determinata macro, è necessario aver prima passato il nome della macro a [push_macro](../../preprocessor/push-macro.md). Ad esempio, l'esempio seguente genera l'errore C4602:  
  
```  
// C4602.cpp  
// compile with: /W1  
int main()  
{  
   #pragma pop_macro("x")   // C4602 x is not on the stack  
}  
```