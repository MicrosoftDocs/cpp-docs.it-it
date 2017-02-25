---
title: "OMP_DYNAMIC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "OMP_DYNAMIC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OMP_DYNAMIC OpenMP environment variable"
ms.assetid: e306049d-b644-4b73-8b63-46c835bff98b
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# OMP_DYNAMIC
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Specifica se il runtime di OpenMP possibile regolare il numero di thread in un'area parallela.  
  
## Sintassi  
  
```  
set OMP_DYNAMIC[=TRUE | =FALSE]  
```  
  
## Note  
 `OMP_DYNAMIC` la variabile di ambiente può essere sottoposta a override da  [omp\_set\_dynamic](../../../parallel/openmp/reference/omp-set-dynamic.md) funzione.  
  
 Il valore predefinito nell'implementazione di Visual C\+\+ standard di OpenMP è `OMP_DYNAMIC=FALSE`.  
  
 Per ulteriori informazioni, vedere [4.3 OMP\_DYNAMIC](../../../parallel/openmp/4-3-omp-dynamic.md).  
  
## Esempio  
 Il comando seguente imposta `OMP_DYNAMIC` variabile di ambiente FROM ALLINEARE:  
  
```  
set OMP_DYNAMIC=TRUE  
```  
  
 Il comando seguente per visualizzare l'impostazione corrente di `OMP_DYNAMIC` variabile di ambiente:  
  
```  
set OMP_DYNAMIC  
```  
  
## Vedere anche  
 [Environment Variables](../../../parallel/openmp/reference/openmp-environment-variables.md)