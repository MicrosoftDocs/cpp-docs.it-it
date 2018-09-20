---
title: omp_set_nested | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- omp_set_nested
dev_langs:
- C++
helpviewer_keywords:
- omp_set_nested OpenMP function
ms.assetid: fa1cb08c-7b8b-42c9-8654-2c33dcffb5b6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1d66c71bdd897471527ead5cc896471bec61193c
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46409220"
---
# <a name="ompsetnested"></a>omp_set_nested

Abilitato il parallelismo annidato.

## <a name="syntax"></a>Sintassi

```
void omp_set_nested(
   int val
);
```

### <a name="parameters"></a>Parametri

*Val*<br/>
Se diverso da zero, abilita il parallelismo annidato. Se è zero, disabilita il parallelismo annidato.

## <a name="remarks"></a>Note

OMP annidati parallelismo può essere attivato con `omp_set_nested`, oppure impostando il [OMP_NESTED](../../../parallel/openmp/reference/omp-nested.md) variabile di ambiente.

L'impostazione `omp_set_nested` sostituirà l'impostazione del `OMP_NESTED` variabile di ambiente.

Quando abilitata, la variabile di ambiente può interrompere un programma in caso contrario operativo perché il numero di thread aumenta in misura esponenziale durante la nidificazione di aree parallele.  Ad esempio una funzione che recurses 6 volte con il numero di thread OMP impostato su 4 richiede 4.096 (4 alla potenza di 6) i thread In generale, le prestazioni dell'applicazione avrà alcun effetto se il numero di thread supera il numero di processori. Unica eccezione a questa può essere che i/o applicazioni associate.

Uso [omp_get_nested](../../../parallel/openmp/reference/omp-get-nested.md) per visualizzare l'impostazione corrente di `omp_set_nested`.

Per altre informazioni, vedere [3.1.9 funzione omp_set_nested](../../../parallel/openmp/3-1-9-omp-set-nested-function.md).

## <a name="example"></a>Esempio

```
// omp_set_nested.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main( )
{
    omp_set_nested(1);
    omp_set_num_threads(4);
    printf_s("%d\n", omp_get_nested( ));
    #pragma omp parallel
        #pragma omp master
        {
            printf_s("%d\n", omp_get_nested( ));
        }
}
```

```Output
1
1
```

## <a name="see-also"></a>Vedere anche

[Funzioni](../../../parallel/openmp/reference/openmp-functions.md)