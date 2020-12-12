---
description: 'Altre informazioni su: costanti di azione Signal'
title: Costanti azione signal
ms.date: 11/04/2016
f1_keywords:
- SIG_IGN
- SIG_DFL
helpviewer_keywords:
- signal action constants
- SIG_IGN constant
- SIG_DFL constant
ms.assetid: c3cb4f15-d39e-4d9d-84f9-0d33e3eb5993
ms.openlocfilehash: 380fed21b097b674958c6e2aae2f6b8c53845943
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97276985"
---
# <a name="signal-action-constants"></a>Costanti azione signal

L'azioni eseguita quando il segnale di interruzione viene ricevuto dipende dal valore di `func`.

## <a name="syntax"></a>Sintassi

```
#include <signal.h>
```

## <a name="remarks"></a>Osservazioni

L'argomento di `func` deve essere un indirizzo funzione o una delle costanti manifesto elencate di seguito e definite in SIGNAL.H.

|Costante|Descrizione|
|-|-|
| `SIG_DFL`  | Usa la risposta del sistema predefinita. Se il programma chiamante usa i flussi di I/O, i buffer creati dalla libreria run-time non vengono scaricati.  |
| `SIG_IGN`  | Ignora il segnale di interruzione. Questo valore non deve essere mai specificato per `SIGFPE`, visto che lo stato a virgola mobile del processo rimane indefinito.  |
| `SIG_SGE`  | Indica che si è verificato un errore nel segnale.  |
| `SIG_ACK`  | Indica che è stato ricevuto un acknowledgement.  |
| `SIG_ERR`  | Un tipo restituito da un segnale indica che si è verificato un errore.  |

## <a name="see-also"></a>Vedi anche

[signal](../c-runtime-library/reference/signal.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
