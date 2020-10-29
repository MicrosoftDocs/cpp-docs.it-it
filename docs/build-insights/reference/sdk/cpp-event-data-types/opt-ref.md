---
title: Classe OptRef
description: Riferimento alla classe OptRef di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- OptRef
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 72d3867456ecc2bb643239ddb0186668e43f69ef
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920515"
---
# <a name="optref-class"></a>Classe OptRef

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `OptRef` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [OPT_REF](../event-table.md#opt-ref) .

## <a name="syntax"></a>Sintassi

```cpp
class OptRef : public Activity
{
public:
    OptRef(const RawEvent& event);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe di base [Activity](activity.md) , la `OptRef` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[OptRef](#opt-ref)

## <a name="optref"></a><a name="opt-ref"></a> OptRef

```cpp
OptRef(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [OPT_REF](../event-table.md#opt-ref) .

::: moniker-end
