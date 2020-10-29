---
title: Classe del compilatore
description: Riferimento alla classe del compilatore SDK build Insights di C++.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Compiler
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 52f8bb2ffc474cbf8e58552c77a4bb9fabc13c7e
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92923322"
---
# <a name="compiler-class"></a>Classe del compilatore

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `Compiler` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [del compilatore](../event-table.md#compiler) .

## <a name="syntax"></a>Sintassi

```cpp
class Compiler : public Invocation
{
public:
    Compiler(const RawEvent& event);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe base di [chiamata](invocation.md) , la `Compiler` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[Compilatore](#compiler)

## <a name="compiler"></a><a name="compiler"></a> Compilatore

```cpp
Compiler(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [del compilatore](../event-table.md#compiler) .

::: moniker-end
