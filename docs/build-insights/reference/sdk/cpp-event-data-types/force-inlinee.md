---
title: Classe ForceInlinee
description: Riferimento C++ alla classe ForceInlinee di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- ForceInlinee
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 7d3cce13601a0b3edbcd2b57664b2d0d94a7d3df
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333335"
---
# <a name="forceinlinee-class"></a>Classe ForceInlinee

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La classe `ForceInlinee` viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [FORCE_INLINEE](../event-table.md#force-inlinee) .

## <a name="syntax"></a>Sintassi

```cpp
class ForceInlinee : public SimpleEvent
{
public:
    ForceInlinee(const RawEvent& event);

    const char*             Name() const;
    const unsigned short&   Size() const;
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe base [SimpleEvent](simple-event.md) , la classe `ForceInlinee` contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[ForceInlinee](#force-inlinee)

### <a name="functions"></a>Funzioni

[Nome](#name)
[dimensioni](#size)

## <a name="force-inlinee"></a>ForceInlinee

```cpp
ForceInlinee(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*event*\
Evento [FORCE_INLINEE](../event-table.md#force-inlinee) .

## <a name="name"></a> Name

```cpp
const char* Name() const;
```

### <a name="return-value"></a>Valore restituito

Nome della funzione inline forzata, codificata in UTF-8.

## <a name="size"></a>Dimensioni

```cpp
const unsigned short& Size() const;
```

### <a name="return-value"></a>Valore restituito

Dimensione della funzione forzata, come numero di istruzioni intermedie.

::: moniker-end
