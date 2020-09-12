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
ms.openlocfilehash: d64a23c603d1f30726f30ffc91c1889c51138ef6
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90041705"
---
# <a name="function_force_inlinee_data-structure"></a>Struttura FUNCTION_FORCE_INLINEE_DATA

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

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
