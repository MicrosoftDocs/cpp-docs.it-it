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
ms.openlocfilehash: 3b738cc8f439e6653162ab99b0a26e87aa8fee36
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372672"
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
L'interfaccia zero.

*I1*<br/>
La prima interfaccia.

*I2*<br/>
Seconda interfaccia.

## <a name="remarks"></a>Osservazioni

Utilizzare `ClassFactory` per fornire un'implementazione della factory definita dall'utente.

Il modello di programmazione seguente viene illustrato come utilizzare il [Implements](implements-structure.md) struttura per specificare più di tre interfacce in una class factory.

`struct MyFactory : ClassFactory<Implements<I1, I2, I3>, I4, I5>`

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                        | Descrizione
------------------------------------------- | -----------
[ClassFactory::ClassFactory](#classfactory) |

### <a name="public-methods"></a>Metodi pubblici

Nome                                            | Descrizione
----------------------------------------------- | ----------------------------------------------------------------------------------------------------------------
[ClassFactory::AddRef](#addref)                 | Incrementa il conteggio dei `ClassFactory` riferimenti per l'oggetto corrente.
[ClassFactory::LockServer](#lockserver)         | Incrementa o decrementa il numero di oggetti sottostanti rilevati dall'oggetto corrente. `ClassFactory`
[ClassFactory::QueryInterface](#queryinterface) | Recupera un puntatore all'interfaccia specificata dal parametro.
[ClassFactory::Release](#release)               | Decrementa il conteggio dei `ClassFactory` riferimenti per l'oggetto corrente.

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

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="classfactoryaddref"></a><a name="addref"></a>ClassFactory::AddRef

Incrementa il conteggio dei `ClassFactory` riferimenti per l'oggetto corrente.

```cpp
STDMETHOD_(
   ULONG,
   AddRef
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.

## <a name="classfactoryclassfactory"></a><a name="classfactory"></a>ClassFactory::ClassFactory

```cpp
WRL_NOTHROW ClassFactory();
```

## <a name="classfactorylockserver"></a><a name="lockserver"></a>ClassFactory::LockServer

Incrementa o decrementa il numero di oggetti sottostanti rilevati dall'oggetto corrente. `ClassFactory`

```cpp
STDMETHOD(
   LockServer
)(BOOL fLock);
```

### <a name="parameters"></a>Parametri

*Gregge*<br/>
**true** per incrementare il numero di oggetti tracciati. **false** per diminuire il numero di oggetti tracciati.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, E_FAIL.

### <a name="remarks"></a>Osservazioni

`ClassFactory`tiene traccia degli oggetti in un'istanza sottostante della classe [Module.](module-class.md)

## <a name="classfactoryqueryinterface"></a><a name="queryinterface"></a>ClassFactory::QueryInterface

Recupera un puntatore all'interfaccia specificata dal parametro.

```cpp
STDMETHOD(
   QueryInterface
)(REFIID riid, _Deref_out_ void **ppvObject);
```

### <a name="parameters"></a>Parametri

*Riid*<br/>
ID di interfaccia.

*Oggetto ppv*<br/>
Al termine dell'operazione, un puntatore all'interfaccia specificata dal parametro *riid*.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.

## <a name="classfactoryrelease"></a><a name="release"></a>ClassFactory::Release

Decrementa il conteggio dei `ClassFactory` riferimenti per l'oggetto corrente.

```cpp
STDMETHOD_(
   ULONG,
   Release
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.
