---
title: Classe FileInput
description: Riferimento alla classe FileInput di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- FileInput
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 6e12336c10347f00ea2663116f2f308658775e0d
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920684"
---
# <a name="fileinput-class"></a>Classe FileInput

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `FileInput` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [FILE_INPUT](../event-table.md#file-input) .

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

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe base [SimpleEvent](simple-event.md) , la `FileInput` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[FileInput](#file-input)

### <a name="functions"></a>Funzioni

[Percorso](#path) 
 [Tipo](#type) di

## <a name="fileinput"></a><a name="file-input"></a> FileInput

```cpp
FileInput(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [FILE_INPUT](../event-table.md#file-input) .

## <a name="path"></a><a name="path"></a> Path

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
