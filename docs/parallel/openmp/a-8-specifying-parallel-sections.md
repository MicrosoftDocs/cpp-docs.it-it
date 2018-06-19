---
title: 8 specificando sezioni parallele | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: cf399304-121e-4c07-9829-47e0dbc2ef10
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: acb28f4e7e99ea09696d116ab031778fcf9ff919
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33694056"
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