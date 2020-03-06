---
title: Classe IAnalyzer
description: Riferimento C++ alla classe IAnalyzer di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- IAnalyzer
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 53f7b36695bb24d96ccfe88afbb56ff717c94dc9
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332453"
---
# <a name="ianalyzer-class"></a>Classe IAnalyzer

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La classe `IAnalyzer` fornisce un'interfaccia per l'analisi di una traccia di Event Tracing for Windows (ETW). Viene usato con le funzioni [MakeDynamicAnalyzerGroup](../functions/make-dynamic-analyzer-group.md), [MakeDynamicReloggerGroup](../functions/make-dynamic-relogger-group.md), [MakeStaticAnalyzerGroup](../functions/make-dynamic-analyzer-group.md)e [MakeStaticReloggerGroup](../functions/make-static-analyzer-group.md) . Usare `IAnalyzer` come classe di base per creare un analizzatore personalizzato che può far parte di un analizzatore o di un gruppo di relogger.

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

Le classi che derivano da `IAnalyzer` possono essere usate sia come analizzatori che come relogger. Quando vengono usati come relogger, le funzioni specifiche del relogger vengono reindirizzate all'equivalente dell'analizzatore. Il contrario non è vero: una classe che deriva da `IRelogger` non può essere usata come analizzatore. L'uso di un analizzatore in un gruppo di relogger è uno schema comune. Quando viene inserita in una posizione iniziale di un gruppo di relogger, un analizzatore può pre-calcolare le informazioni e renderlo disponibile per i relogger in posizioni successive.

Il valore restituito predefinito per tutte le funzioni non sottoposte a override è `AnalysisControl::CONTINUE`. Per ulteriori informazioni, vedere [AnalysisControl](analysis-control-enum-class.md).

## <a name="members"></a>Members

