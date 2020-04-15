---
title: struttura EVENT_DATA
description: L'SDK di analisi di compilazione di C'è EVENT_DATA riferimento alla struttura.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- EVENT_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 8ce396febe278c5e7c34fe170939c9522913f92a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325602"
---
# <a name="event_data-structure"></a>struttura EVENT_DATA

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `EVENT_DATA` struttura descrive un evento ricevuto da una sessione di analisi o di riregistrazione. Queste sessioni vengono avviate chiamando le funzioni [Analyze](../functions/analyze.md), [AnalyzeA](../functions/analyze-a.md), [AnalyzeW](../functions/analyze-w.md), [Relog](../functions/relog.md), [RelogA](../functions/relog-a.md)o [RelogW](../functions/relog-w.md) .

## <a name="syntax"></a>Sintassi

```cpp
typedef struct EVENT_DATA_TAG
{
    unsigned short          EventId;
    unsigned long long      EventInstanceId;

    long long               TickFrequency;
    long long               StartTimestamp;
    long long               StopTimestamp;
    long long               ExclusiveDurationTicks;
    long long               CPUTicks;
    long long               ExclusiveCPUTicks;
    long long               WallClockTimeResponsibilityTicks;
    long long               ExclusiveWallClockTimeResponsibilityTicks;

    const void*             Data;

    unsigned long           ProcessId;
    unsigned long           ThreadId;
    unsigned short          ProcessorIndex;

    const char*             EventName;
    const wchar_t*          EventWideName;

} EVENT_DATA;
```

## <a name="members"></a>Membri

|  |  |
|--|--|
| `EventId` | Numero che identifica l'evento. Per un elenco degli identificatori di evento, vedere [EVENT_ID](event-id-enum.md). |
| `EventInstanceId` | Numero che identifica in modo univoco l'evento corrente all'interno di una traccia. Questo valore non cambia quando si analizza o si riregistra la stessa traccia più volte. Utilizzare questo campo per identificare lo stesso evento in più passaggi di analisi o di reimpostazione della stessa traccia. |
| `TickFrequency` | Il numero di segni di graduazione al secondo da utilizzare per valutare una durata misurata in segni di graduazione. |
| `StartTimestamp` | Quando l'evento è *un'attività*, questo campo viene impostato su un valore di tick acquisito al momento dell'avvio dell'attività. Se questo evento è un *evento semplice*, questo campo viene impostato su un valore di graduazione acquisito nel momento in cui si è verificato l'evento. |
| `StopTimestamp` | Quando l'evento è *un'attività*, questo campo viene impostato su un valore di tick acquisito al momento dell'interruzione dell'attività. Se l'evento di arresto non è ancora stato ricevuto per questa attività, questo campo è impostato su zero. Se questo evento è un *evento semplice*, questo campo è impostato su zero. |
| `ExclusiveDurationTicks` | Se questo evento è *un'attività*, questo campo è impostato sul numero di segni di graduazione che si sono verificati direttamente in questa attività. Il numero di segni di graduazione che si sono verificati in un'attività figlio sono esclusi. Questo campo è impostato su zero per *eventi semplici*. |
| `CPUTicks` | Se questo evento è *un'attività*, questo campo è impostato sul numero di segni di graduazione della CPU che si sono verificati durante questa attività. Un segno di spunta della CPU è diverso da un segno di spunta normale. I segni di graduazione della CPU vengono conteggiati solo quando la CPU sta eseguendo codice in un'attività. I segni di spunta della CPU non vengono conteggiati quando il thread associato all'attività è in attivo. Questo campo è impostato su zero per *eventi semplici*. |
| `ExclusiveCPUTicks` | Questo campo ha lo `CPUTicks`stesso significato di , ad eccezione del fatto che non include i segni di graduazione della CPU che si sono verificati nelle attività figlio. Questo campo è impostato su zero per *eventi semplici*. |
| `WallClockTimeResponsibilityTicks` | Se questo evento è un *evento Activity*, questo campo viene impostato su un conteggio che rappresenta il contributo di questa attività all'ora complessiva dell'orologio a muro. Un segno di spunta di responsabilità a parete è diverso da un segno di spunta normale. Le zecche di responsabilità del tempo a parete tengono conto del parallelismo tra le attività. Ad esempio, due attività parallele possono avere una durata di 50 tick e lo stesso tempo di inizio e di arresto. In questo caso, a entrambi verrà assegnata una responsabilità del tempo a parete di 25 zecche. Questo campo è impostato su zero per *eventi semplici*. |
| `ExclusiveWallClockTimeResponsibilityTicks` | Questo campo ha lo `WallClockTimeResponsibilityTicks`stesso significato di , ad eccezione del fatto che non include le zecche di responsabilità del tempo a parete delle attività relative ai bambini. Questo campo è impostato su zero per *eventi semplici*. |
| `Data` | Punta a dati aggiuntivi memorizzati nell'evento. Il tipo di dati a cui `EventId` punta è diverso, a seconda del campo. |
| `ProcessId` | Identificatore per il processo in cui si è verificato l'evento. |
| `ThreadId` | Identificatore del thread in cui si è verificato l'evento. |
| `ProcessorIndex` | Numero di CPU indicizzato su zero in cui si è verificato l'evento. |
| `EventName` | Stringa ANSI contenente il nome dell'entità identificata da `EventId`. |
| `EventWideName` | Stringa larga contenente il nome dell'entità identificata da `EventId`. |

