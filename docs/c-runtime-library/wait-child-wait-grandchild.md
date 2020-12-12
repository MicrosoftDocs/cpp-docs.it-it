---
description: 'Altre informazioni su: _WAIT_CHILD, _WAIT_GRANDCHILD'
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
ms.openlocfilehash: b14586232258f635b428b6c197213782591c8af1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97181657"
---
# <a name="_wait_child-_wait_grandchild"></a>_WAIT_CHILD, _WAIT_GRANDCHILD

## <a name="syntax"></a>Sintassi

```
#include <process.h>
```

## <a name="remarks"></a>Osservazioni

La funzione `_cwait` può essere utilizzata da qualsiasi processo per attendere qualsiasi altro processo (se l'ID del processo è noto). L'argomento dell'azione può essere uno dei seguenti valori:

|Costante|Significato|
|--------------|-------------|
|`_WAIT_CHILD`|Il processo chiamante attende fino a quando il nuovo processo specificato termina.|
|`_WAIT_GRANDCHILD`|Il processo chiamante attende fino a quando il nuovo processo specificato e tutti gli altri processi creati da tale nuovo processo terminano.|

## <a name="see-also"></a>Vedi anche

[_cwait](../c-runtime-library/reference/cwait.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
