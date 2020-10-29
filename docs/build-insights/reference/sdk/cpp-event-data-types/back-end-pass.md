---
title: Classe BackEndPass
description: Riferimento alla classe BackEndPass di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- BackEndPass
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 5438fb0ae27d07cbf3f9c7ee446cd12278b4777a
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920905"
---
# <a name="backendpass-class"></a>Classe BackEndPass

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `BackEndPass` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [BACK_END_PASS](../event-table.md#back-end-pass) .

## <a name="syntax"></a>Sintassi

```cpp
class BackEndPass : public CompilerPass
{
public:
    BackEndPass(const RawEvent& event);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe base [CompilerPass](compiler-pass.md) , la `BackEndPass` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[BackEndPass](#back-end-pass)

## <a name="backendpass"></a><a name="back-end-pass"></a> BackEndPass

```cpp
BackEndPass(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [BACK_END_PASS](../event-table.md#back-end-pass) .

::: moniker-end
