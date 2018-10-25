---
title: Classe RuntimeClass | Microsoft Docs
ms.custom: ''
ms.date: 09/11/2018
ms.technology:
- cpp-windows
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: db9476e225b19f76fb695063c9c5058e8d9b2871
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50080026"
---
# <a name="runtimeclass-class"></a>Classe RuntimeClass

Rappresenta una classe COM o WinRT che eredita le interfacce specificate e fornisce il Runtime di Windows specificato, COM classico e supporto dei riferimenti deboli.

Questa classe fornisce l'implementazione di boilerplate di classi WinRT e COM, che fornisce l'implementazione di `QueryInterface`, `AddRef`, `Release` e così via, gestisce il conteggio dei riferimenti del modulo e include il supporto per fornire la class factory per oggetti attivabili.

## <a name="syntax"></a>Sintassi

```cpp
template <typename ...TInterfaces> class RuntimeClass
template <unsigned int classFlags, typename ...TInterfaces> class RuntimeClass;
```

### <a name="parameters"></a>Parametri

*classFlags*<br/>
Parametro facoltativo. Una combinazione di uno o più [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) valori di enumerazione. Il `__WRL_CONFIGURATION_LEGACY__` macro può essere definita per modificare il valore predefinito di classFlags per tutte le classi di runtime nel progetto. Se definito, RuntimeClass istanze non sono agile per impostazione predefinita. Quando non è definito, le istanze RuntimeClass sono agile per impostazione predefinita. Per evitare ambiguità, specificare sempre il `Microsoft::WRL::FtmBase` nelle `TInterfaces` o `RuntimeClassType::InhibitFtmBase`. Si noti che, se InhibitFtmBase e FtmBase vengono che entrambe usate l'oggetto sarà agili.

*TInterfaces*<br/>
L'elenco delle interfacce dell'oggetto implementi oltre `IUnknown`, `IInspectable` o altre interfacce controllate da [RuntimeClassType](../windows/runtimeclasstype-enumeration.md). Anche possibile elencare ad altre classi di derivare da, in particolare `Microsoft::WRL::FtmBase` per rendere l'oggetto agile e ne implementa `IMarshal`.

## <a name="members"></a>Membri

`RuntimeClassInitialize`<br/>
Una funzione che inizializza l'oggetto se il `MakeAndInitialize` funzione del modello viene utilizzata per costruire l'oggetto. Restituisce S_OK se l'oggetto è stato inizializzato correttamente o un codice di errore COM se l'inizializzazione non riuscita. Il codice di errore COM viene propagato come valore restituito di `MakeAndInitialize`. Si noti che il `RuntimeClassInitialize` metodo non viene chiamato se il `Make` funzione del modello viene utilizzata per costruire l'oggetto.

### <a name="public-constructors"></a>Costruttori pubblici

