---
title: Compilatore avviso (livello 1) C4273 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4273
dev_langs:
- C++
helpviewer_keywords:
- C4273
ms.assetid: cc18611d-9454-40a4-ad73-69823d5888fb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f37a9a2337c9f6a96091f9972b0308965c2bdc3c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33276594"
---
# <a name="compiler-warning-level-1-c4273"></a>Avviso del compilatore (livello 1) C4273
'function': collegamento DLL non coerente  
  
 Due definizioni in un file utilizzano in modo diverso di [dllimport](../../cpp/dllexport-dllimport.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4273.  
  
```  
// C4273.cpp  
// compile with: /W1 /c  
char __declspec(dllimport) c;  
char c;   // C4273, delete this line or the line above to resolve  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4273.  
  
```  
// C4273_b.cpp  
// compile with: /W1 /clr /c  
#include <stdio.h>  
extern "C" int printf_s(const char *, ...);   // C4273  
```