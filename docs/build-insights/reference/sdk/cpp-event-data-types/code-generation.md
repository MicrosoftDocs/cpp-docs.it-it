---
title: Classe CodeGeneration
description: Riferimento alla classe CodeGeneration di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- CodeGeneration
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: e9d9ba3667a96c0a4fa4fe6dc76087536ef2202e
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920827"
---
# <a name="codegeneration-class"></a>Classe CodeGeneration

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `CodeGeneration` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [CODE_GENERATION](../event-table.md#code-generation) .

## <a name="syntax"></a>Sintassi

```cpp
class CodeGeneration : public Activity
{
public:
    CodeGeneration(const RawEvent& event);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe di base [Activity](activity.md) , la `CodeGeneration` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[CodeGeneration](#code-generation)

## <a name="codegeneration"></a><a name="code-generation"></a> CodeGeneration

```cpp
CodeGeneration(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [CODE_GENERATION](../event-table.md#code-generation) .

::: moniker-end
