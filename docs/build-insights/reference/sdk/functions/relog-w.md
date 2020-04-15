---
title: RilogW
description: Informazioni di riferimento per la funzione RelogW dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- RelogW
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: c5d5f6e35c7cd24d2324ce1d8a0434d9048b1d85
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323803"
---
# <a name="relogw"></a>RilogW

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `RelogW` funzione viene utilizzata per leggere gli eventi MSVC da una traccia ETW (Event Tracing for Windows) di input e scriverli in una nuova traccia ETW modificata.

## <a name="syntax"></a>Sintassi

```cpp
enum RESULT_CODE RelogW(
    const wchar_t*          inputLogFile,
    const wchar_t*          outputLogFile,
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
