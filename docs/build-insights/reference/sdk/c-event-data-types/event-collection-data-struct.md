---
title: struttura EVENT_COLLECTION_DATA
description: Informazioni di riferimento sulla struttura di EVENT_COLLECTION_DATA di C.NET Build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- EVENT_COLLECTION_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 88ba39ede8c86f47c2e6458332ae005eddc06fda
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325698"
---
# <a name="event_collection_data-structure"></a>struttura EVENT_COLLECTION_DATA

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `EVENT_COLLECTION_DATA` struttura descrive una matrice di [elementi EVENT_DATA.](event-data-struct.md)

## <a name="syntax"></a>Sintassi

```cpp
typedef struct EVENT_COLLECTION_DATA_TAG
{
    unsigned int            Count;
    const EVENT_DATA*       Elements;

} EVENT_COLLECTION_DATA;
```

## <a name="members"></a>Membri

|  |  |
|--|--|
| `Count` | Numero di `EVENT_DATA` elementi nella matrice. |
| `Elements` | Puntatore al `EVENT_DATA` primo elemento nella matrice. |

::: moniker-end
