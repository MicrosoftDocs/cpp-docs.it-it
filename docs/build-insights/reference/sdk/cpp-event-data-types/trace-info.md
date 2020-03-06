---
title: Classe TraceInfo
description: Riferimento C++ alla classe TraceInfo di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TraceInfo
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 5cf32c8dc954a803a11888231d35b1050ac81cc3
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332943"
---
# <a name="traceinfo-class"></a>Classe TraceInfo

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La classe `TraceInfo` viene utilizzata per accedere a proprietà utili relative a una traccia analizzata o registrata.

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

Sottrarre il `StartTimestamp` da `StopTimestamp` per ottenere il numero di cicli trascorsi durante l'intera traccia. Usare `TickFrequency` per convertire il valore risultante in un'unità di tempo. Per un esempio di conversione dei cicli in time, vedere [EVENT_DATA](../c-event-data-types/event-data-struct.md).

Se non si desidera convertire i cicli manualmente, la classe `TraceInfo` fornisce una funzione membro che restituisce la durata della traccia in nanosecondi. Utilizzare la libreria C++ `chrono` standard per convertire questo valore in altre unità di tempo.

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

[TraceInfo](#trace-info)

### <a name="functions"></a>Funzioni

[Duration](#duration)
[LogicalProcessorCount](#logical-processor-count)
[StartTimestamp](#start-timestamp)
[StopTimestamp](#stop-timestamp)
[TickFrequency](#tick-frequency)

## <a name="duration"></a>Durata

```cpp
std::chrono::nanoseconds Duration() const;
```

### <a name="return-value"></a>Valore restituito

Durata dell'attività in nanosecondi.

## <a name="logical-processor-count"></a>LogicalProcessorCount

```cpp
const unsigned long& LogicalProcessorCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di processori logici nel computer in cui è stata raccolta la traccia.

## <a name="start-timestamp"></a>StartTimestamp

```cpp
const long long& StartTimestamp() const;
```

### <a name="return-value"></a>Valore restituito

Valore di segno di selezione acquisito al momento dell'avvio della traccia.

## <a name="stop-timestamp"></a>StopTimestamp

```cpp
const long long& StopTimestamp() const;
```

### <a name="return-value"></a>Valore restituito

Valore di segno di selezione acquisito nel momento in cui la traccia è stata arrestata.

## <a name="tick-frequency"></a>TickFrequency

```cpp
const long long& TickFrequency() const;
```

### <a name="return-value"></a>Valore restituito

Numero di cicli al secondo da utilizzare durante la valutazione di una durata misurata in cicli.

## <a name="trace-info"></a>TraceInfo

```cpp
TraceInfo(const TRACE_INFO_DATA& data);
```

### <a name="parameters"></a>Parametri

\ *dati*
Dati contenenti le informazioni relative alla traccia.

::: moniker-end
