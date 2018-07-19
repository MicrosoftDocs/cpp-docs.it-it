---
title: while (istruzione) (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- while_cpp
dev_langs:
- C++
helpviewer_keywords:
- while keyword [C++]
- while keyword [C++], syntax
ms.assetid: 358dbe76-5e5e-4af5-b575-c2293c636899
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fc826b588f133abb93c9942e7907dd8b0fce9574
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943281"
---
# <a name="while-statement-c"></a>Istruzione while (C++)
Viene eseguito *istruzione* ripetutamente finché *espressione* restituisce zero.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
while ( expression )  
   statement  
```  
  
## <a name="remarks"></a>Note  
 Il test della *espressione* avviene prima di ogni esecuzione del ciclo; pertanto, un **mentre** ciclo viene eseguito zero o più volte. *espressione* deve essere di un tipo integrale, un tipo di puntatore, o un tipo di classe con una conversione non ambigua a un valore integrale o puntatore.  
  
 Un **mentre** ciclo può terminare anche quando un [interruzione](../cpp/break-statement-cpp.md), [goto](../cpp/goto-statement-cpp.md), oppure [restituire](../cpp/return-statement-cpp.md) all'interno dell'istruzione corpo viene eseguito. Uso [continuare](../cpp/continue-statement-cpp.md) per terminare l'iterazione corrente senza uscire dalle **mentre** ciclo. **continuare** passa il controllo all'iterazione successiva del **mentre** ciclo.  
  
 Il codice seguente usa un' **mentre** caratteri di sottolineatura ciclo al Taglia finali da una stringa:  
  
```cpp 
// while_statement.cpp  
  
#include <string.h>  
#include <stdio.h>  
char *trim( char *szSource )  
{  
    char *pszEOS = 0;  
  
    //  Set pointer to character before terminating NULL  
    pszEOS = szSource + strlen( szSource ) - 1;  
  
    //  iterate backwards until non '_' is found   
    while( (pszEOS >= szSource) && (*pszEOS == '_') )  
        *pszEOS-- = '\0';  
  
    return szSource;  
}  
int main()  
{  
    char szbuf[] = "12345_____";  
  
    printf_s("\nBefore trim: %s", szbuf);  
    printf_s("\nAfter trim: %s\n", trim(szbuf));  
}  
```  
  
 La condizione di terminazione viene valutata all'inizio del ciclo. In assenza di caratteri di sottolineatura finali, il ciclo non viene mai eseguito.  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzioni di iterazione](../cpp/iteration-statements-cpp.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Istruzione do-while (C++)](../cpp/do-while-statement-cpp.md)   
 [Istruzione for (C++)](../cpp/for-statement-cpp.md)   
 [Istruzione for basata su intervallo (C++)](../cpp/range-based-for-statement-cpp.md)