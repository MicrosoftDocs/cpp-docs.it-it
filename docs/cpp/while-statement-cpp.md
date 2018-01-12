---
title: while (istruzione) (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: while_cpp
dev_langs: C++
helpviewer_keywords:
- while keyword [C++]
- while keyword [C++], syntax
ms.assetid: 358dbe76-5e5e-4af5-b575-c2293c636899
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e93d31457beb3c1546b55d303fd71566176a9367
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="while-statement-c"></a>Istruzione while (C++)
Esegue *istruzione* ripetutamente finché *espressione* restituisce zero.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      while ( expression )  
   statement  
```  
  
## <a name="remarks"></a>Note  
 Il test di *espressione* avviene prima dell'esecuzione del ciclo; pertanto, un `while` il ciclo viene eseguito zero o più volte. *espressione* deve essere di tipo integrale, un tipo di puntatore o un tipo di classe con una conversione non ambigua a un tipo integrale o un tipo di puntatore.  
  
 Oggetto `while` ciclo può terminare anche quando un [interruzione](../cpp/break-statement-cpp.md), [goto](../cpp/goto-statement-cpp.md), o [restituire](../cpp/return-statement-cpp.md) all'interno dell'istruzione corpo viene eseguito. Utilizzare [continuare](../cpp/continue-statement-cpp.md) per terminare l'iterazione corrente senza uscire il `while` ciclo. **continuare** passa il controllo all'iterazione successiva del `while` ciclo.  
  
 Nel codice seguente viene utilizzato un ciclo `while` per tagliare i caratteri di sottolineatura finali di una stringa:  
  
```  
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