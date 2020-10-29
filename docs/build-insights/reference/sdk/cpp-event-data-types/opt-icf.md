---
title: Classe OptICF
description: Riferimento alla classe OptICF di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- OptICF
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: b816b53e1054c4492320bdb71f2f0c7726907cf4
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920528"
---
# <a name="opticf-class"></a>Classe OptICF

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `OptICF` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [OPT_ICF](../event-table.md#opt-icf) .

## <a name="syntax"></a>Sintassi

```cpp
class OptICF : public Activity
{
public:
    OptICF(const RawEvent& event);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe di base [Activity](activity.md) , la `OptICF` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[OptICF](#opt-icf)

## <a name="opticf"></a><a name="opt-icf"></a> OptICF

```cpp
OptICF(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [OPT_ICF](../event-table.md#opt-icf) .

::: moniker-end
