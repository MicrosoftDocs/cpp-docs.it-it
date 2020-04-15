---
title: Struttura CL_PASS_DATA
description: Informazioni di riferimento sulla struttura di CL_PASS_DATA di Analisi di compilazione di C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- CL_PASS_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: b0a41e59068ade285f1ffa1a9ce13734ef5f1f32
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325707"
---
# <a name="cl_pass_data-structure"></a>Struttura CL_PASS_DATA

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

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

## <a name="members"></a>Membri

|  |  |
|--|--|
| `TranslationUnitPassCode` | Codice che identifica il passaggio di compilazione in esecuzione. Per ulteriori informazioni, vedere [TRANSLATION_UNIT_PASS_CODE](translation-unit-pass-code-enum.md). |
| `InputSourcePath` | Viene eseguito il file di origine C o C. |
| `OutputObjectPath` | File oggetto prodotto dal compilatore. |

::: moniker-end
