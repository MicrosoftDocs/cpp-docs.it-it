---
title: Istruzioni continue (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: continue_cpp
dev_langs: C++
helpviewer_keywords: continue keyword [C++]
ms.assetid: 3c94ee57-f732-4c1d-8537-d0ce5382bfd4
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 7ae5093f26cb46b30cf01d453a51df2585bee534
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="continue-statement-c"></a>Istruzioni continue (C++)
Forza il trasferimento del controllo per l'espressione di controllo di inclusione più piccolo [si](../cpp/do-while-statement-cpp.md), [per](../cpp/for-statement-cpp.md), o [mentre](../cpp/while-statement-cpp.md) ciclo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
continue;  
```  
  
## <a name="remarks"></a>Note  
 Alcune istruzioni restanti nell'iterazione corrente non vengono eseguite. L'iterazione successiva del ciclo è determinata nel modo seguente:  
  
-   In un ciclo `do` o `while`, l'iterazione successiva inizia rivalutando l'espressione di controllo dell'istruzione `do` o `while`.  
  
-   In un ciclo `for` (utilizzando la sintassi `for`(`init-expr`; `cond-expr`; `loop-expr`)), la clausola `loop-expr` viene eseguita. La clausola `cond-expr` viene rivalutata e, a seconda del risultato, il ciclo termina o si verifica un'altra iterazione.  
  
 Di seguito viene illustrato come l'istruzione `continue` può essere utilizzata per ignorare le sezioni di codice e avviare l'iterazione successiva di un ciclo.  
  
## <a name="example"></a>Esempio  
  
```  
// continue_statement.cpp  
#include <stdio.h>  
int main()  
{  
    int i = 0;  
    do  
    {  
        i++;  
        printf_s("before the continue\n");  
        continue;  
        printf("after the continue, should never print\n");  
     } while (i < 3);  
  
     printf_s("after the do loop\n");  
}  
```  
  
```Output  
before the continue  
before the continue  
before the continue  
after the do loop  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzioni di spostamento](../cpp/jump-statements-cpp.md)   
 [Parole chiave](../cpp/keywords-cpp.md)