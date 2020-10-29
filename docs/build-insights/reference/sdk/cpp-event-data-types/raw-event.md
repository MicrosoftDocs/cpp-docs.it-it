---
title: Classe RawEvent
description: Riferimento alla classe RawEvent di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- RawEvent
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 1cf96e1b8eadaf1de9fe2cf565a993f3bcafe358
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920463"
---
# <a name="rawevent-class"></a>Classe RawEvent

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `RawEvent` classe viene utilizzata per rappresentare un evento generale in un [EventStack](event-stack.md).

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

Diverse funzioni membro nella `RawEvent` classe restituiscono un conteggio. C++ Build Insights usa il contatore delle prestazioni di Windows come origine dei cicli. Per convertirlo in un'unità di tempo, ad esempio i secondi, è necessario usare un conteggio dei segni di selezione con una frequenza di segno. `TickFrequency`È possibile chiamare la funzione membro per ottenere la frequenza del segno di frequenza. Per un esempio su come convertire i cicli in un'unità di tempo, vedere la pagina [EVENT_DATA](../c-event-data-types/event-data-struct.md#tick-conversion-example) .

Se non si desidera convertire manualmente i cicli, la `RawEvent` classe fornisce funzioni membro che restituiscono valori temporali in nanosecondi. Usare la libreria C++ standard `chrono` per convertire i nanosecondi in altre unità di tempo.

## <a name="members"></a>Members

### <a name="constructor"></a>Costruttore

[RawEvent](#raw-event)

### <a name="functions"></a>Funzioni

[CPUTicks](#cpu-ticks)\
[CPUTime](#cpu-time)\
[Dati](#data)\
[Durata](#duration)\
[ID evento](#event-id) 
 [EventInstanceId](#event-instance-id) 
 [EventName](#event-name)\
[EventWideName](#event-wide-name)\
[ExclusiveCPUTicks](#exclusive-cpu-ticks)\
[ExclusiveCPUTime](#exclusive-cpu-time)\
[ExclusiveDuration](#exclusive-duration)\
[ExclusiveDurationTicks](#exclusive-duration-ticks)\
[ExclusiveWallClockTimeResponsibility](#exclusive-wall-clock-time-responsibility)\
[ExclusiveWallClockTimeResponsibilityTicks](#exclusive-wall-clock-time-responsibility-ticks)\
[ProcessId](#process-id)\
[ProcessorIndex](#processor-index)\
[StartTimestamp](#start-timestamp)\
[StopTimestamp](#stop-timestamp)\
[ThreadId](#thread-id)\
[TickFrequency](#tick-frequency)\
[WallClockTimeResponsibility](#wall-clock-time-responsibility)\
[WallClockTimeResponsibilityTicks](#wall-clock-time-responsibility-ticks)

## <a name="rawevent"></a><a name="raw-event"></a> RawEvent

```cpp
RawEvent(const EVENT_DATA& data);
```

### <a name="parameters"></a>Parametri

*evento*\
Dati dell'evento.

## <a name="cputicks"></a><a name="cpu-ticks"></a> CPUTicks

```cpp
const long long& CPUTicks() const;
```

### <a name="return-value"></a>Valore restituito

Numero di cicli della CPU verificatisi durante l'attività. Un ciclo della CPU è diverso da un normale segno di selezione. I cicli della CPU vengono conteggiati solo quando la CPU sta eseguendo codice in un'attività. I cicli della CPU non vengono conteggiati quando il thread associato all'attività è in stato di sospensione.

## <a name="cputime"></a><a name="cpu-time"></a> CPUTime

```cpp
std::chrono::nanoseconds CPUTime()() const;
```

### <a name="return-value"></a>Valore restituito

Tempo di esecuzione del codice all'interno di questa attività da parte della CPU. Questo valore può essere maggiore della durata dell'attività se le attività figlio vengono eseguite su thread separati. Il valore viene restituito in nanosecondi.

## <a name="data"></a><a name="data"></a> Dati

```cpp
const void* Data() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore ai dati aggiuntivi contenuti in questo evento. Per ulteriori informazioni su come interpretare questo campo, vedere [EVENT_DATA](../c-event-data-types/event-data-struct.md).

## <a name="duration"></a><a name="duration"></a> Durata

```cpp
std::chrono::nanoseconds Duration() const;
```

### <a name="return-value"></a>Valore restituito

Durata dell'attività in nanosecondi.

## <a name="eventid"></a><a name="event-id"></a> EventId

```cpp
const unsigned short& EventId() const;
```

### <a name="return-value"></a>Valore restituito

Numero che identifica il tipo di evento. Per un elenco degli identificatori di evento, vedere [event_id](../c-event-data-types/event-id-enum.md).

## <a name="eventinstanceid"></a><a name="event-instance-id"></a> EventInstanceId

```cpp
const unsigned long long& EventInstanceId() const;
```

### <a name="return-value"></a>Valore restituito

Numero che identifica in modo univoco l'evento all'interno di una traccia. Questo valore non viene modificato durante l'analisi o la registrazione più volte della stessa traccia. Utilizzare questo valore per identificare lo stesso evento in più analisi o la riregistrazione passa sulla stessa traccia.

## <a name="eventname"></a><a name="event-name"></a> EventName

```cpp
const char* EventName() const;
```

### <a name="return-value"></a>Valore restituito

Stringa ANSI contenente il nome del tipo di evento identificato da [eventId](#event-id).

## <a name="eventwidename"></a><a name="event-wide-name"></a> EventWideName

```cpp
const wchar_t* EventWideName() const;
```

### <a name="return-value"></a>Valore restituito

Stringa di caratteri "wide" contenente il nome del tipo di evento identificato da [eventId](#event-id).

## <a name="exclusivecputicks"></a><a name="exclusive-cpu-ticks"></a> ExclusiveCPUTicks

```cpp
const long long& ExclusiveCPUTicks() const;
```

### <a name="return-value"></a>Valore restituito

Uguale a [CPUTicks](#cpu-ticks), ma che non include i cicli della CPU verificatisi nelle attività figlio.

## <a name="exclusivecputime"></a><a name="exclusive-cpu-time"></a> ExclusiveCPUTime

```cpp
std::chrono::nanoseconds ExclusiveCPUTime() const;
```

### <a name="return-value"></a>Valore restituito

Uguale a [CPUTime](#cpu-time), con la differenza che il tempo della CPU delle attività figlio non è incluso.

## <a name="exclusiveduration"></a><a name="exclusive-duration"></a> ExclusiveDuration

```cpp
std::chrono::nanoseconds ExclusiveDuration() const;
```

### <a name="return-value"></a>Valore restituito

Durata dell'attività in nanosecondi, esclusa la quantità di tempo trascorsa nelle attività figlio.

## <a name="exclusivedurationticks"></a><a name="exclusive-duration-ticks"></a> ExclusiveDurationTicks

```cpp
const long long& ExclusiveDurationTicks() const;
```

### <a name="return-value"></a>Valore restituito

Numero di cicli che si sono verificati in questa attività, escluso il numero di cicli che si sono verificati nelle attività figlio.

## <a name="exclusivewallclocktimeresponsibility"></a><a name="exclusive-wall-clock-time-responsibility"></a> ExclusiveWallClockTimeResponsibility

```cpp
std::chrono::nanoseconds ExclusiveWallClockTimeResponsibility() const;
```

### <a name="return-value"></a>Valore restituito

Uguale a [WallClockTimeResponsibility](#wall-clock-time-responsibility), ma senza includere la responsabilità del tempo reale delle attività figlio.

## <a name="exclusivewallclocktimeresponsibilityticks"></a><a name="exclusive-wall-clock-time-responsibility-ticks"></a> ExclusiveWallClockTimeResponsibilityTicks

```cpp
const long long& ExclusiveWallClockTimeResponsibilityTicks() const;
```

### <a name="return-value"></a>Valore restituito

Uguale a [WallClockTimeResponsibilityTicks](#wall-clock-time-responsibility-ticks), ma non include i tick di responsabilità del tempo reale delle attività figlio.

## <a name="processid"></a><a name="process-id"></a> ProcessId

```cpp
const unsigned long& ProcessId() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore per il processo in cui si è verificato l'evento.

## <a name="processorindex"></a><a name="processor-index"></a> ProcessorIndex

```cpp
const unsigned short& ProcessorIndex() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero per il processore logico in cui si è verificato l'evento.

## <a name="starttimestamp"></a><a name="start-timestamp"></a> StartTimestamp

```cpp
const long long& StartTimestamp() const;
```

### <a name="return-value"></a>Valore restituito

Valore di segno di selezione acquisito al momento dell'avvio dell'attività.

## <a name="stoptimestamp"></a><a name="stop-timestamp"></a> StopTimestamp

```cpp
const long long& StopTimestamp() const;
```

### <a name="return-value"></a>Valore restituito

Valore di segno di selezione acquisito nel momento in cui l'attività è stata arrestata.

## <a name="threadid"></a><a name="thread-id"></a> ThreadId

```cpp
const unsigned long& ThreadId() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore per il thread in cui si è verificato l'evento.

## <a name="tickfrequency"></a><a name="tick-frequency"></a> TickFrequency

```cpp
const long long& TickFrequency() const;
```

### <a name="return-value"></a>Valore restituito

Numero di cicli al secondo da usare durante la valutazione di una durata misurata in cicli per questo evento.

## <a name="wallclocktimeresponsibility"></a><a name="wall-clock-time-responsibility"></a> WallClockTimeResponsibility

```cpp
std::chrono::nanoseconds WallClockTimeResponsibility() const;
```

### <a name="return-value"></a>Valore restituito

Responsabilità del tempo di clock dell'attività, in nanosecondi. Per ulteriori informazioni sul significato del tempo di inattività del clock, vedere [WallClockTimeResponsibilityTicks](#wall-clock-time-responsibility-ticks).

## <a name="wallclocktimeresponsibilityticks"></a><a name="wall-clock-time-responsibility-ticks"></a> WallClockTimeResponsibilityTicks

```cpp
const long long& WallClockTimeResponsibilityTicks() const;
```

### <a name="return-value"></a>Valore restituito

Conteggio dei tick che rappresenta il contributo di questa attività al tempo complessivo del clock. Un tick di responsabilità del tempo reale è diverso rispetto a un tick normale. I tick di responsabilità del tempo reale prendono in considerazione il parallelismo tra le attività. Due attività parallele possono avere una durata di 50 cicli e la stessa ora di inizio e di fine. In questo caso, a entrambi viene assegnata una responsabilità del tempo reale di 25 tick.

::: moniker-end
