---
title: Classe RawEvent
description: Informazioni di riferimento sulla classe RawEvent di Build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- RawEvent
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 83629457ac3a0d1f991f6b084af2f3400612b2ac
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324375"
---
# <a name="rawevent-class"></a>Classe RawEvent

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `RawEvent` classe viene utilizzata per rappresentare un evento generale in un [oggetto EventStack](event-stack.md).

## <a name="syntax"></a>Sintassi

```cpp
class RawEvent
{
public:
    RawEvent(const EVENT_DATA& event);

    const unsigned short&        EventId() const;
    const unsigned long long&    EventInstanceId() const;
    const long long&             TickFrequency() const;
    const long long&             StartTimestamp() const;
    const long long&             StopTimestamp() const;
    const long long&             ExclusiveDurationTicks() const;
    const long long&             CPUTicks() const;
    const long long&             ExclusiveCPUTicks() const;
    const long long&             WallClockTimeResponsibilityTicks() const;
    const long long&             ExclusiveWallClockTimeResponsibilityTicks() const;
    const void*                  Data() const;
    const unsigned long&         ProcessId() const;
    const unsigned long&         ThreadId() const;
    const unsigned short&        ProcessorIndex() const;
    const char*                  EventName() const;
    const wchar_t*               EventWideName() const;

    std::chrono::nanoseconds Duration() const;
    std::chrono::nanoseconds ExclusiveDuration() const;
    std::chrono::nanoseconds CPUTime() const ;
    std::chrono::nanoseconds ExclusiveCPUTime() const;
    std::chrono::nanoseconds WallClockTimeResponsibility() const;
    std::chrono::nanoseconds ExclusiveWallClockTimeResponsibility() const;
};
```

## <a name="remarks"></a>Osservazioni

Diverse funzioni membro `RawEvent` nella classe restituiscono un conteggio di tick. Informazioni dettagliate sulla compilazione di C, in C, viene utilizzato il contatore delle prestazioni di Windows come origine dei segni di graduazione. Un conteggio di tick deve essere utilizzato con una frequenza tick per convertirlo in un'unità di tempo come secondi. La `TickFrequency` funzione membro può essere chiamata per ottenere la frequenza tick. Vedere la pagina [EVENT_DATA](../c-event-data-types/event-data-struct.md#tick-conversion-example) per un esempio su come convertire i segni di graduazione in un'unità di tempo.

Se non si desidera convertire i segni `RawEvent` di graduazione manualmente, la classe fornisce funzioni membro che restituiscono valori di ora in nanosecondi. Utilizzate la `chrono` libreria standard di C, per convertire i nanosecondi in altre unità di tempo.

## <a name="members"></a>Membri

### <a name="constructor"></a>Costruttore

