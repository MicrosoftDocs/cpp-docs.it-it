---
title: Compilatore avviso (livello 1) C4006 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4006
dev_langs:
- C++
helpviewer_keywords:
- C4006
ms.assetid: f1a59819-0fd2-4361-8e3a-99e4b514b8e1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9b6cb37e383f4bfb9dd7f070344141b49ddf4f54
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33276474"
---
# <a name="compiler-warning-level-1-c4006"></a>Avviso del compilatore (livello 1) C4006
\#undef previsto un identificatore  
  
 La direttiva `#undef` non ha specificato un identificatore di cui annullare la definizione. La direttiva è stata ignorata. Per risolvere l'avviso, verificare di aver specificato un identificatore. L'esempio seguente genera l'errore C4006:  
  
```  
// C4006.cpp  
// compile with: /W1  
#undef   // C4006  
  
// try..  
// #undef TEST  
  
int main() {  
}  
```