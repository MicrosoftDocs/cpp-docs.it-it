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
ms.openlocfilehash: e73c4cc8088fb5200ae2ae76dcbed773db76863b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50500581"
---
# <a name="simpleclassfactory-class"></a>SimpleClassFactory (classe)

Fornisce un meccanismo semplice per creare una classe base.

## <a name="syntax"></a>Sintassi

```cpp
template<typename Base>
class SimpleClassFactory : public ClassFactory<>;
```

### <a name="parameters"></a>Parametri

*base*<br/>
Classe di base.

## <a name="remarks"></a>Note

La classe di base deve fornire un costruttore predefinito.

Esempio di codice seguente viene illustrato come utilizzare `SimpleClassFactory` con il [ActivatableClassWithFactoryEx](../windows/activatableclass-macros.md) macro.

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

## <a name="createinstance"></a>Metodo simpleclassfactory:: CreateInstance

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
Deve essere `nullptr`; in caso contrario, il valore restituito è CLASS_E_NOAGGREGATION.

SimpleClassFactory non supporta l'aggregazione. Se erano supportate aggregazione e l'oggetto da creare faceva parte di un'aggregazione *pUnkOuter* sarebbe un puntatore all'interfaccia di controllo `IUnknown` interfaccia dell'aggregazione.

*riid*<br/>
ID di interfaccia dell'oggetto da creare.

*ppvObject*<br/>
Quando questa operazione viene completata, puntatore a un'istanza dell'oggetto specificato per il *riid* parametro.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Note

Se `__WRL_STRICT__` è definito, assert viene generato un errore se la classe base specificata nel parametro di modello di classe non è derivata da [RuntimeClass](../windows/runtimeclass-class.md), o non è configurato con il ClassicCom o WinRtClassicComMix [ RuntimeClassType](../windows/runtimeclasstype-enumeration.md) valore di enumerazione.
