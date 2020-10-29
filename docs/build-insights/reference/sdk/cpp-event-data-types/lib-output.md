---
title: Classe LibOutput
description: Riferimento alla classe LibOutput di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- LibOutput
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 7cb759403a3e9b922ffa861b3938bcb874adac32
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920619"
---
# <a name="liboutput-class"></a>Classe LibOutput

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `LibOutput` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [LIB_OUTPUT](../event-table.md#lib-output) .

## <a name="syntax"></a>Sintassi

```cpp
class LibOutput : public FileOutput
{
public:
    LibOutput(const RawEvent& event);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe base [FileOutput](file-output.md) , la `LibOutput` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[LibOutput](#lib-output)

## <a name="liboutput"></a><a name="lib-output"></a> LibOutput

```cpp
LibOutput(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [LIB_OUTPUT](../event-table.md#lib-output) .

::: moniker-end
