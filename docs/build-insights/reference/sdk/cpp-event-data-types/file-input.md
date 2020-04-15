---
title: Classe FileInput
description: Informazioni di riferimento sulla classe FileInput di Build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FileInput
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 642236d3e67465ed38508cb24c8cd698ae880065
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324800"
---
# <a name="fileinput-class"></a>Classe FileInput

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `FileInput` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usalo per trovare una corrispondenza con un evento [FILE_INPUT.](../event-table.md#file-input)

## <a name="syntax"></a>Sintassi

```cpp
class FileInput : public SimpleEvent
{
public:
    enum class Type
    {
        OTHER               = FILE_TYPE_CODE_OTHER,
        OBJ                 = FILE_TYPE_CODE_OBJ,
        EXECUTABLE_IMAGE    = FILE_TYPE_CODE_EXECUTABLE_IMAGE,
        LIB                 = FILE_TYPE_CODE_LIB,
        IMP_LIB             = FILE_TYPE_CODE_IMP_LIB,
        EXP                 = FILE_TYPE_CODE_EXP
    };

    FileInput(const RawEvent& event);

    const wchar_t* Path() const;
    Type           Type() const;
};
```

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla classe `FileInput` base [SimpleEvent](simple-event.md) , la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[FileInput](#file-input)

### <a name="functions"></a>Funzioni

[Path](#path)
[Tipo di](#type) percorso

## <a name="fileinput"></a><a name="file-input"></a>FileInput

```cpp
FileInput(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Un evento [FILE_INPUT.](../event-table.md#file-input)

## <a name="path"></a><a name="path"></a>Percorso

```cpp
const wchar_t Path() const;
```

### <a name="return-value"></a>Valore restituito

Percorso assoluto del file di input.

## <a name="type"></a>Tipo di <a name="type"></a>

```cpp
Type Type() const;
```

### <a name="return-value"></a>Valore restituito

Codice che descrive il tipo di file di input.

::: moniker-end
