---
title: struttura FILE_DATA
description: L'SDK di build Insights di C'è FILE_DATA riferimento alla struttura.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FILE_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 6b7b0129c54fa4b1d5285bafb38761da45bab4e5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325582"
---
# <a name="file_data-structure"></a>struttura FILE_DATA

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `FILE_DATA` struttura descrive un input o un output di file.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct FILE_DATA_TAG
{
    const wchar_t*      Path;
    int                 TypeCode;

} FILE_DATA;
```

## <a name="members"></a>Membri

|  |  |
|--|--|
| `Path` | Il percorso assoluto del file |
| `TypeCode` | Codice che descrive il tipo di file. Per ulteriori informazioni, vedere [FILE_TYPE_CODE](file-type-code-enum.md). |

::: moniker-end
