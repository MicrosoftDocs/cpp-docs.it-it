---
title: struttura SYMBOL_NAME_DATA
description: L'SDK di approfondimenti sulla compilazione di C'è SYMBOL_NAME_DATA riferimento alla struttura.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- SYMBOL_NAME_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 1217572f20a772fde629533d6ab170c14dc5b5e0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325345"
---
# <a name="symbol_name_data-structure"></a>struttura SYMBOL_NAME_DATA

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `SYMBOL_NAME_DATA` struttura descrive un simbolo front-end del compilatore.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct SYMBOL_NAME_DATA_TAG
{
    unsigned long long  Key;
    const char*         Name;

} SYMBOL_NAME_DATA;
```

## <a name="members"></a>Membri

|  |  |
|--|--|
| `Key` | Chiave del simbolo. Questo valore è univoco all'interno della traccia analizzata. |
| `Name` | Nome del simbolo. |

## <a name="remarks"></a>Osservazioni

I simboli provenienti da due passaggi front-end del compilatore diverso possono avere lo stesso nome ma una chiave diversa. In questo caso, utilizzare i nomi dei simboli per determinare se due tipi sono uguali.

::: moniker-end
