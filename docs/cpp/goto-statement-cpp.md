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
ms.openlocfilehash: 38d022cb3b7f2672ffe7dba6a6d9d4952fa21616
ms.sourcegitcommit: 7f3df9ff0310a4716b8136ca20deba699ca86c6c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/21/2018
ms.locfileid: "42572580"
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

Oggetto **goto** istruzione non è consentita per trasferire il controllo in una posizione che ignora l'inizializzazione di qualsiasi variabile nell'ambito in tale percorso. Nell'esempio seguente genera C2362:

```cpp
int goto_fn(bool b)
{
    if (!b)
    {
        goto exit;  // C2362
    }
    else
    { /*...*/ }

    int error_code = 42;

exit:
    return error_code;
}
```
  
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
