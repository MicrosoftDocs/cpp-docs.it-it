---
title: Struttura EVENT_COLLECTION_DATA
description: Il C++ riferimento alla struttura EVENT_COLLECTION_DATA di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- EVENT_COLLECTION_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 1a622a8459b6aa6d9dcbe0faaf90ae545b449466
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333811"
---
# <a name="event_collection_data-structure"></a>Struttura EVENT_COLLECTION_DATA

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La struttura `EVENT_COLLECTION_DATA` descrive una matrice di elementi di [EVENT_DATA](event-data-struct.md) .

## <a name="syntax"></a>Sintassi

```cpp
typedef struct EVENT_COLLECTION_DATA_TAG
{
    unsigned int            Count;
    const EVENT_DATA*       Elements;

} EVENT_COLLECTION_DATA;
```

## <a name="members"></a>Members

|  |  |
|--|--|
| `Count` | Numero di `EVENT_DATA` elementi nella matrice. |
| `Elements` | Puntatore al primo elemento `EVENT_DATA` nella matrice. |

::: moniker-end
