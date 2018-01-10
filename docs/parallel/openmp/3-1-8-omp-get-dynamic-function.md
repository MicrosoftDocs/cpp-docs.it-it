---
title: 3.1.8 funzione omp_get_dynamic | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: c03e2daf-29c9-49e3-9b67-b980ad1ab195
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: bd4ec73b82848efcdface781738639b05a256958
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="318-ompgetdynamic-function"></a>3.1.8 Funzione omp_get_dynamic
Il **omp_get_dynamic** funzione restituisce un valore diverso da zero se è abilitata, la regolazione dinamica dei thread e restituisce 0 in caso contrario. Il formato è il seguente:  
  
```  
#include <omp.h>  
int omp_get_dynamic(void);  
```  
  
 Se l'implementazione non implementa la regolazione dinamica del numero di thread, questa funzione restituisce sempre 0.  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   Per una descrizione di regolazione di thread dinamica, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.