---
title: "omp_set_nested | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "omp_set_nested"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_set_nested OpenMP function"
ms.assetid: fa1cb08c-7b8b-42c9-8654-2c33dcffb5b6
caps.latest.revision: 13
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# omp_set_nested
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Abilita annidato il parallelismo.  
  
## Sintassi  
  
```  
void omp_set_nested(  
   int val  
);  
```  
  
## Note  
 dove:  
  
 `val`  
 Se diverso da zero, consente il parallelismo annidato.  Se zero, disabilita il parallelismo annidato.  
  
## Note  
 Il parallelismo annidato OMP può essere attivato da `omp_set_nested`, o impostando  [OMP\_NESTED](../../../parallel/openmp/reference/omp-nested.md) variabile di ambiente.  
  
 l'impostazione per `omp_set_nested` eseguirà l'override dell'impostazione di  `OMP_NESTED` variabile di ambiente.  
  
 Una volta abilitata, la variabile di ambiente possibile interrompere un programma in caso contrario operativo poiché il numero di thread in modo esponenziale quando si annidano le aree parallele.  Ad esempio una funzione che i recurses 6 durata con il numero di thread di OMP impostato su 4 richiede 4.096 \(4 alla potenza di 6\) thread in genere le prestazioni dell'applicazione è degraderanno se il numero di thread supera il numero di processori.  Fa eccezione a questa sarebbe applicazioni associate I\/O.  
  
 utilizzo [omp\_get\_nested](../../../parallel/openmp/reference/omp-get-nested.md) per visualizzare l'impostazione corrente di  `omp_set_nested`.  
  
 Per ulteriori informazioni, vedere [3.1.9 omp\_set\_nested Function](../../../parallel/openmp/3-1-9-omp-set-nested-function.md).  
  
## Esempio  
  
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
  
  **1**  
**1**   
## Vedere anche  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)