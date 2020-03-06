---
title: Classe FrontEndFileGroup
description: Riferimento C++ alla classe FrontEndFileGroup di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FrontEndFileGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 343a5a0d798d6c719088bd49668e70b10fba6d1a
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333328"
---
# <a name="frontendfilegroup-class"></a>Classe FrontEndFileGroup

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La classe `FrontEndFileGroup` viene utilizzata con le funzioni [MatchEventStack](../functions/match-event-stack.md) e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con i gruppi di eventi [FRONT_END_FILE](../event-table.md#front-end-file) .

## <a name="syntax"></a>Sintassi

```cpp
class FrontEndFileGroup : public EventGroup<FrontEndFile>
{
public:
    FrontEndFileGroup(std::deque<FrontEndFile>&& group);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dal relativo [EventGroup\<FrontEndFile\>](event-group.md) classe base, la classe `FrontEndFileGroup` contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[FrontEndFileGroup](#front-end-file-group)

## <a name="front-end-file-group"></a>FrontEndFileGroup

```cpp
FrontEndFileGroup(std::deque<FrontEndFile>&& group);
```

### <a name="parameters"></a>Parametri

\ *gruppo*
Gruppo di eventi [FRONT_END_FILE](../event-table.md#front-end-file) .

::: moniker-end
