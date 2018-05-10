---
title: A9 Using single direttive | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 0c0f9495-5794-4db9-883b-a12e3a9f1328
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bc0e0e08b0b7bdea05bf4c627ae33cc42298c6dc
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="a9---using-single-directives"></a>A.9   Utilizzo delle direttive single
Nell'esempio seguente viene illustrato il `single` (direttiva) ([sezione 2.4.3](../../parallel/openmp/2-4-3-single-construct.md) nella pagina 15). Nell'esempio, un solo thread (in genere il primo thread che rileva il `single` direttiva) viene stampato il messaggio di stato. L'utente è necessario non fare supposizioni a verrà eseguito il thread di `single` sezione. Ignora tutti gli altri thread di `single` sezione e si interrompa la barriera alla fine del `single` costruire. Se altri thread può procedere senza attendere che il thread in esecuzione il `single` sezione un `nowait` clausola può essere specificata per il `single` direttiva.  
  
```  
#pragma omp parallel  
{  
    #pragma omp single  
        printf_s("Beginning work1.\n");  
    work1();  
    #pragma omp single  
        printf_s("Finishing work1.\n");  
    #pragma omp single nowait  
        printf_s("Finished work1 and beginning work2.\n");  
    work2();  
}  
```