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
ms.openlocfilehash: 1831a816d0967c2ca53f941128639ea368c1b727
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58785745"
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
Classe di base.

## <a name="remarks"></a>Note

La classe di base deve fornire un costruttore predefinito.

Esempio di codice seguente viene illustrato come utilizzare SimpleActivationFactory con la [ActivatableClassWithFactoryEx](activatableclass-macros.md) macro.

`ActivatableClassWithFactoryEx(MyClass, SimpleActivationFactory, MyServerName);`

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo SimpleActivationFactory::ActivateInstance](#activateinstance)|Crea un'istanza dell'interfaccia specificata.|
|[Metodo SimpleActivationFactory::GetRuntimeClassName](#getruntimeclassname)|Ottiene il nome di classe di runtime di un'istanza della classe specificata per il *Base* parametro di modello di classe.|
|[Metodo SimpleActivationFactory::GetTrustLevel](#gettrustlevel)|Ottiene il livello di attendibilità di un'istanza della classe specificata per il *Base* parametro di modello di classe.|

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

## <a name="activateinstance"></a>Metodo simpleactivationfactory:: Activateinstance

Crea un'istanza dell'interfaccia specificata.

```cpp
STDMETHOD( ActivateInstance )(
    _Deref_out_ IInspectable **ppvObject
);
```

#### <a name="parameters"></a>Parametri

*ppvObject*<br/>
Quando questa operazione viene completata, puntatore a un'istanza dell'oggetto specificato da di `Base` parametro di modello di classe.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Note

Se `__WRL_STRICT__` è definito, assert viene generato un errore se la classe base specificata nel parametro di modello di classe non è derivata da [RuntimeClass](runtimeclass-class.md), o non è configurato con il WinRt o WinRtClassicComMix [ RuntimeClassType](runtimeclasstype-enumeration.md) valore di enumerazione.

## <a name="getruntimeclassname"></a>Metodo simpleactivationfactory:: Getruntimeclassname

Ottiene il nome di classe di runtime di un'istanza della classe specificata per il `Base` parametro di modello di classe.

```cpp
STDMETHOD( GetRuntimeClassName )(
    _Out_ HSTRING* runtimeName
);
```

#### <a name="parameters"></a>Parametri

*runtimeName*<br/>
Quando questa operazione viene completata, il nome di classe di runtime.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Note

Se `__WRL_STRICT__` è definito, assert viene generato un errore se la classe specificata per il `Base` parametro di modello di classe non è derivato da [RuntimeClass](runtimeclass-class.md), o non è configurato con il WinRt o WinRtClassicComMix [RuntimeClassType](runtimeclasstype-enumeration.md) valore di enumerazione.

## <a name="gettrustlevel"></a>Metodo simpleactivationfactory:: Gettrustlevel

Ottiene il livello di attendibilità di un'istanza della classe specificata per il `Base` parametro di modello di classe.

```cpp
STDMETHOD(
   GetTrustLevel
)(_Out_ TrustLevel* trustLvl);
```

#### <a name="parameters"></a>Parametri

*trustLvl*<br/>
Quando questa operazione viene completata, il livello di attendibilità dell'oggetto della classe corrente.

### <a name="return-value"></a>Valore restituito

Always S_OK.
