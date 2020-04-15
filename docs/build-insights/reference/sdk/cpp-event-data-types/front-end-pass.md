---
title: Classe FrontEndPass
description: Informazioni di riferimento per la classe FrontEndPass dell'SDK di Build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FrontEndPass
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 137f553f1e495b7658ae89e69a48cec6b1988a81
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324733"
---
# <a name="frontendpass-class"></a>Classe FrontEndPass

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `FrontEndPass` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usalo per trovare una corrispondenza con un [evento FRONT_END_PASS.](../event-table.md#front-end-pass)

## <a name="syntax"></a>Sintassi

```cpp
class FrontEndPass : public CompilerPass
{
public:
    FrontEndPass(const RawEvent& event);
};
```

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla classe `FrontEndPass` base [CompilerPass,](compiler-pass.md) la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[FrontEndPass](#front-end-pass)

## <a name="frontendpass"></a><a name="front-end-pass"></a>FrontEndPass

```cpp
FrontEndPass(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Un evento [FRONT_END_PASS.](../event-table.md#front-end-pass)

::: moniker-end
