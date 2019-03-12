---
title: Costanti spawn
ms.date: 11/04/2016
f1_keywords:
- _P_NOWAIT
- _P_OVERLAY
- _P_WAIT
- _P_DETACH
- _P_NOWAITO
helpviewer_keywords:
- _P_OVERLAY constant
- P_DETACH constant
- P_OVERLAY constant
- P_NOWAIT constant
- _P_DETACH constant
- _P_NOWAIT constant
- _P_NOWAITO constant
- P_NOWAITO constant
- spawn constants
- P_WAIT constant
- _P_WAIT constant
ms.assetid: e0533e88-d362-46fc-b53c-5f193226d879
ms.openlocfilehash: 988cc5e1b982f0c5577db77ae94f1df46c95ec0e
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57742751"
---
# <a name="spawn-constants"></a>Costanti spawn

## <a name="syntax"></a>Sintassi

```
#include <process.h>
```

## <a name="remarks"></a>Osservazioni

L'argomento `mode` determina le azioni intraprese dal processo chiamante prima e durante un'operazione di generazione. I valori possibili per `mode` sono i seguenti:

|Costante|Significato|
|--------------|-------------|
|`_P_OVERLAY`|Sovrappone un processo chiamante con un nuovo processo, distruggendo il processo chiamante (lo stesso effetto delle chiamate `_exec`).|
|`_P_WAIT`|Sospende un thread chiamante finché l'esecuzione del nuovo processo non è completa (`_spawn` sincrono).|
|`_P_NOWAIT`, `_P_NOWAITO`|Continua l'esecuzione del processo chiamante contemporaneamente al nuovo processo (`_spawn` asincrono).|
|`_P_DETACH`|Continua l'esecuzione del processo chiamante; il nuovo processo viene eseguito in background senza accesso alla console o alla tastiera. Le chiamate a `_cwait` rispetto al nuovo processo avranno esito negativo. Questo è un `_spawn` asincrono.|

## <a name="see-also"></a>Vedere anche

[Funzioni _spawn, _wspawn](../c-runtime-library/spawn-wspawn-functions.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
