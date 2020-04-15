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
ms.openlocfilehash: bde7d7f1bd6730d96cb0f7a0d191a32eb8ed3e8c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371460"
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

Nome     | Descrizione
-------- | -----------------------------
`Traits` | Sinonimo di `HandleTraits`.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                | Descrizione
----------------------------------- | --------------------------------------------------
[HandleT::HandleT](#handlet)        | Inizializza una nuova istanza della classe `HandleT`.
[Maniglia: : : HandleT](#tilde-handlet) | Deinizializza un'istanza `HandleT` della classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                         | Descrizione
---------------------------- | ----------------------------------------------------------------------
[HandleT::Allega](#attach)   | Associa l'handle specificato `HandleT` all'oggetto corrente.
[HandleT::Chiudi](#close)     | Chiude l'oggetto `HandleT` corrente.
[HandleT::Detach](#detach)   | Disassocia l'oggetto corrente `HandleT` dall'handle sottostante.
[HandleT::Get](#get)         | Ottiene il valore dell'handle sottostante.
[HandleT::IsValid](#isvalid) | Indica se l'oggetto corrente `HandleT` rappresenta un handle.

### <a name="protected-methods"></a>Metodi protetti

Nome                                     | Descrizione
---------------------------------------- | ------------------------------------
[HandleT::InternalClose](#internalclose) | Chiude l'oggetto `HandleT` corrente.

### <a name="public-operators"></a>Operatori pubblici

Nome                                   | Descrizione
-------------------------------------- | ----------------------------------------------------------------------------------
[Maniglia::operatore](#operator-assign) | Sposta il valore `HandleT` dell'oggetto `HandleT` specificato nell'oggetto corrente.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                        | Descrizione
--------------------------- | ----------------------------------------------------------------
[HandleT::handle_](#handle) | Contiene l'handle rappresentato `HandleT` dall'oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HandleT`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers

## <a name="handlethandlet"></a><a name="tilde-handlet"></a>Maniglia: : : HandleT

Deinizializza un'istanza `HandleT` della classe.

```cpp
~HandleT();
```

## <a name="handletattach"></a><a name="attach"></a>HandleT::Allega

Associa l'handle specificato `HandleT` all'oggetto corrente.

```cpp
void Attach(
   typename HandleTraits::Type h
);
```

### <a name="parameters"></a>Parametri

*H*<br/>
Handle.

## <a name="handletclose"></a><a name="close"></a>HandleT::Chiudi

Chiude l'oggetto `HandleT` corrente.

```cpp
void Close();
```

### <a name="remarks"></a>Osservazioni

L'handle che esegue `HandleT` la parte `HandleT` corrente viene chiuso e l'oggetto è impostato sullo stato non valido.

Se l'handle non si chiude correttamente, viene generata un'eccezione nel thread chiamante.

## <a name="handletdetach"></a><a name="detach"></a>HandleT::Detach

Disassocia l'oggetto corrente `HandleT` dall'handle sottostante.

```cpp
typename HandleTraits::Type Detach();
```

### <a name="return-value"></a>Valore restituito

Handle sottostante.

### <a name="remarks"></a>Osservazioni

Quando questa operazione viene `HandleT` completata, la corrente viene impostata sullo stato non valido.

## <a name="handletget"></a><a name="get"></a>HandleT::Get

Ottiene il valore dell'handle sottostante.

```cpp
typename HandleTraits::Type Get() const;
```

### <a name="return-value"></a>Valore restituito

Handle.

## <a name="handlethandle_"></a><a name="handle"></a>HandleT::handle_

Contiene l'handle rappresentato `HandleT` dall'oggetto.

```cpp
typename HandleTraits::Type handle_;
```

## <a name="handlethandlet"></a><a name="handlet"></a>HandleT::HandleT

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

*H*<br/>
Handle.

### <a name="remarks"></a>Osservazioni

Il primo costruttore `HandleT` inizializza un oggetto che non è un handle valido per un oggetto. Il secondo costruttore `HandleT` crea un nuovo oggetto dal parametro *h*.

## <a name="handletinternalclose"></a><a name="internalclose"></a>HandleT::InternalClose

Chiude l'oggetto `HandleT` corrente.

```cpp
virtual bool InternalClose();
```

### <a name="return-value"></a>Valore restituito

**true** se `HandleT` la corrente è stata chiusa correttamente; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

`InternalClose()` è `protected`.

## <a name="handletisvalid"></a><a name="isvalid"></a>HandleT::IsValid

Indica se l'oggetto corrente `HandleT` rappresenta un handle.

```cpp
bool IsValid() const;
```

### <a name="return-value"></a>Valore restituito

**true** se `HandleT` l'oggetto rappresenta un handle; in caso contrario, **false**.

## <a name="handletoperator"></a><a name="operator-assign"></a>Maniglia::operatore

Sposta il valore `HandleT` dell'oggetto `HandleT` specificato nell'oggetto corrente.

```cpp
HandleT& operator=(
   _Inout_ HandleT&& h
);
```

### <a name="parameters"></a>Parametri

*H*<br/>
Riferimento rvalue a un handle.

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto `HandleT` corrente.

### <a name="remarks"></a>Osservazioni

Questa operazione invalida `HandleT` l'oggetto specificato dal parametro *h*.
