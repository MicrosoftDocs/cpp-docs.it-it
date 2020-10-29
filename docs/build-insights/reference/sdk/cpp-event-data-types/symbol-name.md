---
title: SymbolName (classe)
description: Riferimento alla classe symbolName SDK per Build Insights di C++.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- SymbolName
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: a749d95b3812df8b1cc0cd7d2da037e98467cefc
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920476"
---
# <a name="symbolname-class"></a>SymbolName (classe)

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `SymbolName` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [SYMBOL_NAME](../event-table.md#symbol-name) .

## <a name="syntax"></a>Sintassi

```cpp
class SymbolName : public SimpleEvent
{
public:
    SymbolName(const RawEvent& event);

    const unsigned long long&  Key() const;
    const char*                Name() const;
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe base [SimpleEvent](simple-event.md) , la `SymbolName` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[SymbolName](#symbol-name)

### <a name="functions"></a>Funzioni

[Chiave](#key) 
 di [Nome](#name)

## <a name="key"></a><a name="key"></a> Chiave

```cpp
const unsigned long long& Key() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore numerico per il tipo rappresentato da questo simbolo. Questo identificatore è univoco all'interno di un passaggio front-end del compilatore.

## <a name="name"></a><a name="name"></a> Nome

```cpp
const char* Name() const;
```

### <a name="return-value"></a>Valore restituito

Nome del tipo rappresentato dal simbolo, codificato in UTF-8.

## <a name="symbolname"></a><a name="symbol-name"></a> SymbolName

```cpp
SymbolName(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [SYMBOL_NAME](../event-table.md#symbol-name) .

::: moniker-end
