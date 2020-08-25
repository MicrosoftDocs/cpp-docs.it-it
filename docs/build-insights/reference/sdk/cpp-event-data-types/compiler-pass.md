---
title: Classe CompilerPass
description: Riferimento alla classe CompilerPass di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- CompilerPass
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 054bdf75dcfca42b8c202565fb44df671f17f912
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88831619"
---
# <a name="compilerpass-class"></a>Classe CompilerPass

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `CompilerPass` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [BACK_END_PASS](../event-table.md#back-end-pass) o [FRONT_END_PASS](../event-table.md#front-end-pass) .

## <a name="syntax"></a>Sintassi

```cpp
class CompilerPass : public Activity
{
public:
    enum class PassCode
    {
        FRONT_END,
        BACK_END
    };

    CompilerPass(const RawEvent& event);

    PassCode       PassCode() const;
    const wchar_t* InputSourcePath() const;
    const wchar_t* OutputObjectPath() const;
};
```

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla relativa classe di base [Activity](activity.md) , la `CompilerPass` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[CompilerPass](#compiler-pass)

### <a name="enums"></a>Enumerazioni

#### <a name="passcode"></a>Codice

|Valore|Descrizione|
|-|-|
|FRONT_END|Passaggio front-end.|
|BACK_END|Passaggio del back-end.|

### <a name="functions"></a>Funzioni

[InputSourcePath](#input-source-path)\
[OutputObjectPath](#output-object-path)\
[Codice](#pass-code)\

## <a name="compilerpass"></a><a name="compiler-pass"></a> CompilerPass

```cpp
CompilerPass(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [BACK_END_PASS](../event-table.md#back-end-pass) o [FRONT_END_PASS](../event-table.md#front-end-pass) .

## <a name="inputsourcepath"></a><a name="input-source-path"></a> InputSourcePath

```cpp
const wchar_t* InputSourcePath() const;
```

### <a name="return-value"></a>Valore restituito

Il percorso assoluto del file di origine di input elaborato da questo compilatore pass.

## <a name="outputobjectpath"></a><a name="output-object-path"></a> OutputObjectPath

```cpp
const wchar_t* OutputObjectPath() const;
```

### <a name="return-value"></a>Valore restituito

Il percorso assoluto del file oggetto di output prodotto da questo passaggio del compilatore.

## <a name="passcode"></a><a name="pass-code"></a> Codice

```cpp
PassCode PassCode() const;
```

### <a name="return-value"></a>Valore restituito

Codice che indica quale passaggio del compilatore è rappresentato da questo oggetto CompilerPass.

::: moniker-end
