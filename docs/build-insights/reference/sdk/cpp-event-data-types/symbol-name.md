---
title: Classe SymbolName
description: Il riferimento alla classe SymbolName sdk di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- SymbolName
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 1306fb43d6c2140a75b36c5f142532916cf26ae4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324351"
---
# <a name="symbolname-class"></a>Classe SymbolName

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `SymbolName` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usalo per trovare una corrispondenza con un [evento SYMBOL_NAME.](../event-table.md#symbol-name)

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

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla classe `SymbolName` base [SimpleEvent](simple-event.md) , la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[NomeSimbolo](#symbol-name)

### <a name="functions"></a>Funzioni

[Key](#key)
[Nome](#name) chiave

## <a name="key"></a><a name="key"></a>Chiave

```cpp
const unsigned long long& Key() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore numerico per il tipo rappresentato da questo simbolo. Questo identificatore è univoco all'interno di un passaggio front-end del compilatore.

## <a name="name"></a><a name="name"></a>Nome

```cpp
const char* Name() const;
```

### <a name="return-value"></a>Valore restituito

Nome del tipo rappresentato dal simbolo, codificato in UTF-8.

## <a name="symbolname"></a><a name="symbol-name"></a>NomeSimbolo

```cpp
SymbolName(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Un [evento SYMBOL_NAME.](../event-table.md#symbol-name)

::: moniker-end
