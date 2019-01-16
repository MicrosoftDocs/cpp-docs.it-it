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
ms.openlocfilehash: 6e5824da03fb85e52f413f5678ea6e0fd6c77ddd
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336612"
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
Un'istanza di [HandleTraits](handletraits-structure.md) struttura che definisce le caratteristiche comuni di un handle.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome     | Descrizione
-------- | -----------------------------
`Traits` | Sinonimo di `HandleTraits`.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                | Descrizione
----------------------------------- | --------------------------------------------------
[HandleT::HandleT](#handlet)        | Inizializza una nuova istanza della classe `HandleT`.
[HandleT::~HandleT](#tilde-handlet) | Deinizializza un'istanza del `HandleT` classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                         | Descrizione
---------------------------- | ----------------------------------------------------------------------
[HandleT::Attach](#attach)   | Associa l'handle specificato con l'attuale `HandleT` oggetto.
[HandleT::Close](#close)     | Chiude l'oggetto corrente `HandleT` oggetto.
[HandleT::Detach](#detach)   | Rimuove l'associazione corrente `HandleT` oggetto dal relativo handle sottostante.
[HandleT::Get](#get)         | Ottiene il valore dell'handle sottostante.
[HandleT::IsValid](#isvalid) | Indica se l'oggetto corrente `HandleT` oggetto rappresenta un handle.

### <a name="protected-methods"></a>Metodi protetti

Nome                                     | Descrizione
---------------------------------------- | ------------------------------------
[HandleT::InternalClose](#internalclose) | Chiude l'oggetto corrente `HandleT` oggetto.

### <a name="public-operators"></a>Operatori pubblici

Nome                                   | Descrizione
-------------------------------------- | ----------------------------------------------------------------------------------
[HandleT::operator=](#operator-assign) | Sposta il valore dell'oggetto specificato `HandleT` oggetto all'oggetto corrente `HandleT` oggetto.

### <a name="protected-data-members"></a>Membri dati protetti

nome                        | Descrizione
--------------------------- | ----------------------------------------------------------------
[HandleT::handle_](#handle) | Contiene l'handle che è rappresentato dal `HandleT` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HandleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft::WRL::Wrappers

## <a name="tilde-handlet"></a>HandleT:: ~ HandleT

Deinizializza un'istanza del `HandleT` classe.

```cpp
~HandleT();
```

## <a name="attach"></a>HandleT::Attach

Associa l'handle specificato con l'attuale `HandleT` oggetto.

```cpp
void Attach(
   typename HandleTraits::Type h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Un handle.

## <a name="close"></a>HandleT::Close

Chiude l'oggetto corrente `HandleT` oggetto.

```cpp
void Close();
```

### <a name="remarks"></a>Note

L'handle sottostante l'oggetto corrente `HandleT` viene chiuso e il `HandleT` viene impostato sullo stato non valido.

Se l'handle non chiusa correttamente, viene generata un'eccezione nel thread chiamante.

## <a name="detach"></a>HandleT::Detach

Rimuove l'associazione corrente `HandleT` oggetto dal relativo handle sottostante.

```cpp
typename HandleTraits::Type Detach();
```

### <a name="return-value"></a>Valore restituito

L'handle sottostante.

### <a name="remarks"></a>Note

Al termine di questa operazione, l'oggetto corrente `HandleT` viene impostato sullo stato non valido.

## <a name="get"></a>HandleT::Get

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

## <a name="handlet"></a>HandleT::HandleT

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

## <a name="internalclose"></a>HandleT::InternalClose

Chiude l'oggetto corrente `HandleT` oggetto.

```cpp
virtual bool InternalClose();
```

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto corrente `HandleT` chiuso correttamente; in caso contrario, **false**.

### <a name="remarks"></a>Note

`InternalClose()` è `protected`.

## <a name="isvalid"></a>HandleT::IsValid

Indica se l'oggetto corrente `HandleT` oggetto rappresenta un handle.

```cpp
bool IsValid() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il `HandleT` rappresenta un handle; in caso contrario, **false**.

## <a name="operator-assign"></a>HandleT::operator=

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
