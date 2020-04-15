---
title: struttura INVOCATION_DATA
description: Informazioni di riferimento sulla struttura dell'INVOCATION_DATA SDK di build di C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- INVOCATION_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 4e1f428facac413d7a4a5c059452dd8cdb07be4c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325478"
---
# <a name="invocation_data-structure"></a>struttura INVOCATION_DATA

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `INVOCATION_DATA` struttura descrive una chiamata al compilatore o al linker.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct INVOCATION_DATA_TAG
{
    int                         MSVCToolCode;

    INVOCATION_VERSION_DATA     ToolVersion;

    const char*                 ToolVersionString;
    const wchar_t*              WorkingDirectory;
    const wchar_t*              ToolPath;

} INVOCATION_DATA;
```

## <a name="members"></a>Membri

|  |  |
|--|--|
| `MSVCToolCode` | Codice che identifica il tipo della chiamata. Per ulteriori informazioni, vedere [MSVC_TOOL_CODE](msvc-tool-code-enum.md). |
| `ToolVersion` | Oggetto che archivia la versione dello strumento richiamato come gruppo di valori integrali. |
| `ToolVersionString` | Descrive la versione dello strumento richiamato in formato testo. |
| `WorkingDirectory` | Directory da cui è stata effettuata la chiamata. |
| `ToolPath` | Percorso assoluto dello strumento richiamato. |

::: moniker-end
