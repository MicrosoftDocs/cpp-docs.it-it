---
title: Classe TemplateInstantiation
description: Riferimento alla classe TemplateInstantiation di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TemplateInstantiation
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 7ff03aaa431f5c5e217f605698a255686411b479
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920437"
---
# <a name="templateinstantiation-class"></a>Classe TemplateInstantiation

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `TemplateInstantiation` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usarlo per trovare la corrispondenza con un evento [TEMPLATE_INSTANTIATION](../event-table.md#template-instantiation) .

## <a name="syntax"></a>Sintassi

```cpp
class TemplateInstantiation : public Activity
{
public:
    enum class Kind
    {
        CLASS       = TEMPLATE_INSTANTIATION_KIND_CODE_CLASS,
        FUNCTION    = TEMPLATE_INSTANTIATION_KIND_CODE_FUNCTION,
        VARIABLE    = TEMPLATE_INSTANTIATION_KIND_CODE_VARIABLE,
        CONCEPT     = TEMPLATE_INSTANTIATION_KIND_CODE_CONCEPT
    };

    TemplateInstantiation(const RawEvent& event);

    const unsigned long long& SpecializationSymbolKey() const;
    const unsigned long long& PrimaryTemplateSymbolKey() const;

    Kind Kind() const;
};
```

## <a name="members"></a>Members

Insieme ai membri ereditati dalla relativa classe di base [Activity](activity.md) , la `TemplateInstantiation` classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[TemplateInstantiation](#template-instantiation)

### <a name="functions"></a>Funzioni

[Tipo](#kind) 
 [PrimaryTemplateSymbolKey](#primary-template-symbol-key) 
 [SpecializationSymbolKey](#specialization-symbol-key)

## <a name="kind"></a><a name="kind"></a> Tipo

```cpp
Kind Kind() const;
```

### <a name="return-value"></a>Valore restituito

Codice che descrive il tipo di creazione di istanza del modello eseguita.

## <a name="primarytemplatesymbolkey"></a><a name="primary-template-symbol-key"></a> PrimaryTemplateSymbolKey

```cpp
const unsigned long long& PrimaryTemplateSymbolKey() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore numerico per il tipo di modello specializzato. Questo identificatore è univoco all'interno di un passaggio front-end del compilatore.

## <a name="specializationsymbolkey"></a><a name="specialization-symbol-key"></a> SpecializationSymbolKey

```cpp
const unsigned long long& SpecializationSymbolKey() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore numerico per il tipo di specializzazione. Questo identificatore è univoco all'interno di un passaggio front-end del compilatore.

## <a name="templateinstantiation"></a><a name="template-instantiation"></a> TemplateInstantiation

```cpp
TemplateInstantiation(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*evento*\
Evento [TEMPLATE_INSTANTIATION](../event-table.md#template-instantiation) .

::: moniker-end
