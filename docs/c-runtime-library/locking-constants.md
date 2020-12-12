---
description: 'Altre informazioni su: _locking costanti'
title: Costanti _locking
ms.date: 11/04/2016
f1_keywords:
- _LK_RLCK
- _LK_NBLCK
- _LK_LOCK
- _LK_NBRLCK
- _LK_UNLCK
helpviewer_keywords:
- LK_UNLCK constant
- LK_NBRLCK constant
- _LK_NBRLCK constant
- _LK_NBLCK constant
- _LK_LOCK constant
- LK_NBLCK constant
- _LK_UNLCK constant
- LK_RLCK constant
- _LK_RLCK constant
- LK_LOCK constant
ms.assetid: c3dc92c8-60e3-4d29-9f50-5d217627c8ad
ms.openlocfilehash: 143c1416dada19e0bd35f1607d77826d98817879
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331035"
---
# <a name="_locking-constants"></a>Costanti _locking

## <a name="syntax"></a>Sintassi

```
#include <sys/locking.h>
```

## <a name="remarks"></a>Osservazioni

L'argomento *mode* nella chiamata alla funzione `_locking` specifica l'azione di blocco da eseguire.

L'argomento *mode* deve essere una delle costanti manifesto seguenti.

|Valore|Description|
|-|-|
| `_LK_LOCK`  | Blocca i byte specificati. Se i byte non possono essere bloccati, la funzione tenterà di bloccarli nuovamente dopo 1 secondo. Se, dopo 10 tentativi, i byte non possono essere bloccati, la funzione restituisce un errore.  |
| `_LK_RLCK`  | Uguale a `_LK_LOCK`.  |
|`_LK_NBLCK`  | Blocca i byte specificati. Se i byte non possono essere bloccati, la funzione restituisce un errore.  |
| `_LK_NBRLCK`  | Uguale a `_LK_NBLCK`.  |
| `_LK_UNLCK`  | Sblocca i byte specificati. (I byte devono essere stati bloccati in precedenza).  |

## <a name="see-also"></a>Vedi anche

[_locking](../c-runtime-library/reference/locking.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
