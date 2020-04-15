---
title: Tipode OnAnalysisEventFunc
description: Il riferimento typedef OnAnalysisEventFunc dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- OnAnalysisEventFunc
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: eacd174279caff0db22586d5e40d3a866afc4459
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329119"
---
# <a name="onanalysiseventfunc-typedef"></a>Tipode OnAnalysisEventFunc

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

Il `OnAnalysisEventFunc` typedef è una delle firme di funzione utilizzate nella struttura [ANALYSIS_CALLBACKS.](analysis-callbacks-struct.md)

## <a name="syntax"></a>Sintassi

```cpp
typedef enum CALLBACK_CODE (BUILD_INSIGHTS_API *OnAnalysisEventFunc)(
    const EVENT_COLLECTION_DATA*    eventStack,
    void*                           callbackContext);
```

### <a name="parameters"></a>Parametri

*eventStack (impilare)*\
Stack di eventi per l'evento corrente. Per ulteriori informazioni sugli stack di eventi, vedere [Eventi](../event-table.md).

*callbackContext*\
Valore di contesto impostato per questo callback in [ANALYSIS_DESCRIPTOR](analysis-descriptor-struct.md) o [RELOG_DESCRIPTOR](relog-descriptor-struct.md).

### <a name="return-value"></a>Valore restituito

Valore [CALLBACK_CODE](callback-code-enum.md) che controlla ciò che dovrebbe accadere successivamente.

::: moniker-end
