---
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
ms.openlocfilehash: 64b4124ba3c60fdcb53fc29c7b791c0f73a49579
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376225"
---
# <a name="runtimeclass-class"></a>Classe RuntimeClass

Rappresenta una classe WinRT o COM che eredita le interfacce specificate e fornisce il supporto di Windows Runtime, COM classico e riferimento debole specificati.

Questa classe fornisce l'implementazione boilerplate delle classi `QueryInterface`WinRT e COM, fornendo l'implementazione di , `AddRef`, e `Release` così via, gestisce il conteggio dei riferimenti del modulo e dispone del supporto per fornire la class factory per gli oggetti attivabili.

## <a name="syntax"></a>Sintassi

```cpp
template <typename ...TInterfaces> class RuntimeClass
template <unsigned int classFlags, typename ...TInterfaces> class RuntimeClass;
```

### <a name="parameters"></a>Parametri

*classFlags (Flag di classe)*<br/>
Parametro facoltativo. Combinazione di uno o più valori di enumerazione [RuntimeClassType.](runtimeclasstype-enumeration.md) La `__WRL_CONFIGURATION_LEGACY__` macro può essere definita per modificare il valore predefinito di classFlags per tutte le classi di runtime nel progetto. Se definite, le istanze RuntimeClass non sono agile per impostazione predefinita. Quando non sono definite, le istanze RuntimeClass sono agili per impostazione predefinita. Per evitare ambiguità, `TInterfaces` `RuntimeClassType::InhibitFtmBase`specificare sempre l'opzione `Microsoft::WRL::FtmBase` in o . Si noti che se InhibitFtmBase e FtmBase sono entrambi utilizzati l'oggetto sarà agile.

*Interfacce utente*<br/>
L'elenco di interfacce `IUnknown`che `IInspectable` l'oggetto implementa oltre , o altre interfacce controllate da [RuntimeClassType](runtimeclasstype-enumeration.md). Può inoltre elencare altre classi da `Microsoft::WRL::FtmBase` cui derivare, in particolare `IMarshal`per rendere l'oggetto Agile e causarne l'implementazione .

## <a name="members"></a>Membri

`RuntimeClassInitialize`<br/>
Funzione che inizializza l'oggetto `MakeAndInitialize` se la funzione modello viene utilizzata per costruire l'oggetto. Restituisce S_OK se l'oggetto è stato inizializzato correttamente o un codice di errore COM se l'inizializzazione non è riuscita. Il codice di errore COM viene propagato come valore restituito di `MakeAndInitialize`. Si noti che il `RuntimeClassInitialize` `Make` metodo non viene chiamato se la funzione di modello viene utilizzata per costruire l'oggetto.

### <a name="public-constructors"></a>Costruttori pubblici

