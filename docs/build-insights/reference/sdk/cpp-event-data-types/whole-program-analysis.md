---
title: Classe WholeProgramAnalysis
description: Riferimento alla classe WholeProgramAnalysis di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- WholeProgramAnalysis
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: aa766bb33c358627d3347e1d64ed7cc3be832116
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920346"
---
# <a name="wholeprogramanalysis-class"></a>Classe WholeProgramAnalysis

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `WholeProgramAnalysis` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [WHOLE_PROGRAM_ANALYSIS](../event-table.md#whole-program-analysis) .

## <a name="syntax"></a>Sintassi

```cpp
class WholeProgramAnalysis : public Activity
{
public:
    WholeProgramAnalysis(const RawEvent& event);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe di base [Activity](activity.md) , la `WholeProgramAnalysis` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[WholeProgramAnalysis](#whole-program-analysis)

## <a name="wholeprogramanalysis"></a><a name="whole-program-analysis"></a> WholeProgramAnalysis

```cpp
WholeProgramAnalysis(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [WHOLE_PROGRAM_ANALYSIS](../event-table.md#whole-program-analysis) .

::: moniker-end
