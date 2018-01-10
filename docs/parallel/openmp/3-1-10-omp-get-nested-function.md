---
title: 3.1.10 funzione omp_get_nested | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 48736a25-5c6e-4e2d-aad0-421087663a3c
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 36b213ee45018e7cc0ccf3a1cb99dcbd640d4457
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="3110-ompgetnested-function"></a>3.1.10 Funzione omp_get_nested
Il `omp_get_nested` funzione restituisce un valore diverso da zero se è abilitato il parallelismo nidificato e 0 se è disabilitato. Per ulteriori informazioni sul parallelismo nidificata, vedere sezione 3.1.9 nella pagina 40. Il formato è il seguente:  
  
```  
#include <omp.h>  
int omp_get_nested(void);  
```  
  
 Se un'implementazione non implementa parallelismo annidato, questa funzione restituisce sempre 0.