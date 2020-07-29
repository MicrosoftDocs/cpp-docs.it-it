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
ms.openlocfilehash: 66794789e51a2635fae646cca49e4fae8385dfe0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211151"
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
Classe base.

## <a name="remarks"></a>Osservazioni

La classe base deve fornire un costruttore predefinito.

Nell'esempio di codice riportato di seguito viene illustrato come utilizzare `SimpleClassFactory` con la macro [ActivatableClassWithFactoryEx](activatableclass-macros.md) .

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

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="simpleclassfactorycreateinstance-method"></a><a name="createinstance"></a>Metodo SimpleClassFactory:: CreateInstance

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
Deve essere **`nullptr`** ; in caso contrario, il valore restituito è CLASS_E_NOAGGREGATION.

SimpleClassFactory non supporta l'aggregazione. Se l'aggregazione era supportata e l'oggetto da creare faceva parte di un'aggregazione, *pUnkOuter* sarebbe un puntatore all' `IUnknown` interfaccia di controllo dell'aggregazione.

*riid*<br/>
ID di interfaccia dell'oggetto da creare.

*ppvObject*<br/>
Al termine di questa operazione, puntatore a un'istanza dell'oggetto specificato dal parametro *riid* .

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Osservazioni

Se `__WRL_STRICT__` è definito, viene generato un errore di asserzione se la classe di base specificata nel parametro di modello di classe non deriva da [RuntimeClass](runtimeclass-class.md)o non è configurata con il valore di enumerazione ClassicCom o WinRtClassicComMix [RuntimeClassType](runtimeclasstype-enumeration.md) .
