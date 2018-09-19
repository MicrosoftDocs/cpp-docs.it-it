---
title: Costanti heap | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- _HEAPBADPTR
- _HEAPEMPTY
- _HEAPBADBEGIN
- _HEAPOK
- _HEAPBADNODE
- _HEAPEND
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 791509a7c67f5fa47128fda97688c43e592724ed
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46115177"
---
# <a name="heap-constants"></a>Constanti heap

## <a name="syntax"></a>Sintassi

```

#include <malloc.h>

```

## <a name="remarks"></a>Note

Queste costanti forniscono il valore restituito che indica lo stato dell'heap.

|Costante|Significato|
|--------------|-------------|
|`_HEAPBADBEGIN`|Le informazioni di intestazione iniziali non sono state trovate o non erano valide.|
|`_HEAPBADNODE`|È stato trovato un nodo non valido o l'heap è danneggiato.|
|`_HEAPBADPTR`|Il campo **_pentry** della struttura **_HEAPINFO** non contiene un puntatore valido nell'heap (solo routine `_heapwalk`).|
|`_HEAPEMPTY`|L'heap non è stato inizializzato.|
|`_HEAPEND`|Fine dell'heap raggiunta correttamente (solo routine `_heapwalk`).|
|`_HEAPOK`|L'heap è coerente (solo routine `_heapset` e `_heapchk`). Nessun errore fino a questo punto; la struttura **_HEAPINFO** contiene informazioni sulla voce seguente (solo routine `_heapwalk`).|

## <a name="see-also"></a>Vedere anche

[_heapchk](../c-runtime-library/reference/heapchk.md)<br/>
[_heapset](../c-runtime-library/heapset.md)<br/>
[_heapwalk](../c-runtime-library/reference/heapwalk.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)