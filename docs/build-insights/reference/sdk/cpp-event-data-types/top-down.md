---
title: Classe UpDown
description: Riferimento alla classe di base di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TopDown
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 88622461b27a6037d8d7fbb73cd324978302c941
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920424"
---
# <a name="topdown-class"></a>Classe UpDown

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `TopDown` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [TOP_DOWN](../event-table.md#top-down) .

## <a name="syntax"></a>Sintassi

```cpp
class TopDown : public Activity
{
public:
    TopDown(const RawEvent& event);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe di base [Activity](activity.md) , la `TopDown` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[TopDown](#top-down)

## <a name="topdown"></a><a name="top-down"></a> TopDown

```cpp
TopDown(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [TOP_DOWN](../event-table.md#top-down) .

::: moniker-end
