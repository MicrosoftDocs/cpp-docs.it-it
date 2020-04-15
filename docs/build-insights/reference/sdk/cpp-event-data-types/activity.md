---
title: Classe dell'attività
description: Informazioni di riferimento per la classe di attività dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Activity
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 2ea04150aec9c0b2366d97e6e4c15de557a4f47c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325253"
---
# <a name="activity-class"></a>Classe dell'attività

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `Activity` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Utilizzarlo per trovare una corrispondenza con qualsiasi evento di attività. Fare riferimento alla tabella degli [eventi](../event-table.md) per visualizzare `Activity` tutti gli eventi che possono corrispondere dalla classe.

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

Diverse funzioni membro `Activity` nella classe restituiscono un conteggio di tick. Informazioni dettagliate sulla compilazione di C, in C, viene utilizzato il contatore delle prestazioni di Windows come origine dei segni di graduazione. Un conteggio di tick deve essere utilizzato con una frequenza tick per convertirlo in un'unità di tempo come secondi. La `TickFrequency` funzione membro, disponibile nella classe di base [Event,](event.md) può essere chiamata per ottenere la frequenza tick. La pagina [EVENT_DATA](../c-event-data-types/event-data-struct.md#tick-conversion-example) mostra un esempio di conversione dei segni di graduazione in un'unità di tempo.

Se non si desidera convertire i segni di `Activity` graduazione in unità di tempo manualmente, la classe fornisce funzioni membro che restituiscono valori di tempo in nanosecondi. Utilizzate la `chrono` libreria standard di C, per convertirle in altre unità di tempo.

## <a name="members"></a>Membri

Insieme ai relativi membri ereditati dalla `Activity` classe base [Event,](event.md) la classe contiene i membri seguenti:

### <a name="constructor"></a>Costruttore

[Attività](#activity)

### <a name="functions"></a>Funzioni

[CpuTicks (Controllo CPU)](#cpu-ticks)\
[Ora CPU](#cpu-time)\
[Durata](#duration)\
[ExclusiveCPUTicks](#exclusive-cpu-ticks)\
[ExclusiveCPUTime (Ora esclusivaCPU)](#exclusive-cpu-time)\
[Durata esclusiva](#exclusive-duration)\
[ExclusiveDurationTicks](#exclusive-duration-ticks)\
[ExclusiveWallClockTimeResponsibility](#exclusive-wall-clock-time-responsibility)\
[ExclusiveWallClockTimeResponsibilityTicksExclusiveWallClockTimeResponsibilityTicks](#exclusive-wall-clock-time-responsibility-ticks)\
[StartTimestamp](#start-timestamp)\
[StopTimestamp (Arresta)](#stop-timestamp)\
[WallClockTimeResponsibility](#wall-clock-time-responsibility)\
[WallClockTimeResponsibilityTicks](#wall-clock-time-responsibility-ticks)

## <a name="activity"></a><a name="activity"></a> Attività

```cpp
Activity(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Qualsiasi evento di attività.

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

## <a name="duration"></a><a name="duration"></a>Durata

```cpp
std::chrono::nanoseconds Duration() const;
```

### <a name="return-value"></a>Valore restituito

Durata dell'attività in nanosecondi.

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
