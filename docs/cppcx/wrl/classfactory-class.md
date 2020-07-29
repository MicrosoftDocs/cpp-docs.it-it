---
title: ClassFactory (classe)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ClassFactory
- module/Microsoft::WRL::ClassFactory::AddRef
- module/Microsoft::WRL::ClassFactory::ClassFactory
- module/Microsoft::WRL::ClassFactory::LockServer
- module/Microsoft::WRL::ClassFactory::QueryInterface
- module/Microsoft::WRL::ClassFactory::Release
helpviewer_keywords:
- Microsoft::WRL::ClassFactory class
- Microsoft::WRL::ClassFactory::AddRef method
- Microsoft::WRL::ClassFactory::ClassFactory, constructor
- Microsoft::WRL::ClassFactory::LockServer method
- Microsoft::WRL::ClassFactory::QueryInterface method
- Microsoft::WRL::ClassFactory::Release method
ms.assetid: f13e6bce-722b-4f18-b7cf-3ffa6345c1db
ms.openlocfilehash: bbf20e2269e6d62206e06e748174d7b88898cd68
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87198099"
---
# <a name="classfactory-class"></a>ClassFactory (classe)

Implementa le funzionalità di base di un'interfaccia `IClassFactory`.

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename I0 = Details::Nil,
    typename I1 = Details::Nil,
    typename I2 = Details::Nil
>
class ClassFactory :
    public Details::RuntimeClass<
        typename Details::InterfaceListHelper<
            IClassFactory,
            I0,
            I1,
            I2,
            Details::Nil
        >::TypeT,
        RuntimeClassFlags<ClassicCom | InhibitWeakReference>,
        false
    >;
```

### <a name="parameters"></a>Parametri

*I0*<br/>
Interfaccia zero.

*I1*<br/>
Prima interfaccia.

*I2*<br/>
Seconda interfaccia.

## <a name="remarks"></a>Osservazioni

Utilizzare `ClassFactory` per fornire un'implementazione della factory definita dall'utente.

Nel modello di programmazione seguente viene illustrato come utilizzare la struttura [Implements](implements-structure.md) per specificare più di tre interfacce in un class factory.

`struct MyFactory : ClassFactory<Implements<I1, I2, I3>, I4, I5>`

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                        | Descrizione
------------------------------------------- | -----------
[ClassFactory:: ClassFactory](#classfactory) |

### <a name="public-methods"></a>Metodi pubblici

Nome                                            | Descrizione
----------------------------------------------- | ----------------------------------------------------------------------------------------------------------------
[ClassFactory:: AddRef](#addref)                 | Incrementa il conteggio dei riferimenti per l' `ClassFactory` oggetto corrente.
[ClassFactory:: LockServer](#lockserver)         | Incrementa o decrementa il numero di oggetti sottostanti rilevati dall' `ClassFactory` oggetto corrente.
[ClassFactory:: QueryInterface](#queryinterface) | Recupera un puntatore all'interfaccia specificata dal parametro.
[ClassFactory:: Release](#release)               | Decrementa il conteggio dei riferimenti per l' `ClassFactory` oggetto corrente.

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

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="classfactoryaddref"></a><a name="addref"></a>ClassFactory:: AddRef

Incrementa il conteggio dei riferimenti per l' `ClassFactory` oggetto corrente.

```cpp
STDMETHOD_(
   ULONG,
   AddRef
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.

## <a name="classfactoryclassfactory"></a><a name="classfactory"></a>ClassFactory:: ClassFactory

```cpp
WRL_NOTHROW ClassFactory();
```

## <a name="classfactorylockserver"></a><a name="lockserver"></a>ClassFactory:: LockServer

Incrementa o decrementa il numero di oggetti sottostanti rilevati dall' `ClassFactory` oggetto corrente.

```cpp
STDMETHOD(
   LockServer
)(BOOL fLock);
```

### <a name="parameters"></a>Parametri

*Gregge*<br/>
**`true`** per incrementare il numero di oggetti rilevati. **`false`** per decrementare il numero di oggetti rilevati.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, E_FAIL.

### <a name="remarks"></a>Osservazioni

`ClassFactory`tiene traccia degli oggetti in un'istanza sottostante della classe del [modulo](module-class.md) .

## <a name="classfactoryqueryinterface"></a><a name="queryinterface"></a>ClassFactory:: QueryInterface

Recupera un puntatore all'interfaccia specificata dal parametro.

```cpp
STDMETHOD(
   QueryInterface
)(REFIID riid, _Deref_out_ void **ppvObject);
```

### <a name="parameters"></a>Parametri

*riid*<br/>
ID di interfaccia.

*ppvObject*<br/>
Al termine di questa operazione, puntatore all'interfaccia specificata dal parametro *riid*.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.

## <a name="classfactoryrelease"></a><a name="release"></a>ClassFactory:: Release

Decrementa il conteggio dei riferimenti per l' `ClassFactory` oggetto corrente.

```cpp
STDMETHOD_(
   ULONG,
   Release
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.
