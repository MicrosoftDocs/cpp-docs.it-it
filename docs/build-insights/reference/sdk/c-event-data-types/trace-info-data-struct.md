---
title: Struttura TRACE_INFO_DATA
description: Il riferimento alla struttura TRACE_INFO_DATA di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TRACE_INFO_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 38683ff2c5c5165b5fe2a1969ccf80fbfca3693f
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90040457"
---
# <a name="trace_info_data-structure"></a>Struttura TRACE_INFO_DATA

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `TRACE_INFO_DATA` struttura descrive una traccia analizzata o di cui è stata eseguita la registrazione.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct TRACE_INFO_DATA_TAG
{
    unsigned long           LogicalProcessorCount;
    long long               TickFrequency;
    long long               StartTimestamp;
    long long               StopTimestamp;

} TRACE_INFO_DATA;
```

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `LogicalProcessorCount` | Numero di processori logici nel computer in cui è stata raccolta la traccia. |
| `TickFrequency` | Numero di cicli al secondo da utilizzare durante la valutazione di una durata misurata in cicli. |
| `StartTimestamp` | Questo campo è impostato su un valore di segno di selezione acquisito al momento dell'avvio della traccia. |
| `StopTimestamp` | Questo campo è impostato su un valore di segno di selezione acquisito nel momento in cui la traccia è stata arrestata. |

## <a name="remarks"></a>Commenti

Sottrarre `StartTimestamp` da `StopTimestamp` per ottenere il numero di cicli trascorsi durante l'intera traccia. Usare `TickFrequency` per convertire il valore risultante in un'unità di tempo. Per un esempio in cui vengono convertiti i cicli in unità di tempo, vedere [EVENT_DATA](event-data-struct.md).

::: moniker-end
