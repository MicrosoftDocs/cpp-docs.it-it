---
title: RelogW
description: Riferimento alla funzione RelogW di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- RelogW
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: e01cf7ca769c60761999ca320a7f9a65b41a8ed6
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920060"
---
# <a name="relogw"></a>RelogW

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `RelogW` funzione viene utilizzata per leggere gli eventi MSVC da una traccia di input Event Tracing for Windows (ETW) e scriverli in una nuova traccia ETW modificata.

## <a name="syntax"></a>Sintassi

```cpp
enum RESULT_CODE RelogW(
    const wchar_t*          inputLogFile,
    const wchar_t*          outputLogFile,
    const RELOG_DESCRIPTOR* relogDescriptor);
```

### <a name="parameters"></a>Parametri

*inputLogFile*\
Traccia ETW di input da cui si vogliono leggere gli eventi.

*outputLogFile*\
File in cui scrivere i nuovi eventi.

*relogDescriptor*\
Puntatore a un oggetto [RELOG_DESCRIPTOR](../other-types/relog-descriptor-struct.md) . Utilizzare questo oggetto per configurare la sessione di registrazione.

### <a name="return-value"></a>Valore restituito

Codice risultato dell'enumerazione [RESULT_CODE](../other-types/result-code-enum.md) .

::: moniker-end
