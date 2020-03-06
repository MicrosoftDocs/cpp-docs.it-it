---
title: classe di evento
description: Riferimento C++ alla classe di evento di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Event
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 205a4e0ca9dd9449933f38f02d4ceafd5df8ead2
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333398"
---
# <a name="event-class"></a>classe di evento

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La classe `Event` viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Utilizzarlo per trovare la corrispondenza con qualsiasi evento.

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

[Data](#data)
[eventId](#event-id)\
\ [EventInstanceId](#event-instance-id)
[Eventname](#event-name)\
\ [EventWideName](#event-wide-name)
\ [ProcessID](#process-id)
\ [ProcessorIndex](#processor-index)
\ [ThreadID](#thread-id)
\ [TickFrequency](#tick-frequency)
[Timestamp](#timestamp)

## <a name="entity"></a>Evento

```cpp
Event(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*event*\
Qualsiasi evento.

## <a name="data"></a>Dati

```cpp
const void* Data() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore ai dati aggiuntivi contenuti in questo evento. Per ulteriori informazioni su come interpretare questo campo, vedere [EVENT_DATA](../c-event-data-types/event-data-struct.md).

## <a name="event-id"></a>EventId

```cpp
const unsigned short& EventId() const;
```

### <a name="return-value"></a>Valore restituito

Numero che identifica il tipo di evento. Per un elenco degli identificatori di evento, vedere [event_id](../c-event-data-types/event-id-enum.md).

## <a name="event-instance-id"></a>EventInstanceId

```cpp
const unsigned long long& EventInstanceId() const;
```

### <a name="return-value"></a>Valore restituito

Numero che identifica in modo univoco l'evento all'interno di una traccia. Questo valore non viene modificato durante l'analisi o la registrazione più volte della stessa traccia. Utilizzare questo valore per identificare lo stesso evento in più analisi o la riregistrazione passa sulla stessa traccia.

## <a name="event-name"></a>EventName

```cpp
const char* EventName() const;
```

### <a name="return-value"></a>Valore restituito

Stringa ANSI contenente il nome del tipo di evento identificato da [eventId](#event-id).

## <a name="event-wide-name"></a>EventWideName

```cpp
const wchar_t* EventWideName() const;
```

### <a name="return-value"></a>Valore restituito

Stringa di caratteri "wide" contenente il nome dell'evento identificato da [eventId](#event-id).

## <a name="process-id"></a>ProcessId

```cpp
const unsigned long& ProcessId() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore per il processo in cui si è verificato l'evento.

## <a name="processor-index"></a>ProcessorIndex

```cpp
const unsigned short& ProcessorIndex() const;
```

### <a name="return-value"></a>Valore restituito

Indice in base zero per il processore logico in cui si è verificato l'evento.

## <a name="thread-id"></a>ThreadId

```cpp
const unsigned long& ThreadId() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore per il thread in cui si è verificato l'evento.

## <a name="tick-frequency"></a>TickFrequency

```cpp
const long long& TickFrequency() const;
```

### <a name="return-value"></a>Valore restituito

Numero di cicli al secondo da usare durante la valutazione di una durata misurata in cicli per questo evento.

## <a name="timestamp"></a>Timestamp

```cpp
const long long& Timestamp() const;
```

### <a name="return-value"></a>Valore restituito

Se l'evento è un'attività, questa funzione restituisce un valore di segno di selezione acquisito al momento dell'avvio dell'attività. Per un evento semplice, questa funzione restituisce un valore di segno di selezione acquisito nel momento in cui si è verificato l'evento.

::: moniker-end
