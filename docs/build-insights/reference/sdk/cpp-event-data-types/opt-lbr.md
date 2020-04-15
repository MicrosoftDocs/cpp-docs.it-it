---
title: Classe OptLBR
description: Informazioni di riferimento per la classe OptLBR dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- OptLBR
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 4cbd87134741d6fc09521f94bfdfbc099cb426a2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324460"
---
# <a name="optlbr-class"></a>Classe OptLBR

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `OptLBR` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usalo per trovare una corrispondenza con un [evento OPT_LBR.](../event-table.md#opt-lbr)

## <a name="syntax"></a>Sintassi

```cpp
class OptLBR : public Activity
{
public:
    OptLBR(const RawEvent& event);
};
```

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla relativa `OptLBR` classe base [Activity,](activity.md) la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[OptLBR](#opt-lbr)

## <a name="optlbr"></a><a name="opt-lbr"></a>OptLBR

```cpp
OptLBR(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Un [evento OPT_LBR.](../event-table.md#opt-lbr)

::: moniker-end
