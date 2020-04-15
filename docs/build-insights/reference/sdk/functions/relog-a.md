---
title: RilogA
description: Informazioni di riferimento sulla funzione RelogA dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- RelogA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 5a772b1156fc69eeef39514afe401c549c3b7c38
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323841"
---
# <a name="reloga"></a>RilogA

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `RelogA` funzione viene utilizzata per leggere gli eventi MSVC da una traccia ETW (Event Tracing for Windows) e scriverli in una nuova traccia ETW modificata.

## <a name="syntax"></a>Sintassi

```cpp
enum RESULT_CODE RelogA(
    const char*             inputLogFile,
    const char*             outputLogFile,
    const RELOG_DESCRIPTOR* relogDescriptor);
```

### <a name="parameters"></a>Parametri

*inputLogFile*\
Traccia ETW di input da cui si desidera leggere gli eventi.

*outputLogFile (file outputLog)*\
File in cui scrivere i nuovi eventi.

*relogDescriptor*\
Puntatore a un oggetto [RELOG_DESCRIPTOR.](../other-types/relog-descriptor-struct.md) Utilizzare questo oggetto per configurare la sessione di riregistrazione.

### <a name="return-value"></a>Valore restituito

Codice di risultato dall'enumerazione [RESULT_CODE.](../other-types/result-code-enum.md)

::: moniker-end
