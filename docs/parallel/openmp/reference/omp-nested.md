---
title: "OMP_NESTED | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "OMP_NESTED"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OMP_NESTED OpenMP environment variable"
ms.assetid: c43f5287-a548-40d0-bd54-0c6b2b9f9a53
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# OMP_NESTED
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Specifica se il parallelismo annidato è abilitato, a meno che il parallelismo annidato è attivata o disabilitata con `omp_set_nested`.  
  
## Sintassi  
  
```  
set OMP_NESTED[=TRUE | =FALSE]  
```  
  
## Note  
 `OMP_NESTED` la variabile di ambiente può essere sottoposta a override da  [omp\_set\_nested](../../../parallel/openmp/reference/omp-set-nested.md) funzione.  
  
 Il valore predefinito nell'implementazione di Visual C\+\+ standard di OpenMP è `OMP_DYNAMIC=FALSE`.  
  
 Per ulteriori informazioni, vedere [4.4 OMP\_NESTED](../../../parallel/openmp/4-4-omp-nested.md).  
  
## Esempio  
 Il comando seguente imposta `OMP_NESTED` variabile di ambiente FROM ALLINEARE:  
  
```  
set OMP_NESTED=TRUE  
```  
  
 Il comando seguente per visualizzare l'impostazione corrente di `OMP_NESTED` variabile di ambiente:  
  
```  
set OMP_NESTED  
```  
  
## Vedere anche  
 [Environment Variables](../../../parallel/openmp/reference/openmp-environment-variables.md)