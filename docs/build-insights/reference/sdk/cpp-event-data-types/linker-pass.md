---
title: LinkerPass (classe)
description: Informazioni di riferimento per la classe SDK LinkerPass di Microsoft .NET Build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- LinkerPass
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 2b0c5a02958560faeff30500543b6e6d4921ac52
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324607"
---
# <a name="linkerpass-class"></a>LinkerPass (classe)

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `LinkerPass` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usalo per abbinare un evento [PASS1](../event-table.md#pass1) o [PASS2.](../event-table.md#pass2)

## <a name="syntax"></a>Sintassi

```cpp
class LinkerPass : public Activity
{
public:
    LinkerPass(const RawEvent& event);
};
```

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla relativa `LinkerPass` classe base [Activity,](activity.md) la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[Passaggio del linker](#linker-pass)

## <a name="linkerpass"></a><a name="linker-pass"></a>Passaggio del linker

```cpp
LinkerPass(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Un evento [PASS1](../event-table.md#pass1) o [PASS2.](../event-table.md#pass2)

::: moniker-end
