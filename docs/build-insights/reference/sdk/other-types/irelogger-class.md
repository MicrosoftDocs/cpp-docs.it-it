---
title: Classe IRelogger
description: Riferimento C++ alla classe IRelogger di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- IRelogger
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: d0796cec3fe4ac6183279e8d8013a9550f18b61c
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78857056"
---
# <a name="irelogger-class"></a>Classe IRelogger

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La classe `IRelogger` fornisce un'interfaccia per la registrazione di una traccia di Event Tracing for Windows (ETW). Viene usato con le funzioni [MakeDynamicReloggerGroup](../functions/make-dynamic-relogger-group.md) e [MakeStaticReloggerGroup](../functions/make-static-analyzer-group.md) . Usare `IRelogger` come classe di base per creare il proprio relogger che può far parte di un gruppo di relogger.

## <a name="syntax"></a>Sintassi

```cpp
class IRelogger
{
public:
    virtual AnalysisControl OnStartActivity(const EventStack& eventStack,
        const void* relogSession);

    virtual AnalysisControl OnStopActivity(const EventStack& eventStack,
        const void* relogSession);

    virtual AnalysisControl OnSimpleEvent(const EventStack& eventStack,
        const void* relogSession);

    virtual AnalysisControl OnTraceInfo(const TraceInfo& traceInfo);
    virtual AnalysisControl OnBeginRelogging();
    virtual AnalysisControl OnEndRelogging();
    virtual AnalysisControl OnBeginReloggingPass();
    virtual AnalysisControl OnEndReloggingPass() ;

    virtual ~IRelogger();
};
```

## <a name="remarks"></a>Osservazioni

Il valore restituito predefinito per tutte le funzioni non sottoposte a override è `AnalysisControl::CONTINUE`. Per ulteriori informazioni, vedere [AnalysisControl](analysis-control-enum-class.md).

## <a name="members"></a>Members

### <a name="destructor"></a>Distruttore

[~ IRelogger](#irelogger-destructor)

### <a name="functions"></a>Funzioni

\ [OnBeginRelogging](#on-begin-relogging)
\ [OnBeginReloggingPass](#on-begin-relogging-pass)
\ [OnEndRelogging](#on-end-relogging)
\ [OnEndReloggingPass](#on-end-relogging-pass)
\ [OnSimpleEvent](#on-simple-event)
\ [OnStartActivity](#on-start-activity)
\ [OnStopActivity](#on-stop-activity)
[OnTraceInfo](#on-trace-info)

## <a name="irelogger-destructor"></a>~ IRelogger

Elimina definitivamente la classe IRelogger.

```cpp
virtual ~IRelogger();
```

## <a name="on-begin-relogging"></a>OnBeginRelogging

Questa funzione viene chiamata prima dell'inizio del passaggio di registrazione.

```cpp
virtual AnalysisControl OnBeginRelogging();
```

### <a name="return-value"></a>Valore restituito

Codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa dovrebbe avvenire successivamente.

## <a name="on-begin-relogging-pass"></a>OnBeginReloggingPass

Questa funzione viene chiamata all'inizio del passaggio di registrazione.

```cpp
virtual AnalysisControl OnBeginReloggingPass();
```

### <a name="return-value"></a>Valore restituito

Codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa dovrebbe avvenire successivamente.

## <a name="on-end-relogging"></a>OnEndRelogging

Questa funzione viene chiamata al termine del passaggio di registrazione.

```cpp
virtual AnalysisControl OnEndRelogging();
```

### <a name="return-value"></a>Valore restituito

Codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa dovrebbe avvenire successivamente.

## <a name="on-end-relogging-pass"></a>OnEndReloggingPass

Questa funzione viene chiamata alla fine del passaggio di registrazione.

```cpp
virtual AnalysisControl OnEndReloggingPass();
```

### <a name="return-value"></a>Valore restituito

Codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa dovrebbe avvenire successivamente.

## <a name="on-simple-event"></a>OnSimpleEvent

```cpp
virtual AnalysisControl OnSimpleEvent(const EventStack& eventStack);
```

Questa funzione viene chiamata quando viene elaborato un evento semplice.

### <a name="parameters"></a>Parametri

\ *eventStack*
Stack di eventi per questo semplice evento. Per ulteriori informazioni sugli stack di eventi, vedere [eventi](../event-table.md).

### <a name="return-value"></a>Valore restituito

Codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa dovrebbe avvenire successivamente.

## <a name="on-start-activity"></a>OnStartActivity

```cpp
virtual AnalysisControl OnStartActivity(const EventStack& eventStack);
```

Questa funzione viene chiamata quando viene elaborato un evento di avvio dell'attività.

### <a name="parameters"></a>Parametri

\ *eventStack*
Stack di eventi per questo evento di avvio dell'attività. Per ulteriori informazioni sugli stack di eventi, vedere [eventi](../event-table.md).

### <a name="return-value"></a>Valore restituito

Codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa dovrebbe avvenire successivamente.

## <a name="on-stop-activity"></a>OnStopActivity

Questa funzione viene chiamata quando viene elaborato un evento di arresto dell'attività.

```cpp
virtual AnalysisControl OnStopActivity(const EventStack& eventStack);
```

### <a name="parameters"></a>Parametri

\ *eventStack*
Stack di eventi per questo evento di arresto dell'attività. Per ulteriori informazioni sugli stack di eventi, vedere [eventi](../event-table.md).

### <a name="return-value"></a>Valore restituito

Codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa dovrebbe avvenire successivamente.

## <a name="on-trace-info"></a>OnTraceInfo

```cpp
virtual AnalysisControl OnTraceInfo(const TraceInfo& traceInfo);
```

Questa funzione viene chiamata una volta all'inizio di ogni analisi o passaggio di registrazione.

### <a name="parameters"></a>Parametri

\ *TraceInfo*
Oggetto [TraceInfo](../cpp-event-data-types/trace-info.md) che contiene le proprietà utili relative alla traccia utilizzata.

### <a name="return-value"></a>Valore restituito

Codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa dovrebbe avvenire successivamente.

::: moniker-end
