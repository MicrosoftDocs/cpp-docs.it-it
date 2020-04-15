---
title: Classe OptICF
description: Il riferimento della classe OptICF dell'SDK di Build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- OptICF
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: f63fea61f9defc216390fa377b2d1eeace01371b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324471"
---
# <a name="opticf-class"></a>Classe OptICF

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `OptICF` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usalo per trovare una corrispondenza con un evento [OPT_ICF.](../event-table.md#opt-icf)

## <a name="syntax"></a>Sintassi

```cpp
class OptICF : public Activity
{
public:
    OptICF(const RawEvent& event);
};
```

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla relativa `OptICF` classe base [Activity,](activity.md) la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[OptICF](#opt-icf)

## <a name="opticf"></a><a name="opt-icf"></a>OptICF

```cpp
OptICF(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Un [evento OPT_ICF.](../event-table.md#opt-icf)

::: moniker-end
