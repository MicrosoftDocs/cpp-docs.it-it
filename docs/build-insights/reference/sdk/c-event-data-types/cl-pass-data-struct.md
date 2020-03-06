---
title: Struttura CL_PASS_DATA
description: Il C++ riferimento alla struttura CL_PASS_DATA di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- CL_PASS_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 3df5b5bc1cddbadc4a4d432ae021dd8b338c532e
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333825"
---
# <a name="cl_pass_data-structure"></a>Struttura CL_PASS_DATA

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La struttura `CL_PASS_DATA` descrive un passaggio di compilazione.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct CL_PASS_DATA_TAG
{
    int                         TranslationUnitPassCode;
    const wchar_t*              InputSourcePath;
    const wchar_t*              OutputObjectPath;

} CL_PASS_DATA;
```

## <a name="members"></a>Members

|  |  |
|--|--|
| `TranslationUnitPassCode` | Codice che identifica il passaggio di compilazione eseguito. Per ulteriori informazioni, vedere [TRANSLATION_UNIT_PASS_CODE](translation-unit-pass-code-enum.md). |
| `InputSourcePath` | Il file di C++ origine C o in cui viene eseguito il passaggio di compilazione. |
| `OutputObjectPath` | File oggetto prodotto dal compilatore. |

::: moniker-end
