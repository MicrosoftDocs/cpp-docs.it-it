---
title: Classe EventStack
description: Riferimento C++ alla classe EventStack di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- EventStack
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 6da2fd25082399b82d788c5d119a39e2f7388714
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78333405"
---
# <a name="eventstack-class"></a>Classe EventStack

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La classe `EventStack` è una raccolta di oggetti [evento](event.md) . Tutti gli eventi ricevuti da C++ Build Insights SDK sono disponibili sotto forma di oggetto `EventStack`. L'ultima voce di questo stack è l'evento attualmente in fase di elaborazione. Le voci che precedono l'ultima voce sono la gerarchia padre dell'evento corrente. Per altre informazioni sul modello di eventi usato in C++ Build Insights, vedere [tabella eventi](../event-table.md).

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

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

[EventStack](#event-stack)

### <a name="functions"></a>Funzioni

[Back](#back)
[operator []](#subscript-operator)
[dimensioni](#size)

## <a name="back"></a>Indietro

```cpp
RawEvent Back() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [RawEvent](raw-event.md) che rappresenta l'ultima voce nello stack. L'ultima voce in uno stack eventi è l'evento che è stato attivato.

## <a name="event-stack"></a>EventStack

```cpp
EventStack(const EVENT_COLLECTION_DATA& data);
```

### <a name="parameters"></a>Parametri

\ *dati*
Dati non elaborati da cui viene compilata la `EventStack`.

### <a name="remarks"></a>Osservazioni

Non è in genere necessario costruire oggetti `EventStack`. Vengono fornite da C++ Build Insights SDK quando vengono elaborati gli eventi durante un'analisi o una sessione di registrazione.

## <a name="subscript-operator"></a>operator []

```cpp
RawEvent operator[] (size_t index) const;
```

### <a name="parameters"></a>Parametri

\ di *Indice*
Indice dell'elemento a cui accedere nello stack di eventi.

### <a name="return-value"></a>Valore restituito

Oggetto [RawEvent](raw-event.md) che rappresenta l'evento archiviato nella posizione indicata da *index* nello stack di eventi.

## <a name="size"></a>Dimensioni

```cpp
size_t Size() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni dello stack di eventi.

::: moniker-end
