---
title: classe di evento
description: Informazioni di riferimento per la classe dell'evento SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Event
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 25d58f642a1c314e48ddff62553394bcc65e4717
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324969"
---
# <a name="event-class"></a>classe di evento

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `Event` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usalo per abbinare qualsiasi evento.

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

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

[Evento](#entity)

### <a name="functions"></a>Funzioni

[EventId dati](#data)
[EventId](#event-id)\
[EventInstanceId](#event-instance-id)\
[Eventname](#event-name)\
[Nome EventoWideName](#event-wide-name)\
[Processid](#process-id)\
[ProcessorIndex](#processor-index)\
[ID thread](#thread-id)\
[TickFrequency](#tick-frequency)\
[Timestamp](#timestamp)

## <a name="event"></a>o<a name="entity"></a>

```cpp
Event(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Qualsiasi evento.

## <a name="data"></a><a name="data"></a>Dati

```cpp
const void* Data() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a dati aggiuntivi contenuti in questo evento. Per ulteriori informazioni su come interpretare questo campo, vedere [EVENT_DATA](../c-event-data-types/event-data-struct.md).

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

Stringa larga contenente il nome dell'evento identificato da [EventId](#event-id).

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

## <a name="timestamp"></a><a name="timestamp"></a>Timestamp

```cpp
const long long& Timestamp() const;
```

### <a name="return-value"></a>Valore restituito

Se l'evento è un'attività, questa funzione restituisce un valore tick acquisito al momento dell'avvio dell'attività. Per un evento semplice, questa funzione restituisce un valore tick acquisito nel momento in cui si è verificato l'evento.

::: moniker-end
