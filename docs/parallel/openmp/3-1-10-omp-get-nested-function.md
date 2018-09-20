---
title: 3.1.10 funzione omp_get_nested | Microsoft Docs
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
ms.openlocfilehash: d019dd757080bbc87ff7aaab1a8745b2a3156b39
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46392281"
---
# <a name="3110-ompgetnested-function"></a>3.1.10 Funzione omp_get_nested

Il `omp_get_nested` funzione restituisce un valore diverso da zero se il parallelismo annidato è abilitato e 0 se è disabilitato. Per altre informazioni sul parallelismo annidato, vedere sezione 3.1.9 nella pagina 40. Il formato è il seguente:

```
#include <omp.h>
int omp_get_nested(void);
```

Se un'implementazione può neimplementuje metodu parallelismo annidato, questa funzione restituisce sempre 0.