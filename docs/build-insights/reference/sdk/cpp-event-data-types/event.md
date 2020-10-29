---
title: classe di evento
description: Riferimento alla classe di evento C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Event
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 7dd96ffa3518c58e1b18312bb4fe2c36df26bd67
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92923298"
---
# <a name="event-class"></a>classe di evento

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `Event` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Utilizzarlo per trovare la corrispondenza con qualsiasi evento.

## <a name="syntax"></a>Sintassi

```cpp
class Event
{
public:
    Event(const RawEvent& event);

    const unsigned short&        EventId() const;
    const unsigned long long&    EventInstanceId() const;
    const long long&             TickFrequency() const;
    const long long&             Timestamp() const;
    const unsigned long&         ProcessId() const;
    const unsigned long&         ThreadId() const;
    const unsigned short&        ProcessorIndex() const;
    const char*                  EventName() const;
    const wchar_t*               EventWideName() const;
};
```

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

[Event](#entity)

### <a name="functions"></a>Funzioni

[Dati](#data) 
 di [ID](#event-id) evento\
[EventInstanceId](#event-instance-id)\
[EventName](#event-name)\
[EventWideName](#event-wide-name)\
[ProcessId](#process-id)\
[ProcessorIndex](#processor-index)\
[ThreadId](#thread-id)\
[TickFrequency](#tick-frequency)\
[Timestamp](#timestamp)

## <a name="event"></a>o<a name="entity"></a>

```cpp
Event(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Qualsiasi evento.

## <a name="data"></a><a name="data"></a> Dati

```cpp
const void* Data() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore ai dati aggiuntivi contenuti in questo evento. Per ulteriori informazioni su come interpretare questo campo, vedere [EVENT_DATA](../c-event-data-types/event-data-struct.md).

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

Stringa di caratteri "wide" contenente il nome dell'evento identificato da [eventId](#event-id).

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

## <a name="timestamp"></a><a name="timestamp"></a> Timestamp

```cpp
const long long& Timestamp() const;
```

### <a name="return-value"></a>Valore restituito

Se l'evento è un'attività, questa funzione restituisce un valore di segno di selezione acquisito al momento dell'avvio dell'attività. Per un evento semplice, questa funzione restituisce un valore di segno di selezione acquisito nel momento in cui si è verificato l'evento.

::: moniker-end
