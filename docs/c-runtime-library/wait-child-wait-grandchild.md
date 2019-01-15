---
title: _WAIT_CHILD, _WAIT_GRANDCHILD
ms.date: 11/04/2016
f1_keywords:
- _WAIT_GRANDCHILD
- WAIT_CHILD
- WAIT_GRANDCHILD
- _WAIT_CHILD
helpviewer_keywords:
- WAIT_CHILD constant
- WAIT_GRANDCHILD constant
- _WAIT_CHILD constant
- _WAIT_GRANDCHILD constant
ms.assetid: 7acd96fa-d118-4339-bb00-e5afaf286945
ms.openlocfilehash: b484f068ce94ab7a2a637723641e1206072cf24b
ms.sourcegitcommit: a1fad0a266b20b313364a74b16c9ac45d089b1e9
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 01/11/2019
ms.locfileid: "54220270"
---
# <a name="waitchild-waitgrandchild"></a>_WAIT_CHILD, _WAIT_GRANDCHILD

## <a name="syntax"></a>Sintassi

```
#include <process.h>
```

## <a name="remarks"></a>Note

La funzione `_cwait` può essere utilizzata da qualsiasi processo per attendere qualsiasi altro processo (se l'ID del processo è noto). L'argomento dell'azione può essere uno dei seguenti valori:

|Costante|Significato|
|--------------|-------------|
|`_WAIT_CHILD`|Il processo chiamante attende fino a quando il nuovo processo specificato termina.|
|`_WAIT_GRANDCHILD`|Il processo chiamante attende fino a quando il nuovo processo specificato e tutti gli altri processi creati da tale nuovo processo terminano.|

## <a name="see-also"></a>Vedere anche

[_cwait](../c-runtime-library/reference/cwait.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
