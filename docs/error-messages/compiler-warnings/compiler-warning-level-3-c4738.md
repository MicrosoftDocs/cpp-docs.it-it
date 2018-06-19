---
title: Compilatore avviso (livello 3) C4738 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4738
dev_langs:
- C++
helpviewer_keywords:
- C4738
ms.assetid: 9094895f-7eec-46c2-83d3-249b761d585e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 50b94cde2f8809b8ce56dc599804d11b8d058166
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33291141"
---
# <a name="compiler-warning-level-3-c4738"></a>Avviso del compilatore (livello 3) C4738
archiviazione in memoria del risultato float a 32 bit, possibile riduzione delle prestazioni  
  
 C4738 avvisa che è stato passato il risultato di un'assegnazione, eseguire il cast, argomento o un'altra operazione debba essere arrotondato oppure che l'operazione ha esaurito i registri e necessarie per l'utilizzo di memoria (la distribuzione). Questo può comportare una riduzione delle prestazioni.  
  
 Per risolvere il problema ed evitare l'arrotondamento, eseguire la compilazione con [Fast](../../build/reference/fp-specify-floating-point-behavior.md) o utilizzare `double` anziché `float`.  
  
 Per risolvere il problema ed evitare di esaurire i registri, modificare l'ordine di calcolo e l'utilizzo di incorporamento  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
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