[Evento di Raw](#raw-event)

### <a name="functions"></a>Funzioni

[CpuTicks (Controllo CPU)](#cpu-ticks)\
[Ora CPU](#cpu-time)\
[Dati](#data)\
[Durata](#duration)\
[EventId](#event-id)
[EventInstanceId](#event-instance-id)
[EventName](#event-name)\
[Nome EventoWideName](#event-wide-name)\
[ExclusiveCPUTicks](#exclusive-cpu-ticks)\
[ExclusiveCPUTime (Ora esclusivaCPU)](#exclusive-cpu-time)\
[Durata esclusiva](#exclusive-duration)\
[ExclusiveDurationTicks](#exclusive-duration-ticks)\
[ExclusiveWallClockTimeResponsibility](#exclusive-wall-clock-time-responsibility)\
[ExclusiveWallClockTimeResponsibilityTicksExclusiveWallClockTimeResponsibilityTicks](#exclusive-wall-clock-time-responsibility-ticks)\
[Processid](#process-id)\
[ProcessorIndex](#processor-index)\
[StartTimestamp](#start-timestamp)\
[StopTimestamp (Arresta)](#stop-timestamp)\
[ID thread](#thread-id)\
[TickFrequency](#tick-frequency)\
[WallClockTimeResponsibility](#wall-clock-time-responsibility)\
[WallClockTimeResponsibilityTicks](#wall-clock-time-responsibility-ticks)

## <a name="rawevent"></a><a name="raw-event"></a>Evento di Raw

```cpp
RawEvent(const EVENT_DATA& data);
```

### <a name="parameters"></a>Parametri

*Evento*\
Dati dell'evento.

## <a name="cputicks"></a><a name="cpu-ticks"></a>CpuTicks (Controllo CPU)

```cpp
const long long& CPUTicks() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di segni di graduazione della CPU che si sono verificati durante questa attività. Un segno di spunta della CPU è diverso da un segno di spunta normale. I segni di graduazione della CPU vengono conteggiati solo quando la CPU sta eseguendo codice in un'attività. I segni di spunta della CPU non vengono conteggiati quando il thread associato all'attività è in attivo.

## <a name="cputime"></a><a name="cpu-time"></a>Ora CPU

```cpp
std::chrono::nanoseconds CPUTime()() const;
```

### <a name="return-value"></a>Valore restituito

Quantità di tempo durante il tempo in cui la CPU stava eseguendo il codice all'interno di questa attività. Questo valore può essere maggiore della durata dell'attività se le attività figlio vengono eseguite in thread separati. Il valore viene restituito in nanosecondi.

## <a name="data"></a><a name="data"></a>Dati

```cpp
const void* Data() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a dati aggiuntivi contenuti in questo evento. Per ulteriori informazioni su come interpretare questo campo, vedere [EVENT_DATA](../c-event-data-types/event-data-struct.md).

## <a name="duration"></a><a name="duration"></a>Durata

```cpp
std::chrono::nanoseconds Duration() const;
```

### <a name="return-value"></a>Valore restituito

Durata dell'attività in nanosecondi.

## <a name="eventid"></a><a name="event-id"></a>Eventid

```cpp
const unsigned short& EventId() const;
```

### <a name="return-value"></a>Valore restituito

Numero che identifica il tipo di evento. Per un elenco degli identificatori di evento, vedere [EVENT_ID](../c-event-data-types/event-id-enum.md).

## <a name="eventinstanceid"></a><a name="event-instance-id"></a>EventInstanceId

```cpp
const unsigned long long& EventInstanceId() const;
```

### <a name="return-value"></a>Valore restituito

Numero che identifica in modo univoco l'evento all'interno di una traccia. Questo valore non cambia quando si analizza o si riregistra la stessa traccia più volte. Utilizzare questo valore per identificare lo stesso evento in più passaggi di analisi o relogging sulla stessa traccia.

## <a name="eventname"></a><a name="event-name"></a>Eventname

```cpp
const char* EventName() const;
```

### <a name="return-value"></a>Valore restituito

Stringa ANSI contenente il nome del tipo di evento identificato da [EventId](#event-id).

## <a name="eventwidename"></a><a name="event-wide-name"></a>Nome EventoWideName

```cpp
const wchar_t* EventWideName() const;
```

### <a name="return-value"></a>Valore restituito

Stringa larga contenente il nome del tipo di evento identificato da [EventId](#event-id).

## <a name="exclusivecputicks"></a><a name="exclusive-cpu-ticks"></a>ExclusiveCPUTicks

```cpp
const long long& ExclusiveCPUTicks() const;
```

### <a name="return-value"></a>Valore restituito

Uguale a [CPUTicks](#cpu-ticks), ma non includendo i segni di graduazione della CPU che si sono verificati nelle attività figlio.

## <a name="exclusivecputime"></a><a name="exclusive-cpu-time"></a>ExclusiveCPUTime (Ora esclusivaCPU)

```cpp
std::chrono::nanoseconds ExclusiveCPUTime() const;
```

### <a name="return-value"></a>Valore restituito

Uguale a [CPUTime](#cpu-time), ad eccezione del fatto che il tempo di CPU delle attività figlio non è incluso.

## <a name="exclusiveduration"></a><a name="exclusive-duration"></a>Durata esclusiva

```cpp
std::chrono::nanoseconds ExclusiveDuration() const;
```

### <a name="return-value"></a>Valore restituito

Durata dell'attività in nanosecondi, esclusa la quantità di tempo trascorsa nelle attività figlio.

## <a name="exclusivedurationticks"></a><a name="exclusive-duration-ticks"></a>ExclusiveDurationTicks

```cpp
const long long& ExclusiveDurationTicks() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di tick che si sono verificati in questa attività, escluso il numero di tick che si sono verificati nelle attività figlio.

## <a name="exclusivewallclocktimeresponsibility"></a><a name="exclusive-wall-clock-time-responsibility"></a>ExclusiveWallClockTimeResponsibility

```cpp
std::chrono::nanoseconds ExclusiveWallClockTimeResponsibility() const;
```

### <a name="return-value"></a>Valore restituito

Uguale a [WallClockTimeResponsibility](#wall-clock-time-responsibility), ma non includendo la responsabilità dell'ora a muro delle attività figlio.

## <a name="exclusivewallclocktimeresponsibilityticks"></a><a name="exclusive-wall-clock-time-responsibility-ticks"></a>ExclusiveWallClockTimeResponsibilityTicksExclusiveWallClockTimeResponsibilityTicks

```cpp
const long long& ExclusiveWallClockTimeResponsibilityTicks() const;
```

### <a name="return-value"></a>Valore restituito

Uguale a [WallClockTimeResponsibilityTicks](#wall-clock-time-responsibility-ticks), ma non includendo il tempo di responsabilità wall-clock ticks delle attività figlio.

## <a name="processid"></a><a name="process-id"></a>Processid

```cpp
const unsigned long& ProcessId() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore per il processo in cui si è verificato l'evento.

## <a name="processorindex"></a><a name="processor-index"></a>ProcessorIndex

```cpp
const unsigned short& ProcessorIndex() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero per il processore logico in cui si è verificato l'evento.

## <a name="starttimestamp"></a><a name="start-timestamp"></a>StartTimestamp

```cpp
const long long& StartTimestamp() const;
```

### <a name="return-value"></a>Valore restituito

Valore tick acquisito al momento dell'avvio dell'attività.

## <a name="stoptimestamp"></a><a name="stop-timestamp"></a>StopTimestamp (Arresta)

```cpp
const long long& StopTimestamp() const;
```

### <a name="return-value"></a>Valore restituito

Valore tick acquisito al momento dell'arresto dell'attività.

## <a name="threadid"></a><a name="thread-id"></a>ID thread

```cpp
const unsigned long& ThreadId() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore del thread in cui si è verificato l'evento.

## <a name="tickfrequency"></a><a name="tick-frequency"></a>TickFrequency

```cpp
const long long& TickFrequency() const;
```

### <a name="return-value"></a>Valore restituito

Numero di segni di graduazione al secondo da utilizzare per la valutazione di una durata misurata in segni di graduazione per questo evento.

## <a name="wallclocktimeresponsibility"></a><a name="wall-clock-time-responsibility"></a>WallClockTimeResponsibility

```cpp
std::chrono::nanoseconds WallClockTimeResponsibility() const;
```

### <a name="return-value"></a>Valore restituito

La responsabilità del tempo a parete di questa attività, in nanosecondi. Per ulteriori informazioni sul significato della responsabilità del tempo wall-clock, vedere [WallClockTimeResponsibilityTicks](#wall-clock-time-responsibility-ticks).

## <a name="wallclocktimeresponsibilityticks"></a><a name="wall-clock-time-responsibility-ticks"></a>WallClockTimeResponsibilityTicks

```cpp
const long long& WallClockTimeResponsibilityTicks() const;
```

### <a name="return-value"></a>Valore restituito

Conteggio che rappresenta il contributo di questa attività all'ora complessiva del muro.A tick count that represents this activity's contribution to overall wall-clock time. Un segno di spunta di responsabilità a parete è diverso da un segno di spunta normale. Le zecche di responsabilità del tempo a parete tengono conto del parallelismo tra le attività. Due attività parallele possono avere una durata di 50 tick e lo stesso tempo di inizio e di arresto. In questo caso, entrambi vengono assegnati una responsabilità di tempo wall-clock di 25 zecche.

::: moniker-end
