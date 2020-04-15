---
title: Classe Compiler
description: Il riferimento della classe del compilatore SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Compiler
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 9b0a2622c4bc0bc19d7222977fe24c060ee8709e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325035"
---
# <a name="compiler-class"></a>Classe Compiler

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `Compiler` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Utilizzarlo per trovare una corrispondenza con un evento [COMPILER.](../event-table.md#compiler)

## <a name="syntax"></a>Sintassi

```cpp
class Compiler : public Invocation
{
public:
    Compiler(const RawEvent& event);
};
```

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla relativa `Compiler` classe base [Invocation,](invocation.md) la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[Compilatore](#compiler)

## <a name="compiler"></a><a name="compiler"></a>Compilatore

```cpp
Compiler(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Un evento [COMPILER.](../event-table.md#compiler)

::: moniker-end
