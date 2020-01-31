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
ms.openlocfilehash: f66fbe23c305be15e09928242175dfa7ce8c141b
ms.sourcegitcommit: b8c22e6d555cf833510753cba7a368d57e5886db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2020
ms.locfileid: "76821818"
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

Name     | Descrizione
-------- | -----------------------------
`Traits` | Sinonimo di `HandleTraits`.

### <a name="public-constructors"></a>Costruttori pubblici

Name                                | Descrizione
----------------------------------- | --------------------------------------------------
[HandleT::HandleT](#handlet)        | Inizializza una nuova istanza della classe `HandleT` .
[HandleT:: ~ HandleT](#tilde-handlet) | Consente di deinizializzare un'istanza della classe `HandleT`.

### <a name="public-methods"></a>Metodi pubblici

Name                         | Descrizione
---------------------------- | ----------------------------------------------------------------------
[HandleT:: Connetti](#attach)   | Associa l'handle specificato all'oggetto `HandleT` corrente.
[HandleT:: Close](#close)     | Chiude l'oggetto `HandleT` corrente.
[HandleT::Detach](#detach)   | Annulla l'associazione dell'oggetto `HandleT` corrente dall'handle sottostante.
[HandleT:: Get](#get)         | Ottiene il valore dell'handle sottostante.
[HandleT::IsValid](#isvalid) | Indica se l'oggetto `HandleT` corrente rappresenta un handle.

### <a name="protected-methods"></a>Metodi protetti

Name                                     | Descrizione
---------------------------------------- | ------------------------------------
[HandleT::InternalClose](#internalclose) | Chiude l'oggetto `HandleT` corrente.

### <a name="public-operators"></a>Operatori pubblici

Name                                   | Descrizione
-------------------------------------- | ----------------------------------------------------------------------------------
[HandleT::operator=](#operator-assign) | Sposta il valore dell'oggetto `HandleT` specificato nell'oggetto `HandleT` corrente.

### <a name="protected-data-members"></a>Membri dati protetti

Name                        | Descrizione
--------------------------- | ----------------------------------------------------------------
[HandleT::handle_](#handle) | Contiene l'handle rappresentato dall'oggetto `HandleT`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HandleT`

## <a name="requirements"></a>Requisiti di

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers

## <a name="tilde-handlet"></a>HandleT:: ~ HandleT

Consente di deinizializzare un'istanza della classe `HandleT`.

```cpp
~HandleT();
```

## <a name="attach"></a>HandleT:: Connetti

Associa l'handle specificato all'oggetto `HandleT` corrente.

```cpp
void Attach(
   typename HandleTraits::Type h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Handle.

## <a name="close"></a>HandleT:: Close

Chiude l'oggetto `HandleT` corrente.

```cpp
void Close();
```

### <a name="remarks"></a>Note

Il punto di manipolazione sottostante la `HandleT` corrente viene chiuso e il `HandleT` è impostato sullo stato non valido.

Se l'handle non si chiude correttamente, viene generata un'eccezione nel thread chiamante.

## <a name="detach"></a>HandleT::Detach

Annulla l'associazione dell'oggetto `HandleT` corrente dall'handle sottostante.

```cpp
typename HandleTraits::Type Detach();
```

### <a name="return-value"></a>Valore restituito

Handle sottostante.

### <a name="remarks"></a>Note

Al termine di questa operazione, il `HandleT` corrente viene impostato sullo stato non valido.

## <a name="get"></a>HandleT:: Get

Ottiene il valore dell'handle sottostante.

```cpp
typename HandleTraits::Type Get() const;
```

### <a name="return-value"></a>Valore restituito

Handle.

## <a name="handle"></a>HandleT::handle_

Contiene l'handle rappresentato dall'oggetto `HandleT`.

```cpp
typename HandleTraits::Type handle_;
```

## <a name="handlet"></a>HandleT::HandleT

Inizializza una nuova istanza della classe `HandleT` .

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

### <a name="remarks"></a>Note

Il primo costruttore inizializza un oggetto `HandleT` che non è un handle valido per un oggetto. Il secondo costruttore crea un nuovo oggetto `HandleT` dal parametro *h*.

## <a name="internalclose"></a>HandleT::InternalClose

Chiude l'oggetto `HandleT` corrente.

```cpp
virtual bool InternalClose();
```

### <a name="return-value"></a>Valore restituito

**true** se la `HandleT` corrente è stata chiusa correttamente; in caso contrario, **false**.

### <a name="remarks"></a>Note

`InternalClose()` è `protected`.

## <a name="isvalid"></a>HandleT::IsValid

Indica se l'oggetto `HandleT` corrente rappresenta un handle.

```cpp
bool IsValid() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il `HandleT` rappresenta un handle; in caso contrario, **false**.

## <a name="operator-assign"></a>HandleT:: operator =

Sposta il valore dell'oggetto `HandleT` specificato nell'oggetto `HandleT` corrente.

```cpp
HandleT& operator=(
   _Inout_ HandleT&& h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Un riferimento rvalue a un handle.

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto `HandleT` corrente.

### <a name="remarks"></a>Note

Questa operazione invalida l'oggetto `HandleT` specificato dal parametro *h*.
