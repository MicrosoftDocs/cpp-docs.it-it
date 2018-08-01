---
title: si-while istruzione (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- do_cpp
dev_langs:
- C++
helpviewer_keywords:
- do keyword [C++], do-while
- do-while keyword [C++]
- do keyword [C++]
- while keyword [C++], do-while
ms.assetid: e01e6f7c-7da1-4591-87f9-c26ff848e7b0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5db832a7c6c380e43fcf5edb3f36ce1a1bf692e6
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39404717"
---
# <a name="do-while-statement-c"></a>Istruzione do-while (C++)
Esegue una *istruzione* ripetutamente finché la condizione di chiusura specificata (il *espressione*) restituisce zero.  
  
## <a name="syntax"></a>Sintassi  
  
```  
do  
   statement  
while ( expression ) ;  
```  
  
## <a name="remarks"></a>Note  
 Il test della condizione di chiusura viene eseguito dopo ogni esecuzione del ciclo; Pertanto, un **scopo-mentre** ciclo viene eseguito una o più volte, a seconda del valore dell'espressione di chiusura. Il **è-mentre** istruzione può terminare anche quando una [interruzione](../cpp/break-statement-cpp.md), [goto](../cpp/goto-statement-cpp.md), o [restituire](../cpp/return-statement-cpp.md) istruzione viene eseguita nel corpo dell'istruzione.  
  
 *espressione* deve essere di tipo puntatore o aritmetico. L'esecuzione procede nel modo seguente:  
  
1.  Viene eseguito il corpo dell'istruzione.  
  
2.  Viene quindi valutato *expression*. Se *espressione* è false, il **scopo-mentre** istruzione termina e il controllo passa all'istruzione successiva nel programma. Se *expression* è true (diverso da zero), il processo viene ripetuto a partire dal passaggio 1.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato il **scopo-mentre** istruzione:  
  
```cpp 
// do_while_statement.cpp  
#include <stdio.h>  
int main()  
{  
    int i = 0;  
    do  
    {  
        printf_s("\n%d",i++);  
    } while (i < 3);  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzioni di iterazione](../cpp/iteration-statements-cpp.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Istruzione while (C++)](../cpp/while-statement-cpp.md)   
 [Istruzione for (C++)](../cpp/for-statement-cpp.md)   
 [Istruzione for basata su intervallo (C++)](../cpp/range-based-for-statement-cpp.md)