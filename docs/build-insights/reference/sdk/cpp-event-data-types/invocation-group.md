---
title: Classe InvocationGroup
description: Riferimento alla classe InvocationGroup dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- InvocationGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: ff5a73d5304a21c314c0fc5ce442e0ffc23b28fd
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324697"
---
# <a name="invocationgroup-class"></a>Classe InvocationGroup

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `InvocationGroup` classe viene utilizzata con le funzioni [MatchEventStack](../functions/match-event-stack.md) e [MatchEventStackInMemberFunction.](../functions/match-event-stack-in-member-function.md) Utilizzarlo per trovare una corrispondenza con gruppi contenenti una combinazione di eventi [COMPILER](../event-table.md#compiler) e [LINKER.](../event-table.md#linker)

## <a name="syntax"></a>Sintassi

```cpp
class InvocationGroup : public EventGroup<Invocation>
{
public:
    InvocationGroup(std::deque<Invocation>&& group);
};
```

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla classe base `InvocationGroup` [EventGroup\<Invocation\> ](event-group.md) , la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[InvocationGroup (InvocationGroup)](#invocation-group)

## <a name="invocationgroup"></a><a name="invocation-group"></a>InvocationGroup (InvocationGroup)

```cpp
InvocationGroup(std::deque<Invocation>&& group);
```

### <a name="parameters"></a>Parametri

*Gruppo*\
Gruppo contenente una combinazione di eventi [COMPILER](../event-table.md#compiler) e [LINKER.](../event-table.md#linker)

::: moniker-end
