---
title: Classe EventTargetArray
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::EventTargetArray
- event/Microsoft::WRL::Details::EventTargetArray::AddTail
- event/Microsoft::WRL::Details::EventTargetArray::Begin
- event/Microsoft::WRL::Details::EventTargetArray::End
- event/Microsoft::WRL::Details::EventTargetArray::EventTargetArray
- event/Microsoft::WRL::Details::EventTargetArray::Length
- event/Microsoft::WRL::Details::EventTargetArray::~EventTargetArray
helpviewer_keywords:
- Microsoft::WRL::Details::EventTargetArray class
- Microsoft::WRL::Details::EventTargetArray::AddTail method
- Microsoft::WRL::Details::EventTargetArray::Begin method
- Microsoft::WRL::Details::EventTargetArray::End method
- Microsoft::WRL::Details::EventTargetArray::EventTargetArray, constructor
- Microsoft::WRL::Details::EventTargetArray::Length method
- Microsoft::WRL::Details::EventTargetArray::~EventTargetArray, destructor
ms.assetid: e3cadb7c-2160-4cbb-a2f8-c28733d1e96d
ms.openlocfilehash: 9ea8800aa22a6b5cae0b3342cf337786fb53fc76
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371486"
---
# <a name="eventtargetarray-class"></a>Classe EventTargetArray

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
class EventTargetArray :
    public Microsoft::WRL::RuntimeClass<
        Microsoft::WRL::RuntimeClassFlags<ClassicCom>,
        IUnknown
    >;
```

## <a name="remarks"></a>Osservazioni

Rappresenta una matrice di gestori eventi.

I gestori eventi associati a un [oggetto EventSource](eventsource-class.md) vengono archiviati in un membro dati protetti. `EventTargetArray`

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                           | Descrizione
-------------------------------------------------------------- | -----------------------------------------------------------
[EventTargetArray::EventTargetArray](#eventtargetarray)        | Inizializza una nuova istanza della classe `EventTargetArray`.
[EventTargetArray:: EventTargetArray](#tilde-eventtargetarray) | Deinizializza la `EventTargetArray` classe corrente.

### <a name="public-methods"></a>Metodi pubblici

Nome                                  | Descrizione
------------------------------------- | ---------------------------------------------------------------------------------------
[EventTargetArray::AddTail](#addtail) | Aggiunge il gestore eventi specificato alla fine della matrice interna di gestori eventi.
[EventTargetArray::Begin](#begin)     | Ottiene l'indirizzo del primo elemento nella matrice interna di gestori eventi.
[EventTargetArray::Fine](#end)         | Ottiene l'indirizzo dell'ultimo elemento nella matrice interna di gestori eventi.
[EventTargetArray::Lunghezza](#length)   | Ottiene il numero corrente di elementi nella matrice interna di gestori eventi.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`EventTargetArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** event.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="eventtargetarrayeventtargetarray"></a><a name="tilde-eventtargetarray"></a>EventTargetArray:: EventTargetArray

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
~EventTargetArray();
```

### <a name="remarks"></a>Osservazioni

Deinizializza la `EventTargetArray` classe corrente.

## <a name="eventtargetarrayaddtail"></a><a name="addtail"></a>EventTargetArray::AddTail

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
void AddTail(
   _In_ IUnknown* element
);
```

### <a name="parameters"></a>Parametri

*Elemento*<br/>
Puntatore al gestore eventi da aggiungere.

### <a name="remarks"></a>Osservazioni

Aggiunge il gestore eventi specificato alla fine della matrice interna di gestori eventi.

`AddTail()`è destinato ad essere utilizzato `EventSource` internamente solo dalla classe.

## <a name="eventtargetarraybegin"></a><a name="begin"></a>EventTargetArray::Begin

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
ComPtr<IUnknown>* Begin();
```

### <a name="return-value"></a>Valore restituito

Indirizzo del primo elemento nella matrice interna dei gestori eventi.

### <a name="remarks"></a>Osservazioni

Ottiene l'indirizzo del primo elemento nella matrice interna di gestori eventi.

## <a name="eventtargetarrayend"></a><a name="end"></a>EventTargetArray::Fine

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
ComPtr<IUnknown>* End();
```

### <a name="return-value"></a>Valore restituito

Indirizzo dell'ultimo elemento nella matrice interna dei gestori eventi.

### <a name="remarks"></a>Osservazioni

Ottiene l'indirizzo dell'ultimo elemento nella matrice interna di gestori eventi.

## <a name="eventtargetarrayeventtargetarray"></a><a name="eventtargetarray"></a>EventTargetArray::EventTargetArray

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
EventTargetArray(
   _Out_ HRESULT* hr,
   size_t items
);
```

### <a name="parameters"></a>Parametri

*hr*<br/>
Dopo queste operazioni del costruttore, il parametro *hr* indica se l'allocazione della matrice ha avuto esito positivo o negativo. Nell'elenco seguente vengono illustrati i valori possibili per *hr*.

- S_OK<br/>
  Operazione completata.

- E_OUTOFMEMORY<br/>
  Impossibile allocare memoria per la matrice.

- S_FALSE<br/>
  Elementi *items* di parametro è minore o uguale a zero.

*Elementi*<br/>
Numero di elementi della matrice da allocare.

### <a name="remarks"></a>Osservazioni

Inizializza una nuova istanza della classe `EventTargetArray`.

`EventTargetArray`viene utilizzato per mantenere una matrice `EventSource` di gestori eventi in un oggetto.

## <a name="eventtargetarraylength"></a><a name="length"></a>EventTargetArray::Lunghezza

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
size_t Length();
```

### <a name="return-value"></a>Valore restituito

Numero corrente di elementi nella matrice interna di gestori eventi.

### <a name="remarks"></a>Osservazioni

Ottiene il numero corrente di elementi nella matrice interna di gestori eventi.
