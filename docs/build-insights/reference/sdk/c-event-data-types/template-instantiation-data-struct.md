---
title: struttura TEMPLATE_INSTANTIATION_DATA
description: L'SDK di build Insights di C'è TEMPLATE_INSTANTIATION_DATA riferimento alla struttura.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TEMPLATE_INSTANTIATION_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: a38d19368e7c0a9912907f1da6e7a2e31ffe8d90
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325323"
---
# <a name="template_instantiation_data-structure"></a>struttura TEMPLATE_INSTANTIATION_DATA

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `TEMPLATE_INSTANTIATION_DATA` struttura descrive la creazione di un'istanza del modello.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct TEMPLATE_INSTANTIATION_DATA_TAG
{
    unsigned long long  SpecializationSymbolKey;
    unsigned long long  PrimaryTemplateSymbolKey;
    int                 KindCode;

} TEMPLATE_INSTANTIATION_DATA;
```

## <a name="members"></a>Membri

|  |  |
|--|--|
| `SpecializationSymbolKey` | Chiave per il tipo di specializzazione del modello. Questo valore è univoco all'interno della traccia analizzata. |
| `PrimaryTemplateSymbolKey` | Chiave per il tipo di modello primario specializzato. Questo valore è univoco all'interno della traccia analizzata. |
| `KindCode` | Tipo della creazione di istanze del modello. Per ulteriori informazioni, vedere [TEMPLATE_INSTANTIATION_KIND_CODE](template-instantiation-kind-code-enum.md). |

## <a name="remarks"></a>Osservazioni

Le chiavi `TEMPLATE_INSTANTIATION_DATA` nella struttura sono univoche all'interno della traccia analizzata. Tuttavia, due chiavi diverse provenienti da passaggi front-end del compilatore diversi possono puntare a due tipi identici. Quando `TEMPLATE_INSTANTIATION_DATA` si utilizzano informazioni da più passaggi front-end del compilatore, usare gli eventi [SYMBOL_NAME](../event-table.md#symbol-name) per determinare se due tipi sono uguali. `SymbolName`Gli eventi vengono generati alla fine di un passaggio front-end del compilatore, dopo che sono state eseguite tutte le istanze del modello.

::: moniker-end
