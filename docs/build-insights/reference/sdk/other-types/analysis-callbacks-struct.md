---
title: struttura ANALYSIS_CALLBACKS
description: L'SDK di ANALYSIS_CALLBACKS di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- ANALYSIS_CALLBACKS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 3c6de999b19657f999f884075ee53e21a4d2f2b5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323498"
---
# <a name="analysis_callbacks-structure"></a>struttura ANALYSIS_CALLBACKS

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `ANALYSIS_CALLBACKS` struttura viene utilizzata durante l'inizializzazione di un [oggetto ANALYSIS_DESCRIPTOR](analysis-descriptor-struct.md) o [RELOG_DESCRIPTOR.](relog-descriptor-struct.md) Specifica le funzioni da chiamare durante l'analisi o la riregistrazione di una traccia ETW (Event Tracing for Windows).

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

## <a name="members"></a>Membri

|  |  |
|--|--|
| `OnStartActivity` | Chiamato per elaborare un evento di avvio dell'attività. |
| `OnStopActivity` | Chiamato per elaborare un evento di arresto dell'attività. |
| `OnSimpleEvent` | Chiamato per elaborare un evento semplice. |
| `OnTraceInfo` | Per le sessioni di analisi, chiamate all'inizio di ogni passaggio di analisi. Per le sessioni di relogging, chiamate all'inizio di ogni passaggio di analisi e nuovamente all'inizio del passaggio di relogging. Questa funzione viene chiamata solo dopo onBeginAnalysisPass è stato chiamato. |
| `OnBeginAnalysis` | Per le sessioni di analisi, chiamate prima dell'inizio di qualsiasi analisi. Per le sessioni di ri-registrazione, chiamate due volte prima dell'inizio della fase di analisi: una volta per annunciare l'inizio della sessione di relogging e ancora una volta per annunciare l'inizio della fase di analisi. |
| `OnEndAnalysis` | Per le sessioni di analisi, questa funzione viene chiamata al termine di tutti i passaggi di analisi. Per le sessioni di riregistrazione, questa funzione viene chiamata quando tutte le passate di analisi della fase di analisi sono terminate. Quindi, viene chiamato di nuovo dopo la fine del passaggio di riregistrazione. |
| `OnBeginAnalysisPass` | Chiamato quando si inizia un passaggio di analisi o il passaggio di riregistrazione, prima di elaborare qualsiasi evento. |
| `OnEndAnalysisPass` | Chiamato quando si termina un passaggio di analisi o il passaggio di riregistrazione, dopo l'elaborazione di tutti gli eventi. |

## <a name="remarks"></a>Osservazioni

La fase di analisi di una sessione di riregistrazione è considerata parte della sessione di riregistrazione e può contenere più passaggi di analisi. Per questo `OnBeginAnalysis` motivo, viene chiamato due volte di seguito all'inizio di una sessione di nuova registrazione. `OnEndAnalysis`viene chiamato alla fine della fase di analisi, prima di iniziare la fase di risboscamento e ancora una volta alla fine della fase di riregistrazione. La fase di rislogging contiene sempre un singolo passaggio di riregistrazione.

È possibile che gli analizzatori facciano parte sia della fase di analisi che della fase di relogging di una sessione di relogging. Questi analizzatori possono determinare quale fase è attualmente in `OnEndAnalysis` corso tenendo traccia delle coppie OnBeginAnalysis e call. Due `OnBeginAnalysis` chiamate `OnEndAnalysis` senza alcuna chiamata indicano che la fase di analisi è in corso. Due `OnBeginAnalysis` chiamate `OnEndAnalysis` e una chiamata indica che la fase di risboscamento è in corso. Due OnBeginAnalysis `OnEndAnalysis` e due chiamate indicano che entrambe le fasi sono terminate.

Tutti i `ANALYSIS_CALLBACKS` membri della struttura devono puntare a una funzione valida. Per ulteriori informazioni sulle firme delle funzioni accettate, vedere [OnAnalysisEventFunc](on-analysis-event-func-typedef.md), [OnTraceInfoFunc](on-trace-info-func-typedef.md)e [OnBeginEndPassFunc](on-begin-end-pass-func-typedef.md).

::: moniker-end
