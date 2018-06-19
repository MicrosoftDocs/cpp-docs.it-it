---
title: Compilatore avviso (livello 1) C4630 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4630
dev_langs:
- C++
helpviewer_keywords:
- C4630
ms.assetid: d8926376-7acc-4fc7-8438-6f0de3468870
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6d3db4e42e4bd54e1d2bd5af0eb6b19ce0fea1e2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33283312"
---
# <a name="compiler-warning-level-1-c4630"></a>Avviso del compilatore (livello 1) C4630
'symbol': identificatore classe di archiviazione 'extern' non valido nella definizione di membro  
  
 Un membro dati o una funzione membro è definita come `extern`. Membri non possono essere esterni, anche se possano interi oggetti. Il compilatore ignora la `extern` (parola chiave). L'esempio seguente genera l'errore C4630:  
  
```  
// C4630.cpp  
// compile with: /W1 /LD  
class A {  
   void func();  
};  
  
extern void A::func() {   // C4630, remove 'extern' to resolve  
}  
```