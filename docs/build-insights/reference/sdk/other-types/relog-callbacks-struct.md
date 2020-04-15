---
title: struttura RELOG_CALLBACKS
description: L'SDK di analisi di compilazione di C'è RELOG_CALLBACKS riferimento alla struttura.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- RELOG_CALLBACKS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 60e7db81a48731090a23b82332704a79a51e97df
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328964"
---
# <a name="relog_callbacks-structure"></a>struttura RELOG_CALLBACKS

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `RELOG_CALLBACKS` struttura viene utilizzata durante l'inizializzazione di un [oggetto RELOG_DESCRIPTOR.](relog-descriptor-struct.md) Specifica le funzioni da chiamare durante la riregistrazione di una traccia ETW (Event Tracing for Windows).

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

## <a name="members"></a>Membri

|  |  |
|--|--|
| `OnStartActivity` | Chiamato per elaborare un evento di avvio dell'attività. |
| `OnStopActivity` | Chiamato per elaborare un evento di arresto dell'attività. |
| `OnSimpleEvent` | Chiamato per elaborare un evento semplice. |
| `OnTraceInfo` | Chiamato una volta all'inizio del `OnBeginReloggingPass` passaggio di riregistrazione, dopo è stato chiamato. |
| `OnBeginRelogging` | Chiamato all'inizio di una sessione di nuova registrazione, prima dell'inizio del passaggio di ricreazione della ricreazione della ricreazione. |
| `OnEndRelogging` | Chiamato quando si termina una sessione di nuova registrazione, al termine del passaggio di riregistrazione. |
| `OnBeginReloggingPass` | Chiamato quando si inizia il passaggio di riregistrazione, prima di elaborare qualsiasi evento. |
| `OnEndReloggingPass` | Chiamato quando si termina il passaggio di relogging, dopo l'elaborazione di tutti gli eventi. |

## <a name="remarks"></a>Osservazioni

Tutti i `RELOG_CALLBACKS` membri della struttura devono puntare a una funzione valida. Per ulteriori informazioni sulle firme delle funzioni accettate, vedere [OnRelogEventFunc](on-relog-event-func-typedef.md), [OnTraceInfoFunc](on-trace-info-func-typedef.md)e [OnBeginEndPassFunc](on-begin-end-pass-func-typedef.md).

::: moniker-end
