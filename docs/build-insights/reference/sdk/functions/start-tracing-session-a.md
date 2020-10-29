---
title: StartTracingSessionA
description: Riferimento alla funzione StartTracingSessionA di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- StartTracingSessionA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 388ccbe58ab5cc59d995601536a2034e847e2e1d
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920008"
---
# <a name="starttracingsessiona"></a>StartTracingSessionA

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `StartTracingSessionA` funzione avvia una sessione di traccia. Gli eseguibili che chiamano questa funzione devono avere privilegi di amministratore.

## <a name="syntax"></a>Sintassi

```cpp
enum RESULT_CODE StartTracingSessionA(
    const char*                    sessionName,
    const TRACING_SESSION_OPTIONS* options);
```

### <a name="parameters"></a>Parametri

*Nomesessione*\
Nome della sessione di traccia da avviare. Usare lo stesso nome quando si chiama [StopTracingSessionA](stop-tracing-session.md) o qualsiasi altra funzione stop Trace.

*Opzioni*\
Puntatore a un oggetto [TRACING_SESSION_OPTIONS](../other-types/tracing-session-options-struct.md) . Utilizzare questo oggetto per selezionare gli eventi che devono essere raccolti dalla sessione di traccia.

### <a name="return-value"></a>Valore restituito

Codice risultato dell'enumerazione [RESULT_CODE](../other-types/result-code-enum.md) .

::: moniker-end
