---
title: Struttura SYMBOL_NAME_DATA
description: Il C++ riferimento alla struttura SYMBOL_NAME_DATA di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- SYMBOL_NAME_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 618e84f198c20aa089dc7e06e1e6c09b96b6d273
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333636"
---
# <a name="symbol_name_data-structure"></a>Struttura SYMBOL_NAME_DATA

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La struttura `SYMBOL_NAME_DATA` descrive un simbolo front-end del compilatore.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct SYMBOL_NAME_DATA_TAG
{
    unsigned long long  Key;
    const char*         Name;

} SYMBOL_NAME_DATA;
```

## <a name="members"></a>Members

|  |  |
|--|--|
| `Key` | Chiave del simbolo. Questo valore è univoco all'interno della traccia analizzata. |
| `Name` | Nome del simbolo. |

## <a name="remarks"></a>Osservazioni

I simboli provenienti da due passaggi front-end del compilatore diversi possono avere lo stesso nome ma una chiave diversa. In questo caso, usare i nomi dei simboli per determinare se due tipi sono uguali.

::: moniker-end
