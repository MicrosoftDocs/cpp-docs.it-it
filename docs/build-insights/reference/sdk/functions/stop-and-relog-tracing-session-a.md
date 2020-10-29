---
title: StopAndRelogTracingSessionA
description: Riferimento alla funzione StopAndRelogTracingSessionA di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- StopAndRelogTracingSessionA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: de69ca379c6f0ef46e23d2b4a78c72518e997572
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92919969"
---
# <a name="stopandrelogtracingsessiona"></a>StopAndRelogTracingSessionA

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `StopAndRelogTracingSessionA` funzione arresta una sessione di traccia in corso e salva la traccia risultante in un file temporaneo. Una sessione di riregistrazione viene quindi avviata immediatamente utilizzando il file temporaneo come input. La traccia finale riregistrata generata dalla sessione di registrazione viene salvata in un file specificato dal chiamante. Gli eseguibili che chiamano questa funzione devono avere privilegi di amministratore.

## <a name="syntax"></a>Sintassi

```cpp
enum RESULT_CODE StopAndRelogTracingSessionA(
    const char*                 sessionName,
    const char*                 outputLogFile,
    TRACING_SESSION_STATISTICS* statistics,
    const RELOG_DESCRIPTOR*     relogDescriptor);
```

### <a name="parameters"></a>Parametri

*Nomesessione*\
Nome della sessione di traccia da arrestare. Usare lo stesso nome di sessione di quello passato a [StartTracingSession](start-tracing-session.md), [StartTracingSessionA](start-tracing-session-a.md)o [StartTracingSessionW](start-tracing-session-w.md).

*outputLogFile*\
File in cui scrivere la traccia registrata prodotta dalla sessione di registrazione.

*Statistiche*\
Puntatore a un oggetto [TRACING_SESSION_STATISTICS](../other-types/tracing-session-statistics-struct.md) . `StopAndRelogTracingSessionA` scrive le statistiche della raccolta di traccia in questo oggetto prima della restituzione.

*analysisDescriptor*\
Puntatore a un oggetto [RELOG_DESCRIPTOR](../other-types/analysis-descriptor-struct.md) . Utilizzare questo oggetto per configurare la sessione di registrazione avviata da `StopAndRelogTracingSessionA` .

### <a name="return-value"></a>Valore restituito

Codice risultato dell'enumerazione [RESULT_CODE](../other-types/result-code-enum.md) .

::: moniker-end
