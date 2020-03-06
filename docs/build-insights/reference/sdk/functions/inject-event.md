---
title: InjectEvent
description: Riferimento C++ alla funzione InjectEvent di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- InjectEvent
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 7b53eb71cf7a2ae40d04dbc3f8b5829f2737aba4
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332845"
---
# <a name="injectevent"></a>InjectEvent

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La funzione `InjectEvent` viene chiamata all'interno di un relogger che implementa l'interfaccia [IRelogger](../other-types/irelogger-class.md) . Viene usato per scrivere un evento Event Tracing for Windows (ETW) nel file di traccia di output di una sessione di registrazione.

## <a name="syntax"></a>Sintassi

```cpp
void InjectEvent(
    const void* relogSession,
    LPCGUID providerId,
    PCEVENT_DESCRIPTOR eventDescriptor,
    unsigned long processId,
    unsigned long threadId,
    unsigned short processorIndex,
    long long timestamp,
    unsigned char* data,
    unsigned long byteCount);
```

### <a name="parameters"></a>Parametri

\ *relogSession*
Puntatore alla sessione di registrazione. Una sessione di riregistrazione viene fornita ai relogger che implementano l'interfaccia `IRelogger`. Per ulteriori informazioni, vedere [IRelogger](../other-types/irelogger-class.md).

\ *ProviderID*
GUID del provider Event Tracing for Windows (ETW) in cui l'evento ETW viene riregistrato.

\ di *EventDescriptor*
Descrittore di eventi ETW per l'evento ETW registrato.

\ *ProcessID*
Identificatore di processo (PID) per l'evento ETW registrato.

\ *ThreadID*
Identificatore del thread (TID) per l'evento ETW registrato.

\ *processorIndex*
Indice del processore per l'evento ETW registrato.

\ *timestamp*
Timestamp per l'evento ETW registrato.

\ *dati*
Puntatore ai dati che devono essere inclusi nell'evento ETW registrato.

*getbytecount*\
Dimensione dei dati, in byte, a cui puntano i *dati*.

## <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sui concetti ETW, ad esempio il *GUID del provider* e il *descrittore di eventi*, vedere la [documentazione ETW](/windows/win32/etw/about-event-tracing). Per informazioni dettagliate su come avviare una sessione di registrazione con C++ Build Insights SDK, vedere [relog](relog.md).

::: moniker-end
