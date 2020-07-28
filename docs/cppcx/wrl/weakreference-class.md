---
title: Classe WeakReference
ms.date: 09/24/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::WeakReference
- implements/Microsoft::WRL::Details::WeakReference::DecrementStrongReference
- implements/Microsoft::WRL::Details::WeakReference::IncrementStrongReference
- implements/Microsoft::WRL::Details::WeakReference::Resolve
- implements/Microsoft::WRL::Details::WeakReference::SetUnknown
- implements/Microsoft::WRL::Details::WeakReference::~WeakReference
- implements/Microsoft::WRL::Details::WeakReference::WeakReference
helpviewer_keywords:
- Microsoft::WRL::Details::WeakReference class
- Microsoft::WRL::Details::WeakReference::DecrementStrongReference method
- Microsoft::WRL::Details::WeakReference::IncrementStrongReference method
- Microsoft::WRL::Details::WeakReference::Resolve method
- Microsoft::WRL::Details::WeakReference::SetUnknown method
- Microsoft::WRL::Details::WeakReference::~WeakReference, destructor
- Microsoft::WRL::Details::WeakReference::WeakReference, constructor
ms.assetid: 3f4c956b-dbbd-49b1-8cfa-9509a9956c97
ms.openlocfilehash: 9a367a61a029abe1be599b1e262e279402149ccd
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220457"
---
# <a name="weakreference-class"></a>Classe WeakReference

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
class WeakReference;
```

## <a name="remarks"></a>Osservazioni

Rappresenta un *riferimento debole* che può essere utilizzato con il Windows Runtime o com classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.

Un `WeakReference` oggetto mantiene un *riferimento sicuro*, ovvero un puntatore a un oggetto, e un *conteggio dei riferimenti sicuro*, ovvero il numero di copie del riferimento sicuro che sono state distribuite dal `Resolve()` metodo. Mentre il conteggio dei riferimenti sicuri è diverso da zero, il riferimento sicuro è valido e l'oggetto è accessibile. Quando il conteggio dei riferimenti sicuri diventa zero, il riferimento sicuro non è valido e l'oggetto è inaccessibile.

Un `WeakReference` oggetto viene in genere utilizzato per rappresentare un oggetto la cui esistenza è controllata da un'applicazione o da un thread esterno. Ad esempio, costruire un `WeakReference` oggetto da un riferimento a un oggetto file. Finché il file rimane aperto, il riferimento sicuro è valido. Ma se il file viene chiuso, il riferimento sicuro non è più valido.

I `WeakReference` metodi sono thread-safe.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                  | Descrizione
----------------------------------------------------- | ---------------------------------------------------------------------------
[WeakReference:: WeakReference](#weakreference)        | Inizializza una nuova istanza della classe `WeakReference`.
[WeakReference:: ~ WeakReference](#tilde-weakreference) | Consente di deinizializzare (Elimina) l'istanza corrente della `WeakReference` classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                                 | Descrizione
-------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------
[WeakReference::D ecrementStrongReference](#decrementstrongreference) | Decrementa il conteggio dei riferimenti sicuri dell' `WeakReference` oggetto corrente.
[WeakReference:: IncrementStrongReference](#incrementstrongreference) | Incrementa il conteggio dei riferimenti sicuri dell'oggetto corrente `WeakReference` .
[WeakReference:: Resolve](#resolve)                                   | Imposta il puntatore specificato sul valore di riferimento sicuro corrente se il conteggio dei riferimenti sicuri è diverso da zero.
[WeakReference:: Unknown](#setunknown)                             | Imposta il riferimento sicuro dell'oggetto corrente sul `WeakReference` puntatore a interfaccia specificato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`WeakReference`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="weakreferenceweakreference"></a><a name="tilde-weakreference"></a>WeakReference:: ~ WeakReference

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
virtual ~WeakReference();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

Consente di deinizializzare l'istanza corrente della `WeakReference` classe.

## <a name="weakreferencedecrementstrongreference"></a><a name="decrementstrongreference"></a>WeakReference::D ecrementStrongReference

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
ULONG DecrementStrongReference();
```

### <a name="remarks"></a>Osservazioni

Decrementa il conteggio dei riferimenti sicuri dell' `WeakReference` oggetto corrente.

Quando il conteggio dei riferimenti sicuri diventa zero, il riferimento sicuro è impostato su **`nullptr`** .

### <a name="return-value"></a>Valore restituito

Conteggio dei riferimenti forti decrementato.

## <a name="weakreferenceincrementstrongreference"></a><a name="incrementstrongreference"></a>WeakReference:: IncrementStrongReference

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
ULONG IncrementStrongReference();
```

### <a name="return-value"></a>Valore restituito

Conteggio dei riferimenti sicuri incrementato.

### <a name="remarks"></a>Osservazioni

Incrementa il conteggio dei riferimenti sicuri dell'oggetto corrente `WeakReference` .

## <a name="weakreferenceresolve"></a><a name="resolve"></a>WeakReference:: Resolve

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
STDMETHOD(Resolve)
   (REFIID riid,
   _Deref_out_opt_ IInspectable **ppvObject
);
```

### <a name="parameters"></a>Parametri

*riid*<br/>
ID di interfaccia.

*ppvObject*<br/>
Al termine di questa operazione, una copia del riferimento sicuro corrente se il conteggio dei riferimenti sicuri è diverso da zero.

### <a name="return-value"></a>Valore restituito

- S_OK se l'operazione ha esito positivo e il conteggio dei riferimenti sicuri è zero. Il parametro *ppvObject* è impostato su **`nullptr`** .

- S_OK se l'operazione ha esito positivo e il conteggio dei riferimenti sicuri è diverso da zero. Il parametro *ppvObject* è impostato sul riferimento sicuro.

- In caso contrario, valore HRESULT che indica il motivo per cui l'operazione non è riuscita.

### <a name="remarks"></a>Osservazioni

Imposta il puntatore specificato sul valore di riferimento sicuro corrente se il conteggio dei riferimenti sicuri è diverso da zero.

## <a name="weakreferencesetunknown"></a><a name="setunknown"></a>WeakReference:: Unknown

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
void SetUnknown(
   _In_ IUnknown* unk
);
```

### <a name="parameters"></a>Parametri

*UNK*<br/>
Puntatore all' `IUnknown` interfaccia di un oggetto.

### <a name="remarks"></a>Osservazioni

Imposta il riferimento sicuro dell'oggetto corrente sul `WeakReference` puntatore a interfaccia specificato.

## <a name="weakreferenceweakreference"></a><a name="weakreference"></a>WeakReference:: WeakReference

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
WeakReference();
```

### <a name="remarks"></a>Osservazioni

Inizializza una nuova istanza della classe `WeakReference`.

Il puntatore di riferimento sicuro per l' `WeakReference` oggetto viene inizializzato su **`nullptr`** e il conteggio dei riferimenti sicuri viene inizializzato su 1.
