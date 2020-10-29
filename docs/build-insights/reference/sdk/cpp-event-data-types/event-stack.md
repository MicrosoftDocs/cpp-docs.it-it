---
title: Classe EventStack
description: Riferimento alla classe EventStack di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- EventStack
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: b4f1e92011acdf8272fe631843c03c2f960a1234
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920710"
---
# <a name="eventstack-class"></a>Classe EventStack

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `EventStack` classe è una raccolta di oggetti [evento](event.md) . Tutti gli eventi ricevuti da C++ Build Insights SDK sono sotto forma di `EventStack` oggetto. L'ultima voce di questo stack è l'evento attualmente in fase di elaborazione. Le voci che precedono l'ultima voce sono la gerarchia padre dell'evento corrente. Per altre informazioni sul modello di eventi usato in C++ Build Insights, vedere [tabella eventi](../event-table.md).

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

[Indietro](#back) 
 [operator []](#subscript-operator) 
 [Dimensioni](#size)

## <a name="back"></a><a name="back"></a> Indietro

```cpp
RawEvent Back() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [RawEvent](raw-event.md) che rappresenta l'ultima voce nello stack. L'ultima voce in uno stack eventi è l'evento che è stato attivato.

## <a name="eventstack"></a><a name="event-stack"></a> EventStack

```cpp
EventStack(const EVENT_COLLECTION_DATA& data);
```

### <a name="parameters"></a>Parametri

*dati*\
Dati non elaborati da cui `EventStack` viene compilato.

### <a name="remarks"></a>Osservazioni

Non è in genere necessario costruire `EventStack` oggetti. Vengono fornite da C++ Build Insights SDK quando gli eventi vengono elaborati durante una sessione di analisi o di registrazione.

## <a name="operator"></a><a name="subscript-operator"></a> operator []

```cpp
RawEvent operator[] (size_t index) const;
```

### <a name="parameters"></a>Parametri

*Indice*\
Indice dell'elemento a cui accedere nello stack di eventi.

### <a name="return-value"></a>Valore restituito

Oggetto [RawEvent](raw-event.md) che rappresenta l'evento archiviato nella posizione indicata da *index* nello stack di eventi.

## <a name="size"></a>Dimensioni dell'<a name="size"></a>

```cpp
size_t Size() const;
```

### <a name="return-value"></a>Valore restituito

Dimensioni dello stack di eventi.

::: moniker-end
