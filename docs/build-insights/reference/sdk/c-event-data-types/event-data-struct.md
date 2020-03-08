---
title: Struttura EVENT_DATA
description: Il C++ riferimento alla struttura EVENT_DATA di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- EVENT_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 572cbdaba346ddb77b665b5677b978c83a80aa3d
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78857093"
---
# <a name="event_data-structure"></a>Struttura EVENT_DATA

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La struttura `EVENT_DATA` descrive un evento ricevuto da una sessione di analisi o di registrazione. Queste sessioni vengono avviate chiamando le funzioni [Analyze](../functions/analyze.md), [Analyze](../functions/analyze-a.md), [AnalyzeW](../functions/analyze-w.md), [relog](../functions/relog.md), [RelogA](../functions/relog-a.md)o [RelogW](../functions/relog-w.md) .

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

## <a name="members"></a>Members

|  |  |
|--|--|
| `EventId` | Numero che identifica l'evento. Per un elenco degli identificatori di evento, vedere [event_id](event-id-enum.md). |
| `EventInstanceId` | Numero che identifica in modo univoco l'evento corrente all'interno di una traccia. Questo valore non viene modificato durante l'analisi o la registrazione più volte della stessa traccia. Utilizzare questo campo per identificare lo stesso evento in più analisi o la riregistrazione passa sulla stessa traccia. |
| `TickFrequency` | Numero di cicli al secondo da utilizzare durante la valutazione di una durata misurata in cicli. |
| `StartTimestamp` | Quando l'evento è un' *attività*, questo campo viene impostato su un valore di segno di selezione acquisito al momento dell'avvio dell'attività. Se questo evento è un *evento semplice*, questo campo viene impostato su un valore di segno di selezione acquisito nel momento in cui si è verificato l'evento. |
| `StopTimestamp` | Quando l'evento è un' *attività*, questo campo viene impostato su un valore di segno di selezione acquisito nel momento in cui l'attività è stata arrestata. Se l'evento Stop non è ancora stato ricevuto per questa attività, questo campo è impostato su zero. Se questo evento è un *evento semplice*, questo campo è impostato su zero. |
| `ExclusiveDurationTicks` | Se questo evento è un' *attività*, questo campo viene impostato sul numero di cicli che si sono verificati direttamente in questa attività. Il numero di cicli che si sono verificati in un'attività figlio è escluso. Questo campo è impostato su zero per *gli eventi semplici*. |
| `CPUTicks` | Se questo evento è un' *attività*, questo campo viene impostato sul numero di cicli della CPU verificatisi durante l'attività. Un ciclo della CPU è diverso da un normale segno di selezione. I cicli della CPU vengono conteggiati solo quando la CPU sta eseguendo codice in un'attività. I cicli della CPU non vengono conteggiati quando il thread associato all'attività è in stato di sospensione. Questo campo è impostato su zero per *gli eventi semplici*. |
| `ExclusiveCPUTicks` | Questo campo ha lo stesso significato di `CPUTicks`, ad eccezione del fatto che non include i cicli della CPU che si sono verificati nelle attività figlio. Questo campo è impostato su zero per *gli eventi semplici*. |
| `WallClockTimeResponsibilityTicks` | Se questo evento è un' *attività*, questo campo viene impostato su un numero di tick che rappresenta il contributo dell'attività al tempo complessivo del clock. Un tick di responsabilità del tempo reale è diverso rispetto a un tick normale. I tick di responsabilità del tempo reale prendono in considerazione il parallelismo tra le attività. Ad esempio, due attività parallele possono avere una durata di 50 cicli e la stessa ora di inizio e di fine. In questo caso, a entrambi verrà assegnata una responsabilità del tempo reale di 25 tick. Questo campo è impostato su zero per *gli eventi semplici*. |
| `ExclusiveWallClockTimeResponsibilityTicks` | Questo campo ha lo stesso significato di `WallClockTimeResponsibilityTicks`, ad eccezione del fatto che non include i tick di responsabilità del tempo di clock delle attività figlio. Questo campo è impostato su zero per *gli eventi semplici*. |
| `Data` | Punta a dati aggiuntivi archiviati nell'evento. Il tipo di dati a cui punta è diverso, a seconda del campo `EventId`. |
| `ProcessId` | Identificatore per il processo in cui si è verificato l'evento. |
| `ThreadId` | Identificatore per il thread in cui si è verificato l'evento. |
| `ProcessorIndex` | Numero di CPU con indice zero in cui si è verificato l'evento. |
| `EventName` | Stringa ANSI contenente il nome dell'entità identificata da `EventId`. |
| `EventWideName` | Stringa di caratteri "wide" che contiene il nome dell'entità identificata da `EventId`. |

## <a name="remarks"></a>Osservazioni

Molti campi in `EVENT_DATA` contengono i conteggi dei cicli. C++Build Insights usa il contatore delle prestazioni della finestra come origine dei cicli. Per convertirlo in un'unità di tempo appropriata, ad esempio i secondi, è necessario usare un conteggio dei segni di selezione con il campo `TickFrequency`. Vedere l'esempio seguente per eseguire questa conversione. `EVENT_DATA` non contiene un campo per il numero di cicli regolari di un'attività. Per ottenere questo valore, sottrarre `StartTimestamp` da `StopTimestamp`. `EVENT_DATA` è una struttura che deve essere usata dagli utenti dell'API C. Per C++ gli utenti dell'API, le classi come gli [eventi](../cpp-event-data-types/event.md) eseguono le conversioni automatiche.

Il valore del campo `EVENT_DATA` `Data` dipende dal valore del campo `EventId`. Il valore di `Data` viene descritto nella tabella seguente. Alcuni identificatori di entità potrebbero mancare nella tabella seguente. In questo caso, il campo `Data` è impostato su `nullptr` o zero.

| Valore della proprietà `EventId` | Tipo a cui punta `Data` |
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

## <a name="tick-conversion-example"></a>Esempio di conversione del segno di selezione

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
