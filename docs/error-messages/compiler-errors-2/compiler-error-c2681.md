---
title: Errore del compilatore C2681 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2681
dev_langs:
- C++
helpviewer_keywords:
- C2681
ms.assetid: eb42da6d-8d2c-43fd-986b-e73e2b004885
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1e35cf6effdbb5aaed5a898bf19a6b42c3df519e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2681"></a>Errore del compilatore C2681
'type': tipo di espressione non valida per nome  
  
 Un operatore di cast ha tentato di eseguire la conversione da un tipo non valido. Ad esempio, se si utilizza il [dynamic_cast](../../cpp/dynamic-cast-operator.md) per convertire un'espressione in un tipo di puntatore, l'espressione di origine deve essere un puntatore.  
  
 L'esempio seguente genera l'errore C2681:  
  
```  
// C2681.cpp  
class A { virtual void f(); };  
  
void g(int i) {  
    A* pa;  
    pa = dynamic_cast<A*>(i);  // C2681  
}  
```