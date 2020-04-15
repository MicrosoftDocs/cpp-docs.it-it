---
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
ms.openlocfilehash: 39e539c63e91b508f51656114ee8fbd68150991f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370942"
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
Una classe base.

## <a name="remarks"></a>Osservazioni

La classe base deve fornire un costruttore predefinito.

Esempio di codice seguente viene illustrato come utilizzare SimpleActivationFactory con il [ActivatableClassWithFactoryEx](activatableclass-macros.md) macro.

`ActivatableClassWithFactoryEx(MyClass, SimpleActivationFactory, MyServerName);`

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo SimpleActivationFactory::ActivateInstance](#activateinstance)|Crea un'istanza dell'interfaccia specificata.|
|[Metodo SimpleActivationFactory::GetRuntimeClassName](#getruntimeclassname)|Ottiene il nome della classe runtime di un'istanza della classe specificata dal parametro del modello di classe *base.*|
|[Metodo SimpleActivationFactory::GetTrustLevel](#gettrustlevel)|Ottiene il livello di attendibilità di un'istanza della classe specificata dal parametro di modello della classe *Base.*|

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

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="simpleactivationfactoryactivateinstance-method"></a><a name="activateinstance"></a>Metodo SimpleActivationFactory::ActivateInstance

Crea un'istanza dell'interfaccia specificata.

```cpp
STDMETHOD( ActivateInstance )(
    _Deref_out_ IInspectable **ppvObject
);
```

#### <a name="parameters"></a>Parametri

*Oggetto ppv*<br/>
Al termine dell'operazione, puntatore a un'istanza dell'oggetto specificato dal parametro del `Base` modello di classe.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Osservazioni

Se `__WRL_STRICT__` viene definito, viene generato un errore di asserzione se la classe base specificata nel parametro del modello di classe non è derivata da [RuntimeClass](runtimeclass-class.md)o non è configurata con il valore di enumerazione WinRt o WinRtClassicComMix [RuntimeClassType](runtimeclasstype-enumeration.md) .

## <a name="simpleactivationfactorygetruntimeclassname-method"></a><a name="getruntimeclassname"></a>Metodo SimpleActivationFactory::GetRuntimeClassNameSimpleActivationFactory::GetRuntimeClassName Method

Ottiene il nome della classe runtime di `Base` un'istanza della classe specificata dal parametro del modello di classe.

```cpp
STDMETHOD( GetRuntimeClassName )(
    _Out_ HSTRING* runtimeName
);
```

#### <a name="parameters"></a>Parametri

*runtimeName*<br/>
Quando questa operazione viene completata, il nome della classe di runtime.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Osservazioni

Se `__WRL_STRICT__` viene definito, viene generato un errore di `Base` asserzione se la classe specificata dal parametro del modello di classe non è derivata da [RuntimeClass](runtimeclass-class.md)o non è configurata con il valore di enumerazione WinRt o WinRtClassicComMix [RuntimeClassType](runtimeclasstype-enumeration.md) .

## <a name="simpleactivationfactorygettrustlevel-method"></a><a name="gettrustlevel"></a>Metodo SimpleActivationFactory::GetTrustLevelSimpleActivationFactory::GetTrustLevel Method

Ottiene il livello di attendibilità di `Base` un'istanza della classe specificata dal parametro del modello di classe.

```cpp
STDMETHOD(
   GetTrustLevel
)(_Out_ TrustLevel* trustLvl);
```

#### <a name="parameters"></a>Parametri

*trustLvl*<br/>
Al termine dell'operazione, livello di attendibilità dell'oggetto classe corrente.

### <a name="return-value"></a>Valore restituito

È sempre S_OK.
