---
title: Classe C1DLL
description: Riferimento alla classe C1DLL di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- C1DLL
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: a8f1f6fdaf9a2c16e07fa5096cfcb585f8c3d9f2
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920841"
---
# <a name="c1dll-class"></a>Classe C1DLL

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `C1DLL` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [C1_DLL](../event-table.md#c1-dll) .

## <a name="syntax"></a>Sintassi

```cpp
class C1DLL : public Activity
{
public:
    C1DLL(const RawEvent& event);
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe di base [Activity](activity.md) , la `C1DLL` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[C1DLL](#c1-dll)

## <a name="c1dll"></a><a name="c1-dll"></a> C1DLL

```cpp
C1DLL(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [C1_DLL](../event-table.md#c1-dll) .

::: moniker-end
