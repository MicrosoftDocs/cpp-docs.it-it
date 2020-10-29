---
title: Classe LTCG
description: Riferimento alla classe LTCG di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- LTCG
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 3b6bab629307c9fc4fb021df2e75772d5247566d
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920554"
---
# <a name="ltcg-class"></a>Classe LTCG

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `LTCG` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [LTCG](../event-table.md#ltcg) .

## <a name="syntax"></a>Sintassi

```cpp
class LTCG : public Activity
{
public:
    LTCG(const RawEvent& event);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe di base [Activity](activity.md) , la `LTCG` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[LTCG](#ltcg)

## <a name="ltcg"></a><a name="ltcg"></a> LTCG

```cpp
LTCG(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [LTCG](../event-table.md#ltcg) .

::: moniker-end
