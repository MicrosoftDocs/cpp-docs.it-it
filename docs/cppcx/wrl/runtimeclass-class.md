---
description: 'Altre informazioni su: classe RuntimeClass'
title: Classe RuntimeClass
ms.date: 09/11/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClass
- implements/Microsoft::WRL::RuntimeClass::AddRef
- implements/Microsoft::WRL::RuntimeClass::DecrementReference
- implements/Microsoft::WRL::RuntimeClass::GetIids
- implements/Microsoft::WRL::RuntimeClass::GetRuntimeClassName
- implements/Microsoft::WRL::RuntimeClass::GetTrustLevel
- implements/Microsoft::WRL::RuntimeClass::GetWeakReference
- implements/Microsoft::WRL::RuntimeClass::InternalAddRef
- implements/Microsoft::WRL::RuntimeClass::QueryInterface
- implements/Microsoft::WRL::RuntimeClass::Release
- implements/Microsoft::WRL::RuntimeClass::RuntimeClass
- implements/Microsoft::WRL::RuntimeClass::~RuntimeClass
helpviewer_keywords:
- Microsoft::WRL::RuntimeClass class
- Microsoft::WRL::RuntimeClass::AddRef method
- Microsoft::WRL::RuntimeClass::DecrementReference method
- Microsoft::WRL::RuntimeClass::GetIids method
- Microsoft::WRL::RuntimeClass::GetRuntimeClassName method
- Microsoft::WRL::RuntimeClass::GetTrustLevel method
- Microsoft::WRL::RuntimeClass::GetWeakReference method
- Microsoft::WRL::RuntimeClass::InternalAddRef method
- Microsoft::WRL::RuntimeClass::QueryInterface method
- Microsoft::WRL::RuntimeClass::Release method
- Microsoft::WRL::RuntimeClass::RuntimeClass, constructor
- Microsoft::WRL::RuntimeClass::~RuntimeClass, destructor
ms.assetid: d52f9d1a-98e5-41f2-a143-8fb629dd0727
ms.openlocfilehash: f62eec0b5ac9b8fc8ecac390ea07077743fdcb51
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330765"
---
# <a name="runtimeclass-class"></a>Classe RuntimeClass

Rappresenta una classe WinRT o COM che eredita le interfacce specificate e fornisce il Windows Runtime specificato, il COM classico e il supporto di riferimento debole.

Questa classe fornisce l'implementazione standard delle classi WinRT e com, fornendo l'implementazione di `QueryInterface` , `AddRef` e `Release` così via, gestisce il conteggio dei riferimenti del modulo e dispone del supporto per fornire la class factory per gli oggetti attivabile.

## <a name="syntax"></a>Sintassi

```cpp
template <typename ...TInterfaces> class RuntimeClass
template <unsigned int classFlags, typename ...TInterfaces> class RuntimeClass;
```

### <a name="parameters"></a>Parametri

*classFlags*<br/>
Parametro facoltativo. Combinazione di uno o più valori di enumerazione [RuntimeClassType](runtimeclasstype-enumeration.md) . `__WRL_CONFIGURATION_LEGACY__`È possibile definire la macro per modificare il valore predefinito di classFlags per tutte le classi di runtime nel progetto. Se definito, le istanze di RuntimeClass non sono agile per impostazione predefinita. Quando non è definito, le istanze di RuntimeClass sono agile per impostazione predefinita. Per evitare ambiguità, specificare sempre `Microsoft::WRL::FtmBase` in `TInterfaces` o `RuntimeClassType::InhibitFtmBase` . Si noti che se InhibitFtmBase e FtmBase sono entrambi usati, l'oggetto sarà agile.

*TInterfaces*<br/>
Elenco di interfacce implementate dall'oggetto oltre `IUnknown` `IInspectable` o altre interfacce controllate da [RuntimeClassType](runtimeclasstype-enumeration.md). È anche possibile elencare le altre classi da derivare, `Microsoft::WRL::FtmBase` in particolare per rendere agile l'oggetto e determinarne l'implementazione `IMarshal` .