| Nome                                               | Descrizione                                                     |
| -------------------------------------------------- | --------------------------------------------------------------- |
| [RuntimeClass::RuntimeClass](#runtimeclass)        | Inizializza l'istanza corrente `RuntimeClass` della classe.   |
| [RuntimeClass:: RuntimeClass](#tilde-runtimeclass) | Deinizializza l'istanza corrente `RuntimeClass` della classe. |

### <a name="public-methods"></a>Metodi pubblici

| Nome                                                      | Descrizione                                                                                        |
| --------------------------------------------------------- | -------------------------------------------------------------------------------------------------- |
| [RuntimeClass::AddRef](#addref)                           | Incrementa il conteggio dei `RuntimeClass` riferimenti per l'oggetto corrente.                              |
| [RuntimeClass::DecrementReference](#decrementreference)   | Decrementa il conteggio dei `RuntimeClass` riferimenti per l'oggetto corrente.                              |
| [RuntimeClass::GetIids](#getiids)                         | Ottiene una matrice che può contenere gli `RuntimeClass` ID di interfaccia implementati dall'oggetto corrente. |
| [RuntimeClass::GetRuntimeClassName](#getruntimeclassname) | Ottiene il nome della `RuntimeClass` classe di runtime dell'oggetto corrente.                                  |
| [RuntimeClass::GetTrustLevel](#gettrustlevel)             | Ottiene il livello di `RuntimeClass` attendibilità dell'oggetto corrente.                                         |
| [RuntimeClass::GetWeakReferenceRuntimeClass::GetWeakReference](#getweakreference)       | Ottiene un puntatore all'oggetto `RuntimeClass` riferimento debole per l'oggetto corrente.                 |
| [RuntimeClass::InternalAddRef](#internaladdref)           | Incrementa il conteggio dei `RuntimeClass` riferimenti all'oggetto corrente.                               |
| [RuntimeClass::QueryInterface](#queryinterface)           | Recupera un puntatore all'ID di interfaccia specificato.                                                 |
| [RuntimeClass::Release](#release)                         | Esegue un'operazione di `RuntimeClass` rilascio COM sull'oggetto corrente.                             |

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

Questo è un dettaglio di implementazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** implements.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="runtimeclassruntimeclass"></a><a name="tilde-runtimeclass"></a>RuntimeClass:: RuntimeClass

Deinizializza l'istanza corrente `RuntimeClass` della classe.

```cpp
virtual ~RuntimeClass();
```

## <a name="runtimeclassaddref"></a><a name="addref"></a>RuntimeClass::AddRef

Incrementa il conteggio dei `RuntimeClass` riferimenti per l'oggetto corrente.

```cpp
STDMETHOD_(
   ULONG,
   AddRef
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="runtimeclassdecrementreference"></a><a name="decrementreference"></a>RuntimeClass::DecrementReference

Decrementa il conteggio dei `RuntimeClass` riferimenti per l'oggetto corrente.

```cpp
ULONG DecrementReference();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="runtimeclassgetiids"></a><a name="getiids"></a>RuntimeClass::GetIids

Ottiene una matrice che può contenere gli `RuntimeClass` ID di interfaccia implementati dall'oggetto corrente.

```cpp
STDMETHOD(
   GetIids
)
   (_Out_ ULONG *iidCount,
   _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids);
```

### <a name="parameters"></a>Parametri

*iidCount*<br/>
Al termine dell'operazione, il numero totale di elementi nella matrice *iids*.

*iids*<br/>
Quando questa operazione viene completata, un puntatore a una matrice di ID di interfaccia.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, E_OUTOFMEMORY.

## <a name="runtimeclassgetruntimeclassname"></a><a name="getruntimeclassname"></a>RuntimeClass::GetRuntimeClassName

Ottiene il nome della `RuntimeClass` classe di runtime dell'oggetto corrente.

```cpp
STDMETHOD( GetRuntimeClassName )(
    _Out_ HSTRING* runtimeName
);
```

### <a name="parameters"></a>Parametri

*runtimeName*<br/>
Quando questa operazione viene completata, il nome della classe di runtime.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Osservazioni

Se `__WRL_STRICT__` o `__WRL_FORCE_INSPECTABLE_CLASS_MACRO__` non è definito, viene generato un errore di asserzione.

## <a name="runtimeclassgettrustlevel"></a><a name="gettrustlevel"></a>RuntimeClass::GetTrustLevel

Ottiene il livello di `RuntimeClass` attendibilità dell'oggetto corrente.

```cpp
STDMETHOD(GetTrustLevel)(
    _Out_ TrustLevel* trustLvl
);
```

### <a name="parameters"></a>Parametri

*trustLvl*<br/>
Al termine dell'operazione, livello di `RuntimeClass` attendibilità dell'oggetto corrente.

### <a name="return-value"></a>Valore restituito

È sempre S_OK.

### <a name="remarks"></a>Osservazioni

Se `__WRL_STRICT__` o `__WRL_FORCE_INSPECTABLE_CLASS_MACRO__` non è definito, viene generato un errore di asserzione.

## <a name="runtimeclassgetweakreference"></a><a name="getweakreference"></a>RuntimeClass::GetWeakReferenceRuntimeClass::GetWeakReference

Ottiene un puntatore all'oggetto `RuntimeClass` riferimento debole per l'oggetto corrente.

```cpp
STDMETHOD(
   GetWeakReference
)(_Deref_out_ IWeakReference **weakReference);
```

### <a name="parameters"></a>Parametri

*Weakreference*<br/>
Quando questa operazione viene completata, un puntatore a un oggetto di riferimento debole.

### <a name="return-value"></a>Valore restituito

È sempre S_OK.

## <a name="runtimeclassinternaladdref"></a><a name="internaladdref"></a>RuntimeClass::InternalAddRef

Incrementa il conteggio dei `RuntimeClass` riferimenti all'oggetto corrente.

```cpp
ULONG InternalAddRef();
```

### <a name="return-value"></a>Valore restituito

Conteggio dei riferimenti risultante.

## <a name="runtimeclassqueryinterface"></a><a name="queryinterface"></a>RuntimeClass::QueryInterface

Recupera un puntatore all'ID di interfaccia specificato.

```cpp
STDMETHOD(
   QueryInterface
)
   (REFIID riid,
   _Deref_out_ void **ppvObject);
```

### <a name="parameters"></a>Parametri

*Riid*<br/>
ID di interfaccia.

*Oggetto ppv*<br/>
Al termine di questa funzione, un puntatore all'interfaccia specificata dal parametro *riid.*

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="runtimeclassrelease"></a><a name="release"></a>RuntimeClass::Release

Esegue un'operazione di `RuntimeClass` rilascio COM sull'oggetto corrente.

```cpp
STDMETHOD_(
   ULONG,
   Release
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Osservazioni

Se il conteggio dei `RuntimeClass` riferimenti diventa zero, l'oggetto viene eliminato.

## <a name="runtimeclassruntimeclass"></a><a name="runtimeclass"></a>RuntimeClass::RuntimeClass

Inizializza l'istanza corrente `RuntimeClass` della classe.

```cpp
RuntimeClass();
```
