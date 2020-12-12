---
description: 'Ulteriori informazioni su: classe HandleT'
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
ms.openlocfilehash: 608433193729e3d9be5b9490c469bf0b04d3531c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97250010"
---
# <a name="handlet-class"></a>HandleT (classe)

Rappresenta un handle per un oggetto.

## <a name="syntax"></a>Sintassi

```cpp
template <typename HandleTraits>
class HandleT;
```

### <a name="parameters"></a>Parametri

*HandleTraits*<br/>
Istanza della struttura [HandleTraits](handletraits-structure.md) che definisce le caratteristiche comuni di un handle.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome     | Description
-------- | -----------------------------
`Traits` | Sinonimo di `HandleTraits`.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                | Description
----------------------------------- | --------------------------------------------------
[HandleT:: HandleT](#handlet)        | Inizializza una nuova istanza della classe `HandleT`.
[HandleT:: ~ HandleT](#tilde-handlet) | Consente di deinizializzare un'istanza della `HandleT` classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                         | Description
---------------------------- | ----------------------------------------------------------------------
[HandleT:: Connetti](#attach)   | Associa l'handle specificato all'oggetto corrente `HandleT` .
[HandleT:: Close](#close)     | Chiude l'oggetto `HandleT` corrente.
[HandleT::D etach](#detach)   | Annulla l'associazione tra l'oggetto corrente e l' `HandleT` handle sottostante.
[HandleT:: Get](#get)         | Ottiene il valore dell'handle sottostante.
[HandleT:: IsValid](#isvalid) | Indica se l' `HandleT` oggetto corrente rappresenta un handle.

### <a name="protected-methods"></a>Metodi protetti

Nome                                     | Description
---------------------------------------- | ------------------------------------
[HandleT:: InternalClose](#internalclose) | Chiude l'oggetto `HandleT` corrente.

### <a name="public-operators"></a>Operatori pubblici

Nome                                   | Description
-------------------------------------- | ----------------------------------------------------------------------------------
[HandleT:: operator =](#operator-assign) | Sposta il valore dell'oggetto specificato nell' `HandleT` `HandleT` oggetto corrente.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                        | Description
--------------------------- | ----------------------------------------------------------------
[HandleT:: handle_](#handle) | Contiene l'handle rappresentato dall' `HandleT` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HandleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers

## <a name="handlethandlet"></a><a name="tilde-handlet"></a> HandleT:: ~ HandleT

Consente di deinizializzare un'istanza della `HandleT` classe.

```cpp
~HandleT();
```

## <a name="handletattach"></a><a name="attach"></a> HandleT:: Connetti

Associa l'handle specificato all'oggetto corrente `HandleT` .

```cpp
void Attach(
   typename HandleTraits::Type h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Handle.

## <a name="handletclose"></a><a name="close"></a> HandleT:: Close

Chiude l'oggetto `HandleT` corrente.

```cpp
void Close();
```

### <a name="remarks"></a>Commenti

L'handle sottostante l'oggetto corrente `HandleT` viene chiuso e l'oggetto `HandleT` è impostato sullo stato non valido.

Se l'handle non si chiude correttamente, viene generata un'eccezione nel thread chiamante.

## <a name="handletdetach"></a><a name="detach"></a> HandleT::D etach

Annulla l'associazione tra l'oggetto corrente e l' `HandleT` handle sottostante.

```cpp
typename HandleTraits::Type Detach();
```

### <a name="return-value"></a>Valore restituito

Handle sottostante.

### <a name="remarks"></a>Commenti

Al termine dell'operazione, l'oggetto corrente `HandleT` viene impostato sullo stato non valido.

## <a name="handletget"></a><a name="get"></a> HandleT:: Get

Ottiene il valore dell'handle sottostante.

```cpp
typename HandleTraits::Type Get() const;
```

### <a name="return-value"></a>Valore restituito

Handle.

## <a name="handlethandle_"></a><a name="handle"></a> HandleT:: handle_

Contiene l'handle rappresentato dall' `HandleT` oggetto.

```cpp
typename HandleTraits::Type handle_;
```

## <a name="handlethandlet"></a><a name="handlet"></a> HandleT:: HandleT

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
Handle.

### <a name="remarks"></a>Commenti

Il primo costruttore inizializza un `HandleT` oggetto che non è un handle valido per un oggetto. Il secondo costruttore crea un nuovo `HandleT` oggetto dal parametro *h*.

## <a name="handletinternalclose"></a><a name="internalclose"></a> HandleT:: InternalClose

Chiude l'oggetto `HandleT` corrente.

```cpp
virtual bool InternalClose();
```

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto corrente è stato `HandleT` chiuso correttamente; in caso contrario, **`false`** .

### <a name="remarks"></a>Commenti

`InternalClose()` è **`protected`** .

## <a name="handletisvalid"></a><a name="isvalid"></a> HandleT:: IsValid

Indica se l' `HandleT` oggetto corrente rappresenta un handle.

```cpp
bool IsValid() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto `HandleT` rappresenta un handle; in caso contrario, **`false`** .

## <a name="handletoperator"></a><a name="operator-assign"></a> HandleT:: operator =

Sposta il valore dell'oggetto specificato nell' `HandleT` `HandleT` oggetto corrente.

```cpp
HandleT& operator=(
   _Inout_ HandleT&& h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Un riferimento rvalue a un handle.

### <a name="return-value"></a>Valore restituito

Riferimento all' `HandleT` oggetto corrente.

### <a name="remarks"></a>Commenti

Questa operazione invalida l' `HandleT` oggetto specificato dal parametro *h*.
