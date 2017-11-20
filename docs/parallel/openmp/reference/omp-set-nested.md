---
title: omp_set_nested | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: omp_set_nested
dev_langs: C++
helpviewer_keywords: omp_set_nested OpenMP function
ms.assetid: fa1cb08c-7b8b-42c9-8654-2c33dcffb5b6
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 3b0d04a0eb9813a3829b0f435972c7922bf77d07
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ompsetnested"></a>omp_set_nested
Abilita parallelismo annidato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void omp_set_nested(  
   int val  
);  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `val`  
 Se diverso da zero, abilita il parallelismo annidato. Se è zero, disabilita parallelismo annidato.  
  
## <a name="remarks"></a>Note  
 OMP nidificati può essere accesi parallelismo con `omp_set_nested`, o impostando la [OMP_NESTED](../../../parallel/openmp/reference/omp-nested.md) variabile di ambiente.  
  
 L'impostazione per `omp_set_nested` sostituirà l'impostazione del `OMP_NESTED` variabile di ambiente.  
  
 Quando abilitata, la variabile di ambiente può interrompere un programma in caso contrario operativo perché il numero di thread aumenta in misura esponenziale quando nidificazione delle aree parallele.  Ad esempio una funzione che recurses 6 volte con il numero di thread OMP impostato su 4 richiede 4.096 (4 alla potenza di 6) di thread In generale, negativamente sulle prestazioni dell'applicazione se il numero di thread supera il numero di processori. Un'eccezione a questo sarebbe che i/o applicazioni associate.  
  
 Utilizzare [omp_get_nested](../../../parallel/openmp/reference/omp-get-nested.md) per visualizzare l'impostazione corrente di `omp_set_nested`.  
  
 Per ulteriori informazioni, vedere [3.1.9 funzione omp_set_nested](../../../parallel/openmp/3-1-9-omp-set-nested-function.md).  
  
## <a name="example"></a>Esempio  
  
```  
// omp_set_nested.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
int main( )   
{  
    omp_set_nested(1);  
    omp_set_num_threads(4);  
    printf_s("%d\n", omp_get_nested( ));  
    #pragma omp parallel  
        #pragma omp master  
        {  
            printf_s("%d\n", omp_get_nested( ));  
        }  
}  
```  
  
```Output  
1  
1  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../../parallel/openmp/reference/openmp-functions.md)