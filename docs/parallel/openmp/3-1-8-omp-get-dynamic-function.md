---
title: 3.1.8 funzione omp_get_dynamic | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: c03e2daf-29c9-49e3-9b67-b980ad1ab195
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: af7755173ab884a40a5f8a41f432f265cc1e6c32
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
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