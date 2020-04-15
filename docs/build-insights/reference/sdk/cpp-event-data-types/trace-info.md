---
title: Classe TraceInfo
description: Informazioni di riferimento per la classe TraceInfo dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TraceInfo
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 75d53937e3999f5692dee0ecf419e0ce5f49a274
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324165"
---
# <a name="traceinfo-class"></a>Classe TraceInfo

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `TraceInfo` classe viene utilizzata per accedere a proprietà utili relative a una traccia analizzata o relogged.

## <a name="syntax"></a>Sintassi

```cpp
class TraceInfo
{
public:
    TraceInfo(const TRACE_INFO_DATA& data);

    const unsigned long& LogicalProcessorCount() const;

    const long long& TickFrequency() const;
    const long long& StartTimestamp() const;
    const long long& StopTimestamp() const;

    std::chrono::nanoseconds Duration() const;
};
```

## <a name="remarks"></a>Osservazioni

Sottrarre il `StartTimestamp` da `StopTimestamp` per ottenere il numero di segni di graduazione trascorsi durante l'intera traccia. Utilizzare `TickFrequency` per convertire il valore risultante in un'unità di tempo. Per un esempio di conversione dei segni di graduazione in tempo, vedere [EVENT_DATA](../c-event-data-types/event-data-struct.md).

Se non si desidera convertire i tick `TraceInfo` manualmente, la classe fornisce una funzione membro che restituisce la durata della traccia in nanosecondi. Utilizzate la `chrono` libreria standard di C, per convertire questo valore in altre unità di tempo.

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

[Traceinfo](#trace-info)

### <a name="functions"></a>Funzioni

[Durata](#duration)
[LogicalProcessorCount](#logical-processor-count)
[StartTimestamp](#start-timestamp)
[StopTimestamp](#stop-timestamp)
[TickFrequency](#tick-frequency)

## <a name="duration"></a><a name="duration"></a>Durata

```cpp
std::chrono::nanoseconds Duration() const;
```

### <a name="return-value"></a>Valore restituito

Durata dell'attività in nanosecondi.

## <a name="logicalprocessorcount"></a><a name="logical-processor-count"></a>LogicalProcessorCount (ConteggioprocessoriLogicProcessorCount)

```cpp
const unsigned long& LogicalProcessorCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di processori logici nel computer in cui è stata raccolta la traccia.

## <a name="starttimestamp"></a><a name="start-timestamp"></a>StartTimestamp

```cpp
const long long& StartTimestamp() const;
```

### <a name="return-value"></a>Valore restituito

Valore tick acquisito al momento dell'avvio della traccia.

## <a name="stoptimestamp"></a><a name="stop-timestamp"></a>StopTimestamp (Arresta)

```cpp
const long long& StopTimestamp() const;
```

### <a name="return-value"></a>Valore restituito

Valore di tick acquisito al momento dell'interruzione della traccia.

## <a name="tickfrequency"></a><a name="tick-frequency"></a>TickFrequency

```cpp
const long long& TickFrequency() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di segni di graduazione al secondo da utilizzare per valutare una durata misurata in segni di graduazione.

## <a name="traceinfo"></a><a name="trace-info"></a>Traceinfo

```cpp
TraceInfo(const TRACE_INFO_DATA& data);
```

### <a name="parameters"></a>Parametri

*Dati*\
Dati contenenti le informazioni sulla traccia.

::: moniker-end
