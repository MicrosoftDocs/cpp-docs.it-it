---
title: Classe InvocationGroup
description: Riferimento alla classe InvocationGroup di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- InvocationGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 1a8d4786a228ab25551ee36ce22637d44dc07307
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920632"
---
# <a name="invocationgroup-class"></a>Classe InvocationGroup

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `InvocationGroup` classe viene utilizzata con le funzioni [MatchEventStack](../functions/match-event-stack.md) e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per abbinare i gruppi che contengono una combinazione di eventi del [compilatore](../event-table.md#compiler) e del [linker](../event-table.md#linker) .

## <a name="syntax"></a>Sintassi

```cpp
class InvocationGroup : public EventGroup<Invocation>
{
public:
    InvocationGroup(std::deque<Invocation>&& group);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe base [EventGroup \<Invocation\> ](event-group.md) , la `InvocationGroup` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[InvocationGroup](#invocation-group)

## <a name="invocationgroup"></a><a name="invocation-group"></a> InvocationGroup

```cpp
InvocationGroup(std::deque<Invocation>&& group);
```

### <a name="parameters"></a>Parametri

*gruppo*\
Gruppo che contiene una combinazione di eventi del [compilatore](../event-table.md#compiler) e del [linker](../event-table.md#linker) .

::: moniker-end
