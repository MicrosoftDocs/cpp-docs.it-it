---
title: Classe IRelogger
description: Informazioni di riferimento per la classe IRelogger dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- IRelogger
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 146377b2b44df43ed4b2f749efd9fb614a2a09c9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329151"
---
# <a name="irelogger-class"></a>Classe IRelogger

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `IRelogger` classe fornisce un'interfaccia per la nuova registrazione di una traccia ETW (Event Tracing for Windows). Viene utilizzato con le funzioni [MakeDynamicReloggerGroup](../functions/make-dynamic-relogger-group.md) e [MakeStaticReloggerGroup.](../functions/make-static-analyzer-group.md) Utilizzare `IRelogger` come classe base per creare un relogger personalizzato che può far parte di un gruppo relogger.

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

Il valore restituito predefinito per tutte le `AnalysisControl::CONTINUE`funzioni che non vengono sostituite è . Per ulteriori informazioni, vedere [AnalysisControl](analysis-control-enum-class.md).

## <a name="members"></a>Membri

### <a name="destructor"></a>Distruttore

[IRelogger](#irelogger-destructor)

### <a name="functions"></a>Funzioni

[OnBeginRelogging (Informazioni in base alle informazioni in cui è in](#on-begin-relogging)\
[OnBeginReloggingPass](#on-begin-relogging-pass)\
[OnEndRelogging (Informazioni in base alla data in stato di in](#on-end-relogging)\
[OnEndReloggingPass](#on-end-relogging-pass)\
[OnSimpleEvent (evento SuSimpleEvent)](#on-simple-event)\
[OnStartActivity](#on-start-activity)\
[OnStopActivity](#on-stop-activity)\
[OnTraceInfo](#on-trace-info)

## <a name="irelogger"></a><a name="irelogger-destructor"></a>IRelogger

Distrugge la classe IRelogger.

```cpp
virtual ~IRelogger();
```

## <a name="onbeginrelogging"></a><a name="on-begin-relogging"></a>OnBeginRelogging (Informazioni in base alle informazioni in cui è in

Questa funzione viene chiamata prima dell'inizio del passaggio di riregistrazione.

```cpp
virtual AnalysisControl OnBeginRelogging();
```

### <a name="return-value"></a>Valore restituito

Un codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa deve accadere successivamente.

## <a name="onbeginreloggingpass"></a><a name="on-begin-relogging-pass"></a>OnBeginReloggingPass

Questa funzione viene chiamata all'inizio del passaggio di riregistrazione.

```cpp
virtual AnalysisControl OnBeginReloggingPass();
```

### <a name="return-value"></a>Valore restituito

Un codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa deve accadere successivamente.

## <a name="onendrelogging"></a><a name="on-end-relogging"></a>OnEndRelogging (Informazioni in base alla data in stato di in

Questa funzione viene chiamata al termine del passaggio di riregistrazione.

```cpp
virtual AnalysisControl OnEndRelogging();
```

### <a name="return-value"></a>Valore restituito

Un codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa deve accadere successivamente.

## <a name="onendreloggingpass"></a><a name="on-end-relogging-pass"></a>OnEndReloggingPass

Questa funzione viene chiamata alla fine del passaggio di riregistrazione.

```cpp
virtual AnalysisControl OnEndReloggingPass();
```

### <a name="return-value"></a>Valore restituito

Un codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa deve accadere successivamente.

## <a name="onsimpleevent"></a><a name="on-simple-event"></a>OnSimpleEvent (evento SuSimpleEvent)

```cpp
virtual AnalysisControl OnSimpleEvent(const EventStack& eventStack);
```

Questa funzione viene chiamata durante l'elaborazione di un evento semplice.

### <a name="parameters"></a>Parametri

*eventStack (impilare)*\
Stack di eventi per questo evento semplice. Per ulteriori informazioni sugli stack di eventi, vedere [Eventi](../event-table.md).

### <a name="return-value"></a>Valore restituito

Un codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa deve accadere successivamente.

## <a name="onstartactivity"></a><a name="on-start-activity"></a>OnStartActivity

```cpp
virtual AnalysisControl OnStartActivity(const EventStack& eventStack);
```

Questa funzione viene chiamata durante l'elaborazione di un evento di avvio dell'attività.

### <a name="parameters"></a>Parametri

*eventStack (impilare)*\
Stack di eventi per questo evento di avvio dell'attività. Per ulteriori informazioni sugli stack di eventi, vedere [Eventi](../event-table.md).

### <a name="return-value"></a>Valore restituito

Un codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa deve accadere successivamente.

## <a name="onstopactivity"></a><a name="on-stop-activity"></a>OnStopActivity

Questa funzione viene chiamata durante l'elaborazione di un evento di interruzione di attività.

```cpp
virtual AnalysisControl OnStopActivity(const EventStack& eventStack);
```

### <a name="parameters"></a>Parametri

*eventStack (impilare)*\
Lo stack di eventi per questo evento di interruzione dell'attività. Per ulteriori informazioni sugli stack di eventi, vedere [Eventi](../event-table.md).

### <a name="return-value"></a>Valore restituito

Un codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa deve accadere successivamente.

## <a name="ontraceinfo"></a><a name="on-trace-info"></a>OnTraceInfo

```cpp
virtual AnalysisControl OnTraceInfo(const TraceInfo& traceInfo);
```

Questa funzione viene chiamata una volta all'inizio di ogni passaggio di analisi o relogging.

### <a name="parameters"></a>Parametri

*Traceinfo*\
Oggetto [TraceInfo](../cpp-event-data-types/trace-info.md) oggetto che contiene proprietà utili sulla traccia utilizzata per l'utente.

### <a name="return-value"></a>Valore restituito

Un codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa deve accadere successivamente.

::: moniker-end