## <a name="remarks"></a>Osservazioni

Molti campi `EVENT_DATA` in contengono conteggi di controllo. Informazioni dettagliate sulla compilazione di C, in C, viene utilizzato il contatore delle prestazioni della finestra come origine dei segni di graduazione. È necessario utilizzare un `TickFrequency` conteggio di controllo con il campo per convertirlo in un'unità di tempo appropriata, ad esempio secondi. Per eseguire questa conversione, vedere l'esempio seguente. `EVENT_DATA`non contiene un campo per il conteggio regolare di un'attività. Per ottenere questo `StartTimestamp` valore, sottrarre da `StopTimestamp`. `EVENT_DATA`è una struttura che deve essere utilizzata dagli utenti dell'API C. Per gli utenti dell'API di C, classi come [Event](../cpp-event-data-types/event.md) time conversions automaticamente.

Il valore `EVENT_DATA` `Data` del campo dipende dal `EventId` valore del relativo campo. Il valore `Data` di è descritto nella tabella seguente. Alcuni identificatori di entità potrebbero mancare nella tabella seguente. In questo caso, il `Data` `nullptr` campo è impostato su o zero.

| Valore della proprietà `EventId` | Tipo indicato da`Data` |
|--|--|
| `EVENT_ID_BACK_END_PASS` | [CL_PASS_DATA](cl-pass-data-struct.md) |
| `EVENT_ID_COMMAND_LINE` | `const wchar_t` |
| `EVENT_ID_COMPILER` | [INVOCATION_DATA](invocation-data-struct.md) |
| `EVENT_ID_ENVIRONMENT_VARIABLE` | [NAME_VALUE_PAIR_DATA](name-value-pair-data-struct.md) |
| `EVENT_ID_EXECUTABLE_IMAGE_OUTPUT` | [FILE_DATA](file-data-struct.md) |
| `EVENT_ID_EXP_OUTPUT` | [FILE_DATA](file-data-struct.md) |
| `EVENT_ID_FILE_INPUT` | [FILE_DATA](file-data-struct.md) |
| `EVENT_ID_FORCE_INLINE` | [FUNCTION_FORCE_INLINEE_DATA](function-force-inlinee-data-struct.md) |
| `EVENT_ID_FRONT_END_FILE` | [FRONT_END_FILE_DATA](front-end-file-data-struct.md) |
| `EVENT_ID_FRONT_END_PASS` | [CL_PASS_DATA](cl-pass-data-struct.md) |
| `EVENT_ID_FUNCTION` | [FUNCTION_DATA](function-data-struct.md) |
| `EVENT_ID_IMP_LIB_OUTPUT` | [FILE_DATA](file-data-struct.md) |
| `EVENT_ID_LIB_OUTPUT` | [FILE_DATA](file-data-struct.md) |
| `EVENT_ID_LINKER` | [INVOCATION_DATA](invocation-data-struct.md) |
| `EVENT_ID_OBJ_OUTPUT` | [FILE_DATA](file-data-struct.md) |
| `EVENT_ID_SYMBOL_NAME` | [SYMBOL_NAME_DATA](symbol-name-data-struct.md) |
| `EVENT_ID_TEMPLATE_INSTANTIATION` | [TEMPLATE_INSTANTIATION_DATA](template-instantiation-data-struct.md) |

## <a name="tick-conversion-example"></a>Esempio di conversione tick

```cpp
//
// We have the elapsed number of ticks, along with the
// number of ticks per second. We use these values
// to convert to the number of elapsed microseconds.
// To guard against loss-of-precision, we convert
// to microseconds *before* dividing by ticks-per-second.
//

long long ConvertDurationToMicroseconds(const sruct EVENT_DATA& eventData)
{
    long long duration = eventData.StopTimestamp - eventData.StartTimestamp;
    long long duration *= 1000000;
    return duration / eventData.TickFrequency;
}
```

::: moniker-end
