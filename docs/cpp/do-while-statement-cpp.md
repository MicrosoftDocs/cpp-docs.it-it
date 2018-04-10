---
title: eseguire-mentre l'istruzione (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-language
ms.tgt_pltfrm: ''
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
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7e03a20ad2b49d5c9337e0c8250e5d7c321ee882
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="do-while-statement-c"></a>Istruzione do-while (C++)
Esegue un *istruzione* ripetutamente finché la condizione di chiusura specificata (il *espressione*) restituisce zero.  
  
## <a name="syntax"></a>Sintassi  
  
```  
do  
   statement  
while ( expression ) ;  
```  
  
## <a name="remarks"></a>Note  
 Il test della condizione di chiusura viene eseguito dopo ogni esecuzione del ciclo; pertanto, un ciclo `do-while` viene eseguito una o più volte, a seconda del valore dell'espressione di chiusura. Il `do-while` istruzione può terminare anche quando un [interruzione](../cpp/break-statement-cpp.md), [goto](../cpp/goto-statement-cpp.md), o [restituire](../cpp/return-statement-cpp.md) nel corpo dell'istruzione viene eseguita l'istruzione.  
  
 *espressione* deve essere di tipo puntatore o aritmetico. L'esecuzione procede nel modo seguente:  
  
1.  Viene eseguito il corpo dell'istruzione.  
  
2.  Viene quindi valutato *expression*. Se *expression* è false, l'istruzione `do-while` termina e il controllo passa all'istruzione successiva nel programma. Se *expression* è true (diverso da zero), il processo viene ripetuto a partire dal passaggio 1.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene mostrato l'utilizzo dell'istruzione `do-while`:  
  
```  
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