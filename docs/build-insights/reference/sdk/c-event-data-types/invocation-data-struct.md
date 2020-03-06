---
title: Struttura INVOCATION_DATA
description: Il C++ riferimento alla struttura INVOCATION_DATA di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- INVOCATION_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: b2e8ddcf79201d8bcbbb8eb298b96b5c7680f90e
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333692"
---
# <a name="invocation_data-structure"></a>Struttura INVOCATION_DATA

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La struttura `INVOCATION_DATA` descrive una chiamata al compilatore o al linker.

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

|  |  |
|--|--|
| `MSVCToolCode` | Codice che identifica il tipo di chiamata. Per ulteriori informazioni, vedere [MSVC_TOOL_CODE](msvc-tool-code-enum.md). |
| `ToolVersion` | Oggetto che archivia la versione dello strumento richiamato come gruppo di valori integrali. |
| `ToolVersionString` | Descrive la versione dello strumento richiamato in formato testo. |
| `WorkingDirectory` | Directory da cui è stata effettuata la chiamata. |
| `ToolPath` | Percorso assoluto dello strumento richiamato. |

::: moniker-end
