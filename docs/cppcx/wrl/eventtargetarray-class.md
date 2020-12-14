---
description: 'Altre informazioni su: Classe EventTargetArray'
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
ms.openlocfilehash: ac3199d2374a47e94705f8f51672bfedd0b7bf20
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97198583"
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

I gestori eventi associati a un oggetto [EventSource](eventsource-class.md) vengono archiviati in un `EventTargetArray` membro dati protetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                           | Description
-------------------------------------------------------------- | -----------------------------------------------------------
[EventTargetArray:: EventTargetArray](#eventtargetarray)        | Inizializza una nuova istanza della classe `EventTargetArray`.
[EventTargetArray:: ~ EventTargetArray](#tilde-eventtargetarray) | Deinizializza la `EventTargetArray` classe corrente.

### <a name="public-methods"></a>Metodi pubblici

Nome                                  | Description
------------------------------------- | ---------------------------------------------------------------------------------------
[EventTargetArray:: AddTail](#addtail) | Aggiunge il gestore eventi specificato alla fine della matrice interna di gestori eventi.
[EventTargetArray:: Begin](#begin)     | Ottiene l'indirizzo del primo elemento nella matrice interna di gestori eventi.
[EventTargetArray:: end](#end)         | Ottiene l'indirizzo dell'ultimo elemento nella matrice interna di gestori eventi.
[EventTargetArray:: length](#length)   | Ottiene il numero corrente di elementi nella matrice interna di gestori eventi.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`EventTargetArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="eventtargetarrayeventtargetarray"></a><a name="tilde-eventtargetarray"></a> EventTargetArray:: ~ EventTargetArray

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
~EventTargetArray();
```

### <a name="remarks"></a>Commenti

Deinizializza la `EventTargetArray` classe corrente.

## <a name="eventtargetarrayaddtail"></a><a name="addtail"></a> EventTargetArray:: AddTail

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
void AddTail(
   _In_ IUnknown* element
);
```

### <a name="parameters"></a>Parametri

*elemento*<br/>
Puntatore al gestore eventi da accodare.

### <a name="remarks"></a>Commenti

Aggiunge il gestore eventi specificato alla fine della matrice interna di gestori eventi.

`AddTail()` è progettato per essere usato internamente solo dalla `EventSource` classe.

## <a name="eventtargetarraybegin"></a><a name="begin"></a> EventTargetArray:: Begin

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
ComPtr<IUnknown>* Begin();
```

### <a name="return-value"></a>Valore restituito

Indirizzo del primo elemento nella matrice interna di gestori eventi.

### <a name="remarks"></a>Commenti

Ottiene l'indirizzo del primo elemento nella matrice interna di gestori eventi.

## <a name="eventtargetarrayend"></a><a name="end"></a> EventTargetArray:: end

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
ComPtr<IUnknown>* End();
```

### <a name="return-value"></a>Valore restituito

Indirizzo dell'ultimo elemento nella matrice interna di gestori eventi.

### <a name="remarks"></a>Commenti

Ottiene l'indirizzo dell'ultimo elemento nella matrice interna di gestori eventi.

## <a name="eventtargetarrayeventtargetarray"></a><a name="eventtargetarray"></a> EventTargetArray:: EventTargetArray

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
EventTargetArray(
   _Out_ HRESULT* hr,
   size_t items
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Al termine di questa operazione del costruttore, il parametro *HR* indica se l'allocazione della matrice ha avuto esito positivo o negativo. L'elenco seguente mostra i valori possibili per *HR*.

- S_OK<br/>
  Operazione completata.

- E_OUTOFMEMORY<br/>
  Non è stato possibile allocare memoria per la matrice.

- S_FALSE<br/>
  *Gli elementi* del parametro sono minori o uguali a zero.

*items*<br/>
Numero di elementi di matrice da allocare.

### <a name="remarks"></a>Commenti

Inizializza una nuova istanza della classe `EventTargetArray`.

`EventTargetArray` viene usato per contenere una matrice di gestori eventi in un `EventSource` oggetto.

## <a name="eventtargetarraylength"></a><a name="length"></a> EventTargetArray:: length

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
size_t Length();
```

### <a name="return-value"></a>Valore restituito

Numero corrente di elementi nella matrice interna di gestori eventi.

### <a name="remarks"></a>Commenti

Ottiene il numero corrente di elementi nella matrice interna di gestori eventi.
