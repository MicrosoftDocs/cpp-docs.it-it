---
title: Struttura FUNCTION_FORCE_INLINEE_DATA
description: Il riferimento alla struttura FUNCTION_FORCE_INLINEE_DATA di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FUNCTION_FORCE_INLINEE_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: e9de87bdc4e5a1a3e25483f8ba1766609c7d7622
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92923566"
---
# <a name="function_force_inlinee_data-structure"></a>Struttura FUNCTION_FORCE_INLINEE_DATA

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `FUNCTION_FORCE_INLINEE_DATA` struttura descrive una funzione di forza inline.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct FUNCTION_FORCE_INLINEE_DATA_TAG
{
    const char*         Name;
    unsigned short      Size;

} FUNCTION_FORCE_INLINEE_DATA;
```

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `Name` | Nome della funzione, codificato in UTF-8. |
| `Size` | Dimensione della funzione, come numero di istruzioni intermedie. |

::: moniker-end
