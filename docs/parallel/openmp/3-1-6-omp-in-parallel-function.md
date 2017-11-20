---
title: 3.1.6 funzione omp_in_parallel | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: db6e3a63-2a0a-4b8e-8cc6-c6b49edca5fb
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: b72351095fd56ae6543c2ca742983eef315f2158
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="316-ompinparallel-function"></a>3.1.6 Funzione omp_in_parallel
Il **omp_in_parallel** funzione restituisce un valore diverso da zero se viene chiamato all'interno di extent dinamica di un'area parallela in esecuzione in parallelo; in caso contrario, restituisce 0. Il formato è il seguente:  
  
```  
#include <omp.h>  
int omp_in_parallel(void);  
```  
  
 Questa funzione restituisce un valore diverso da zero quando viene chiamato dall'interno di un'area in esecuzione in parallelo, comprese le aree nidificate che vengono serializzate.