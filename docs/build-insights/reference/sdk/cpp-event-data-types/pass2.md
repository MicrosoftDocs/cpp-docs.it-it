---
title: Classe Pass2
description: Informazioni di riferimento per la classe SDK Pass2 per la compilazione in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Pass2
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 89b775c60b1d136c33dbaf2c4e39f247be7bb0bc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324411"
---
# <a name="pass2-class"></a>Classe Pass2

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `Pass2` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usalo per abbinare un evento [PASS2.](../event-table.md#pass2)

## <a name="syntax"></a>Sintassi

```cpp
class Pass2 : public LinkerPass
{
public:
    Pass2(const RawEvent& event);
};
```

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla classe `Pass2` base [LinkerPass,](linker-pass.md) la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[Passaggio2](#pass2)

## <a name="pass2"></a><a name="pass2"></a>Passaggio2

```cpp
Pass2(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Un evento [PASS2.](../event-table.md#pass2)

::: moniker-end
