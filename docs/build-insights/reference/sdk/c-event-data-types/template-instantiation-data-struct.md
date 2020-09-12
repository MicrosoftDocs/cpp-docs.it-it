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
ms.openlocfilehash: 15bbb25c3abac339201179e763bffd916dba0480
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90040873"
---
# <a name="template_instantiation_data-structure"></a>Struttura TEMPLATE_INSTANTIATION_DATA

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

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

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `SpecializationSymbolKey` | Chiave per il tipo di specializzazione del modello. Questo valore è univoco all'interno della traccia analizzata. |
| `PrimaryTemplateSymbolKey` | Chiave per il tipo di modello primario specializzato. Questo valore è univoco all'interno della traccia analizzata. |
| `KindCode` | Tipo di creazione dell'istanza del modello. Per ulteriori informazioni, vedere [TEMPLATE_INSTANTIATION_KIND_CODE](template-instantiation-kind-code-enum.md). |

## <a name="remarks"></a>Commenti

Le chiavi nella `TEMPLATE_INSTANTIATION_DATA` struttura sono univoche all'interno della traccia analizzata. Tuttavia, due chiavi diverse provenienti da passaggi front-end del compilatore diversi possono puntare a due tipi identici. Quando `TEMPLATE_INSTANTIATION_DATA` si utilizzano informazioni provenienti da più passaggi front-end del compilatore, utilizzare gli eventi [SYMBOL_NAME](../event-table.md#symbol-name) per determinare se due tipi sono uguali. `SymbolName` gli eventi vengono generati alla fine di un passaggio front-end del compilatore, dopo che sono state eseguite tutte le creazioni di istanze di modello.

::: moniker-end
