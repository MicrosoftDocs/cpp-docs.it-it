---
title: Classe di evento (WRL)
ms.date: 09/24/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Event
- corewrappers/Microsoft::WRL::Wrappers::Event::Event
- corewrappers/Microsoft::WRL::Wrappers::Event::operator=
helpviewer_keywords:
- Microsoft::WRL::Wrappers::Event class
- Microsoft::WRL::Wrappers::Event::Event, constructor
- Microsoft::WRL::Wrappers::Event::operator= operator
ms.assetid: 55dfc9fc-62d4-4bb2-9d85-5b6dd88569e8
ms.openlocfilehash: 2d36b4fa3d1824f43e0cfafe55c439a6bdeccb6f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50650619"
---
# <a name="event-class-wrl"></a>Classe di evento (WRL)

Rappresenta un evento.

## <a name="syntax"></a>Sintassi

```cpp
class Event : public HandleT<HandleTraits::EventTraits>;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                   | Descrizione
---------------------- | ------------------------------------------------
[Event:: event](#event) | Inizializza una nuova istanza della classe `Event`.

### <a name="public-operators"></a>Operatori pubblici

Nome                                 | Descrizione
------------------------------------ | ------------------------------------------------------------------------
[Event:: operator =](#operator-assign) | Assegna l'oggetto specificato `Event` riferimento all'oggetto corrente `Event` istanza.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HandleT`

`Event`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="event"></a>Event:: event

Inizializza una nuova istanza della classe `Event`.

```cpp
explicit Event(
   HANDLE h = HandleT::Traits::GetInvalidValue()
);
WRL_NOTHROW Event(
   _Inout_ Event&& h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Handle per un evento. Per impostazione predefinita *h* viene inizializzata su `nullptr`.

## <a name="operator-assign"></a>Event:: operator =

Assegna l'oggetto specificato `Event` riferimento all'oggetto corrente `Event` istanza.

```cpp
WRL_NOTHROW Event& operator=(
   _Inout_ Event&& h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Un riferimento rvalue a un `Event` istanza.

### <a name="return-value"></a>Valore restituito

Un puntatore all'oggetto corrente `Event` istanza.
