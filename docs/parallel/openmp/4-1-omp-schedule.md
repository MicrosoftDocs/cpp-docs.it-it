---
title: "4.1 OMP_SCHEDULE | Microsoft Docs"
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
ms.assetid: d0dce411-2351-4ee9-a1cc-c0322a58b65c
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 4.1 OMP_SCHEDULE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**OMP\_SCHEDULE** si applica solo a  **per** e  **parallelo per** direttive con il tipo di pianificazione  **runtime**.  Il tipo di pianificazione e le dimensioni del blocco per tutti i questi cicli possono essere impostati in fase di esecuzione impostando la variabile di ambiente su uno dei tipi riconosciuti di pianificazione e un facoltativo *chunk\_size*.  
  
 per **per** e  **parallelo per** direttive di tipo pianificazione diverso  **runtime**,  **OMP\_SCHEDULE** viene ignorato.  il valore predefinito per questa variabile di ambiente è implementazione\-definito.  Se l'elemento facoltativo *chunk\_size* è impostato, il valore deve essere positivo.  se chunk\_size non è impostato, un valore 1 viene utilizzato, tranne nel caso di un oggetto **statico** pianificazione.  Per una proprietà **statico** la pianificazione, la dimensione predefinita del blocco viene impostata allo spazio di iterazione del ciclo diviso per il numero di thread applicati al ciclo.  
  
 Esempio:  
  
```  
setenv OMP_SCHEDULE "guided,4"  
setenv OMP_SCHEDULE "dynamic"  
```  
  
## riferimenti incrociati:  
  
-   **per** la direttiva, vedere  [parte 2.4.1](../../parallel/openmp/2-4-1-for-construct.md) nella pagina 11.  
  
-   **parallelo per** la direttiva, vedere  [parte 2.5.1](../../parallel/openmp/2-5-1-parallel-for-construct.md) nella pagina 16.