| Nome                                               | Descrizione                                                     |
| -------------------------------------------------- | --------------------------------------------------------------- |
| [Runtimeclass:: Runtimeclass](#runtimeclass)        | Inizializza l'istanza corrente del `RuntimeClass` classe.   |
| [RuntimeClass:: ~ RuntimeClass](#tilde-runtimeclass) | Deinizializza l'istanza corrente del `RuntimeClass` classe. |

### <a name="public-methods"></a>Metodi pubblici

| Nome                                                      | Descrizione                                                                                        |
| --------------------------------------------------------- | -------------------------------------------------------------------------------------------------- |
| [Runtimeclass:: AddRef](#addref)                           | Incrementa il conteggio dei riferimenti per l'oggetto corrente `RuntimeClass` oggetto.                              |
| [Runtimeclass:: Decrementreference](#decrementreference)   | Decrementa il conteggio dei riferimenti per l'oggetto corrente `RuntimeClass` oggetto.                              |
| [Runtimeclass:: Getiids](#getiids)                         | Ottiene una matrice che può contenere l'interfaccia implementati dalla classe corrente ID `RuntimeClass` oggetto. |
| [Runtimeclass:: Getruntimeclassname](#getruntimeclassname) | Ottiene il nome di classe di runtime dell'oggetto corrente `RuntimeClass` oggetto.                                  |
| [Runtimeclass:: Gettrustlevel](#gettrustlevel)             | Ottiene il livello di attendibilità corrente `RuntimeClass` oggetto.                                         |
| [Runtimeclass:: Getweakreference](#getweakreference)       | Ottiene un puntatore all'oggetto di riferimento debole per l'oggetto corrente `RuntimeClass` oggetto.                 |
| [Runtimeclass:: Internaladdref](#internaladdref)           | Incrementa il conteggio dei riferimenti all'oggetto corrente `RuntimeClass` oggetto.                               |
| [Runtimeclass:: QueryInterface](#queryinterface)           | Recupera un puntatore all'ID di interfaccia specificato.                                                 |
| [Runtimeclass:: Release](#release)                         | Esegue un'operazione di rilascio COM sul corrente `RuntimeClass` oggetto.                             |

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

Questo è un dettaglio di implementazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="tilde-runtimeclass"></a>RuntimeClass:: ~ RuntimeClass

Deinizializza l'istanza corrente del `RuntimeClass` classe.

```cpp
virtual ~RuntimeClass();
```

## <a name="addref"></a>Runtimeclass:: AddRef

Incrementa il conteggio dei riferimenti per l'oggetto corrente `RuntimeClass` oggetto.

```cpp
STDMETHOD_(
   ULONG,
   AddRef
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="decrementreference"></a>Runtimeclass:: Decrementreference

Decrementa il conteggio dei riferimenti per l'oggetto corrente `RuntimeClass` oggetto.

```cpp
ULONG DecrementReference();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="getiids"></a>Runtimeclass:: Getiids

Ottiene una matrice che può contenere l'interfaccia implementati dalla classe corrente ID `RuntimeClass` oggetto.

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
Quando questa operazione viene completata, un puntatore a una matrice di ID di interfaccia.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_OUTOFMEMORY.

## <a name="getruntimeclassname"></a>Runtimeclass:: Getruntimeclassname

Ottiene il nome di classe di runtime dell'oggetto corrente `RuntimeClass` oggetto.

```cpp
STDMETHOD( GetRuntimeClassName )(
    _Out_ HSTRING* runtimeName
);
```

### <a name="parameters"></a>Parametri

*runtimeName*<br/>
Quando questa operazione viene completata, il nome di classe di runtime.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Note

Viene generato un errore di asserzione se `__WRL_STRICT__` o `__WRL_FORCE_INSPECTABLE_CLASS_MACRO__` non è definito.

## <a name="gettrustlevel"></a>Runtimeclass:: Gettrustlevel

Ottiene il livello di attendibilità corrente `RuntimeClass` oggetto.

```cpp
STDMETHOD(GetTrustLevel)(
    _Out_ TrustLevel* trustLvl
);
```

### <a name="parameters"></a>Parametri

*trustLvl*<br/>
Al termine di questa operazione, il livello di attendibilità corrente `RuntimeClass` oggetto.

### <a name="return-value"></a>Valore restituito

Sempre S_OK.

### <a name="remarks"></a>Note

Viene generato un errore di asserzione se `__WRL_STRICT__` o `__WRL_FORCE_INSPECTABLE_CLASS_MACRO__` non è definito.

## <a name="getweakreference"></a>Runtimeclass:: Getweakreference

Ottiene un puntatore all'oggetto di riferimento debole per l'oggetto corrente `RuntimeClass` oggetto.

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

## <a name="internaladdref"></a>Runtimeclass:: Internaladdref

Incrementa il conteggio dei riferimenti all'oggetto corrente `RuntimeClass` oggetto.

```cpp
ULONG InternalAddRef();
```

### <a name="return-value"></a>Valore restituito

Il conteggio dei riferimenti risultante.

## <a name="queryinterface"></a>Runtimeclass:: QueryInterface

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
Al termine di questa opereation, un puntatore all'interfaccia specificata dal *riid* parametro.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="release"></a>Runtimeclass:: Release

Esegue un'operazione di rilascio COM sul corrente `RuntimeClass` oggetto.

```cpp
STDMETHOD_(
   ULONG,
   Release
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Note

Se il conteggio dei riferimenti diventa zero, il `RuntimeClass` oggetto viene eliminato.

## <a name="runtimeclass"></a>Runtimeclass:: Runtimeclass

Inizializza l'istanza corrente del `RuntimeClass` classe.

```cpp
RuntimeClass();
```
