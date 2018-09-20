---
title: A.9 uso delle direttive single | Microsoft Docs
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
ms.openlocfilehash: 5a3a201450d54355aa96f0ea712ad9fa0f70f63f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46448090"
---
# <a name="a9---using-single-directives"></a>A.9   Utilizzo delle direttive single

Nell'esempio seguente viene illustrato il `single` (direttiva) ([sezione 2.4.3](../../parallel/openmp/2-4-3-single-construct.md) nella pagina 15). Nell'esempio, un solo thread (in genere il primo thread che rileva il `single` direttiva) viene stampato il messaggio di stato. L'utente deve fare supposizioni a su quale thread eseguirà il `single` sezione. Tutti gli altri thread ignorerà il `single` sezione e terminare con una barriera alla fine del `single` costruire. Se altri thread possa procedere senza attendere che il thread in esecuzione la `single` sezione, una `nowait` clausola può essere specificata nel `single` direttiva.

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