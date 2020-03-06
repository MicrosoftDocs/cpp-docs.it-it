---
title: Classe del compilatore
description: Riferimento C++ alla classe del compilatore SDK di build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Compiler
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: a63a0bad1ab6063d5986fec77b5135f500ded1ce
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333461"
---
# <a name="compiler-class"></a>Classe del compilatore

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La classe `Compiler` viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [del compilatore](../event-table.md#compiler) .

## <a name="syntax"></a>Sintassi

```cpp
class Compiler : public Invocation
{
public:
    Compiler(const RawEvent& event);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe base di [chiamata](invocation.md) , la classe `Compiler` contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[Compilatore](#compiler)

## <a name="compiler"></a>Compilatore

```cpp
Compiler(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*event*\
Evento [del compilatore](../event-table.md#compiler) .

::: moniker-end
