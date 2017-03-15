---
title: "3.3.1 omp_get_wtime Function | Microsoft Docs"
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
ms.assetid: 90188bd2-c53e-4398-8946-d3ecc92fa0f6
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.3.1 omp_get_wtime Function
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`omp_get_wtime` la funzione restituisce un valore in virgola mobile a precisione doppia uguale al tempo di clock trascorso della parete in secondi poiché alcune “di calcolare in passato„.  Effettivo “tempo in passato„ è arbitrario, ma è garantito non cambiare durante l'esecuzione del programma applicativo.  Il formato è il seguente:  
  
```  
#include <omp.h>  
double omp_get_wtime(void);  
```  
  
 È prevista dalla funzione viene utilizzata per misurare il tempo trascorso come illustrato nell'esempio seguente:  
  
```  
double start;  
double end;  
start = omp_get_wtime();  
... work to be timed ...  
end = omp_get_wtime();  
printf_s("Work took %f sec. time.\n", end-start);  
```  
  
 I tempi restituiti sono “volte per thread„ da quale è indicato che non sono necessarie rendere globalmente coerenti tra tutti i thread che partecipano a un'applicazione.