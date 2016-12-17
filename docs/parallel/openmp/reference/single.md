---
title: "single | Microsoft Docs"
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
  - "Single"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "single OpenMP directive"
ms.assetid: 85cf94fb-cb9c-4d82-8609-adffa9f552e1
caps.latest.revision: 11
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# single
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Consente di specificare che una sezione di codice deve essere eseguito in un unico thread, non necessariamente il thread master.  
  
## Sintassi  
  
```  
#pragma omp single [clauses]   
{  
   code_block   
}  
```  
  
#### Parametri  
 `clause` \(facoltativo\)  
 zero o più clausole.  Vedere la sezione relativa alle osservazioni per un elenco delle clausole supportate da **scegliere**.  
  
## Note  
 **singolo** la direttiva supporta le clausole seguenti di OpenMP:  
  
-   [copyprivate](../../../parallel/openmp/reference/copyprivate.md)  
  
-   [firstprivate](../../../parallel/openmp/reference/firstprivate.md)  
  
-   [nowait](../../../parallel/openmp/reference/nowait.md)  
  
-   [private](../../../parallel/openmp/reference/private-openmp.md)  
  
 [master](../../../parallel/openmp/reference/master.md) la direttiva consente di specificare che una sezione di codice deve essere eseguito solo sul thread master.  
  
 Per ulteriori informazioni, vedere [2.4.3 single Construct](../../../parallel/openmp/2-4-3-single-construct.md).  
  
## Esempio  
  
```  
// omp_single.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <omp.h>  
  
int main() {  
   #pragma omp parallel num_threads(2)  
   {  
      #pragma omp single  
      // Only a single thread can read the input.  
      printf_s("read input\n");  
  
      // Multiple threads in the team compute the results.  
      printf_s("compute results\n");  
  
      #pragma omp single  
      // Only a single thread can write the output.  
      printf_s("write output\n");  
    }  
}  
```  
  
  **input lettura**  
**risultati di calcolo**  
**risultati di calcolo**  
**scrivere l'output**   
## Vedere anche  
 [Directives](../../../parallel/openmp/reference/openmp-directives.md)