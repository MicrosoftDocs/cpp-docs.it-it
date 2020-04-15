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
ms.openlocfilehash: a80c0ec14da2a955a95ac84dd3975212ef20ae04
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374210"
---
# <a name="weakreference-class"></a>Classe WeakReference

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
class WeakReference;
```

## <a name="remarks"></a>Osservazioni

Rappresenta un *riferimento debole* che può essere utilizzato con Windows Runtime o COM classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.

Un `WeakReference` oggetto mantiene un *riferimento forte*, ovvero un puntatore a un oggetto, e un conteggio dei riferimenti *forte,* ovvero il numero di copie del riferimento sicuro distribuite dal `Resolve()` metodo . Mentre il conteggio dei riferimenti sicuri è diverso da zero, il riferimento forte è valido e l'oggetto è accessibile. Quando il conteggio dei riferimenti sicuri diventa zero, il riferimento forte non è valido e l'oggetto non è accessibile.

Un `WeakReference` oggetto viene in genere utilizzato per rappresentare un oggetto la cui esistenza è controllata da un thread esterno o da un'applicazione. Ad esempio, `WeakReference` costruire un oggetto da un riferimento a un oggetto file. Finché il file rimane aperto, il riferimento sicuro è valido. Ma se il file viene chiuso, il riferimento sicuro non è più valido.

I `WeakReference` metodi sono thread-safe.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                  | Descrizione
----------------------------------------------------- | ---------------------------------------------------------------------------
[DeboleRiferimento::WeakReference](#weakreference)        | Inizializza una nuova istanza della classe `WeakReference`.
[DeboleRiferimento::](#tilde-weakreference) | Deinizializza (elimina) l'istanza corrente `WeakReference` della classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                                 | Descrizione
-------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------
[WeakReference::DecrementStrongReference](#decrementstrongreference) | Decrementa il conteggio dei `WeakReference` riferimenti sicuri dell'oggetto corrente.
[DeboleRiferimento::IncrementStrongReference](#incrementstrongreference) | Incrementa il conteggio dei `WeakReference` riferimenti forti dell'oggetto corrente.
[WeakReference::Resolve](#resolve)                                   | Imposta il puntatore specificato sul valore di riferimento forte corrente se il conteggio dei riferimenti sicuri è diverso da zero.
[DeboleRiferimento::SetUnknown](#setunknown)                             | Imposta il riferimento sicuro `WeakReference` dell'oggetto corrente sul puntatore a interfaccia specificato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`WeakReference`

## <a name="requirements"></a>Requisiti

**Intestazione:** implements.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="weakreferenceweakreference"></a><a name="tilde-weakreference"></a>DeboleRiferimento::

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
virtual ~WeakReference();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

Deinizializza l'istanza corrente `WeakReference` della classe.

## <a name="weakreferencedecrementstrongreference"></a><a name="decrementstrongreference"></a>WeakReference::DecrementStrongReference

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
ULONG DecrementStrongReference();
```

### <a name="remarks"></a>Osservazioni

Decrementa il conteggio dei `WeakReference` riferimenti sicuri dell'oggetto corrente.

Quando il conteggio dei riferimenti sicuri diventa `nullptr`zero, il riferimento forte viene impostato su .

### <a name="return-value"></a>Valore restituito

Conteggio dei riferimenti forti decrementato.

## <a name="weakreferenceincrementstrongreference"></a><a name="incrementstrongreference"></a>DeboleRiferimento::IncrementStrongReference

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
ULONG IncrementStrongReference();
```

### <a name="return-value"></a>Valore restituito

Conteggio dei riferimenti sicuri incrementato.

### <a name="remarks"></a>Osservazioni

Incrementa il conteggio dei `WeakReference` riferimenti forti dell'oggetto corrente.

## <a name="weakreferenceresolve"></a><a name="resolve"></a>WeakReference::Resolve

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
STDMETHOD(Resolve)
   (REFIID riid,
   _Deref_out_opt_ IInspectable **ppvObject
);
```

### <a name="parameters"></a>Parametri

*Riid*<br/>
ID di interfaccia.

*Oggetto ppv*<br/>
Quando questa operazione viene completata, una copia del riferimento sicuro corrente se il conteggio dei riferimenti sicuri è diverso da zero.

### <a name="return-value"></a>Valore restituito

- S_OK se l'operazione ha esito positivo e il conteggio dei riferimenti sicuri è zero. Il parametro *ppvObject* è impostato su `nullptr`.

- S_OK se l'operazione ha esito positivo e il conteggio dei riferimenti sicuri è diverso da zero. Il parametro *ppvObject* è impostato sul riferimento sicuro.

- In caso contrario, un HRESULT che indica il motivo per cui l'operazione non è riuscita.

### <a name="remarks"></a>Osservazioni

Imposta il puntatore specificato sul valore di riferimento forte corrente se il conteggio dei riferimenti sicuri è diverso da zero.

## <a name="weakreferencesetunknown"></a><a name="setunknown"></a>DeboleRiferimento::SetUnknown

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
void SetUnknown(
   _In_ IUnknown* unk
);
```

### <a name="parameters"></a>Parametri

*unk*<br/>
Puntatore all'interfaccia `IUnknown` di un oggetto.

### <a name="remarks"></a>Osservazioni

Imposta il riferimento sicuro `WeakReference` dell'oggetto corrente sul puntatore a interfaccia specificato.

## <a name="weakreferenceweakreference"></a><a name="weakreference"></a>DeboleRiferimento::WeakReference

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
WeakReference();
```

### <a name="remarks"></a>Osservazioni

Inizializza una nuova istanza della classe `WeakReference`.

Il puntatore di `WeakReference` riferimento sicuro `nullptr`per l'oggetto viene inizializzato su e il conteggio dei riferimenti sicuri viene inizializzato su 1.
