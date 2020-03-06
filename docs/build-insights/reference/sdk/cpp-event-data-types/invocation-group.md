---
title: Classe InvocationGroup
description: Riferimento C++ alla classe InvocationGroup di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- InvocationGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: b9a2bbcd2b7649b9b5703adc08ed41b272e10276
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333237"
---
# <a name="invocationgroup-class"></a>Classe InvocationGroup

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La classe `InvocationGroup` viene utilizzata con le funzioni [MatchEventStack](../functions/match-event-stack.md) e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per abbinare i gruppi che contengono una combinazione di eventi del [compilatore](../event-table.md#compiler) e del [linker](../event-table.md#linker) .

## <a name="syntax"></a>Sintassi

```cpp
class InvocationGroup : public EventGroup<Invocation>
{
public:
    InvocationGroup(std::deque<Invocation>&& group);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dal relativo [EventGroup\<chiamata\>](event-group.md) classe base, la classe `InvocationGroup` contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[InvocationGroup](#invocation-group)

## <a name="invocation-group"></a>InvocationGroup

```cpp
InvocationGroup(std::deque<Invocation>&& group);
```

### <a name="parameters"></a>Parametri

\ *gruppo*
Gruppo che contiene una combinazione di eventi del [compilatore](../event-table.md#compiler) e del [linker](../event-table.md#linker) .

::: moniker-end
