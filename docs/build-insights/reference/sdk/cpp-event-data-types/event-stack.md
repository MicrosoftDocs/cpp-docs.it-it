---
title: Classe EventStack
description: Informazioni di riferimento per la classe EventStack dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- EventStack
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: eaaaedcbf57fdaf8e437a80a7823488febac3e1d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324973"
---
# <a name="eventstack-class"></a>Classe EventStack

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `EventStack` classe è un insieme di [Oggetti Event.](event.md) Tutti gli eventi ricevuti da C, Build Insights `EventStack` SDK sono disponibili sotto forma di un oggetto. L'ultima voce in questo stack è l'evento attualmente in fase di elaborazione. Le voci che precedono l'ultima voce sono la gerarchia padre dell'evento corrente. Per ulteriori informazioni sul modello di eventi usato in Informazioni dettagliate sulla compilazione in C, vedere [la tabella](../event-table.md)degli eventi .

## <a name="syntax"></a>Sintassi

```cpp
class EventStack
{
public:
    EventStack(const EVENT_COLLECTION_DATA& data);

    size_t      Size() const;
    RawEvent    Back() const;
    RawEvent    operator[] (size_t index) const;
};
```

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

[EventStack (Stack evento)](#event-stack)

### <a name="functions"></a>Funzioni

[Operatore](#back)
[Indietro[]](#subscript-operator)
[Dimensione](#size)

## <a name="back"></a><a name="back"></a>Indietro

```cpp
RawEvent Back() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [RawEvent](raw-event.md) che rappresenta l'ultima voce nello stack. L'ultima voce in uno stack di eventi è l'evento che è stato attivato.

## <a name="eventstack"></a><a name="event-stack"></a>EventStack (Stack evento)

```cpp
EventStack(const EVENT_COLLECTION_DATA& data);
```

### <a name="parameters"></a>Parametri

*Dati*\
Dati non elaborati `EventStack` da cui viene compilato l'oggetto .

### <a name="remarks"></a>Osservazioni

In genere non è `EventStack` necessario costruire oggetti manualmente. Vengono forniti dall'SDK di analisi di compilazione di C, quando gli eventi vengono elaborati durante una sessione di analisi o di nuova registrazione.

## <a name="operator"></a><a name="subscript-operator"></a>operatore[]

```cpp
RawEvent operator[] (size_t index) const;
```

### <a name="parameters"></a>Parametri

*Indice*\
Indice dell'elemento a cui accedere nello stack di eventi.

### <a name="return-value"></a>Valore restituito

Oggetto [RawEvent](raw-event.md) che rappresenta l'evento archiviato nella posizione indicata *dall'indice* nello stack di eventi.

## <a name="size"></a>Dimensioni dell'<a name="size"></a>

```cpp
size_t Size() const;
```

### <a name="return-value"></a>Valore restituito

Dimensione dello stack di eventi.

::: moniker-end
