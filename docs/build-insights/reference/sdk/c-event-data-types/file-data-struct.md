---
title: Struttura FILE_DATA
description: Il C++ riferimento alla struttura FILE_DATA di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FILE_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 72cae8c8eb81bdb8d94897c46c5af90c89e92ab4
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333755"
---
# <a name="file_data-structure"></a>Struttura FILE_DATA

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La struttura `FILE_DATA` descrive un input o un output del file.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct FILE_DATA_TAG
{
    const wchar_t*      Path;
    int                 TypeCode;

} FILE_DATA;
```

## <a name="members"></a>Members

|  |  |
|--|--|
| `Path` | Percorso assoluto del file |
| `TypeCode` | Codice che descrive il tipo di file. Per ulteriori informazioni, vedere [FILE_TYPE_CODE](file-type-code-enum.md). |

::: moniker-end
