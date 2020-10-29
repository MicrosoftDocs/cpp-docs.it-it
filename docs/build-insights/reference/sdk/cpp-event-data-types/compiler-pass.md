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
ms.openlocfilehash: bfbfdc28870a13a9cdb19d0ec050ea2e69fe1208
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920814"
---
# <a name="compilerpass-class"></a>Classe CompilerPass

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

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

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe di base [Activity](activity.md) , la `CompilerPass` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[CompilerPass](#compiler-pass)

### <a name="enums"></a>Enumerazioni

#### <a name="passcode"></a>Codice

|valore|Descrizione|
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
