---
title: Struttura RELOG_CALLBACKS
description: Il riferimento alla struttura RELOG_CALLBACKS di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- RELOG_CALLBACKS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 2b3beb656aa72ce4c8519c56c4c8bf6ca6577cf4
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92919799"
---
# <a name="relog_callbacks-structure"></a>Struttura RELOG_CALLBACKS

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `RELOG_CALLBACKS` struttura viene utilizzata per l'inizializzazione di un oggetto [RELOG_DESCRIPTOR](relog-descriptor-struct.md) . Specifica le funzioni da chiamare durante la riregistrazione di una traccia di Event Tracing for Windows (ETW).

## <a name="syntax"></a>Sintassi

```cpp
typedef struct RELOG_CALLBACKS_TAG
{
    OnRelogEventFunc        OnStartActivity;
    OnRelogEventFunc        OnStopActivity;
    OnRelogEventFunc        OnSimpleEvent;
    OnTraceInfoFunc         OnTraceInfo;
    OnBeginEndPassFunc      OnBeginRelogging;
    OnBeginEndPassFunc      OnEndRelogging;
    OnBeginEndPassFunc      OnBeginReloggingPass;
    OnBeginEndPassFunc      OnEndReloggingPass;
} RELOG_CALLBACKS;
```

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `OnStartActivity` | Chiamato per elaborare un evento di avvio dell'attività. |
| `OnStopActivity` | Chiamato per elaborare un evento di arresto dell'attività. |
| `OnSimpleEvent` | Chiamato per elaborare un evento semplice. |
| `OnTraceInfo` | Chiamato una volta all'inizio del passaggio di registrazione, dopo che `OnBeginReloggingPass` è stato chiamato. |
| `OnBeginRelogging` | Chiamato quando viene avviata una sessione di registrazione, prima dell'inizio del passaggio di registrazione. |
| `OnEndRelogging` | Chiamato quando termina una sessione di registrazione, al termine del passaggio di registrazione. |
| `OnBeginReloggingPass` | Chiamato quando si inizia il passaggio di registrazione, prima di elaborare qualsiasi evento. |
| `OnEndReloggingPass` | Chiamato quando termina il passaggio di registrazione, dopo l'elaborazione di tutti gli eventi. |

## <a name="remarks"></a>Osservazioni

Tutti i membri della `RELOG_CALLBACKS` struttura devono puntare a una funzione valida. Per ulteriori informazioni sulle firme di funzione accettate, vedere [OnRelogEventFunc](on-relog-event-func-typedef.md), [OnTraceInfoFunc](on-trace-info-func-typedef.md)e [OnBeginEndPassFunc](on-begin-end-pass-func-typedef.md).

::: moniker-end
