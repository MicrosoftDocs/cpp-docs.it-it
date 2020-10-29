---
title: Classe FrontEndFile
description: Riferimento alla classe FrontEndFile di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FrontEndFile
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 7715a153df538eab94b8de5281a91d4f6b439ff9
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920658"
---
# <a name="frontendfile-class"></a>Classe FrontEndFile

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `FrontEndFile` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [FRONT_END_FILE](../event-table.md#front-end-file) .

## <a name="syntax"></a>Sintassi

```cpp
class FrontEndFile : public Activity
{
public:
    FrontEndFile(const RawEvent& event);

    const char* Path() const;
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe di base [Activity](activity.md) , la `FrontEndFile` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[FrontEndFile](#front-end-file)

### <a name="functions"></a>Funzioni

[Percorso](#path)

## <a name="frontendfile"></a><a name="front-end-file"></a> FrontEndFile

```cpp
FrontEndFile(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [FRONT_END_FILE](../event-table.md#front-end-file) .

## <a name="path"></a><a name="path"></a> Path

```cpp
const char* Path() const;
```

### <a name="return-value"></a>Valore restituito

Percorso assoluto del file, codificato in UTF-8.

::: moniker-end
