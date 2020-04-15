---
title: TemplateInstantiation (classe)
description: Informazioni di riferimento per la classe TemplateInstantiation SDK di Build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TemplateInstantiation
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: ba8fd10efc6a536c9160f10b19e19e17bfaaad98
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324229"
---
# <a name="templateinstantiation-class"></a>TemplateInstantiation (classe)

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `TemplateInstantiation` classe viene utilizzata con le funzioni [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md)e [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) . Usalo per trovare una corrispondenza con un [evento TEMPLATE_INSTANTIATION.](../event-table.md#template-instantiation)

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

## <a name="members"></a>Membri

Insieme ai membri ereditati dalla relativa `TemplateInstantiation` classe base [Activity,](activity.md) la classe contiene i membri seguenti:

### <a name="constructors"></a>Costruttori

[ModelloInstantiation (Creazione guidata)](#template-instantiation)

### <a name="functions"></a>Funzioni

[Tipo](#kind)
[PrimaryTemplateSymbolKey](#primary-template-symbol-key)
[SpecializzazioneSymbolKey](#specialization-symbol-key)

## <a name="kind"></a><a name="kind"></a>gentile

```cpp
Kind Kind() const;
```

### <a name="return-value"></a>Valore restituito

Codice che descrive il tipo di creazione di istanze del modello che è stata eseguita.

## <a name="primarytemplatesymbolkey"></a><a name="primary-template-symbol-key"></a>PrimaryTemplateSymbolKey (Modello primario)

```cpp
const unsigned long long& PrimaryTemplateSymbolKey() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore numerico per il tipo di modello specializzato. Questo identificatore è univoco all'interno di un passaggio front-end del compilatore.

## <a name="specializationsymbolkey"></a><a name="specialization-symbol-key"></a>SpecializzazioneSymbolKey

```cpp
const unsigned long long& SpecializationSymbolKey() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore numerico per il tipo della specializzazione. Questo identificatore è univoco all'interno di un passaggio front-end del compilatore.

## <a name="templateinstantiation"></a><a name="template-instantiation"></a>ModelloInstantiation (Creazione guidata)

```cpp
TemplateInstantiation(const RawEvent& event);
```

### <a name="parameters"></a>Parametri

*Evento*\
Un [evento TEMPLATE_INSTANTIATION.](../event-table.md#template-instantiation)

::: moniker-end
