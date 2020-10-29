---
title: Classe LinkerPass
description: Riferimento alla classe LinkerPass di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- LinkerPass
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: bee4538ff04ec14effe0223a178ffdb2cca37a75
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920593"
---
# <a name="linkerpass-class"></a>Classe LinkerPass

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `LinkerPass` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [pass1](../event-table.md#pass1) o [PASS2](../event-table.md#pass2) .

## <a name="syntax"></a>Sintassi

```cpp
class LinkerPass : public Activity
{
public:
    LinkerPass(const RawEvent& event);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe di base [Activity](activity.md) , la `LinkerPass` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[LinkerPass](#linker-pass)

## <a name="linkerpass"></a><a name="linker-pass"></a> LinkerPass

```cpp
LinkerPass(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [pass1](../event-table.md#pass1) o [PASS2](../event-table.md#pass2) .

::: moniker-end
