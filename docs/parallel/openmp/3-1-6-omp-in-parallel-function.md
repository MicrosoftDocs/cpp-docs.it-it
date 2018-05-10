---
title: 3.1.6 funzione omp_in_parallel | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: db6e3a63-2a0a-4b8e-8cc6-c6b49edca5fb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 22b491695d2ae49336d7d8998af64e724f344d87
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="316-ompinparallel-function"></a>3.1.6 Funzione omp_in_parallel
Il **omp_in_parallel** funzione restituisce un valore diverso da zero se viene chiamato all'interno di extent dinamica di un'area parallela in esecuzione in parallelo; in caso contrario, restituisce 0. Il formato è il seguente:  
  
```  
#include <omp.h>  
int omp_in_parallel(void);  
```  
  
 Questa funzione restituisce un valore diverso da zero quando viene chiamato dall'interno di un'area in esecuzione in parallelo, comprese le aree nidificate che vengono serializzate.