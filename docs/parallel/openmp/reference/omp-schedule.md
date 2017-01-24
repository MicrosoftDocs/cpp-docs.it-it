---
title: "OMP_SCHEDULE | Microsoft Docs"
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
  - "OMP_SCHEDULE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OMP_SCHEDULE OpenMP environment variable"
ms.assetid: 2295a801-e584-4d2f-826f-7ca4c88846a6
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# OMP_SCHEDULE
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Modifica il comportamento di [schedule](../../../parallel/openmp/reference/schedule.md) clausola quando  `schedule(runtime)` viene specificato in un oggetto  `for` o  `parallel for` direttiva.  
  
## Sintassi  
  
```  
set OMP_SCHEDULE[=type[,size]]  
```  
  
## Note  
 dove:  
  
 `size` \(facoltativo\)  
 Specifica la dimensione delle iterazioni.  `size` deve essere un numero intero positivo.  L'impostazione predefinita è 1, salvo quando `type` è statico.  Quando non valido `type` viene  `runtime`.  
  
 `type`  
 il tipo di programmazione:  
  
-   `dynamic`  
  
-   `guided`  
  
-   `runtime`  
  
-   `static`  
  
## Note  
 Il valore predefinito nell'implementazione di Visual C\+\+ standard di OpenMP è `OMP_SCHEDULE=static,0`.  
  
 Per ulteriori informazioni, vedere [4.1 OMP\_SCHEDULE](../../../parallel/openmp/4-1-omp-schedule.md).  
  
## Esempio  
 Il comando seguente imposta **OMP\_SCHEDULE** variabile di ambiente:  
  
```  
set OMP_SCHEDULE="guided,2"  
```  
  
 Il comando seguente per visualizzare l'impostazione corrente di **OMP\_SCHEDULE** variabile di ambiente:  
  
```  
set OMP_SCHEDULE  
```  
  
## Vedere anche  
 [Environment Variables](../../../parallel/openmp/reference/openmp-environment-variables.md)