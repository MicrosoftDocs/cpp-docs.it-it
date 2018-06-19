---
title: L'esecuzione di un semplice ciclo in parallelo 1 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: b8aaacae-b20d-4b16-a540-54ccbf09582b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 98b2fbac6ce31d2dbc56a4ef6d9fe87c14d5ee16
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33686126"
---
# <a name="a1---executing-a-simple-loop-in-parallel"></a>A.1   Esecuzione di un ciclo semplice in parallelo
Nell'esempio riportato di seguito viene illustrato come parallelizzare un ciclo semplice tramite il `parallel for` (direttiva) ([sezione 2.5.1](../../parallel/openmp/2-5-1-parallel-for-construct.md) nella pagina 16). La variabile di iterazione del ciclo è privata per impostazione predefinita, pertanto non è necessario specificare in modo esplicito in una clausola private.  
  
```  
#pragma omp parallel for  
    for (i=1; i<n; i++)  
        b[i] = (a[i] + a[i-1]) / 2.0;  
```