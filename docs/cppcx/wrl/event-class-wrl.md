---
description: 'Ulteriori informazioni su: classe di evento (WRL)'
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
ms.openlocfilehash: e3a61a40d1160830df80a7e0650e60fbf803e3d8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97272825"
---
# <a name="event-class-wrl"></a>Classe di evento (WRL)

Rappresenta un evento.

## <a name="syntax"></a>Sintassi

```cpp
class Event : public HandleT<HandleTraits::EventTraits>;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

Nome                   | Description
---------------------- | ------------------------------------------------
[Evento:: Event](#event) | Inizializza una nuova istanza della classe `Event`.

### <a name="public-operators"></a>Operatori pubblici

Nome                                 | Description
------------------------------------ | ------------------------------------------------------------------------
[Evento:: operator =](#operator-assign) | Assegna il riferimento specificato `Event` all' `Event` istanza corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HandleT`

`Event`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers

## <a name="eventevent"></a><a name="event"></a> Evento:: Event

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
Handle per un evento. Per impostazione predefinita, *h* viene inizializzato su **`nullptr`** .

## <a name="eventoperator"></a><a name="operator-assign"></a> Evento:: operator =

Assegna il riferimento specificato `Event` all' `Event` istanza corrente.

```cpp
WRL_NOTHROW Event& operator=(
   _Inout_ Event&& h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Un riferimento rvalue a un' `Event` istanza di.

### <a name="return-value"></a>Valore restituito

Puntatore all' `Event` istanza corrente.
