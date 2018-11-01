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
ms.openlocfilehash: e4973a8bc3d7a3f5fb6a9dcb76f79d55a05456f9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50648022"
---
# <a name="eventtargetarray-class"></a>Classe EventTargetArray

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
class EventTargetArray :
    public Microsoft::WRL::RuntimeClass<
        Microsoft::WRL::RuntimeClassFlags<ClassicCom>,
        IUnknown
    >;
```

## <a name="remarks"></a>Note

Rappresenta una matrice di gestori di eventi.

I gestori di eventi che sono associati un [EventSource](../windows/eventsource-class.md) oggetto vengono archiviati in un protetto `EventTargetArray` (membro dati).

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                           | Descrizione
-------------------------------------------------------------- | -----------------------------------------------------------
[Eventtargetarray:: Eventtargetarray](#eventtargetarray)        | Inizializza una nuova istanza della classe `EventTargetArray`.
[EventTargetArray:: ~ EventTargetArray](#tilde-eventtargetarray) | Deinizializza corrente `EventTargetArray` classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                  | Descrizione
------------------------------------- | ---------------------------------------------------------------------------------------
[Eventtargetarray:: AddTail](#addtail) | Aggiunge il gestore eventi specificato alla fine della matrice interna di gestori eventi.
[Eventtargetarray:: begin](#begin)     | Ottiene l'indirizzo del primo elemento della matrice interna di gestori eventi.
[Eventtargetarray:: end](#end)         | Ottiene l'indirizzo dell'ultimo elemento nella matrice interna di gestori di eventi.
[Eventtargetarray:: Length](#length)   | Ottiene il numero corrente di elementi nella matrice interna di gestori di eventi.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`EventTargetArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Namespace:** Microsoft::WRL::Details

## <a name="tilde-eventtargetarray"></a>EventTargetArray:: ~ EventTargetArray

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
~EventTargetArray();
```

### <a name="remarks"></a>Note

Deinizializza corrente `EventTargetArray` classe.

## <a name="addtail"></a>Eventtargetarray:: AddTail

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
void AddTail(
   _In_ IUnknown* element
);
```

### <a name="parameters"></a>Parametri

*Elemento*<br/>
Puntatore al gestore dell'evento da accodare.

### <a name="remarks"></a>Note

Aggiunge il gestore eventi specificato alla fine della matrice interna di gestori eventi.

`AddTail()` dovrà essere utilizzato internamente da solo il `EventSource` classe.

## <a name="begin"></a>Eventtargetarray:: begin

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
ComPtr<IUnknown>* Begin();
```

### <a name="return-value"></a>Valore restituito

L'indirizzo del primo elemento della matrice interna di gestori eventi.

### <a name="remarks"></a>Note

Ottiene l'indirizzo del primo elemento della matrice interna di gestori eventi.

## <a name="end"></a>Eventtargetarray:: end

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
ComPtr<IUnknown>* End();
```

### <a name="return-value"></a>Valore restituito

L'indirizzo dell'ultimo elemento nella matrice interna di gestori di eventi.

### <a name="remarks"></a>Note

Ottiene l'indirizzo dell'ultimo elemento nella matrice interna di gestori di eventi.

## <a name="eventtargetarray"></a>Eventtargetarray:: Eventtargetarray

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
EventTargetArray(
   _Out_ HRESULT* hr,
   size_t items
);
```

### <a name="parameters"></a>Parametri

*risorse umane*<br/>
Dopo le operazioni di questo costruttore, parametro *hr* indica se l'allocazione della matrice ha avuto esito positivo o negativo. L'elenco seguente mostra i valori possibili per *hr*.

+   S_OK<br/>
    Operazione completata.

+   E_OUTOFMEMORY<br/>
    Non è stato possibile allocare memoria per la matrice.

+   S_FALSE<br/>
    Parametro *elementi* è minore o uguale a zero.

*elementi*<br/>
Il numero di elementi della matrice da allocare.

### <a name="remarks"></a>Note

Inizializza una nuova istanza della classe `EventTargetArray`.

`EventTargetArray` viene usato per mantenere una matrice dei gestori eventi in un `EventSource` oggetto.

## <a name="length"></a>Eventtargetarray:: Length

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
size_t Length();
```

### <a name="return-value"></a>Valore restituito

Il numero corrente di elementi nella matrice interna di gestori di eventi.

### <a name="remarks"></a>Note

Ottiene il numero corrente di elementi nella matrice interna di gestori di eventi.
