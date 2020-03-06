---
title: Struttura TEMPLATE_INSTANTIATION_DATA
description: Il C++ riferimento alla struttura TEMPLATE_INSTANTIATION_DATA di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TEMPLATE_INSTANTIATION_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 9aa669d715dbe56ce7e889330f46f307f520710f
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333622"
---
# <a name="template_instantiation_data-structure"></a>Struttura TEMPLATE_INSTANTIATION_DATA

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La struttura `TEMPLATE_INSTANTIATION_DATA` descrive la creazione di un'istanza del modello.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct TEMPLATE_INSTANTIATION_DATA_TAG
{
    unsigned long long  SpecializationSymbolKey;
    unsigned long long  PrimaryTemplateSymbolKey;
    int                 KindCode;

} TEMPLATE_INSTANTIATION_DATA;
```

## <a name="members"></a>Members

|  |  |
|--|--|
| `SpecializationSymbolKey` | Chiave per il tipo di specializzazione del modello. Questo valore è univoco all'interno della traccia analizzata. |
| `PrimaryTemplateSymbolKey` | Chiave per il tipo di modello primario specializzato. Questo valore è univoco all'interno della traccia analizzata. |
| `KindCode` | Tipo di creazione dell'istanza del modello. Per ulteriori informazioni, vedere [TEMPLATE_INSTANTIATION_KIND_CODE](template-instantiation-kind-code-enum.md). |

## <a name="remarks"></a>Osservazioni

Le chiavi nella struttura `TEMPLATE_INSTANTIATION_DATA` sono univoche all'interno della traccia analizzata. Tuttavia, due chiavi diverse provenienti da passaggi front-end del compilatore diversi possono puntare a due tipi identici. Quando si utilizzano `TEMPLATE_INSTANTIATION_DATA` informazioni da più passaggi front-end del compilatore, utilizzare gli eventi [SYMBOL_NAME](../event-table.md#symbol-name) per determinare se due tipi sono uguali. `SymbolName` eventi vengono generati alla fine di un passaggio front-end del compilatore, dopo che sono state eseguite tutte le creazioni di istanze di modello.

::: moniker-end
