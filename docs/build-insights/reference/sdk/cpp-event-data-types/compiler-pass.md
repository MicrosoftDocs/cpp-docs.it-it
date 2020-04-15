---
title: Classe CompilerPass
description: Il riferimento della classe CompilerPass dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- CompilerPass
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 11af981b647d5183f88dad024d90c0ef4f8a28bc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325039"
---
# <a name="compilerpass-class"></a>Classe CompilerPass

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `CompilerPass` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Utilizzatelo per trovare una corrispondenza con un [BACK_END_PASS](../event-table.md#back-end-pass) o [un evento FRONT_END_PASS.](../event-table.md#front-end-pass)

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

Insieme ai membri ereditati dalla relativa `CompilerPass` classe base [Activity,](activity.md) la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[CompilatorePassCompilerPass](#compiler-pass)

### <a name="enums"></a>Enumerazioni

#### <a name="passcode"></a>Codice

|||
|-|-|
|FRONT_END|Il pass front-end.|
|BACK_END|Il passaggio di back-end.|

### <a name="functions"></a>Funzioni

[InputSourcePath (PercorsoOrigineOrigineOrigine)](#input-source-path)\
[OutputObjectPath (percorso output)](#output-object-path)\
[Codice](#pass-code)\

## <a name="compilerpass"></a><a name="compiler-pass"></a>CompilatorePassCompilerPass

```cpp
CompilerPass(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Un [evento BACK_END_PASS](../event-table.md#back-end-pass) o [FRONT_END_PASS.](../event-table.md#front-end-pass)

## <a name="inputsourcepath"></a><a name="input-source-path"></a>InputSourcePath (PercorsoOrigineOrigineOrigine)

```cpp
const wchar_t* InputSourcePath() const;
```

### <a name="return-value"></a>Valore restituito

Percorso assoluto del file di origine di input elaborato da questo passaggio del compilatore.

## <a name="outputobjectpath"></a><a name="output-object-path"></a>OutputObjectPath (percorso output)

```cpp
const wchar_t* OutputObjectPath() const;
```

### <a name="return-value"></a>Valore restituito

Percorso assoluto del file oggetto di output prodotto da questo passaggio del compilatore.

## <a name="passcode"></a><a name="pass-code"></a>Codice

```cpp
PassCode PassCode() const;
```

### <a name="return-value"></a>Valore restituito

Codice che indica quale passaggio del compilatore è rappresentato da questo oggetto CompilerPass.

::: moniker-end
