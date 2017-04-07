---
title: Compilatore avviso (livello 3) C4738 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4738
dev_langs:
- C++
helpviewer_keywords:
- C4738
ms.assetid: 9094895f-7eec-46c2-83d3-249b761d585e
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: ce2db890b7b90eedf5b4456e875a06f8f92b0289
ms.lasthandoff: 04/04/2017

---
# <a name="compiler-warning-level-3-c4738"></a>Avviso del compilatore (livello 3) C4738
archiviazione in memoria del risultato float a 32 bit, possibile riduzione delle prestazioni  
  
 C4738 avvisa che il risultato di un'assegnazione, eseguire il cast, passato argomento o un'altra operazione debba essere arrotondato oppure che l'operazione ha esaurito i registri e necessarie per l'utilizzo di memoria (la distribuzione). Questo può comportare una riduzione delle prestazioni.  
  
 Per risolvere il problema ed evitare l'arrotondamento, eseguire la compilazione con [Fast](../../build/reference/fp-specify-floating-point-behavior.md) o utilizzare `double` anziché `float`.  
  
 Per risolvere il problema ed evitare di esaurire i registri, modificare l'ordine di calcolo e l'utilizzo di incorporamento  
  
 Per impostazione predefinita, questo avviso non è attivo. Per ulteriori informazioni, vedere [gli avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4738:  
  
```  
// C4738.cpp  
// compile with: /c /fp:precise /O2 /W3  
// processor: x86  
#include <stdio.h>  
  
#pragma warning(default : 4738)  
  
float func(float f)  
{  
    return f;  
}  
  
int main()  
{  
    extern float f, f1, f2;  
    double d = 0.0;  
  
    f1 = func(d);  
    f2 = (float) d;  
    f = f1 + f2;   // C4738  
    printf_s("%f\n", f);  
}  
```
