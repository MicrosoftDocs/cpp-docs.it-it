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
ms.openlocfilehash: b43d5bb2f553d298584ab2ae497c22637d3beb0d
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58784749"
---
# <a name="roinitializewrapper-class"></a>Classe RoInitializeWrapper

Inizializza il Runtime di Windows.

## <a name="syntax"></a>Sintassi

```cpp
class RoInitializeWrapper;
```

## <a name="remarks"></a>Note

`RoInitializeWrapper` è utile che inizializza il Runtime di Windows e restituisce un HRESULT che indica se l'operazione ha avuto esito positivo. Poiché chiama il distruttore della classe `::Windows::Foundation::Uninitialize`, le istanze di `RoInitializeWrapper` deve essere dichiarata in ambito globale o di primo livello.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                                    | Descrizione
----------------------------------------------------------------------- | -----------------------------------------------------------------
[RoInitializeWrapper::RoInitializeWrapper](#roinitializewrapper)        | Inizializza una nuova istanza della classe `RoInitializeWrapper`.
[RoInitializeWrapper::~RoInitializeWrapper](#tilde-roinitializewrapper) | Elimina l'istanza corrente del `RoInitializeWrapper` classe.

### <a name="public-operators"></a>Operatori pubblici

Nome                                       | Descrizione
------------------------------------------ | ------------------------------------------------------------------------
[RoInitializeWrapper::HRESULT()](#hresult) | Recupera il valore di HRESULT prodotto dal `RoInitializeWrapper` costruttore.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`RoInitializeWrapper`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft::WRL::Wrappers

## <a name="hresult"></a>RoInitializeWrapper::HRESULT()

Recupera il valore HRESULT prodotto dall'ultima `RoInitializeWrapper` costruttore.

```cpp
operator HRESULT()
```

## <a name="roinitializewrapper"></a>RoInitializeWrapper::RoInitializeWrapper

Inizializza una nuova istanza della classe `RoInitializeWrapper`.

```cpp
RoInitializeWrapper(RO_INIT_TYPE flags)
```

### <a name="parameters"></a>Parametri

*flags*<br/>
Una delle enumerazioni RO_INIT_TYPE, che specifica il supporto fornito dal Runtime di Windows.

### <a name="remarks"></a>Note

Il `RoInitializeWrapper` classe richiama `Windows::Foundation::Initialize(flags)`.

## <a name="tilde-roinitializewrapper"></a>RoInitializeWrapper::~RoInitializeWrapper

Non inizializza il Runtime di Windows.

```cpp
~RoInitializeWrapper()
```

### <a name="remarks"></a>Note

Il `RoInitializeWrapper` classe richiama `Windows::Foundation::Uninitialize()`.
