---
title: Compilatore avviso (livello 4) C4668 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4668
dev_langs:
- C++
helpviewer_keywords:
- C4668
ms.assetid: c6585460-bc4a-4a15-9242-4cbfce53c961
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 08a6349e867382a327f53676583f5daad7df80dd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33294336"
---
# <a name="compiler-warning-level-4-c4668"></a>Avviso del compilatore (livello 4) C4668
'simbolo' non è definita come macro del preprocessore. Sostituzione con '0' per 'direttive'  
  
 Utilizzato un simbolo che non è stato definito con una direttiva del preprocessore. Il simbolo restituirà false. Per definire un simbolo, è possibile utilizzare il [#define (direttiva)](../../preprocessor/hash-define-directive-c-cpp.md) o [/D](../../build/reference/d-preprocessor-definitions.md) l'opzione del compilatore.  
  
 Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4668:  
  
```  
// C4668.cpp  
// compile with: /W4  
#include <stdio.h>  
  
#pragma warning (default : 4668)   // turn warning on  
  
int main()   
{  
    #if q   // C4668, q is not defined  
        printf_s("defined");  
    #else  
        printf_s("undefined");  
    #endif  
}  
```