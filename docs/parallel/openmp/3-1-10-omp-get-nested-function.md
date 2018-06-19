---
title: 3.1.10 funzione omp_get_nested | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 48736a25-5c6e-4e2d-aad0-421087663a3c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7f447da6957cb385ace918120eb7ed7a5420e9f0
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33686721"
---
# <a name="3110-ompgetnested-function"></a>3.1.10 Funzione omp_get_nested
Il `omp_get_nested` funzione restituisce un valore diverso da zero se è abilitato il parallelismo nidificato e 0 se è disabilitato. Per ulteriori informazioni sul parallelismo nidificata, vedere sezione 3.1.9 nella pagina 40. Il formato è il seguente:  
  
```  
#include <omp.h>  
int omp_get_nested(void);  
```  
  
 Se un'implementazione non implementa parallelismo annidato, questa funzione restituisce sempre 0.