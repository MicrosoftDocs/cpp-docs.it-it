---
title: StartTracingSession
description: Riferimento alla funzione StartTracingSession di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- StartTracingSession
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 07272404aa8bb8cff1221a88497020fedeff315e
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92919995"
---
# <a name="starttracingsession"></a>StartTracingSession

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `StartTracingSession` funzione avvia una sessione di traccia. Gli eseguibili che chiamano questa funzione devono avere privilegi di amministratore.

## <a name="syntax"></a>Sintassi

```cpp
RESULT_CODE StartTracingSession(
    const char*                    sessionName,
    const TRACING_SESSION_OPTIONS& options);

RESULT_CODE StartTracingSession(
    const wchar_t*                 sessionName,
    const TRACING_SESSION_OPTIONS& options);
```

### <a name="parameters"></a>Parametri

*Nomesessione*\
Nome della sessione di traccia da avviare. Usare lo stesso nome quando si chiama [StopTracingSession](stop-tracing-session.md) o qualsiasi altra funzione stop Trace.

*Opzioni*\
Puntatore a un oggetto [TRACING_SESSION_OPTIONS](../other-types/tracing-session-options-struct.md) . Utilizzare questo oggetto per selezionare gli eventi che devono essere raccolti dalla sessione di traccia.

### <a name="return-value"></a>Valore restituito

Codice risultato dell'enumerazione [RESULT_CODE](../other-types/result-code-enum.md) .

::: moniker-end
