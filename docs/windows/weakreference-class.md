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
ms.openlocfilehash: a3372a176a158dd9c89eb888c8deb0244eef9a84
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50654935"
---
# <a name="weakreference-class"></a>Classe WeakReference

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
class WeakReference;
```

## <a name="remarks"></a>Note

Rappresenta un *riferimento debole* che può essere utilizzato con il Runtime di Windows o da COM classico. Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.

Oggetto `WeakReference` oggetto mantiene una *riferimento sicuro*, che è un puntatore a un oggetto e un *conteggio dei riferimenti forti*, che corrisponde al numero di copie del riferimento forte che sono stati distribuiti da il `Resolve()` (metodo). Anche se il conteggio dei riferimenti forti è diverso da zero, il riferimento sicuro è valido e l'oggetto è accessibile. Quando il conteggio dei riferimenti forti diventa zero, il riferimento sicuro non è valido e l'oggetto non è accessibile.

Oggetto `WeakReference` oggetto viene in genere usato per rappresentare un oggetto la cui esistenza è controllata da un'applicazione o un thread esterno. Ad esempio, costruire un `WeakReference` oggetto da un riferimento a un oggetto file. Finché il file rimane aperto, il riferimento sicuro è valido. Ma se il file viene chiuso, il riferimento sicuro non è più valido.

Il `WeakReference` metodi sono thread-safe.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                  | Descrizione
----------------------------------------------------- | ---------------------------------------------------------------------------
[WeakReference:: WeakReference](#weakreference)        | Inizializza una nuova istanza della classe `WeakReference`.
[WeakReference:: ~ WeakReference](#tilde-weakreference) | Deinizializza (Elimina) l'istanza corrente del `WeakReference` classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                                 | Descrizione
-------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------
[WeakReference:: Decrementstrongreference](#decrementstrongreference) | Decrementa il riferimento sicuro conteggio corrente `WeakReference` oggetto.
[WeakReference:: Incrementstrongreference](#incrementstrongreference) | Incrementa il conteggio dei riferimenti forti corrente `WeakReference` oggetto.
[WeakReference:: Resolve](#resolve)                                   | Imposta il puntatore specificato per il valore di riferimento forte corrente se il conteggio dei riferimenti forti è diverso da zero.
[WeakReference:: Setunknown](#setunknown)                             | Imposta il riferimento sicuro corrente `WeakReference` oggetto al puntatore a interfaccia specificato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`WeakReference`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="tilde-weakreference"></a>WeakReference:: ~ WeakReference

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
virtual ~WeakReference();
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

Deinizializza l'istanza corrente del `WeakReference` classe.

## <a name="decrementstrongreference"></a>WeakReference:: Decrementstrongreference

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
ULONG DecrementStrongReference();
```

### <a name="remarks"></a>Note

Decrementa il riferimento sicuro conteggio corrente `WeakReference` oggetto.

Quando il conteggio dei riferimenti forti diventa zero, il riferimento sicuro è impostato su `nullptr`.

### <a name="return-value"></a>Valore restituito

Il conteggio dei riferimenti forti decrementato.

## <a name="incrementstrongreference"></a>WeakReference:: Incrementstrongreference

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
ULONG IncrementStrongReference();
```

### <a name="return-value"></a>Valore restituito

Il conteggio dei riferimenti forti incrementato.

### <a name="remarks"></a>Note

Incrementa il conteggio dei riferimenti forti corrente `WeakReference` oggetto.

## <a name="resolve"></a>WeakReference:: Resolve

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

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
Quando questa operazione viene completata, una copia del riferimento forte corrente se il conteggio dei riferimenti forti è diverso da zero.

### <a name="return-value"></a>Valore restituito

- S_OK se l'operazione ha esito positivo e il conteggio dei riferimenti forti è uguale a zero. Il *ppvObject* parametro è impostato su `nullptr`.

- S_OK se l'operazione ha esito positivo e il conteggio dei riferimenti forti è diverso da zero. Il *ppvObject* parametro è impostato per il riferimento sicuro.

- In caso contrario, HRESULT che indica il motivo per questa operazione non riuscita.

### <a name="remarks"></a>Note

Imposta il puntatore specificato per il valore di riferimento forte corrente se il conteggio dei riferimenti forti è diverso da zero.

## <a name="setunknown"></a>WeakReference:: Setunknown

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
void SetUnknown(
   _In_ IUnknown* unk
);
```

### <a name="parameters"></a>Parametri

*UNK*<br/>
Un puntatore al `IUnknown` interfaccia di un oggetto.

### <a name="remarks"></a>Note

Imposta il riferimento sicuro corrente `WeakReference` oggetto al puntatore a interfaccia specificato.

## <a name="weakreference"></a>WeakReference:: WeakReference

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
WeakReference();
```

### <a name="remarks"></a>Note

Inizializza una nuova istanza della classe `WeakReference`.

Il puntatore di riferimento sicuro per il `WeakReference` viene inizializzato in `nullptr`, il conteggio dei riferimenti forti viene inizializzato su 1.
