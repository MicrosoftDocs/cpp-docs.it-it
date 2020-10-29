---
title: OnRelogEventFunc (typedef)
description: Informazioni di riferimento su typedef di build Insights SDK per C++ OnRelogEventFunc.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- OnRelogEventFunc
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: ed639ab59b900f97d29dc69240e45b2f52f2f3b3
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92919748"
---
# <a name="onrelogeventfunc-typedef"></a>OnRelogEventFunc (typedef)

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

Il `OnRelogEventFunc` typedef è una delle firme di funzione utilizzate nella struttura [RELOG_CALLBACKS](relog-callbacks-struct.md) .

## <a name="syntax"></a>Sintassi

```cpp
typedef enum CALLBACK_CODE (BUILD_INSIGHTS_API *OnRelogEventFunc)(
    const EVENT_COLLECTION_DATA*    eventStack,
    const void*                     relogSession,
    void*                           callbackContext);
```

### <a name="parameters"></a>Parametri

*eventStack*\
Stack di eventi per l'evento corrente. Per ulteriori informazioni sugli stack di eventi, vedere [eventi](../event-table.md).

*relogSession*\
Puntatore della sessione di registrazione da usare quando si chiama [InjectEvent](../functions/inject-event.md).

*callbackContext*\
Il valore di contesto impostato per questo callback in [RELOG_DESCRIPTOR](analysis-descriptor-struct.md).

### <a name="return-value"></a>Valore restituito

Valore [CALLBACK_CODE](callback-code-enum.md) che controlla la funzione successiva.

::: moniker-end
