---
title: Struttura EVENT_COLLECTION_DATA
description: Il riferimento alla struttura EVENT_COLLECTION_DATA di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- EVENT_COLLECTION_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 17daaa6feb784c501d180a982cd4ad2b405ccf67
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92921087"
---
# <a name="event_collection_data-structure"></a>Struttura EVENT_COLLECTION_DATA

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `EVENT_COLLECTION_DATA` struttura descrive una matrice di elementi [EVENT_DATA](event-data-struct.md) .

## <a name="syntax"></a>Sintassi

```cpp
typedef struct EVENT_COLLECTION_DATA_TAG
{
    unsigned int            Count;
    const EVENT_DATA*       Elements;

} EVENT_COLLECTION_DATA;
```

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `Count` | Numero di `EVENT_DATA` elementi nella matrice. |
| `Elements` | Puntatore al primo `EVENT_DATA` elemento nella matrice. |

::: moniker-end
