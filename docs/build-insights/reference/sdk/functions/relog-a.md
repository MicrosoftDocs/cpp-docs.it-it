---
title: RelogA
description: Riferimento C++ alla funzione RelogA di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- RelogA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: c4427aa0ac85e34bfb9d569913a8ccf6ab264f52
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332733"
---
# <a name="reloga"></a>RelogA

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La funzione `RelogA` viene utilizzata per leggere gli eventi MSVC da una traccia di Event Tracing for Windows (ETW) e scriverli in una nuova traccia ETW modificata.

## <a name="syntax"></a>Sintassi

```cpp
enum RESULT_CODE RelogA(
    const char*             inputLogFile,
    const char*             outputLogFile,
    const RELOG_DESCRIPTOR* relogDescriptor);
```

### <a name="parameters"></a>Parametri

\ *inputLogFile*
Traccia ETW di input da cui si vogliono leggere gli eventi.

\ *outputLogFile*
File in cui scrivere i nuovi eventi.

\ *relogDescriptor*
Puntatore a un oggetto [RELOG_DESCRIPTOR](../other-types/relog-descriptor-struct.md) . Utilizzare questo oggetto per configurare la sessione di registrazione.

### <a name="return-value"></a>Valore restituito

Codice risultato dell'enumerazione [RESULT_CODE](../other-types/result-code-enum.md) .

::: moniker-end
