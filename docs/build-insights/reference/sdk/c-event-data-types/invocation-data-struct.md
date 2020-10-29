---
title: Struttura INVOCATION_DATA
description: Il riferimento alla struttura INVOCATION_DATA di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- INVOCATION_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 98ac234b702ef2c73a5c8d90ee6bf4dc59349ed6
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920970"
---
# <a name="invocation_data-structure"></a>Struttura INVOCATION_DATA

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

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

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `MSVCToolCode` | Codice che identifica il tipo di chiamata. Per ulteriori informazioni, vedere [MSVC_TOOL_CODE](msvc-tool-code-enum.md). |
| `ToolVersion` | Oggetto che archivia la versione dello strumento richiamato come gruppo di valori integrali. |
| `ToolVersionString` | Descrive la versione dello strumento richiamato in formato testo. |
| `WorkingDirectory` | Directory da cui è stata effettuata la chiamata. |
| `ToolPath` | Percorso assoluto dello strumento richiamato. |

::: moniker-end
