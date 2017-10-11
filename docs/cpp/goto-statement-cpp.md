---
title: Istruzione goto (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- goto_cpp
dev_langs:
- C++
helpviewer_keywords:
- goto keyword [C++]
ms.assetid: 724c5deb-2de1-42d8-8ef1-23589d9bf5ed
caps.latest.revision: 13
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 3bdad97f36902762f34816a04a4fc0c5c0c16856
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="goto-statement-c"></a>Istruzione goto (C++)
L'istruzione `goto` trasferisce incondizionatamente il controllo all'istruzione contrassegnata dall'identificatore specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
goto identifier;  
```  
  
## <a name="remarks"></a>Note  
 L'istruzione con etichetta designata da `identifier` deve essere nella funzione corrente. Tutti i nomi di `identifier` sono membri di uno spazio dei nomi interno e quindi non interferiscono con altri identificatori.  
  
 Un'etichetta di istruzione è significativa solo per un'istruzione `goto` In caso contrario, le etichette di istruzione vengono ignorate. Le etichette non possono essere ridichiarate.  
  
 Per uno stile di programmazione ottimale è consigliabile usare le istruzioni `break`, `continue` e `return` invece dell'istruzione `goto`, quando possibile. Tuttavia, poiché l'istruzione `break` consente di uscire solo da un livello di un ciclo, potrebbe essere necessario usare un'istruzione `goto` per uscire da un ciclo eccessivamente annidato.  
  
 Per ulteriori informazioni sulle etichette e `goto` istruzione, vedere [istruzioni con etichetta](../cpp/labeled-statements.md) e [utilizzo di etichette con l'istruzione goto](http://msdn.microsoft.com/en-us/6cd7c31a-9822-4241-8566-f79f51be48fe).  
  
## <a name="example"></a>Esempio  
 In questo esempio un'istruzione `goto` trasferisce il controllo al punto con etichetta `stop` quando `i` è uguale a 3.  
  
```  
// goto_statement.cpp  
#include <stdio.h>  
int main()  
{  
    int i, j;  
  
    for ( i = 0; i < 10; i++ )  
    {  
        printf_s( "Outer loop executing. i = %d\n", i );  
        for ( j = 0; j < 2; j++ )  
        {  
            printf_s( " Inner loop executing. j = %d\n", j );  
            if ( i == 3 )  
                goto stop;  
        }  
    }  
  
    // This message does not print:   
    printf_s( "Loop exited. i = %d\n", i );  
  
    stop:   
    printf_s( "Jumped to stop. i = %d\n", i );  
}  
```  
  
```Output  
Outer loop executing. i = 0  
 Inner loop executing. j = 0  
 Inner loop executing. j = 1  
Outer loop executing. i = 1  
 Inner loop executing. j = 0  
 Inner loop executing. j = 1  
Outer loop executing. i = 2  
 Inner loop executing. j = 0  
 Inner loop executing. j = 1  
Outer loop executing. i = 3  
 Inner loop executing. j = 0  
Jumped to stop. i = 3  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzioni di spostamento](../cpp/jump-statements-cpp.md)   
 [Parole chiave](../cpp/keywords-cpp.md)
