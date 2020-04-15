---
title: Classe FrontEndFileGroup
description: Informazioni di riferimento sulla classe FrontEndFileGroup dell'SDK di Build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FrontEndFileGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: d2eebb650e59e750e5ebde74914dca5f0ef4779d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324764"
---
# <a name="frontendfilegroup-class"></a>Classe FrontEndFileGroup

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `FrontEndFileGroup` classe viene utilizzata con le funzioni [MatchEventStack](../functions/match-event-stack.md) e [MatchEventStackInMemberFunction.](../functions/match-event-stack-in-member-function.md) Usalo per abbinare gruppi di [FRONT_END_FILE](../event-table.md#front-end-file) eventi.

## <a name="syntax"></a>Sintassi

```cpp
class FrontEndFileGroup : public EventGroup<FrontEndFile>
{
public:
    FrontEndFileGroup(std::deque<FrontEndFile>&& group);
};
```

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla classe base [EventGroup\<\> FrontEndFile,](event-group.md) la `FrontEndFileGroup` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[Gruppo FrontEndFileGroup](#front-end-file-group)

## <a name="frontendfilegroup"></a><a name="front-end-file-group"></a>Gruppo FrontEndFileGroup

```cpp
FrontEndFileGroup(std::deque<FrontEndFile>&& group);
```

### <a name="parameters"></a>Parametri

*Gruppo*\
Un gruppo di [FRONT_END_FILE](../event-table.md#front-end-file) eventi.

::: moniker-end
