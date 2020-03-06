---
title: Struttura FUNCTION_FORCE_INLINEE_DATA
description: Il C++ riferimento alla struttura FUNCTION_FORCE_INLINEE_DATA di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FUNCTION_FORCE_INLINEE_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 3d6929f2f16e9b1bd79b7fb8b383b40e031268bf
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333699"
---
# <a name="function_force_inlinee_data-structure"></a>Struttura FUNCTION_FORCE_INLINEE_DATA

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La struttura `FUNCTION_FORCE_INLINEE_DATA` descrive una funzione forzata in linea.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct FUNCTION_FORCE_INLINEE_DATA_TAG
{
    const char*         Name;
    unsigned short      Size;

} FUNCTION_FORCE_INLINEE_DATA;
```

## <a name="members"></a>Members

|  |  |
|--|--|
| `Name` | Nome della funzione, codificato in UTF-8. |
| `Size` | Dimensione della funzione, come numero di istruzioni intermedie. |

::: moniker-end
