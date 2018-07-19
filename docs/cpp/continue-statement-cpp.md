---
title: Istruzioni continue (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- continue_cpp
dev_langs:
- C++
helpviewer_keywords:
- continue keyword [C++]
ms.assetid: 3c94ee57-f732-4c1d-8537-d0ce5382bfd4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 97422a09f890686c4d414eea13da7db891494cc4
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943865"
---
# <a name="continue-statement-c"></a>Istruzioni continue (C++)
Forza il trasferimento del controllo per l'espressione di controllo di inclusione più piccolo [scopo](../cpp/do-while-statement-cpp.md), [per](../cpp/for-statement-cpp.md), o [mentre](../cpp/while-statement-cpp.md) ciclo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
continue;  
```  
  
## <a name="remarks"></a>Note  
 Alcune istruzioni restanti nell'iterazione corrente non vengono eseguite. L'iterazione successiva del ciclo è determinata nel modo seguente:  
  
-   In un **effettuare** o **mentre** ciclo, l'iterazione successiva inizia rivalutando l'espressione di controllo del **eseguire** o **mentre** istruzione.  
  
-   In un **per** ciclo (usando la sintassi `for`(`init-expr`; `cond-expr`; `loop-expr`)), il `loop-expr` clausola viene eseguita. La clausola `cond-expr` viene rivalutata e, a seconda del risultato, il ciclo termina o si verifica un'altra iterazione.  
  
 L'esempio seguente illustra come la **continuare** istruzione può essere utilizzata per ignorare le sezioni di codice e avviare l'iterazione successiva di un ciclo.  
  
## <a name="example"></a>Esempio  
  
```cpp 
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