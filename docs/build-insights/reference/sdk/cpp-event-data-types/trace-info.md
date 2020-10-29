---
title: Classe TraceInfo
description: Riferimento alla classe TraceInfo di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TraceInfo
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: b772cc13981720c73238e56a561ca92144775cb4
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92922925"
---
# <a name="traceinfo-class"></a>Classe TraceInfo

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `TraceInfo` classe viene utilizzata per accedere a proprietà utili relative a una traccia analizzata o registrata.

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

Sottrarre l'oggetto `StartTimestamp` da `StopTimestamp` per ottenere il numero di cicli trascorsi durante l'intera traccia. Usare `TickFrequency` per convertire il valore risultante in un'unità di tempo. Per un esempio di conversione dei cicli in time, vedere [EVENT_DATA](../c-event-data-types/event-data-struct.md).

Se non si desidera convertire i cicli manualmente, la `TraceInfo` classe fornisce una funzione membro che restituisce la durata della traccia in nanosecondi. Utilizzare la libreria C++ standard `chrono` per convertire questo valore in altre unità di tempo.

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

[TraceInfo](#trace-info)

### <a name="functions"></a>Funzioni

[Durata](#duration) 
 [LogicalProcessorCount](#logical-processor-count) 
 [StartTimestamp](#start-timestamp) 
 [StopTimestamp](#stop-timestamp) 
 [TickFrequency](#tick-frequency)

## <a name="duration"></a><a name="duration"></a> Durata

```cpp
std::chrono::nanoseconds Duration() const;
```

### <a name="return-value"></a>Valore restituito

Durata dell'attività in nanosecondi.

## <a name="logicalprocessorcount"></a><a name="logical-processor-count"></a> LogicalProcessorCount

```cpp
const unsigned long& LogicalProcessorCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di processori logici nel computer in cui è stata raccolta la traccia.

## <a name="starttimestamp"></a><a name="start-timestamp"></a> StartTimestamp

```cpp
const long long& StartTimestamp() const;
```

### <a name="return-value"></a>Valore restituito

Valore di segno di selezione acquisito al momento dell'avvio della traccia.

## <a name="stoptimestamp"></a><a name="stop-timestamp"></a> StopTimestamp

```cpp
const long long& StopTimestamp() const;
```

### <a name="return-value"></a>Valore restituito

Valore di segno di selezione acquisito nel momento in cui la traccia è stata arrestata.

## <a name="tickfrequency"></a><a name="tick-frequency"></a> TickFrequency

```cpp
const long long& TickFrequency() const;
```

### <a name="return-value"></a>Valore restituito

Numero di cicli al secondo da utilizzare durante la valutazione di una durata misurata in cicli.

## <a name="traceinfo"></a><a name="trace-info"></a> TraceInfo

```cpp
TraceInfo(const TRACE_INFO_DATA& data);
```

### <a name="parameters"></a>Parametri

*dati*\
Dati contenenti le informazioni relative alla traccia.

::: moniker-end
