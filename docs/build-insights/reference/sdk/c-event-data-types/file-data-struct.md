---
title: Struttura FILE_DATA
description: Il riferimento alla struttura FILE_DATA di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FILE_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: b5f793df0340005665a8f4ab42e9793f51f3aa0c
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90041809"
---
# <a name="file_data-structure"></a>Struttura FILE_DATA

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `FILE_DATA` struttura descrive un input o un output del file.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct FILE_DATA_TAG
{
    const wchar_t*      Path;
    int                 TypeCode;

} FILE_DATA;
```

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `Path` | Percorso assoluto del file |
| `TypeCode` | Codice che descrive il tipo di file. Per ulteriori informazioni, vedere [FILE_TYPE_CODE](file-type-code-enum.md). |

::: moniker-end
