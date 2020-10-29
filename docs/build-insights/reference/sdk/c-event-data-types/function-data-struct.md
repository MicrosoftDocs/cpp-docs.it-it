---
title: Struttura FUNCTION_DATA
description: Il riferimento alla struttura FUNCTION_DATA di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FUNCTION_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 42dcb5a8633f0b7a6cb2fbee8a227cd3f00e2572
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920996"
---
# <a name="function_data-structure"></a>Struttura FUNCTION_DATA

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `FUNCTION_DATA` struttura descrive una funzione.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct FUNCTION_DATA_TAG
{
    const char*         Name;

} FUNCTION_DATA;
```

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `Name` | Nome della funzione, codificato in UTF-8. |

::: moniker-end
