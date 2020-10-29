---
title: Classe dell'attività
description: Riferimento alla classe di attività SDK per Build Insights di C++.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Activity
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: ce7e4083411f1654064ca4628d10a767c7be1b7f
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92923395"
---
# <a name="activity-class"></a>Classe dell'attività

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `Activity` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con qualsiasi evento di attività. Fare riferimento alla [tabella eventi](../event-table.md) per visualizzare tutti gli eventi che possono essere associati alla `Activity` classe.

## <a name="syntax"></a>Sintassi

```cpp
class Activity : public Event
{
public:
    Activity(const RawEvent& event);

    const long long& StartTimestamp() const;
    const long long& StopTimestamp() const;
    const long long& ExclusiveDurationTicks() const;
    const long long& CPUTicks() const;
    const long long& ExclusiveCPUTicks() const;
    const long long& WallClockTimeResponsibilityTicks() const;
    const long long& ExclusiveWallClockTimeResponsibilityTicks() const;

    std::chrono::nanoseconds Duration() const;
    std::chrono::nanoseconds ExclusiveDuration() const;
    std::chrono::nanoseconds CPUTime() const ;
    std::chrono::nanoseconds ExclusiveCPUTime() const;
    std::chrono::nanoseconds WallClockTimeResponsibility() const;
    std::chrono::nanoseconds ExclusiveWallClockTimeResponsibility() const;
};
```

## <a name="remarks"></a>Osservazioni

Diverse funzioni membro nella `Activity` classe restituiscono un conteggio. C++ Build Insights usa il contatore delle prestazioni di Windows come origine dei cicli. Per convertirlo in un'unità di tempo, ad esempio i secondi, è necessario utilizzare un conteggio con una frequenza di segno di cadenza. La `TickFrequency` funzione membro, disponibile nella classe di base [Event](event.md) , può essere chiamata per ottenere la frequenza del segno di frequenza. Nella pagina [EVENT_DATA](../c-event-data-types/event-data-struct.md#tick-conversion-example) viene illustrato un esempio di conversione di cicli in un'unità di tempo.

Se non si vuole convertire i segni di selezione in unità di tempo autonomamente, la `Activity` classe fornisce funzioni membro che restituiscono valori temporali in nanosecondi. Utilizzare la libreria C++ standard `chrono` per convertirli in altre unità di tempo.

## <a name="members"></a>Members

Insieme ai relativi membri ereditati dalla classe di base [Event](event.md) , la `Activity` classe contiene i membri seguenti:

### <a name="constructor"></a>Costruttore

[Attività](#activity)

### <a name="functions"></a>Funzioni

[CPUTicks](#cpu-ticks)\
[CPUTime](#cpu-time)\
[Durata](#duration)\
[ExclusiveCPUTicks](#exclusive-cpu-ticks)\
[ExclusiveCPUTime](#exclusive-cpu-time)\
[ExclusiveDuration](#exclusive-duration)\
[ExclusiveDurationTicks](#exclusive-duration-ticks)\
[ExclusiveWallClockTimeResponsibility](#exclusive-wall-clock-time-responsibility)\
[ExclusiveWallClockTimeResponsibilityTicks](#exclusive-wall-clock-time-responsibility-ticks)\
[StartTimestamp](#start-timestamp)\
[StopTimestamp](#stop-timestamp)\
[WallClockTimeResponsibility](#wall-clock-time-responsibility)\
[WallClockTimeResponsibilityTicks](#wall-clock-time-responsibility-ticks)

## <a name="activity"></a><a name="activity"></a> Attività

```cpp
Activity(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Qualsiasi evento di attività.

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

## <a name="duration"></a><a name="duration"></a> Durata

```cpp
std::chrono::nanoseconds Duration() const;
```

### <a name="return-value"></a>Valore restituito

Durata dell'attività in nanosecondi.

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
