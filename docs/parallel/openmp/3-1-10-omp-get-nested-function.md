---
title: "3.1.10 omp_get_nested Function | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 48736a25-5c6e-4e2d-aad0-421087663a3c
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.1.10 omp_get_nested Function
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`omp_get_nested` la funzione restituisce un valore diverso da zero se il parallelismo annidato è attivato e 0 se è disabilitato.  Per ulteriori informazioni su parallelismo annidato, vedere la parte 3.1.9 a pagina 40.  Il formato è il seguente:  
  
```  
#include <omp.h>  
int omp_get_nested(void);  
```  
  
 Se un'implementazione non implementa il parallelismo annidato, questa funzione restituisce sempre 0.