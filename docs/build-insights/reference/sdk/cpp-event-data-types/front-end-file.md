---
title: Classe FrontEndFile
description: Riferimento C++ alla classe FrontEndFile di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FrontEndFile
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 094b1326765e0e8edb00534ecb3d94c46702d4ec
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333286"
---
# <a name="frontendfile-class"></a>Classe FrontEndFile

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La classe `FrontEndFile` viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [FRONT_END_FILE](../event-table.md#front-end-file) .

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

Insieme ai membri ereditati dalla relativa classe di base [Activity](activity.md) , la classe `FrontEndFile` contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[FrontEndFile](#front-end-file)

### <a name="functions"></a>Funzioni

[Percorso](#path)

## <a name="front-end-file"></a>FrontEndFile

```cpp
FrontEndFile(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*event*\
Evento [FRONT_END_FILE](../event-table.md#front-end-file) .

## <a name="path"></a> Path

```cpp
const char* Path() const;
```

### <a name="return-value"></a>Valore restituito

Percorso assoluto del file, codificato in UTF-8.

::: moniker-end
