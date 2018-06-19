---
title: Compilatore (livello 1) Avviso C4083 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4083
dev_langs:
- C++
helpviewer_keywords:
- C4083
ms.assetid: e7d3344e-5645-4d56-8460-d1acc9145ada
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a0d0d7baa0e521484841c638cef4332001a65e78
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33277680"
---
# <a name="compiler-warning-level-1-c4083"></a>Compilatore (livello 1) Avviso C4083
previsto 'token'; trovare l'identificatore 'identifier'  
  
 Un identificatore si trova nella posizione sbagliata in un **#pragma** istruzione.  
  
## <a name="example"></a>Esempio  
  
```  
// C4083.cpp  
// compile with: /W1 /LD  
#pragma warning disable:4083    // C4083  
#pragma warning(disable:4083)   //correct  
```  
  
 Controllare la sintassi del [#pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md) direttive.