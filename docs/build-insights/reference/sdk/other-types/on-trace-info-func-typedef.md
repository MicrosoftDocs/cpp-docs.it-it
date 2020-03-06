---
title: OnTraceInfoFunc (typedef)
description: Riferimento C++ a typedef di build Insights SDK OnTraceInfoFunc.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- OnTraceInfoFunc
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: b168d6783b31454f6a2837bcad1fc81199ce9054
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332348"
---
# <a name="ontraceinfofunc-typedef"></a>OnTraceInfoFunc (typedef)

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

Il typedef `OnTraceInfoFunc` è una delle firme di funzione utilizzate nelle strutture [ANALYSIS_CALLBACKS](analysis-callbacks-struct.md) e [RELOG_CALLBACKS](relog-callbacks-struct.md) .

## <a name="syntax"></a>Sintassi

```cpp
typedef enum CALLBACK_CODE (BUILD_INSIGHTS_API *OnTraceInfoFunc)(
    const TRACE_INFO_DATA*          traceInfo,
    void*                           callbackContext);
```

### <a name="parameters"></a>Parametri

\ *TraceInfo*
Oggetto [TRACE_INFO_DATA](../c-event-data-types/trace-info-data-struct.md) che contiene informazioni sulla traccia attualmente analizzata o di cui è stata eseguita la registrazione.

\ *CallbackContext*
Il valore di contesto impostato per questo callback in [ANALYSIS_DESCRIPTOR](analysis-descriptor-struct.md) o [RELOG_DESCRIPTOR](relog-descriptor-struct.md).

### <a name="return-value"></a>Valore restituito

Valore [CALLBACK_CODE](callback-code-enum.md) che controlla la funzione successiva.

::: moniker-end
