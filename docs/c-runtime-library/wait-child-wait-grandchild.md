---
title: _WAIT_CHILD, _WAIT_GRANDCHILD | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- _WAIT_GRANDCHILD
- WAIT_CHILD
- WAIT_GRANDCHILD
- _WAIT_CHILD
dev_langs:
- C++
helpviewer_keywords:
- WAIT_CHILD constant
- WAIT_GRANDCHILD constant
- _WAIT_CHILD constant
- _WAIT_GRANDCHILD constant
ms.assetid: 7acd96fa-d118-4339-bb00-e5afaf286945
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7dd7b3fab51c382413c507831572afedd824c3f7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46018340"
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