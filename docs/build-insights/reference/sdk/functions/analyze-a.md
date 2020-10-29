---
title: AnalyzeA
description: Informazioni di riferimento sulle funzioni di build Insights SDK per C++.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- AnalyzeA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: a2b014c35c2ebc6096b97dd3c0f86bd57e293451
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920307"
---
# <a name="analyzea"></a>AnalyzeA

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `AnalyzeA` funzione viene utilizzata per analizzare gli eventi MSVC letti da una traccia di input Event Tracing for Windows (ETW).

## <a name="syntax"></a>Sintassi

```cpp
enum RESULT_CODE AnalyzeA(
    const char*                inputLogFile,
    const ANALYSIS_DESCRIPTOR* analysisDescriptor);
```

### <a name="parameters"></a>Parametri

*inputLogFile*\
Traccia ETW di input da cui si vogliono leggere gli eventi.

*analysisDescriptor*\
Puntatore a un oggetto [ANALYSIS_DESCRIPTOR](../other-types/analysis-descriptor-struct.md) . Utilizzare questo oggetto per configurare l'analisi.

### <a name="return-value"></a>Valore restituito

Codice risultato dell'enumerazione [RESULT_CODE](../other-types/result-code-enum.md) .

::: moniker-end
