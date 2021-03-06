---
title: Struttura CL_PASS_DATA
description: Il riferimento alla struttura CL_PASS_DATA di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- CL_PASS_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 24e524b802a124f38043f3b69afed7f1aa9cd156
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92923649"
---
# <a name="cl_pass_data-structure"></a>Struttura CL_PASS_DATA

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `CL_PASS_DATA` struttura descrive un passaggio di compilazione.

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

| Nome | Descrizione |
|--|--|
| `TranslationUnitPassCode` | Codice che identifica il passaggio di compilazione eseguito. Per ulteriori informazioni, vedere [TRANSLATION_UNIT_PASS_CODE](translation-unit-pass-code-enum.md). |
| `InputSourcePath` | Il file di origine C o C++ in cui viene eseguito il passaggio di compilazione. |
| `OutputObjectPath` | File oggetto prodotto dal compilatore. |

::: moniker-end
