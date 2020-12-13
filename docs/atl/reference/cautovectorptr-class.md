---
description: 'Altre informazioni su: classe CAutoVectorPtr'
title: Classe CAutoVectorPtr
ms.date: 11/04/2016
f1_keywords:
- CAutoVectorPtr
- ATLBASE/ATL::CAutoVectorPtr
- ATLBASE/ATL::CAutoVectorPtr::CAutoVectorPtr
- ATLBASE/ATL::CAutoVectorPtr::Allocate
- ATLBASE/ATL::CAutoVectorPtr::Attach
- ATLBASE/ATL::CAutoVectorPtr::Detach
- ATLBASE/ATL::CAutoVectorPtr::Free
- ATLBASE/ATL::CAutoVectorPtr::m_p
helpviewer_keywords:
- CAutoVectorPtr class
ms.assetid: 0030362b-6bc4-4a47-9b5b-3c3899dceab4
ms.openlocfilehash: 60e61abb5519043e89266f3f9d9a2f4d9aec138a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152490"
---
# <a name="cautovectorptr-class"></a>Classe CAutoVectorPtr

Questa classe rappresenta un oggetto puntatore intelligente usando gli operatori new e Delete vettoriali.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<typename T>
class CAutoVectorPtr
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di puntatore.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAutoVectorPtr:: CAutoVectorPtr](#cautovectorptr)|Costruttore.|
|[CAutoVectorPtr:: ~ CAutoVectorPtr](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAutoVectorPtr:: allocate](#allocate)|Chiamare questo metodo per allocare la memoria richiesta dalla matrice di oggetti a cui punta `CAutoVectorPtr` .|
|[CAutoVectorPtr:: Connetti](#attach)|Chiamare questo metodo per assumere la proprietà di un puntatore esistente.|
|[CAutoVectorPtr::D etach](#detach)|Chiamare questo metodo per rilasciare la proprietà di un puntatore.|
|[CAutoVectorPtr:: Free](#free)|Chiamare questo metodo per eliminare un oggetto a cui fa riferimento un oggetto `CAutoVectorPtr` .|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CAutoVectorPtr:: operator T *](#operator_t__star)|Operatore cast.|
|[CAutoVectorPtr:: operator =](#operator_eq)|Operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CAutoVectorPtr:: m_p](#m_p)|Variabile del membro dati del puntatore.|

## <a name="remarks"></a>Commenti

Questa classe fornisce metodi per la creazione e la gestione di un puntatore intelligente, che consente di proteggersi da perdite di memoria liberando automaticamente le risorse quando questo non rientra nell'ambito. `CAutoVectorPtr` è simile a `CAutoPtr` , l'unica differenza consiste nel fatto che `CAutoVectorPtr` Usa [vector New&#91;&#93;](../../standard-library/new-operators.md#op_new_arr) e [vector delete&#91;&#93;](../../standard-library/new-operators.md#op_delete_arr) per allocare e liberare memoria invece **`new`** degli **`delete`** operatori C++ e. Vedere [CAutoVectorPtrElementTraits](../../atl/reference/cautovectorptrelementtraits-class.md) se sono necessarie classi di raccolta di `CAutoVectorPtr` .

Vedere [CAutoPtr](../../atl/reference/cautoptr-class.md) per un esempio dell'uso di una classe di puntatore intelligente.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="cautovectorptrallocate"></a><a name="allocate"></a> CAutoVectorPtr:: allocate

Chiamare questo metodo per allocare la memoria richiesta dalla matrice di oggetti a cui punta `CAutoVectorPtr` .

```
bool Allocate(size_t nElements) throw();
```

### <a name="parameters"></a>Parametri

*nElements*<br/>
Numero di elementi nella matrice.

### <a name="return-value"></a>Valore restituito

Restituisce true se la memoria viene allocata correttamente, false in caso di errore.

### <a name="remarks"></a>Commenti

Nelle build di debug, si verificherà un errore di asserzione se la variabile membro [CAutoVectorPtr:: m_p](#m_p) attualmente punta a un valore esistente. ovvero, non è uguale a NULL.

## <a name="cautovectorptrattach"></a><a name="attach"></a> CAutoVectorPtr:: Connetti

Chiamare questo metodo per assumere la proprietà di un puntatore esistente.

```cpp
void Attach(T* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
L' `CAutoVectorPtr` oggetto assumerà la proprietà di questo puntatore.

### <a name="remarks"></a>Commenti

Quando un `CAutoVectorPtr` oggetto acquisisce la proprietà di un puntatore, eliminerà automaticamente il puntatore e i dati allocati quando esce dall'ambito. Se [CAutoVectorPtr::D etach](#detach) viene chiamato, il programmatore riceve di nuovo la responsabilità di liberare le risorse allocate.

Nelle build di debug, si verificherà un errore di asserzione se la variabile membro [CAutoVectorPtr:: m_p](#m_p) attualmente punta a un valore esistente. ovvero, non è uguale a NULL.

## <a name="cautovectorptrcautovectorptr"></a><a name="cautovectorptr"></a> CAutoVectorPtr:: CAutoVectorPtr

Costruttore.

```
CAutoVectorPtr() throw();
explicit CAutoVectorPtr(T* p) throw();
CAutoVectorPtr(CAutoVectorPtr<T>& p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Un puntatore esistente.

### <a name="remarks"></a>Commenti

L' `CAutoVectorPtr` oggetto può essere creato utilizzando un puntatore esistente, nel qual caso trasferisce la proprietà del puntatore.

## <a name="cautovectorptrcautovectorptr"></a><a name="dtor"></a> CAutoVectorPtr:: ~ CAutoVectorPtr

Distruttore.

```
~CAutoVectorPtr() throw();
```

### <a name="remarks"></a>Commenti

Libera tutte le risorse allocate. Chiama [CAutoVectorPtr:: Free](#free).

## <a name="cautovectorptrdetach"></a><a name="detach"></a> CAutoVectorPtr::D etach

Chiamare questo metodo per rilasciare la proprietà di un puntatore.

```
T* Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una copia del puntatore.

### <a name="remarks"></a>Commenti

Rilascia la proprietà di un puntatore, imposta la variabile membro [CAutoVectorPtr:: m_p](#m_p) su null e restituisce una copia del puntatore. Al termine della chiamata, spetta al `Detach` programmatore liberare tutte le risorse allocate sulle quali l' `CAutoVectorPtr` oggetto può assumere la responsabilità in precedenza.

## <a name="cautovectorptrfree"></a><a name="free"></a> CAutoVectorPtr:: Free

Chiamare questo metodo per eliminare un oggetto a cui fa riferimento un oggetto `CAutoVectorPtr` .

```cpp
void Free() throw();
```

### <a name="remarks"></a>Commenti

L'oggetto a cui fa riferimento `CAutoVectorPtr` viene liberato e la variabile membro [CAutoVectorPtr:: m_p](#m_p) è impostata su null.

## <a name="cautovectorptrm_p"></a><a name="m_p"></a> CAutoVectorPtr:: m_p

Variabile del membro dati del puntatore.

```
T* m_p;
```

### <a name="remarks"></a>Commenti

Questa variabile membro include le informazioni sul puntatore.

## <a name="cautovectorptroperator-"></a><a name="operator_eq"></a> CAutoVectorPtr:: operator =

Operatore di assegnazione.

```
CAutoVectorPtr<T>& operator= (CAutoVectorPtr<T>& p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento a un **CAutoVectorPtr \< T >**.

### <a name="remarks"></a>Commenti

L'operatore di assegnazione disconnette l' `CAutoVectorPtr` oggetto da qualsiasi puntatore corrente e connette il nuovo puntatore, *p*, al suo posto.

## <a name="cautovectorptroperator-t-"></a><a name="operator_t__star"></a> CAutoVectorPtr:: operator T *

Operatore cast.

```
operator T*() const throw();
```

### <a name="remarks"></a>Commenti

Restituisce un puntatore al tipo di dati dell'oggetto definito nel modello di classe.

## <a name="see-also"></a>Vedi anche

[Classe CAutoPtr](../../atl/reference/cautoptr-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
