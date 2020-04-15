---
title: Classe RoInitializeWrapper
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper
- corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper::HRESULT
- corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper::RoInitializeWrapper
- corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper::~RoInitializeWrapper
helpviewer_keywords:
- Microsoft::WRL::Wrappers::RoInitializeWrapper class
- Microsoft::WRL::Wrappers::RoInitializeWrapper::operator HRESULT operator
- Microsoft::WRL::Wrappers::RoInitializeWrapper::RoInitializeWrapper, constructor
- Microsoft::WRL::Wrappers::RoInitializeWrapper::~RoInitializeWrapper, destructor
ms.assetid: 4055fbe0-63a7-4c06-b5a0-414fda5640e5
ms.openlocfilehash: eba9162f17b98d13a9caf956b4f110b89dd81c37
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371237"
---
# <a name="roinitializewrapper-class"></a>Classe RoInitializeWrapper

Inizializza Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
class RoInitializeWrapper;
```

## <a name="remarks"></a>Osservazioni

`RoInitializeWrapper`è una comodità che inizializza Windows Runtime e restituisce un HRESULT che indica se l'operazione è stata eseguita correttamente. Poiché il distruttore `::Windows::Foundation::Uninitialize`di `RoInitializeWrapper` classe chiama , le istanze di deve essere dichiarate in ambito globale o di primo livello.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                                    | Descrizione
----------------------------------------------------------------------- | -----------------------------------------------------------------
[RoInitializeWrapper::RoInitializeWrapper](#roinitializewrapper)        | Inizializza una nuova istanza della classe `RoInitializeWrapper`.
[RoInitializeWrapper::](#tilde-roinitializewrapper) | Elimina l'istanza corrente `RoInitializeWrapper` della classe.

### <a name="public-operators"></a>Operatori pubblici

Nome                                       | Descrizione
------------------------------------------ | ------------------------------------------------------------------------
[RoInitializeWrapper::HRESULT()](#hresult) | Recupera il valore HRESULT `RoInitializeWrapper` prodotto dal costruttore.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`RoInitializeWrapper`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers

## <a name="roinitializewrapperhresult"></a><a name="hresult"></a>RoInitializeWrapper::HRESULT()

Recupera il valore HRESULT prodotto `RoInitializeWrapper` dall'ultimo costruttore.

```cpp
operator HRESULT()
```

## <a name="roinitializewrapperroinitializewrapper"></a><a name="roinitializewrapper"></a>RoInitializeWrapper::RoInitializeWrapper

Inizializza una nuova istanza della classe `RoInitializeWrapper`.

```cpp
RoInitializeWrapper(RO_INIT_TYPE flags)
```

### <a name="parameters"></a>Parametri

*Bandiere*<br/>
Una delle enumerazioni RO_INIT_TYPE, che specifica il supporto fornito da Windows Runtime.

### <a name="remarks"></a>Osservazioni

La `RoInitializeWrapper` classe `Windows::Foundation::Initialize(flags)`richiama .

## <a name="roinitializewrapperroinitializewrapper"></a><a name="tilde-roinitializewrapper"></a>RoInitializeWrapper::

Annulla l'inizializzazione di Windows Runtime.

```cpp
~RoInitializeWrapper()
```

### <a name="remarks"></a>Osservazioni

La `RoInitializeWrapper` classe `Windows::Foundation::Uninitialize()`richiama .
