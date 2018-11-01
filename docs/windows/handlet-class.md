---
title: HandleT (classe)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleT
- corewrappers/Microsoft::WRL::Wrappers::HandleT::Attach
- corewrappers/Microsoft::WRL::Wrappers::HandleT::Close
- corewrappers/Microsoft::WRL::Wrappers::HandleT::Detach
- corewrappers/Microsoft::WRL::Wrappers::HandleT::Get
- corewrappers/Microsoft::WRL::Wrappers::HandleT::handle_
- corewrappers/Microsoft::WRL::Wrappers::HandleT::HandleT
- corewrappers/Microsoft::WRL::Wrappers::HandleT::InternalClose
- corewrappers/Microsoft::WRL::Wrappers::HandleT::IsValid
- corewrappers/Microsoft::WRL::Wrappers::HandleT::operator=
- corewrappers/Microsoft::WRL::Wrappers::HandleT::~HandleT
helpviewer_keywords:
- Microsoft::WRL::Wrappers::HandleT class
- Microsoft::WRL::Wrappers::HandleT::Attach method
- Microsoft::WRL::Wrappers::HandleT::Close method
- Microsoft::WRL::Wrappers::HandleT::Detach method
- Microsoft::WRL::Wrappers::HandleT::Get method
- Microsoft::WRL::Wrappers::HandleT::handle_ data member
- Microsoft::WRL::Wrappers::HandleT::HandleT, constructor
- Microsoft::WRL::Wrappers::HandleT::InternalClose method
- Microsoft::WRL::Wrappers::HandleT::IsValid method
- Microsoft::WRL::Wrappers::HandleT::operator= operator
- Microsoft::WRL::Wrappers::HandleT::~HandleT, destructor
ms.assetid: 3822b32a-a426-4d94-a54d-919d4df60ee2
ms.openlocfilehash: c7c5951cd966e33d3dda45f9dad504d821838de6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50486138"
---
# <a name="handlet-class"></a>HandleT (classe)

Rappresenta un handle a un oggetto.

## <a name="syntax"></a>Sintassi

```cpp
template <typename HandleTraits>
class HandleT;
```

### <a name="parameters"></a>Parametri

*HandleTraits*<br/>
Un'istanza di [HandleTraits](../windows/handletraits-structure.md) struttura che definisce le caratteristiche comuni di un handle.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome     | Descrizione
-------- | -----------------------------
`Traits` | Sinonimo di `HandleTraits`.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                | Descrizione
----------------------------------- | --------------------------------------------------
[Handlet:: Handlet](#handlet)        | Inizializza una nuova istanza della classe `HandleT`.
[HandleT:: ~ HandleT](#tilde-handlet) | Deinizializza un'istanza del `HandleT` classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                         | Descrizione
---------------------------- | ----------------------------------------------------------------------
[Handlet:: Attach](#attach)   | Associa l'handle specificato con l'attuale `HandleT` oggetto.
[Handlet:: Close](#close)     | Chiude l'oggetto corrente `HandleT` oggetto.
[Handlet:: Detach](#detach)   | Rimuove l'associazione corrente `HandleT` oggetto dal relativo handle sottostante.
[Handlet:: Get](#get)         | Ottiene il valore dell'handle sottostante.
[Handlet:: IsValid](#isvalid) | Indica se l'oggetto corrente `HandleT` oggetto rappresenta un handle.

### <a name="protected-methods"></a>Metodi protetti

Nome                                     | Descrizione
---------------------------------------- | ------------------------------------
[Handlet:: Internalclose](#internalclose) | Chiude l'oggetto corrente `HandleT` oggetto.

### <a name="public-operators"></a>Operatori pubblici

Nome                                   | Descrizione
-------------------------------------- | ----------------------------------------------------------------------------------
[Handlet:: operator =](#operator-assign) | Sposta il valore dell'oggetto specificato `HandleT` oggetto all'oggetto corrente `HandleT` oggetto.

### <a name="protected-data-members"></a>Membri dati protetti

nome                        | Descrizione
--------------------------- | ----------------------------------------------------------------
[HandleT::handle_](#handle) | Contiene l'handle che è rappresentato dal `HandleT` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HandleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="tilde-handlet"></a>HandleT:: ~ HandleT

Deinizializza un'istanza del `HandleT` classe.

```cpp
~HandleT();
```

## <a name="attach"></a>Handlet:: Attach

Associa l'handle specificato con l'attuale `HandleT` oggetto.

```cpp
void Attach(
   typename HandleTraits::Type h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Un handle.

## <a name="close"></a>Handlet:: Close

Chiude l'oggetto corrente `HandleT` oggetto.

```cpp
void Close();
```

### <a name="remarks"></a>Note

L'handle sottostante l'oggetto corrente `HandleT` viene chiuso e il `HandleT` viene impostato sullo stato non valido.

Se l'handle non chiusa correttamente, viene generata un'eccezione nel thread chiamante.

## <a name="detach"></a>Handlet:: Detach

Rimuove l'associazione corrente `HandleT` oggetto dal relativo handle sottostante.

```cpp
typename HandleTraits::Type Detach();
```

### <a name="return-value"></a>Valore restituito

L'handle sottostante.

### <a name="remarks"></a>Note

Al termine di questa operazione, l'oggetto corrente `HandleT` viene impostato sullo stato non valido.

## <a name="get"></a>Handlet:: Get

Ottiene il valore dell'handle sottostante.

```cpp
typename HandleTraits::Type Get() const;
```

### <a name="return-value"></a>Valore restituito

Un handle.

## <a name="handle"></a>HandleT::handle_

Contiene l'handle che è rappresentato dal `HandleT` oggetto.

```cpp
typename HandleTraits::Type handle_;
```

## <a name="handlet"></a>Handlet:: Handlet

Inizializza una nuova istanza della classe `HandleT`.

```cpp
explicit HandleT(
   typename HandleTraits::Type h =
      HandleTraits::GetInvalidValue()
);

HandleT(
   _Inout_ HandleT&& h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Un handle.

### <a name="remarks"></a>Note

Il primo costruttore inizializza un `HandleT` oggetto che non è un handle valido a un oggetto. Il secondo costruttore crea un nuovo `HandleT` oggetto dal parametro *h*.

## <a name="internalclose"></a>Handlet:: Internalclose

Chiude l'oggetto corrente `HandleT` oggetto.

```cpp
virtual bool InternalClose();
```

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto corrente `HandleT` chiuso correttamente; in caso contrario, **false**.

### <a name="remarks"></a>Note

`InternalClose()` è `protected`.

## <a name="isvalid"></a>Handlet:: IsValid

Indica se l'oggetto corrente `HandleT` oggetto rappresenta un handle.

```cpp
bool IsValid() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il `HandleT` rappresenta un handle; in caso contrario, **false**.

## <a name="operator-assign"></a>Handlet:: operator =

Sposta il valore dell'oggetto specificato `HandleT` oggetto all'oggetto corrente `HandleT` oggetto.

```cpp
HandleT& operator=(
   _Inout_ HandleT&& h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Un riferimento rvalue a un handle.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto corrente `HandleT` oggetto.

### <a name="remarks"></a>Note

Questa operazione consente di invalidare la `HandleT` oggetto specificato dal parametro *h*.
