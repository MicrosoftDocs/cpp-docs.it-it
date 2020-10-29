---
title: InjectEvent
description: Riferimento alla funzione InjectEvent di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- InjectEvent
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: b4d85f17a6d553d9dffa727824e6d4de94518645
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92922836"
---
# <a name="injectevent"></a>InjectEvent

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `InjectEvent` funzione viene chiamata all'interno di un relogger che implementa l'interfaccia [IRelogger](../other-types/irelogger-class.md) . Viene usato per scrivere un evento Event Tracing for Windows (ETW) nel file di traccia di output di una sessione di registrazione.

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

*relogSession*\
Puntatore alla sessione di registrazione. Una sessione di riregistrazione viene fornita ai relogger che implementano l' `IRelogger` interfaccia. Per ulteriori informazioni, vedere [IRelogger](../other-types/irelogger-class.md).

*providerId*\
GUID del provider Event Tracing for Windows (ETW) in cui l'evento ETW viene riregistrato.

*eventDescriptor*\
Descrittore di eventi ETW per l'evento ETW registrato.

*processId*\
Identificatore di processo (PID) per l'evento ETW registrato.

*threadId*\
Identificatore del thread (TID) per l'evento ETW registrato.

*processorIndex*\
Indice del processore per l'evento ETW registrato.

*timestamp*\
Timestamp per l'evento ETW registrato.

*dati*\
Puntatore ai dati che devono essere inclusi nell'evento ETW registrato.

*byteCount*\
Dimensione dei dati, in byte, a cui puntano i *dati* .

## <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sui concetti ETW, ad esempio il *GUID del provider* e il *descrittore di eventi* , vedere la [documentazione ETW](/windows/win32/etw/about-event-tracing). Per informazioni dettagliate su come avviare una sessione di registrazione con C++ Build Insights SDK, vedere [relog](relog.md).

::: moniker-end
