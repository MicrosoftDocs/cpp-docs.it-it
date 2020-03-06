---
title: AnalyzeW
description: Riferimento C++ alla funzione AnalyzeW di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- AnalyzeW
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: bd9b401f08941134d3c267df5c23c5d9e981cb86
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332929"
---
# <a name="analyzew"></a>AnalyzeW

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La funzione `AnalyzeW` viene utilizzata per analizzare gli eventi MSVC letti da una traccia di input Event Tracing for Windows (ETW).

## <a name="syntax"></a>Sintassi

```cpp
enum RESULT_CODE AnalyzeW(
    const wchar_t*             inputLogFile,
    const ANALYSIS_DESCRIPTOR* analysisDescriptor);
```

### <a name="parameters"></a>Parametri

\ *inputLogFile*
Traccia ETW di input da cui si vogliono leggere gli eventi.

\ *analysisDescriptor*
Puntatore a un oggetto [ANALYSIS_DESCRIPTOR](../other-types/analysis-descriptor-struct.md) . Utilizzare questo oggetto per configurare l'analisi.

### <a name="return-value"></a>Valore restituito

Codice risultato dell'enumerazione [RESULT_CODE](../other-types/result-code-enum.md) .

::: moniker-end
