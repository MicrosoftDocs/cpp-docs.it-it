---
title: StartTracingSession
description: Informazioni di riferimento per la funzione StartTracingSession dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- StartTracingSession
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 6da81ce54948e5ddbacfc9af50f1be12736fdba7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323743"
---
# <a name="starttracingsession"></a>StartTracingSession

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `StartTracingSession` funzione avvia una sessione di traccia. Gli eseguibili che chiamano questa funzione devono disporre di privilegi di amministratore.

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

*nomesessione*\
Nome della sessione di traccia da avviare. Utilizzare lo stesso nome quando si chiama [StopTracingSession](stop-tracing-session.md) o qualsiasi altra funzione di traccia di arresto.

*Opzioni*\
Puntatore a un [oggetto TRACING_SESSION_OPTIONS.](../other-types/tracing-session-options-struct.md) Utilizzare questo oggetto per selezionare gli eventi che devono essere raccolti dalla sessione di traccia.

### <a name="return-value"></a>Valore restituito

Codice di risultato dall'enumerazione [RESULT_CODE.](../other-types/result-code-enum.md)

::: moniker-end
