---
title: Struttura TEMPLATE_INSTANTIATION_DATA
description: Il riferimento alla struttura TEMPLATE_INSTANTIATION_DATA di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TEMPLATE_INSTANTIATION_DATA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: c92fbd8ee7e1fff702757d003ab3bbe0bdabd886
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92923439"
---
# <a name="template_instantiation_data-structure"></a>Struttura TEMPLATE_INSTANTIATION_DATA

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

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

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `SpecializationSymbolKey` | Chiave per il tipo di specializzazione del modello. Questo valore è univoco all'interno della traccia analizzata. |
| `PrimaryTemplateSymbolKey` | Chiave per il tipo di modello primario specializzato. Questo valore è univoco all'interno della traccia analizzata. |
| `KindCode` | Tipo di creazione dell'istanza del modello. Per ulteriori informazioni, vedere [TEMPLATE_INSTANTIATION_KIND_CODE](template-instantiation-kind-code-enum.md). |

## <a name="remarks"></a>Osservazioni

Le chiavi nella `TEMPLATE_INSTANTIATION_DATA` struttura sono univoche all'interno della traccia analizzata. Tuttavia, due chiavi diverse provenienti da passaggi front-end del compilatore diversi possono puntare a due tipi identici. Quando `TEMPLATE_INSTANTIATION_DATA` si utilizzano informazioni provenienti da più passaggi front-end del compilatore, utilizzare gli eventi [SYMBOL_NAME](../event-table.md#symbol-name) per determinare se due tipi sono uguali. `SymbolName` gli eventi vengono generati alla fine di un passaggio front-end del compilatore, dopo che sono state eseguite tutte le creazioni di istanze di modello.

::: moniker-end
