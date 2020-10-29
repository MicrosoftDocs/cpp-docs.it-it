---
title: Struttura SYMBOL_NAME_DATA
description: Il riferimento alla struttura SYMBOL_NAME_DATA di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- SYMBOL_NAME_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 08c09f304f8cc90bd48a2cecc6771d90c997a7f4
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920931"
---
# <a name="symbol_name_data-structure"></a>Struttura SYMBOL_NAME_DATA

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `SYMBOL_NAME_DATA` struttura descrive un simbolo front-end del compilatore.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct SYMBOL_NAME_DATA_TAG
{
    unsigned long long  Key;
    const char*         Name;

} SYMBOL_NAME_DATA;
```

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `Key` | Chiave del simbolo. Questo valore è univoco all'interno della traccia analizzata. |
| `Name` | Nome del simbolo. |

## <a name="remarks"></a>Osservazioni

I simboli provenienti da due passaggi front-end del compilatore diversi possono avere lo stesso nome ma una chiave diversa. In questo caso, usare i nomi dei simboli per determinare se due tipi sono uguali.

::: moniker-end
