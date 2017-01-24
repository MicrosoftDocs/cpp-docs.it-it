---
title: "4.4 OMP_NESTED | Microsoft Docs"
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
ms.assetid: fd17b6f4-84e8-44c0-a96a-3a9e5ba33688
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 4.4 OMP_NESTED
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`OMP_NESTED` la variabile di ambiente abilita o disabilita il parallelismo annidato a meno che il parallelismo annidato è attivata o disabilitata chiamando  `o`**mp\_set\_nested** routine della libreria.  Se impostato su **TRUE**, il parallelismo annidato è abilitato; se è impostato su  **FALSE**, il parallelismo annidato è disabilitato.  il valore predefinito è **FALSE**.  
  
 Esempio:  
  
```  
setenv OMP_NESTED TRUE  
```  
  
## riferimento incrociato:  
  
-   `omp_set_nested` la funzione, vedere  [parte 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) nella pagina 40.