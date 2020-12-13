---
description: 'Altre informazioni su: classe SimpleActivationFactory'
title: SimpleActivationFactory (classe)
ms.date: 09/07/2018
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::SimpleActivationFactory
- module/Microsoft::WRL::SimpleActivationFactory::ActivateInstance
- module/Microsoft::WRL::SimpleActivationFactory::GetRuntimeClassName
- module/Microsoft::WRL::SimpleActivationFactory::GetTrustLevel
helpviewer_keywords:
- Microsoft::WRL::SimpleActivationFactory class
- Microsoft::WRL::SimpleActivationFactory::ActivateInstance method
- Microsoft::WRL::SimpleActivationFactory::GetRuntimeClassName method
- Microsoft::WRL::SimpleActivationFactory::GetTrustLevel method
ms.assetid: aff768e0-0038-4fd7-95d2-ad7d308da41c
ms.openlocfilehash: 83643c69977b887e58e430bbd500fcf7c2e81ca6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97135213"
---
# <a name="simpleactivationfactory-class"></a>SimpleActivationFactory (classe)

Fornisce un meccanismo semplice per creare una classe base di Windows Runtime o COM classica.

## <a name="syntax"></a>Sintassi

```cpp
template<typename Base>
class SimpleActivationFactory : public ActivationFactory<>;
```

### <a name="parameters"></a>Parametri

*Base*<br/>
Classe base.

## <a name="remarks"></a>Commenti

La classe base deve fornire un costruttore predefinito.

Nell'esempio di codice riportato di seguito viene illustrato come utilizzare SimpleActivationFactory con la macro [ActivatableClassWithFactoryEx](activatableclass-macros.md) .

`ActivatableClassWithFactoryEx(MyClass, SimpleActivationFactory, MyServerName);`

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[Metodo SimpleActivationFactory::ActivateInstance](#activateinstance)|Crea un'istanza dell'interfaccia specificata.|
|[Metodo SimpleActivationFactory::GetRuntimeClassName](#getruntimeclassname)|Ottiene il nome della classe di runtime di un'istanza della classe specificata dal parametro di modello della classe di *base* .|
|[Metodo SimpleActivationFactory::GetTrustLevel](#gettrustlevel)|Ottiene il livello di attendibilità di un'istanza della classe specificata dal parametro di modello della classe di *base* .|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`I0`

`ChainInterfaces`

`I0`

`RuntimeClassBase`

`ImplementsHelper`

`DontUseNewUseMake`

`RuntimeClassFlags`

`RuntimeClassBaseT`

`RuntimeClass`

`ActivationFactory`

`SimpleActivationFactory`

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="simpleactivationfactoryactivateinstance-method"></a><a name="activateinstance"></a> Metodo SimpleActivationFactory:: ActivateInstance

Crea un'istanza dell'interfaccia specificata.

```cpp
STDMETHOD( ActivateInstance )(
    _Deref_out_ IInspectable **ppvObject
);
```

#### <a name="parameters"></a>Parametri

*ppvObject*<br/>
Al termine di questa operazione, puntatore a un'istanza dell'oggetto specificato dal parametro di `Base` modello di classe.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Commenti

Se `__WRL_STRICT__` è definito, viene generato un errore di asserzione se la classe di base specificata nel parametro di modello di classe non deriva da [RuntimeClass](runtimeclass-class.md)o non è configurata con il valore di enumerazione WinRT o WinRtClassicComMix [RuntimeClassType](runtimeclasstype-enumeration.md) .

## <a name="simpleactivationfactorygetruntimeclassname-method"></a><a name="getruntimeclassname"></a> Metodo SimpleActivationFactory:: GetRuntimeClassName

Ottiene il nome della classe di runtime di un'istanza della classe specificata dal `Base` parametro di modello di classe.

```cpp
STDMETHOD( GetRuntimeClassName )(
    _Out_ HSTRING* runtimeName
);
```

#### <a name="parameters"></a>Parametri

*runtimename*<br/>
Al termine di questa operazione, il nome della classe di Runtime.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Commenti

Se `__WRL_STRICT__` è definito, viene generato un errore di asserzione se la classe specificata dal `Base` parametro di modello di classe non deriva da [RuntimeClass](runtimeclass-class.md)o non è configurata con il valore di enumerazione WinRT o WinRtClassicComMix [RuntimeClassType](runtimeclasstype-enumeration.md) .

## <a name="simpleactivationfactorygettrustlevel-method"></a><a name="gettrustlevel"></a> Metodo SimpleActivationFactory:: GetTrustLevel

Ottiene il livello di attendibilità di un'istanza della classe specificata dal `Base` parametro di modello di classe.

```cpp
STDMETHOD(
   GetTrustLevel
)(_Out_ TrustLevel* trustLvl);
```

#### <a name="parameters"></a>Parametri

*trustLvl*<br/>
Al termine di questa operazione, il livello di attendibilità dell'oggetto della classe corrente.

### <a name="return-value"></a>Valore restituito

Sempre S_OK.
