---
title: Istruzioni goto e con etichetta (C) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- goto
dev_langs:
- C++
helpviewer_keywords:
- labeled statement
- statements, labeled
- goto keyword [C]
ms.assetid: 3d0473dc-4b18-4fcc-9616-31a38499d7d7
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 2e42906c932375ec62597868f7c106712bd25cbc
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="goto-and-labeled-statements-c"></a>Istruzioni goto e con etichetta (C)
L'istruzione `goto` trasferisce il controllo a un'etichetta. L'etichetta specificata deve risiedere nella stessa funzione e può apparire solo prima di un'istruzione nella stessa funzione.  
  
## <a name="syntax"></a>Sintassi  
 *istruzione*:  
 *labeled-statement*  
  
 *jump-statement*  
  
 *jump-statement*:  
 **goto**  *identifier*  **;**  
  
 *labeled-statement*:  
 *identifier*  **:**  *statement*  
  
 Un'etichetta dell'istruzione è significativa solo a un'istruzione `goto`; in qualsiasi altro contesto, un'istruzione contrassegnata viene eseguita indipendentemente dall'etichetta.  
  
 Un elemento *jump-statement* deve risiedere nella stessa funzione e può apparire prima di una sola istruzione nella stessa funzione. Il set di nomi *identifier* che segue `goto` dispone del proprio spazio nomi in modo che i nomi non interferiscano con altri identificatori. Le etichette non possono essere ridichiarate. Per altre informazioni, vedere [Spazi dei nomi](../c-language/name-spaces.md).  
  
 Per uno stile di programmazione ottimale è consigliabile preferire le istruzioni **break**, **continue** e `return` all'istruzione `goto` quando possibile. Dato che l'istruzione **break** termina solo un livello del ciclo, potrebbe essere necessaria un'istruzione `goto` per uscire da un ciclo incluso in un ciclo annidato più interno.  
  
 In questo esempio viene illustrata l'istruzione `goto`:  
  
```  
// goto.c  
#include <stdio.h>  
  
int main()  
{  
    int i, j;  
  
    for ( i = 0; i < 10; i++ )  
    {  
        printf_s( "Outer loop executing. i = %d\n", i );  
        for ( j = 0; j < 3; j++ )  
        {  
            printf_s( " Inner loop executing. j = %d\n", j );  
            if ( i == 5 )  
                goto stop;  
        }  
    }  
  
    /* This message does not print: */  
    printf_s( "Loop exited. i = %d\n", i );  
  
    stop: printf_s( "Jumped to stop. i = %d\n", i );  
}  
```  
  
 In questo esempio, un'istruzione `goto` trasferisce il controllo per puntare `stop` etichettate quando `i` è uguale a 5.  
  
## <a name="see-also"></a>Vedere anche  
 [Istruzioni](../c-language/statements-c.md)
