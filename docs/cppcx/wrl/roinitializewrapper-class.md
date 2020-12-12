---
description: 'Altre informazioni su: Classe RoInitializeWrapper'
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
ms.openlocfilehash: b7f2c49bd461f08ad732680f1a02968ee7717116
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319300"
---
# <a name="roinitializewrapper-class"></a>Classe RoInitializeWrapper

Inizializza la Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
class RoInitializeWrapper;
```

## <a name="remarks"></a>Osservazioni

`RoInitializeWrapper` è una praticità che inizializza la Windows Runtime e restituisce un valore HRESULT che indica se l'operazione è stata completata correttamente. Poiché il distruttore della classe chiama `::Windows::Foundation::Uninitialize` , le istanze di `RoInitializeWrapper` devono essere dichiarate nell'ambito globale o di primo livello.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                                    | Description
----------------------------------------------------------------------- | -----------------------------------------------------------------
[RoInitializeWrapper:: RoInitializeWrapper](#roinitializewrapper)        | Inizializza una nuova istanza della classe `RoInitializeWrapper`.
[RoInitializeWrapper:: ~ RoInitializeWrapper](#tilde-roinitializewrapper) | Elimina definitivamente l'istanza corrente della `RoInitializeWrapper` classe.

### <a name="public-operators"></a>Operatori pubblici

Nome                                       | Description
------------------------------------------ | ------------------------------------------------------------------------
[RoInitializeWrapper:: HRESULT ()](#hresult) | Recupera il valore HRESULT prodotto dal `RoInitializeWrapper` costruttore.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`RoInitializeWrapper`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers

## <a name="roinitializewrapperhresult"></a><a name="hresult"></a> RoInitializeWrapper:: HRESULT ()

Recupera il valore HRESULT prodotto dall'ultimo `RoInitializeWrapper` costruttore.

```cpp
operator HRESULT()
```

## <a name="roinitializewrapperroinitializewrapper"></a><a name="roinitializewrapper"></a> RoInitializeWrapper:: RoInitializeWrapper

Inizializza una nuova istanza della classe `RoInitializeWrapper`.

```cpp
RoInitializeWrapper(RO_INIT_TYPE flags)
```

### <a name="parameters"></a>Parametri

*flags*<br/>
Una delle enumerazioni di RO_INIT_TYPE, che specifica il supporto fornito dall'Windows Runtime.

### <a name="remarks"></a>Commenti

La `RoInitializeWrapper` classe richiama `Windows::Foundation::Initialize(flags)` .

## <a name="roinitializewrapperroinitializewrapper"></a><a name="tilde-roinitializewrapper"></a> RoInitializeWrapper:: ~ RoInitializeWrapper

Non inizializza la Windows Runtime.

```cpp
~RoInitializeWrapper()
```

### <a name="remarks"></a>Commenti

La `RoInitializeWrapper` classe richiama `Windows::Foundation::Uninitialize()` .
