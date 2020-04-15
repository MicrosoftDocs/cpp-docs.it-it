---
title: Tipode OnRelogEventFunc
description: Riferimento typedef OnRelogEventFunc dell'SDK di Build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- OnRelogEventFunc
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 2df8646d530c089b1239978d716b2b619a5b4b61
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329073"
---
# <a name="onrelogeventfunc-typedef"></a>Tipode OnRelogEventFunc

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

Il `OnRelogEventFunc` typedef è una delle firme di funzione utilizzate nella struttura [RELOG_CALLBACKS.](relog-callbacks-struct.md)

## <a name="syntax"></a>Sintassi

```cpp
typedef enum CALLBACK_CODE (BUILD_INSIGHTS_API *OnRelogEventFunc)(
    const EVENT_COLLECTION_DATA*    eventStack,
    const void*                     relogSession,
    void*                           callbackContext);
```

### <a name="parameters"></a>Parametri

*eventStack (impilare)*\
Stack di eventi per l'evento corrente. Per ulteriori informazioni sugli stack di eventi, vedere [Eventi](../event-table.md).

*relogSession*\
Puntatore alla sessione di nuova registrazione da utilizzare quando si chiama [InjectEvent](../functions/inject-event.md).

*callbackContext*\
Valore di contesto impostato per questo callback in [RELOG_DESCRIPTOR](analysis-descriptor-struct.md).

### <a name="return-value"></a>Valore restituito

Valore [CALLBACK_CODE](callback-code-enum.md) che controlla ciò che dovrebbe accadere successivamente.

::: moniker-end
