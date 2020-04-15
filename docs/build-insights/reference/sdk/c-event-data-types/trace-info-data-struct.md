---
title: struttura TRACE_INFO_DATA
description: Informazioni di riferimento sulla struttura di esempio di Sdk di compilazion TRACE_INFO_DATAe di C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TRACE_INFO_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 70ae17a376f79cad7a669d81e482f551afd0ec62
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325273"
---
# <a name="trace_info_data-structure"></a>struttura TRACE_INFO_DATA

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `TRACE_INFO_DATA` struttura descrive una traccia analizzata o relogged.

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

## <a name="members"></a>Membri

|  |  |
|--|--|
| `LogicalProcessorCount` | Numero di processori logici nel computer in cui è stata raccolta la traccia. |
| `TickFrequency` | Il numero di segni di graduazione al secondo da utilizzare per valutare una durata misurata in segni di graduazione. |
| `StartTimestamp` | Questo campo è impostato su un valore di tick acquisito al momento dell'avvio della traccia. |
| `StopTimestamp` | Questo campo è impostato su un valore di tick acquisito al momento dell'arresto della traccia. |

## <a name="remarks"></a>Osservazioni

Sottrarre `StartTimestamp` da `StopTimestamp` per ottenere il numero di segni di graduazione trascorsi durante l'intera traccia. Utilizzare `TickFrequency` per convertire il valore risultante in un'unità di tempo. Per un esempio che converte i segni di graduazione in unità di tempo, vedere [EVENT_DATA](event-data-struct.md).

::: moniker-end
