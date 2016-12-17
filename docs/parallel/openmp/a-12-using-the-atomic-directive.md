---
title: "A.12   Using the atomic Directive | Microsoft Docs"
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
ms.assetid: d3ba3c87-413d-4efa-8a45-8a7f28ab0164
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# A.12   Using the atomic Directive
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'esempio seguente consente di evitare race condition \(aggiornamenti simultanee di un elemento di x da più thread\) tramite `atomic` direttiva \([parte 2.6.4](../../parallel/openmp/2-6-4-atomic-construct.md) nella pagina 19\):  
  
```  
#pragma omp parallel for shared(x, y, index, n)  
    for (i=0; i<n; i++)   
    {  
        #pragma omp atomic  
            x[index[i]] += work1(i);  
        y[i] += work2(i);  
    }  
```  
  
 Il vantaggio di l `atomic` la direttiva in questo esempio è che consente agli aggiornamenti di due elementi differenti della x si verifichino numerosi in parallelo.  se a `critical` direttiva \([parte 2.6.2](../../parallel/openmp/2-6-2-critical-construct.md) nella pagina 18\) sono stati utilizzati invece, quindi tutti gli aggiornamenti degli elementi di x eseguire seriale \(sebbene non in qualsiasi ordine garantito\).  
  
 si noti che `atomic` la direttiva si applica solo all'istruzione di C\+\+ o c\# immediatamente dopo.  Di conseguenza, gli elementi di *y* non vengono aggiornati in modalità atomica in questo esempio.