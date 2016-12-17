---
title: "A.9   Using single Directives | Microsoft Docs"
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
ms.assetid: 0c0f9495-5794-4db9-883b-a12e3a9f1328
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# A.9   Using single Directives
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nell'esempio seguente viene illustrato `single` direttiva \([parte 2.4.3](../../parallel/openmp/2-4-3-single-construct.md) nella pagina 15\).  Nell'esempio, solo un thread \(in genere il primo thread che rileva `single` la direttiva\) viene visualizzato il messaggio di stato.  L'utente non deve fare supposizioni quanto a cui il thread verrà eseguito `single` sezione.  Tutti gli altri thread ignoreranno `single` la sezione e l'arresto nella barriera alla fine di l  `single` costrutto.  Se altri thread possono continuare senza attendere l'esecuzione del thread `single` sezione, a  `nowait` la clausola può essere specificata su  `single` direttiva.  
  
```  
#pragma omp parallel  
{  
    #pragma omp single  
        printf_s("Beginning work1.\n");  
    work1();  
    #pragma omp single  
        printf_s("Finishing work1.\n");  
    #pragma omp single nowait  
        printf_s("Finished work1 and beginning work2.\n");  
    work2();  
}  
```