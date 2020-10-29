---
title: Classe pass2
description: Riferimento alla classe pass2 di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Pass2
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 17f915371f70a6f4398d91251680c460aa231feb
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920502"
---
# <a name="pass2-class"></a>Classe pass2

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `Pass2` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [PASS2](../event-table.md#pass2) .

## <a name="syntax"></a>Sintassi

```cpp
class Pass2 : public LinkerPass
{
public:
    Pass2(const RawEvent& event);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe base [LinkerPass](linker-pass.md) , la `Pass2` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[Pass2](#pass2)

## <a name="pass2"></a><a name="pass2"></a> Pass2

```cpp
Pass2(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [PASS2](../event-table.md#pass2) .

::: moniker-end
