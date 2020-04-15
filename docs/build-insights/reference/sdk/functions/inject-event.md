---
title: InjectEvent
description: Informazioni di riferimento per la funzione InjectEvent dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- InjectEvent
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: c82aad5923eff60e5c72ceccaa39aa136f942665
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324044"
---
# <a name="injectevent"></a>InjectEvent

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `InjectEvent` funzione viene chiamata all'interno di un relogger che implementa l'interfaccia [IRelogger.](../other-types/irelogger-class.md) Viene utilizzato per scrivere un evento ETW (Event Tracing for Windows) nel file di traccia di output di una sessione di nuova registrazione.

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
Puntatore alla sessione di riregistrazione. Viene fornita una sessione di riregistrazione ai relogger che implementano l'interfaccia. `IRelogger` Per ulteriori informazioni, vedere [IRelogger](../other-types/irelogger-class.md).

*id provider*\
GUID del provider Event Tracing for Windows (ETW) con il quale viene nuovamente registrato l'evento ETW.

*Eventdescriptor*\
Descrittore dell'evento ETW per l'evento ETW che viene nuovamente registrato.

*Processid*\
Identificatore di processo (PID) per l'evento ETW che viene nuovamente registrato.

*threadId (ID thread)*\
Identificatore del thread (TID) per l'evento ETW che viene registrato nuovamente.

*processorIndice*\
Indice del processore per l'evento ETW che viene registrato nuovamente.

*Timestamp*\
Timestamp per l'evento ETW che viene registrato nuovamente.

*Dati*\
Puntatore ai dati che devono essere inclusi nell'evento ETW relogged.

*Bytecount*\
La dimensione dei dati, in byte, a cui puntano i *dati*.

## <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sui concetti ETW, ad esempio *il GUID del provider* e il descrittore di *eventi,* vedere la [documentazione di ETW](/windows/win32/etw/about-event-tracing). Per informazioni dettagliate su come avviare una sessione di re-logging con l'SDK di build Insights, vedere [Relog](relog.md).

::: moniker-end
