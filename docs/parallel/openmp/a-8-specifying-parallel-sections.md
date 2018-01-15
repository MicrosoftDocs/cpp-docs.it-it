---
title: 8 specificando sezioni parallele | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: cf399304-121e-4c07-9829-47e0dbc2ef10
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: db7decc4efb1a3f6bb457623489c84e0ad1ae1f3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="a8---specifying-parallel-sections"></a>A.8   Specifica di sezioni parallele
Nell'esempio seguente (per [sezione 2.4.2](../../parallel/openmp/2-4-2-sections-construct.md) pagina 14) funzioni *xaxis*, *AsseY*, e *AsseZ* possono essere eseguiti contemporaneamente. Il primo `section` direttiva è facoltativa.  Si noti che tutti i `section` direttive devono essere visualizzato nell'entità lessicale di `parallel sections` costruire.  
  
```  
#pragma omp parallel sections  
{  
    #pragma omp section  
        xaxis();  
    #pragma omp section  
        yaxis();  
    #pragma omp section  
        zaxis();  
}  
```