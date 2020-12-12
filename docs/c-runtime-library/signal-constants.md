---
description: 'Altre informazioni su: costanti Signal'
title: Costanti signal
ms.date: 11/04/2016
f1_keywords:
- SIGTERM
- SIGFPE
- SIGABRT
- SIGILL
- SIGINT
- SIGSEGV
helpviewer_keywords:
- SIGTERM constant
- SIGABRT constant
- SIGSEGV constant
- SIGFPE constant
- SIGINT constant
- signal constants
- SIGILL constant
ms.assetid: a3b39281-dae7-4e44-8d68-e6a610c669dd
ms.openlocfilehash: 57615e3a694ae24c0bfefe42b6a8ddd1de2a55ed
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97276998"
---
# <a name="signal-constants"></a>Costanti signal

## <a name="syntax"></a>Sintassi

```
#include <signal.h>
```

## <a name="remarks"></a>Osservazioni

L'argomento `sig` deve essere una delle costanti di manifesto elencate di seguito (definite in SIGNAL.H).

|Costante|Descrizione|
|-|-|
|SIGABRT|Terminazione anomala. L'azione predefinita termina il programma chiamante con codice di uscita 3.  |
|SIGABRT_COMPAT|Equivale a SIGABRT. Per la compatibilità con altre piattaforme.  |
|SIGFPE|Errore della virgola mobile, ad esempio overflow, divisione per zero oppure operazione non valida. L'azione predefinita termina il programma chiamante.  |
|SIGILL|Istruzione non valida. L'azione predefinita termina il programma chiamante.  |
|SIGINT|Interruzione con CTRL+C. L'azione predefinita termina il programma chiamante con codice di uscita 3.  |
|SIGSEGV|Accesso alla memoria non valido. L'azione predefinita termina il programma chiamante.  |
|SIGTERM|Richiesta di chiusura inviata al programma. L'azione predefinita termina il programma chiamante con codice di uscita 3.  |
|SIG_ERR|Un tipo restituito da un segnale indica che si è verificato un errore.  |

## <a name="see-also"></a>Vedi anche

[signal](../c-runtime-library/reference/signal.md)<br/>
[raise](../c-runtime-library/reference/raise.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