## <a name="members"></a>Membri

`RuntimeClassInitialize`<br/>
Funzione che Inizializza l'oggetto se la `MakeAndInitialize` funzione di modello viene utilizzata per costruire l'oggetto. Restituisce S_OK se l'oggetto è stato inizializzato correttamente o un codice di errore COM se l'inizializzazione non è riuscita. Il codice di errore COM viene propagato come valore restituito di `MakeAndInitialize` . Si noti che il `RuntimeClassInitialize` metodo non viene chiamato se la `Make` funzione di modello viene utilizzata per costruire l'oggetto.

### <a name="public-constructors"></a>Costruttori pubblici

| Nome                                               | Description                                                     |
| -------------------------------------------------- | --------------------------------------------------------------- |
| [RuntimeClass:: RuntimeClass](#runtimeclass)        | Inizializza l'istanza corrente della `RuntimeClass` classe.   |
| [RuntimeClass:: ~ RuntimeClass](#tilde-runtimeclass) | Consente di deinizializzare l'istanza corrente della `RuntimeClass` classe. |

### <a name="public-methods"></a>Metodi pubblici

| Nome                                                      | Description                                                                                        |
| --------------------------------------------------------- | -------------------------------------------------------------------------------------------------- |
| [RuntimeClass:: AddRef](#addref)                           | Incrementa il conteggio dei riferimenti per l' `RuntimeClass` oggetto corrente.                              |
| [RuntimeClass::D ecrementReference](#decrementreference)   | Decrementa il conteggio dei riferimenti per l' `RuntimeClass` oggetto corrente.                              |
| [RuntimeClass:: GetIids](#getiids)                         | Ottiene una matrice che può contenere gli ID di interfaccia implementati dall' `RuntimeClass` oggetto corrente. |
| [RuntimeClass:: GetRuntimeClassName](#getruntimeclassname) | Ottiene il nome della classe di runtime dell' `RuntimeClass` oggetto corrente.                                  |
| [RuntimeClass:: GetTrustLevel](#gettrustlevel)             | Ottiene il livello di attendibilità dell' `RuntimeClass` oggetto corrente.                                         |
| [RuntimeClass:: GetWeakReference](#getweakreference)       | Ottiene un puntatore all'oggetto di riferimento debole per l' `RuntimeClass` oggetto corrente.                 |
| [RuntimeClass:: InternalAddRef](#internaladdref)           | Incrementa il conteggio dei riferimenti nell'oggetto corrente `RuntimeClass` .                               |
| [RuntimeClass:: QueryInterface](#queryinterface)           | Recupera un puntatore all'ID di interfaccia specificato.                                                 |
| [RuntimeClass:: Release](#release)                         | Esegue un'operazione di rilascio COM sull' `RuntimeClass` oggetto corrente.                             |

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

Questo è un dettaglio di implementazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="runtimeclassruntimeclass"></a><a name="tilde-runtimeclass"></a> RuntimeClass:: ~ RuntimeClass

Consente di deinizializzare l'istanza corrente della `RuntimeClass` classe.

```cpp
virtual ~RuntimeClass();
```

## <a name="runtimeclassaddref"></a><a name="addref"></a> RuntimeClass:: AddRef

Incrementa il conteggio dei riferimenti per l' `RuntimeClass` oggetto corrente.

```cpp
STDMETHOD_(
   ULONG,
   AddRef
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="runtimeclassdecrementreference"></a><a name="decrementreference"></a> RuntimeClass::D ecrementReference

Decrementa il conteggio dei riferimenti per l' `RuntimeClass` oggetto corrente.

```cpp
ULONG DecrementReference();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="runtimeclassgetiids"></a><a name="getiids"></a> RuntimeClass:: GetIids

Ottiene una matrice che può contenere gli ID di interfaccia implementati dall' `RuntimeClass` oggetto corrente.

```cpp
STDMETHOD(
   GetIids
)
   (_Out_ ULONG *iidCount,
   _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids);
```

### <a name="parameters"></a>Parametri

*iidCount*<br/>
Al termine di questa operazione, il numero totale di elementi nella matrice *IID*.

*IID*<br/>
Al termine di questa operazione, puntatore a una matrice di ID di interfaccia.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, E_OUTOFMEMORY.

## <a name="runtimeclassgetruntimeclassname"></a><a name="getruntimeclassname"></a> RuntimeClass:: GetRuntimeClassName

Ottiene il nome della classe di runtime dell' `RuntimeClass` oggetto corrente.

```cpp
STDMETHOD( GetRuntimeClassName )(
    _Out_ HSTRING* runtimeName
);
```

### <a name="parameters"></a>Parametri

*runtimename*<br/>
Al termine di questa operazione, il nome della classe di Runtime.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Commenti

Se `__WRL_STRICT__` o `__WRL_FORCE_INSPECTABLE_CLASS_MACRO__` non è definito, viene generato un errore di asserzione.

## <a name="runtimeclassgettrustlevel"></a><a name="gettrustlevel"></a> RuntimeClass:: GetTrustLevel

Ottiene il livello di attendibilità dell' `RuntimeClass` oggetto corrente.

```cpp
STDMETHOD(GetTrustLevel)(
    _Out_ TrustLevel* trustLvl
);
```

### <a name="parameters"></a>Parametri

*trustLvl*<br/>
Al termine di questa operazione, il livello di attendibilità dell' `RuntimeClass` oggetto corrente.

### <a name="return-value"></a>Valore restituito

Sempre S_OK.

### <a name="remarks"></a>Commenti

Se `__WRL_STRICT__` o `__WRL_FORCE_INSPECTABLE_CLASS_MACRO__` non è definito, viene generato un errore di asserzione.

## <a name="runtimeclassgetweakreference"></a><a name="getweakreference"></a> RuntimeClass:: GetWeakReference

Ottiene un puntatore all'oggetto di riferimento debole per l' `RuntimeClass` oggetto corrente.

```cpp
STDMETHOD(
   GetWeakReference
)(_Deref_out_ IWeakReference **weakReference);
```

### <a name="parameters"></a>Parametri

*weakReference*<br/>
Quando questa operazione viene completata, un puntatore a un oggetto di riferimento debole.

### <a name="return-value"></a>Valore restituito

Sempre S_OK.

## <a name="runtimeclassinternaladdref"></a><a name="internaladdref"></a> RuntimeClass:: InternalAddRef

Incrementa il conteggio dei riferimenti nell'oggetto corrente `RuntimeClass` .

```cpp
ULONG InternalAddRef();
```

### <a name="return-value"></a>Valore restituito

Conteggio dei riferimenti risultante.

## <a name="runtimeclassqueryinterface"></a><a name="queryinterface"></a> RuntimeClass:: QueryInterface

Recupera un puntatore all'ID di interfaccia specificato.

```cpp
STDMETHOD(
   QueryInterface
)
   (REFIID riid,
   _Deref_out_ void **ppvObject);
```

### <a name="parameters"></a>Parametri

*riid*<br/>
ID di interfaccia.

*ppvObject*<br/>
Al termine di questa operazione, puntatore all'interfaccia specificata dal parametro *riid* .

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="runtimeclassrelease"></a><a name="release"></a> RuntimeClass:: Release

Esegue un'operazione di rilascio COM sull' `RuntimeClass` oggetto corrente.

```cpp
STDMETHOD_(
   ULONG,
   Release
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Commenti

Se il conteggio dei riferimenti diventa zero, l' `RuntimeClass` oggetto viene eliminato.

## <a name="runtimeclassruntimeclass"></a><a name="runtimeclass"></a> RuntimeClass:: RuntimeClass

Inizializza l'istanza corrente della `RuntimeClass` classe.

```cpp
RuntimeClass();
```
