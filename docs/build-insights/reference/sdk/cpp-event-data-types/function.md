---
title: Classe Function
description: Informazioni di riferimento per la classe Function SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Function
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 69acbe4d6630de37120aec89a24a9f33d447009e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324717"
---
# <a name="function-class"></a>Classe Function

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `Function` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Utilizzarlo per trovare una corrispondenza con un evento [FUNCTION.](../event-table.md#function)

## <a name="syntax"></a>Sintassi

```cpp
class Function : public Activity
{
public:
    Function(const RawEvent& event);

    const char* Name() const;
};
```

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla relativa `Function` classe base [Activity,](activity.md) la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[Funzione](#function)

### <a name="functions"></a>Funzioni

[Nome](#name)

## <a name="function"></a><a name="function"></a>Funzione

```cpp
Function(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Un evento [FUNCTION.](../event-table.md#function)

## <a name="name"></a><a name="name"></a>Nome

```cpp
const char* Name() const;
```

### <a name="return-value"></a>Valore restituito

Nome della funzione, codificato in UTF-8.

::: moniker-end
