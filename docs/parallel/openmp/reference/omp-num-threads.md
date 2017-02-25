---
title: "OMP_NUM_THREADS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "OMP_NUM_THREADS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OMP_NUM_THREADS OpenMP environment variable"
ms.assetid: 4b558124-1387-4c30-a6a5-ff5345a9ced6
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# OMP_NUM_THREADS
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Imposta il numero massimo di thread nell'area parallela, a meno che non venga ignorato da [omp\_set\_num\_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) o  [num\_threads](../../../parallel/openmp/reference/num-threads.md).  
  
## Sintassi  
  
```  
set OMP_NUM_THREADS[=num]  
```  
  
## Note  
 dove:  
  
 `num`  
 Il numero massimo di thread desiderato nell'area parallela, fino a 64 nell'implementazione di Visual C\+\+.  
  
## Note  
 **OMP\_NUM\_THREADS** la variabile di ambiente può essere sottoposta a override da  [omp\_set\_num\_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) funzione o da  [num\_threads](../../../parallel/openmp/reference/num-threads.md).  
  
 il valore predefinito di `num` in Visual C\+\+ l'implementazione standard OpenMP rappresenta il numero di processori virtuali, incluse le CPU hyperthreading.  
  
 Per ulteriori informazioni, vedere [4.2 OMP\_NUM\_THREADS](../../../parallel/openmp/4-2-omp-num-threads.md).  
  
## Esempio  
 Il comando seguente imposta **OMP\_NUM\_THREADS** variabile di ambiente su 16:  
  
```  
set OMP_NUM_THREADS=16  
```  
  
 Il comando seguente per visualizzare l'impostazione corrente di **OMP\_NUM\_THREADS** variabile di ambiente:  
  
```  
set OMP_NUM_THREADS  
```  
  
## Vedere anche  
 [Environment Variables](../../../parallel/openmp/reference/openmp-environment-variables.md)