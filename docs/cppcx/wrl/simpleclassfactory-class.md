---
title: SimpleClassFactory (classe)
ms.date: 09/7/2018
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::SimpleClassFactory
- module/Microsoft::WRL::SimpleClassFactory::CreateInstance
helpviewer_keywords:
- Microsoft::WRL::SimpleClassFactory class
- Microsoft::WRL::SimpleClassFactory::CreateInstance method
ms.assetid: 6edda1b2-4e44-4e14-9364-72f519249962
ms.openlocfilehash: 924b9d2c30f11e6f0444d9c647807f1c86dcc411
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373555"
---
# <a name="simpleclassfactory-class"></a>SimpleClassFactory (classe)

Fornisce un meccanismo semplice per creare una classe base.

## <a name="syntax"></a>Sintassi

```cpp
template<typename Base>
class SimpleClassFactory : public ClassFactory<>;
```

### <a name="parameters"></a>Parametri

*Base*<br/>
Una classe base.

## <a name="remarks"></a>Osservazioni

La classe base deve fornire un costruttore predefinito.

Esempio di codice seguente `SimpleClassFactory` viene illustrato come utilizzare con il [ActivatableClassWithFactoryEx](activatableclass-macros.md) macro.

`ActivatableClassWithFactoryEx(MyClass, SimpleClassFactory, MyServerName);`

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo SimpleClassFactory::CreateInstance](#createinstance)|Crea un'istanza dell'interfaccia specificata.|

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

`ClassFactory`

`SimpleClassFactory`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="simpleclassfactorycreateinstance-method"></a><a name="createinstance"></a>Metodo SimpleClassFactory::CreateInstance

Crea un'istanza dell'interfaccia specificata.

```cpp
STDMETHOD( CreateInstance )(
   _Inout_opt_ IUnknown* pUnkOuter,
   REFIID riid,
   _Deref_out_ void** ppvObject
);
```

#### <a name="parameters"></a>Parametri

*pUnkOuter*<br/>
Deve `nullptr`essere ; in caso contrario, il valore restituito viene CLASS_E_NOAGGREGATION.

SimpleClassFactory non supporta l'aggregazione. Se l'aggregazione è supportata e l'oggetto da creare faceva parte `IUnknown` di un'aggregazione, *pUnkOuter* sarebbe un puntatore all'interfaccia di controllo dell'aggregazione.

*Riid*<br/>
ID interfaccia dell'oggetto da creare.

*Oggetto ppv*<br/>
Al termine dell'operazione, puntatore a un'istanza dell'oggetto specificato dal parametro *riid.*

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Osservazioni

Se `__WRL_STRICT__` viene definito, viene generato un errore di asserzione se la classe base specificata nel parametro del modello di classe non è derivata da [RuntimeClass](runtimeclass-class.md)o non è configurata con il valore di enumerazione ClassicCom o WinRtClassicComMix [RuntimeClassType](runtimeclasstype-enumeration.md) .
