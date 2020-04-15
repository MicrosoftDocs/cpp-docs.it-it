---
title: ArrestoAndRelogTracingSessionA
description: Informazioni di riferimento per la funzione StopAndRelogTracingSessionA di Build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- StopAndRelogTracingSessionA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: fa70d50ba79a7829adb985ab4d884b5773b5d40f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323679"
---
# <a name="stopandrelogtracingsessiona"></a>ArrestoAndRelogTracingSessionA

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `StopAndRelogTracingSessionA` funzione interrompe una sessione di traccia in corso e salva la traccia risultante in un file temporaneo. Una sessione di riregistrazione viene quindi avviata immediatamente utilizzando il file temporaneo come input. La traccia relogged finale prodotta dalla sessione di nuova registrazione viene salvata in un file specificato dal chiamante. Gli eseguibili che chiamano questa funzione devono disporre di privilegi di amministratore.

## <a name="syntax"></a>Sintassi

```cpp
enum RESULT_CODE StopAndRelogTracingSessionA(
    const char*                 sessionName,
    const char*                 outputLogFile,
    TRACING_SESSION_STATISTICS* statistics,
    const RELOG_DESCRIPTOR*     relogDescriptor);
```

### <a name="parameters"></a>Parametri

*nomesessione*\
Nome della sessione di traccia da arrestare. Utilizzare lo stesso nome di sessione passato a [StartTracingSession](start-tracing-session.md), [StartTracingSessionA](start-tracing-session-a.md)o [StartTracingSessionW](start-tracing-session-w.md).

*outputLogFile (file outputLog)*\
File in cui scrivere la traccia relogged prodotta dalla sessione di relogging.

*Statistiche*\
Puntatore a un [oggetto TRACING_SESSION_STATISTICS.](../other-types/tracing-session-statistics-struct.md) `StopAndRelogTracingSessionA`scrive le statistiche di raccolta di tracce in questo oggetto prima della restituzione.

*analysisDescriptor (esempio)*\
Puntatore a un oggetto [RELOG_DESCRIPTOR.](../other-types/analysis-descriptor-struct.md) Utilizzare questo oggetto per configurare la sessione `StopAndRelogTracingSessionA`di relogging avviata da .

### <a name="return-value"></a>Valore restituito

Codice di risultato dall'enumerazione [RESULT_CODE.](../other-types/result-code-enum.md)

::: moniker-end
