---
title: Istruzione goto (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- goto_cpp
dev_langs:
- C++
helpviewer_keywords:
- goto keyword [C++]
ms.assetid: 724c5deb-2de1-42d8-8ef1-23589d9bf5ed
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9aae9429754dab8c539d7b94e70db72d33e4f13b
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39402572"
---
# <a name="goto-statement-c"></a>Istruzione goto (C++)
Il **goto** istruzione trasferisce il controllo all'istruzione contrassegnata dall'identificatore specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
goto identifier;  
```  
  
## <a name="remarks"></a>Note  
 L'istruzione con etichetta designata da `identifier` deve essere nella funzione corrente. Tutti i nomi di `identifier` sono membri di uno spazio dei nomi interno e quindi non interferiscono con altri identificatori.  
  
 Un'etichetta di istruzione è significativa solo a un **goto** istruzione; in caso contrario, vengono ignorate le etichette di istruzione. Le etichette non possono essere ridichiarate.  
  
 È buona norma programmare lo stile da utilizzare il **break**, **continuare**, e **restituire** istruzioni anziché il **goto** istruzione ogni volta che possibili. Tuttavia, poiché il **interruzione** istruzione consente di uscire da un solo livello di un ciclo, potrebbe essere necessario usare un **goto** istruzione per uscire da un ciclo eccessivamente annidato.  
  
 Per altre informazioni sulle etichette e la **goto** istruzione, vedere [istruzioni con etichetta](../cpp/labeled-statements.md).  
  
## <a name="example"></a>Esempio  
 In questo esempio, un **goto** istruzione trasferisce il controllo al punto etichettato `stop` quando `i` è uguale a 3.  
  
```cpp  
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