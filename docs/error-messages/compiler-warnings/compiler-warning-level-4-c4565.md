---
title: Compilatore avviso (livello 4) C4565 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4565
dev_langs:
- C++
helpviewer_keywords:
- C4565
ms.assetid: a71f1341-a4a1-4060-ad1e-9322531883ed
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d3c4249783686c1fabb44395d3c092eca0d9230a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33293362"
---
# <a name="compiler-warning-level-4-c4565"></a>Avviso del compilatore (livello 4) C4565
'function': ridefinizione. il simbolo era dichiarato in precedenza con __declspec(modifier)  
  
 Un simbolo è stato ridefinito o ridichiarato e la seconda definizione o dichiarazione, diversamente dalla prima, non conteneva un `__declspec` modificatore (***modificatore***). Si tratta di un avviso informativo. Per risolvere questo problema, eliminare una delle definizioni.  
  
 L'esempio seguente genera l'errore C4565:  
  
```  
// C4565.cpp  
// compile with: /W4 /LD  
__declspec(noalias) void f();  
void f();   // C4565  
```