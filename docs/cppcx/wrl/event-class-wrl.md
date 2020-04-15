---
title: Classe event (WRL)
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
ms.openlocfilehash: 85b4c2d1f1a27e90a65e47aa749e079f4aa08739
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371531"
---
# <a name="event-class-wrl"></a>Classe event (WRL)

Rappresenta un evento.

## <a name="syntax"></a>Sintassi

```cpp
class Event : public HandleT<HandleTraits::EventTraits>;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                   | Descrizione
---------------------- | ------------------------------------------------
[Evento::Evento](#event) | Inizializza una nuova istanza della classe `Event`.

### <a name="public-operators"></a>Operatori pubblici

Nome                                 | Descrizione
------------------------------------ | ------------------------------------------------------------------------
[Evento:::operatore](#operator-assign) | Assegna il `Event` riferimento specificato `Event` all'istanza corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HandleT`

`Event`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers

## <a name="eventevent"></a><a name="event"></a>Evento::Evento

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

*H*<br/>
Handle per un evento. Per impostazione predefinita, `nullptr` *h* viene inizializzato su .

## <a name="eventoperator"></a><a name="operator-assign"></a>Evento:::operatore

Assegna il `Event` riferimento specificato `Event` all'istanza corrente.

```cpp
WRL_NOTHROW Event& operator=(
   _Inout_ Event&& h
);
```

### <a name="parameters"></a>Parametri

*H*<br/>
Riferimento rvalue a `Event` un'istanza.

### <a name="return-value"></a>Valore restituito

Puntatore all'istanza corrente. `Event`
