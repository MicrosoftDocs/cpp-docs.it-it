---
title: 3.1.8 funzione omp_get_dynamic | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: c03e2daf-29c9-49e3-9b67-b980ad1ab195
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2c30f49eaf91353d6a7cd9bd26e0e10e95cb6acd
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46426783"
---
# <a name="318-ompgetdynamic-function"></a>3.1.8 Funzione omp_get_dynamic

Il **omp_get_dynamic** funzione restituisce un valore diverso da zero se è abilitata, la regolazione dinamica dei thread e restituisce 0 in caso contrario. Il formato è il seguente:

```
#include <omp.h>
int omp_get_dynamic(void);
```

Se l'implementazione può neimplementuje metodu regolazione dinamica del numero di thread, questa funzione restituisce sempre 0.

## <a name="cross-references"></a>Tra i riferimenti:

- Per una descrizione di regolazione del thread dinamica, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.