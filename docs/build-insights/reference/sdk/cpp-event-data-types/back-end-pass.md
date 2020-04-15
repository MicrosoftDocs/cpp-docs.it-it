---
title: Classe BackEndPass
description: Informazioni di riferimento per la classe BackEndPass di Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- BackEndPass
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 2b4b1a219abdbe418efaab4537f1c6dc9a22afb3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325232"
---
# <a name="backendpass-class"></a>Classe BackEndPass

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `BackEndPass` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usalo per trovare una corrispondenza con un [evento BACK_END_PASS.](../event-table.md#back-end-pass)

## <a name="syntax"></a>Sintassi

```cpp
class BackEndPass : public CompilerPass
{
public:
    BackEndPass(const RawEvent& event);
};
```

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla classe `BackEndPass` base [CompilerPass,](compiler-pass.md) la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[BackEndPass](#back-end-pass)

## <a name="backendpass"></a><a name="back-end-pass"></a>BackEndPass

```cpp
BackEndPass(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Un evento [BACK_END_PASS.](../event-table.md#back-end-pass)

::: moniker-end