Oltre al membro [OnTraceInfo](irelogger-class.md#on-trace-info) dall'interfaccia `IRelogger`, la classe `IAnalyzer` contiene i membri seguenti:

### <a name="destructor"></a>Distruttore

[~ IAnalyzer](#ianalyzer-destructor)

### <a name="functions"></a>Funzioni

\ [OnBeginAnalysis](#on-begin-analysis)
\ [OnBeginAnalysisPass](#on-begin-analysis-pass)
\ [OnBeginRelogging](#on-begin-relogging)
\ [OnBeginReloggingPass](#on-begin-relogging-pass)
\ [OnEndAnalysis](#on-end-analysis)
\ [OnEndAnalysisPass](#on-end-analysis-pass)
\ [OnEndRelogging](#on-end-relogging)
\ [OnEndReloggingPass](#on-end-relogging-pass)
\ [OnSimpleEvent](#on-simple-event)
\ [OnStartActivity](#on-start-activity)
[OnStopActivity](#on-stop-activity)

## <a name="ianalyzer-destructor"></a>~ IAnalyzer

Elimina definitivamente la classe IAnalyzer.

```cpp
virtual ~IAnalyzer();
```

## <a name="on-begin-analysis"></a>OnBeginAnalysis

Per gli analizzatori che fanno parte di un gruppo di analizzatori, questa funzione viene chiamata prima dell'inizio del primo passaggio di analisi. Per gli analizzatori che fanno parte di un gruppo di relogger, questa funzione viene chiamata prima dell'inizio del passaggio di registrazione. Per gli analizzatori che fanno parte sia del gruppo analizzatore che del gruppo relogger della stessa sessione di registrazione, questa funzione viene chiamata due volte prima dell'inizio del primo passaggio di analisi.

```cpp
virtual AnalysisControl OnBeginAnalysis();
```

### <a name="return-value"></a>Valore restituito

Codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa dovrebbe avvenire successivamente.

## <a name="on-begin-analysis-pass"></a>OnBeginAnalysisPass

Per gli analizzatori che fanno parte di un gruppo di analizzatori, questa funzione viene chiamata all'inizio di ogni sessione di analisi. Per gli analizzatori che fanno parte di un gruppo di relogger, questa funzione viene chiamata all'inizio del passaggio del relogger. Per gli analizzatori che fanno parte sia del gruppo analizzatore che del gruppo relogger della stessa sessione di registrazione, questa funzione viene chiamata all'inizio di ogni passaggio di analisi e all'inizio del passaggio del logger.

```cpp
virtual AnalysisControl OnBeginAnalysisPass();
```

### <a name="return-value"></a>Valore restituito

Codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa dovrebbe avvenire successivamente.

## <a name="on-begin-relogging"></a>OnBeginRelogging

```cpp
AnalysisControl OnBeginRelogging() final;
```

Questa funzione non può essere sottoposta a override. Viene chiamato da C++ Build Insights SDK quando un analizzatore fa parte di un gruppo di relogger. Questa funzione reindirizza la chiamata a [OnBeginAnalysis](#on-begin-analysis).

### <a name="return-value"></a>Valore restituito

Risultato della chiamata [OnBeginAnalysis](#on-begin-analysis) .

## <a name="on-begin-relogging-pass"></a>OnBeginReloggingPass

Questa funzione non può essere sottoposta a override. Viene chiamato da C++ Build Insights SDK quando un analizzatore fa parte di un gruppo di relogger. Questa funzione reindirizza la chiamata a [OnBeginAnalysisPass](#on-begin-analysis-pass).

```cpp
AnalysisControl OnBeginReloggingPass() final;
```

### <a name="return-value"></a>Valore restituito

Risultato della chiamata [OnBeginAnalysisPass](#on-begin-analysis-pass) .

## <a name="on-end-analysis"></a>OnEndAnalysis

Per gli analizzatori che fanno parte di un gruppo di analizzatori, questa funzione viene chiamata al termine dell'ultimo passaggio di analisi. Per gli analizzatori che fanno parte di un gruppo di relogger, questa funzione viene chiamata al termine del passaggio di registrazione. Per gli analizzatori che fanno parte sia del gruppo analizzatore che del gruppo relogger della stessa sessione di registrazione, questa funzione viene chiamata due volte:

1. al termine di tutti i passaggi di analisi e prima dell'inizio del passaggio di registrazione,
1. al termine del passaggio di registrazione.

```cpp
virtual AnalysisControl OnEndAnalysis();
```

### <a name="return-value"></a>Valore restituito

Codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa dovrebbe avvenire successivamente.

## <a name="on-end-analysis-pass"></a>OnEndAnalysisPass

Per gli analizzatori che fanno parte di un gruppo di analizzatori, questa funzione viene chiamata alla fine di ogni sessione di analisi. Per gli analizzatori che fanno parte di un gruppo di relogger, questa funzione viene chiamata alla fine del passaggio del relogger. Per gli analizzatori che fanno parte sia del gruppo analizzatore che del gruppo relogger della stessa sessione di registrazione, questa funzione viene chiamata alla fine di ogni passaggio di analisi e alla fine del passaggio del logger.

```cpp
virtual AnalysisControl OnEndAnalysisPass();
```

### <a name="return-value"></a>Valore restituito

Codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa dovrebbe avvenire successivamente.

## <a name="on-end-relogging"></a>OnEndRelogging

Questa funzione non può essere sottoposta a override. Viene chiamato da C++ Build Insights SDK quando un analizzatore fa parte di un gruppo di relogger. Questa funzione reindirizza la chiamata a [OnEndAnalysis](#on-end-analysis).

```cpp
AnalysisControl OnEndRelogging() final;
```

### <a name="return-value"></a>Valore restituito

Risultato della chiamata [OnEndAnalysis](#on-end-analysis) .

## <a name="on-end-relogging-pass"></a>OnEndReloggingPass

Questa funzione non può essere sottoposta a override. Viene chiamato da C++ Build Insights SDK quando un analizzatore fa parte di un gruppo di relogger. Questa funzione reindirizza la chiamata a [OnEndAnalysisPass](#on-end-analysis-pass).

```cpp
AnalysisControl OnEndReloggingPass() final;
```

### <a name="return-value"></a>Valore restituito

Risultato della chiamata [OnEndAnalysisPass](#on-end-analysis-pass) .

## <a name="on-simple-event"></a>OnSimpleEvent

Questa funzione viene chiamata quando viene elaborato un evento semplice. La seconda versione di questa funzione non può essere sottoposta a override. Viene chiamato da C++ Build Insights SDK quando un analizzatore fa parte di un gruppo di relogger. Tutte le chiamate alla versione 2 vengono reindirizzate alla versione 1.

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

\ *eventStack*
Stack di eventi per questo semplice evento. Per ulteriori informazioni sugli stack di eventi, vedere [eventi](../event-table.md).

\ *relogSession*
Questo parametro è inutilizzato.

### <a name="return-value"></a>Valore restituito

Codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa dovrebbe avvenire successivamente.

## <a name="on-start-activity"></a>OnStartActivity

Questa funzione viene chiamata quando viene elaborato un evento di avvio dell'attività. La seconda versione di questa funzione non può essere sottoposta a override. Viene chiamato da C++ Build Insights SDK quando un analizzatore fa parte di un gruppo di relogger. Tutte le chiamate alla versione 2 vengono reindirizzate alla versione 1.

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

\ *eventStack*
Stack di eventi per questo evento di avvio dell'attività. Per ulteriori informazioni sugli stack di eventi, vedere [eventi](../event-table.md).

\ *relogSession*
Questo parametro è inutilizzato.

### <a name="return-value"></a>Valore restituito

Codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa dovrebbe avvenire successivamente.

## <a name="on-stop-activity"></a>OnStopActivity

Questa funzione viene chiamata quando viene elaborato un evento di arresto dell'attività. La seconda versione di questa funzione non può essere sottoposta a override. Viene chiamato da C++ Build Insights SDK quando un analizzatore fa parte di un gruppo di relogger. Tutte le chiamate alla versione 2 vengono reindirizzate alla versione 1.

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

\ *eventStack*
Stack di eventi per questo evento di arresto dell'attività. Per ulteriori informazioni sugli stack di eventi, vedere [eventi](../event-table.md).

\ *relogSession*
Questo parametro è inutilizzato.

### <a name="return-value"></a>Valore restituito

Codice [AnalysisControl](analysis-control-enum-class.md) che descrive cosa dovrebbe avvenire successivamente.

::: moniker-end
