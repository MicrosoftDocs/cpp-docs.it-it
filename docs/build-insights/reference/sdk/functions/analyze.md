---
title: Analisi
description: Guida di riferimento alla funzione di analisi di build Insights SDK per C++.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Analyze
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 5e593b690231adf6f04161f9c3ff6aef3217f9ef
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920320"
---
# <a name="analyze"></a>Analisi

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `Analyze` funzione viene utilizzata per analizzare una traccia di Event Tracing for Windows (ETW) ottenuta da MSVC durante la traccia di una compilazione C++. Gli eventi nella traccia ETW vengono trasmessi in sequenza a un gruppo analizzatore fornito dal chiamante. Questa funzione supporta le analisi multi-pass che consentono di inoltrare il flusso di eventi al gruppo analizzatore più volte in una riga.

## <a name="syntax"></a>Sintassi

```cpp
template <typename... TAnalyzerGroupMembers>
RESULT_CODE Analyze(
    const char*                                   inputLogFile,
    unsigned                                      numberOfPasses,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup);

template <typename... TAnalyzerGroupMembers>
RESULT_CODE Analyze(
    const wchar_t*                                inputLogFile,
    unsigned                                      numberOfPasses,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup);
```

### <a name="parameters"></a>Parametri

*TAnalyzerGroupMembers*\
Questo parametro viene sempre dedotto.

*inputLogFile*\
Traccia ETW di input da cui si vogliono leggere gli eventi.

*numberOfPasses*\
Numero di sessioni di analisi da eseguire sulla traccia di input. La traccia viene passata al gruppo analizzatore specificato una volta per ogni sessione di analisi.

*analyzerGroup*\
Gruppo analizzatore utilizzato per l'analisi. Chiamare [MakeStaticAnalyzerGroup](make-static-analyzer-group.md) per creare un gruppo analizzatore. Per usare un gruppo di analizzatori dinamici ottenuto da [MakeDynamicAnalyzerGroup](make-dynamic-analyzer-group.md), incapsularlo prima all'interno di un gruppo di analizzatori statici passandone l'indirizzo a `MakeStaticAnalyzerGroup` .

### <a name="return-value"></a>Valore restituito

Codice risultato dell'enumerazione [RESULT_CODE](../other-types/result-code-enum.md) .

::: moniker-end
