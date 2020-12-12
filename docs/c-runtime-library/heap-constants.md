---
description: 'Altre informazioni su: costanti heap'
title: Constanti heap
ms.date: 11/04/2016
f1_keywords:
- _HEAPBADPTR
- _HEAPEMPTY
- _HEAPBADBEGIN
- _HEAPOK
- _HEAPBADNODE
- _HEAPEND
helpviewer_keywords:
- _HEAPOK constants
- _HEAPEND constants
- HEAPBADBEGIN constants
- _HEAPBADNODE constants
- HEAPBADNODE constants
- HEAPBADPTR constants
- _HEAPEMPTY constants
- HEAPEND constants
- HEAPOK constants
- HEAPEMPTY constants
- _HEAPBADBEGIN constants
- _HEAPBADPTR constants
- heap constants
ms.assetid: 3f751bb9-2dc4-486f-b5f5-9061c96d3754
ms.openlocfilehash: da90be1855f9a4714bc2d441651ac721ede84c1f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97120695"
---
# <a name="heap-constants"></a>Constanti heap

## <a name="syntax"></a>Sintassi

```
#include <malloc.h>
```

## <a name="remarks"></a>Osservazioni

Queste costanti forniscono il valore restituito che indica lo stato dell'heap.

|Costante|Significato|
|--------------|-------------|
|`_HEAPBADBEGIN`|Le informazioni di intestazione iniziali non sono state trovate o non erano valide.|
|`_HEAPBADNODE`|È stato trovato un nodo non valido o l'heap è danneggiato.|
|`_HEAPBADPTR`|Il campo **_pentry** della struttura **_HEAPINFO** non contiene un puntatore valido nell'heap (solo routine `_heapwalk`).|
|`_HEAPEMPTY`|L'heap non è stato inizializzato.|
|`_HEAPEND`|Fine dell'heap raggiunta correttamente (solo routine `_heapwalk`).|
|`_HEAPOK`|L'heap è coerente (solo routine `_heapset` e `_heapchk`). Nessun errore fino a questo punto; la struttura **_HEAPINFO** contiene informazioni sulla voce seguente (solo routine `_heapwalk`).|

## <a name="see-also"></a>Vedi anche

[_heapchk](../c-runtime-library/reference/heapchk.md)<br/>
[_heapset](../c-runtime-library/heapset.md)<br/>
[_heapwalk](../c-runtime-library/reference/heapwalk.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
