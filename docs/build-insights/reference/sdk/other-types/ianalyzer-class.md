---
title: Classe IAnalyzer
description: Informazioni di riferimento per la classe IAnalyzer dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- IAnalyzer
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: be9d80bb94450458c73fd6ce8d908985ba6f293d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329179"
---
# <a name="ianalyzer-class"></a>Classe IAnalyzer

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `IAnalyzer` classe fornisce un'interfaccia per l'analisi di una traccia ETW (Event Tracing for Windows). Viene utilizzato con le funzioni [MakeDynamicAnalyzerGroup](../functions/make-dynamic-analyzer-group.md), [MakeDynamicReloggerGroup](../functions/make-dynamic-relogger-group.md), [MakeStaticAnalyzerGroup](../functions/make-dynamic-analyzer-group.md)e [MakeStaticReloggerGroup](../functions/make-static-analyzer-group.md) . Utilizzare `IAnalyzer` come classe base per creare un analizzatore personalizzato che può far parte di un analizzatore o di un gruppo relogger.

## <a name="syntax"></a>Sintassi

```cpp
class IAnalyzer : public IRelogger
{
public:
    virtual AnalysisControl OnStartActivity(const EventStack& eventStack);
    virtual AnalysisControl OnStopActivity(const EventStack& eventStack)
    virtual AnalysisControl OnSimpleEvent(const EventStack& eventStack);
    virtual AnalysisControl OnBeginAnalysis();
    virtual AnalysisControl OnEndAnalysis();
    virtual AnalysisControl OnBeginAnalysisPass();
    virtual AnalysisControl OnEndAnalysisPass();

    AnalysisControl OnStartActivity(const EventStack& eventStack,
        const void* relogSession) final;

    AnalysisControl OnStopActivity(const EventStack& eventStack,
        const void* relogSession) final;

    AnalysisControl OnSimpleEvent(const EventStack& eventStack,
        const void* relogSession) final;

    AnalysisControl OnBeginRelogging() final;
    AnalysisControl OnEndRelogging() final;
    AnalysisControl OnBeginReloggingPass() final;
    AnalysisControl OnEndReloggingPass() final;

    virtual ~IAnalyzer();
};
```

## <a name="remarks"></a>Osservazioni

Le classi `IAnalyzer` che derivano da possono essere utilizzate sia come analizzatori che come relogger. Se utilizzato come relogger, le funzioni specifiche del relogger reindirizzano all'equivalente analizzatore. Il contrario non è vero: una `IRelogger` classe che deriva da non può essere utilizzata come analizzatore. L'utilizzo di un analizzatore in un gruppo di relogger è un modello comune. Quando viene posizionato in una posizione iniziale di un gruppo di relogger, un analizzatore può pre-calcolare le informazioni e renderle disponibili per i relogger nelle posizioni successive.

Il valore restituito predefinito per tutte le `AnalysisControl::CONTINUE`funzioni che non vengono sostituite è . Per ulteriori informazioni, vedere [AnalysisControl](analysis-control-enum-class.md).

## <a name="members"></a>Membri

