---
title: Struttura ANALYSIS_CALLBACKS
description: Il riferimento alla struttura ANALYSIS_CALLBACKS di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- ANALYSIS_CALLBACKS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: a24755befdd446051ae376b49d3dca06c7bc3320
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90041042"
---
# <a name="analysis_callbacks-structure"></a>Struttura ANALYSIS_CALLBACKS

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `ANALYSIS_CALLBACKS` struttura viene utilizzata per l'inizializzazione di un oggetto [ANALYSIS_DESCRIPTOR](analysis-descriptor-struct.md) o [RELOG_DESCRIPTOR](relog-descriptor-struct.md) . Specifica le funzioni da chiamare durante l'analisi o la registrazione di una traccia di Event Tracing for Windows (ETW).

## <a name="syntax"></a>Sintassi

```cpp
typedef struct ANALYSIS_CALLBACKS_TAG
{
    OnAnalysisEventFunc     OnStartActivity;
    OnAnalysisEventFunc     OnStopActivity;
    OnAnalysisEventFunc     OnSimpleEvent;
    OnTraceInfoFunc         OnTraceInfo;
    OnBeginEndPassFunc      OnBeginAnalysis;
    OnBeginEndPassFunc      OnEndAnalysis;
    OnBeginEndPassFunc      OnBeginAnalysisPass;
    OnBeginEndPassFunc      OnEndAnalysisPass;
} ANALYSIS_CALLBACKS;
```

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `OnStartActivity` | Chiamato per elaborare un evento di avvio dell'attività. |
| `OnStopActivity` | Chiamato per elaborare un evento di arresto dell'attività. |
| `OnSimpleEvent` | Chiamato per elaborare un evento semplice. |
| `OnTraceInfo` | Per le sessioni di analisi, chiamate all'inizio di ogni sessione di analisi. Per la registrazione delle sessioni, viene chiamato all'inizio di ogni sessione di analisi e nuovamente all'inizio del passaggio di registrazione. Questa funzione viene chiamata solo dopo la chiamata a OnBeginAnalysisPass. |
| `OnBeginAnalysis` | Per le sessioni di analisi, chiamate prima dell'inizio di un qualsiasi passaggio di analisi. Per la registrazione delle sessioni, viene chiamato due volte prima dell'inizio della fase di analisi: una volta per annunciare l'inizio della sessione di registrazione e una volta di più per annunciare l'inizio della fase di analisi. |
| `OnEndAnalysis` | Per le sessioni di analisi, questa funzione viene chiamata dopo che tutti i passaggi di analisi sono terminati. Per la registrazione delle sessioni, questa funzione viene chiamata al termine di tutti i passaggi di analisi della fase di analisi. Quindi, viene chiamato di nuovo al termine del passaggio di registrazione. |
| `OnBeginAnalysisPass` | Chiamato quando si inizia un passaggio di analisi o il passaggio di registrazione, prima di elaborare qualsiasi evento. |
| `OnEndAnalysisPass` | Chiamato quando termina un passaggio di analisi o il passaggio di registrazione, dopo l'elaborazione di tutti gli eventi. |

## <a name="remarks"></a>Commenti

La fase di analisi di una sessione di registrazione viene considerata parte della sessione di registrazione e può contenere più sessioni di analisi. Per questo motivo, `OnBeginAnalysis` viene chiamato due volte in una riga all'inizio di una sessione di registrazione. `OnEndAnalysis` viene chiamato alla fine della fase di analisi, prima di avviare la fase di riregistrazione e una volta alla fine della fase di registrazione. La fase di riregistrazione contiene sempre un singolo passaggio di registrazione.

È possibile che gli analizzatori facciano parte sia dell'analisi che della fase di riregistrazione di una sessione di riregistrazione. Questi analizzatori possono determinare la fase attualmente in corso tenendo traccia delle coppie di chiamata e di OnBeginAnalysis `OnEndAnalysis` . Due `OnBeginAnalysis` chiamate senza alcuna `OnEndAnalysis` chiamata significa che la fase di analisi è in corso. Due `OnBeginAnalysis` chiamate e una `OnEndAnalysis` chiamata indicano che la fase di riregistrazione è in corso. Due OnBeginAnalysis e due `OnEndAnalysis` chiamate indicano che entrambe le fasi sono terminate.

Tutti i membri della `ANALYSIS_CALLBACKS` struttura devono puntare a una funzione valida. Per ulteriori informazioni sulle firme di funzione accettate, vedere [OnAnalysisEventFunc](on-analysis-event-func-typedef.md), [OnTraceInfoFunc](on-trace-info-func-typedef.md)e [OnBeginEndPassFunc](on-begin-end-pass-func-typedef.md).

::: moniker-end
