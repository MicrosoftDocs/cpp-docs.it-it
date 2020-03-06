---
title: OnRelogEventFunc (typedef)
description: Riferimento C++ a typedef di build Insights SDK OnRelogEventFunc.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- OnRelogEventFunc
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 619f9a142ad19a7809b867eda93f2db634825a8f
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332390"
---
# <a name="onrelogeventfunc-typedef"></a>OnRelogEventFunc (typedef)

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

Il typedef `OnRelogEventFunc` è una delle firme di funzione utilizzate nella struttura di [RELOG_CALLBACKS](relog-callbacks-struct.md) .

## <a name="syntax"></a>Sintassi

```cpp
typedef enum CALLBACK_CODE (BUILD_INSIGHTS_API *OnRelogEventFunc)(
    const EVENT_COLLECTION_DATA*    eventStack,
    const void*                     relogSession,
    void*                           callbackContext);
```

### <a name="parameters"></a>Parametri

\ *eventStack*
Stack di eventi per l'evento corrente. Per ulteriori informazioni sugli stack di eventi, vedere [eventi](../event-table.md).

\ *relogSession*
Puntatore della sessione di registrazione da usare quando si chiama [InjectEvent](../functions/inject-event.md).

\ *CallbackContext*
Il valore di contesto impostato per questo callback in [RELOG_DESCRIPTOR](analysis-descriptor-struct.md).

### <a name="return-value"></a>Valore restituito

Valore [CALLBACK_CODE](callback-code-enum.md) che controlla la funzione successiva.

::: moniker-end