Oltre al membro [OnTraceInfo](irelogger-class.md#on-trace-info) `IRelogger` dall'interfaccia, la `IAnalyzer` classe contiene i membri seguenti:

### <a name="destructor"></a>Distruttore

[IAnalyzer (Analizzatore di Un analizzatore](#ianalyzer-destructor)

### <a name="functions"></a>Funzioni

[OnBeginAnalysis (Analisi su inizio)](#on-begin-analysis)\
[OnBeginAnalysisPass](#on-begin-analysis-pass)\
[OnBeginRelogging (Informazioni in base alle informazioni in cui è in](#on-begin-relogging)\
[OnBeginReloggingPass](#on-begin-relogging-pass)\
[OnEndAnalysis](#on-end-analysis)\
[OnEndAnalysisPass](#on-end-analysis-pass)\
[OnEndRelogging (Informazioni in base alla data in stato di in](#on-end-relogging)\
[OnEndReloggingPass](#on-end-relogging-pass)\
[OnSimpleEvent (evento SuSimpleEvent)](#on-simple-event)\
[OnStartActivity](#on-start-activity)\
[OnStopActivity](#on-stop-activity)

## <a name="ianalyzer"></a><a name="ianalyzer-destructor"></a>IAnalyzer (Analizzatore di Un analizzatore

Elimina la classe IAnalyzer.

```cpp
virtual ~IAnalyzer();
```

## <a name="onbeginanalysis"></a><a name="on-begin-analysis"></a>OnBeginAnalysis (Analisi su inizio)

Per gli analizzatori parte di un gruppo di analizzatori, questa funzione viene chiamata prima dell'inizio del primo passaggio di analisi. Per gli analizzatori parte di un gruppo relogger, questa funzione viene chiamata prima dell'inizio del passaggio di relogging. Per gli analizzatori che fanno parte del gruppo analyzer e relogger della stessa sessione di relogging, questa funzione viene chiamata due volte prima dell'inizio del primo passaggio di analisi.

```cpp
virtual AnalysisControl OnBeginAnalysis();
```

### <a name="return-value"></a>Valore restituito

Un codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa deve accadere successivamente.

## <a name="onbeginanalysispass"></a><a name="on-begin-analysis-pass"></a>OnBeginAnalysisPass

Per gli analizzatori parte di un gruppo di analizzatori, questa funzione viene chiamata all'inizio di ogni passaggio di analisi. Per gli analizzatori parte di un gruppo relogger, questa funzione viene chiamata all'inizio del passaggio relogger. Per gli analizzatori che fanno parte del gruppo analyzer e relogger della stessa sessione di relogging, questa funzione viene chiamata all'inizio di ogni passaggio di analisi e all'inizio del passaggio relogger.

```cpp
virtual AnalysisControl OnBeginAnalysisPass();
```

### <a name="return-value"></a>Valore restituito

Un codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa deve accadere successivamente.

## <a name="onbeginrelogging"></a><a name="on-begin-relogging"></a>OnBeginRelogging (Informazioni in base alle informazioni in cui è in

```cpp
AnalysisControl OnBeginRelogging() final;
```

Questa funzione non può essere sottoposta a override. Viene chiamato dall'SDK di analisi di compilazione di C, quando un analizzatore fa parte di un gruppo di relogger. Questa funzione reindirizza la chiamata a [OnBeginAnalysis](#on-begin-analysis).

### <a name="return-value"></a>Valore restituito

Risultato della chiamata [OnBeginAnalysis.](#on-begin-analysis)

## <a name="onbeginreloggingpass"></a><a name="on-begin-relogging-pass"></a>OnBeginReloggingPass

Questa funzione non può essere sottoposta a override. Viene chiamato dall'SDK di analisi di compilazione di C, quando un analizzatore fa parte di un gruppo di relogger. Questa funzione reindirizza la chiamata a [OnBeginAnalysisPass](#on-begin-analysis-pass).

```cpp
AnalysisControl OnBeginReloggingPass() final;
```

### <a name="return-value"></a>Valore restituito

Risultato della chiamata [OnBeginAnalysisPass.](#on-begin-analysis-pass)

## <a name="onendanalysis"></a><a name="on-end-analysis"></a>OnEndAnalysis

Per gli analizzatori che fanno parte di un gruppo di analizzatori, questa funzione viene chiamata al termine dell'ultimo passaggio di analisi. Per gli analizzatori che fanno parte di un gruppo relogger, questa funzione viene chiamata al termine del passaggio di relogging. Per gli analizzatori che fanno parte sia dell'analizzatore che del gruppo relogger della stessa sessione di relogging, questa funzione viene chiamata due volte:

1. dopo che tutti i passaggi di analisi sono terminati e prima dell'inizio del passaggio di ri-logging, e
1. al termine del passaggio di riregistrazione.

```cpp
virtual AnalysisControl OnEndAnalysis();
```

### <a name="return-value"></a>Valore restituito

Un codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa deve accadere successivamente.

## <a name="onendanalysispass"></a><a name="on-end-analysis-pass"></a>OnEndAnalysisPass

Per gli analizzatori parte di un gruppo di analizzatori, questa funzione viene chiamata alla fine di ogni passaggio di analisi. Per gli analizzatori parte di un gruppo relogger, questa funzione viene chiamata alla fine del passaggio relogger. Per gli analizzatori che fanno parte del gruppo analyzer e relogger della stessa sessione di relogging, questa funzione viene chiamata alla fine di ogni passaggio di analisi e alla fine del passaggio relogger.

```cpp
virtual AnalysisControl OnEndAnalysisPass();
```

### <a name="return-value"></a>Valore restituito

Un codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa deve accadere successivamente.

## <a name="onendrelogging"></a><a name="on-end-relogging"></a>OnEndRelogging (Informazioni in base alla data in stato di in

Questa funzione non può essere sottoposta a override. Viene chiamato dall'SDK di analisi di compilazione di C, quando un analizzatore fa parte di un gruppo di relogger. Questa funzione reindirizza la chiamata a [OnEndAnalysis](#on-end-analysis).

```cpp
AnalysisControl OnEndRelogging() final;
```

### <a name="return-value"></a>Valore restituito

Risultato della chiamata [OnEndAnalysis.](#on-end-analysis)

## <a name="onendreloggingpass"></a><a name="on-end-relogging-pass"></a>OnEndReloggingPass

Questa funzione non può essere sottoposta a override. Viene chiamato dall'SDK di analisi di compilazione di C, quando un analizzatore fa parte di un gruppo di relogger. Questa funzione reindirizza la chiamata a [OnEndAnalysisPass](#on-end-analysis-pass).

```cpp
AnalysisControl OnEndReloggingPass() final;
```

### <a name="return-value"></a>Valore restituito

Risultato della chiamata [OnEndAnalysisPass.](#on-end-analysis-pass)

## <a name="onsimpleevent"></a><a name="on-simple-event"></a>OnSimpleEvent (evento SuSimpleEvent)

Questa funzione viene chiamata durante l'elaborazione di un evento semplice. La seconda versione di questa funzione non può essere sottoposta a override. Viene chiamato dall'SDK di analisi di compilazione di C, quando un analizzatore fa parte di un gruppo di relogger. Tutte le chiamate alla versione 2 vengono reindirizzate alla versione 1.

### <a name="version-1"></a>Versione 1

```cpp
virtual AnalysisControl OnSimpleEvent(const EventStack& eventStack);
```

### <a name="version-2"></a>Versione 2

```cpp
AnalysisControl OnSimpleEvent(const EventStack& eventStack,
        const void* relogSession) final;
```

### <a name="parameters"></a>Parametri

*eventStack (impilare)*\
Stack di eventi per questo evento semplice. Per ulteriori informazioni sugli stack di eventi, vedere [Eventi](../event-table.md).

*relogSession*\
Questo parametro è inutilizzato.

### <a name="return-value"></a>Valore restituito

Un codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa deve accadere successivamente.

## <a name="onstartactivity"></a><a name="on-start-activity"></a>OnStartActivity

Questa funzione viene chiamata durante l'elaborazione di un evento di avvio dell'attività. La seconda versione di questa funzione non può essere sottoposta a override. Viene chiamato dall'SDK di analisi di compilazione di C, quando un analizzatore fa parte di un gruppo di relogger. Tutte le chiamate alla versione 2 vengono reindirizzate alla versione 1.

### <a name="version-1"></a>Versione 1

```cpp
virtual AnalysisControl OnStartActivity(const EventStack& eventStack);
```

### <a name="version-2"></a>Versione 2

```cpp
AnalysisControl OnStartActivity(const EventStack& eventStack,
        const void* relogSession) final;
```

### <a name="parameters"></a>Parametri

*eventStack (impilare)*\
Stack di eventi per questo evento di avvio dell'attività. Per ulteriori informazioni sugli stack di eventi, vedere [Eventi](../event-table.md).

*relogSession*\
Questo parametro è inutilizzato.

### <a name="return-value"></a>Valore restituito

Un codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa deve accadere successivamente.

## <a name="onstopactivity"></a><a name="on-stop-activity"></a>OnStopActivity

Questa funzione viene chiamata durante l'elaborazione di un evento di interruzione di attività. La seconda versione di questa funzione non può essere sottoposta a override. Viene chiamato dall'SDK di analisi di compilazione di C, quando un analizzatore fa parte di un gruppo di relogger. Tutte le chiamate alla versione 2 vengono reindirizzate alla versione 1.

### <a name="version-1"></a>Versione 1

```cpp
virtual AnalysisControl OnStopActivity(const EventStack& eventStack);
```

### <a name="version-2"></a>Versione 2

```cpp
AnalysisControl OnStopActivity(const EventStack& eventStack,
        const void* relogSession) final;
```

### <a name="parameters"></a>Parametri

*eventStack (impilare)*\
Lo stack di eventi per questo evento di interruzione dell'attività. Per ulteriori informazioni sugli stack di eventi, vedere [Eventi](../event-table.md).

*relogSession*\
Questo parametro è inutilizzato.

### <a name="return-value"></a>Valore restituito

Un codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa deve accadere successivamente.

::: moniker-end
