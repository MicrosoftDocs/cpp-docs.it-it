---
title: Compilatore avviso (livello 1) C4606 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4606
dev_langs:
- C++
helpviewer_keywords:
- C4606
ms.assetid: c1b45fb6-672b-42eb-9e1c-c67b3e4150d3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bf9f0a954b48e2c8bd036651efa3e8a3e65b8e68
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4606"></a>Avviso del compilatore (livello 1) C4606
\#avviso pragma: 'numero_avviso' ignorato. Avvisi dell'analisi codice non sono associati livelli di avviso  
  
 Per gli avvisi di analisi del codice, solo `error`, `once`, e `default` sono supportati con il [avviso](../../preprocessor/warning.md) pragma.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4606.  
  
```  
// C4606.cpp  
// compile with: /c /W1  
#pragma warning(1: 6001)   // C4606  
#pragma warning(once: 6001)   // OK  
```