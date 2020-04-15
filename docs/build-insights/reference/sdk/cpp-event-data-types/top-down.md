---
title: Classe TopDown
description: Informazioni di riferimento per la classe TopDown di Build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TopDown
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 7c0c957fa17daaec34710debeda634192c63d1da
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324204"
---
# <a name="topdown-class"></a>Classe TopDown

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `TopDown` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usalo per trovare una corrispondenza con un [evento TOP_DOWN.](../event-table.md#top-down)

## <a name="syntax"></a>Sintassi

```cpp
class TopDown : public Activity
{
public:
    TopDown(const RawEvent& event);
};
```

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla relativa `TopDown` classe base [Activity,](activity.md) la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[Dall'alto verso il basso](#top-down)

## <a name="topdown"></a><a name="top-down"></a>Dall'alto verso il basso

```cpp
TopDown(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Un [evento TOP_DOWN.](../event-table.md#top-down)

::: moniker-end
