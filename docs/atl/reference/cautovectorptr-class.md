---
title: CAutoVectorPtr (classe)
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
ms.openlocfilehash: fc4bd4ba7a2f41a25679f1da718671f525519708
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81748220"
---
# <a name="cautovectorptr-class"></a>CAutoVectorPtr (classe)

Questa classe rappresenta un oggetto puntatore intelligente utilizzando gli operatori vector new e delete.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

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

|Nome|Descrizione|
|----------|-----------------|
|[CAutoVectorPtr::CAutoVectorPtr](#cautovectorptr)|Costruttore.|
|[CAutoVectorPtr:: CAutoVectorPtr](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoVectorPtr::Allocare](#allocate)|Chiamare questo metodo per allocare la memoria richiesta `CAutoVectorPtr`dalla matrice di oggetti a cui punta .|
|[CAutoVectorPtr::Associare](#attach)|Chiamare questo metodo per assumere la proprietà di un puntatore esistente.|
|[CAutoVectorPtr::Detach](#detach)|Chiamare questo metodo per rilasciare la proprietà di un puntatore.|
|[CAutoVectorPtr::Gratuito](#free)|Chiamare questo metodo per eliminare un `CAutoVectorPtr`oggetto a cui punta un oggetto .|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoVectorPtr::operatore T](#operator_t__star)|Operatore di cast.|
|[CAutoVectorPtr::operatore](#operator_eq)|Operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoVectorPtr::m_p](#m_p)|Variabile membro dati puntatore.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce metodi per la creazione e la gestione di un puntatore intelligente, che consente di proteggere da perdite di memoria liberando automaticamente le risorse quando rientra nell'ambito. `CAutoVectorPtr`è simile `CAutoPtr`a , l'unica differenza è `CAutoVectorPtr` che utilizza new&#91;&#93;[vettoriali e](../../standard-library/new-operators.md#op_new_arr) vector delete [&#91;&#93;](../../standard-library/new-operators.md#op_delete_arr) per allocare e liberare memoria invece degli operatori **new** e **delete** di C. Vedere [CAutoVectorPtrElementTraits](../../atl/reference/cautovectorptrelementtraits-class.md) se `CAutoVectorPtr` sono necessarie classi di raccolta.

Vedere [CAutoPtr](../../atl/reference/cautoptr-class.md) per un esempio di utilizzo di una classe di puntatori intelligenti.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="cautovectorptrallocate"></a><a name="allocate"></a>CAutoVectorPtr::Allocare

Chiamare questo metodo per allocare la memoria richiesta `CAutoVectorPtr`dalla matrice di oggetti a cui punta .

```
bool Allocate(size_t nElements) throw();
```

### <a name="parameters"></a>Parametri

*nElementi*<br/>
Numero di elementi nella matrice.

### <a name="return-value"></a>Valore restituito

Restituisce true se la memoria viene allocata correttamente, false in caso di errore.

### <a name="remarks"></a>Osservazioni

Nelle build di debug, si verificherà un errore di asserzione se la variabile membro [CAutoVectorPtr::m_p](#m_p) punta attualmente a un valore esistente; vale a dire, non è uguale a NULL.

## <a name="cautovectorptrattach"></a><a name="attach"></a>CAutoVectorPtr::Associare

Chiamare questo metodo per assumere la proprietà di un puntatore esistente.

```cpp
void Attach(T* p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
L'oggetto `CAutoVectorPtr` assumerà la proprietà di questo puntatore.

### <a name="remarks"></a>Osservazioni

Quando `CAutoVectorPtr` un oggetto assume la proprietà di un puntatore, eliminerà automaticamente il puntatore e tutti i dati allocati quando esce dall'ambito. Se [CAutoVectorPtr::Detach](#detach) viene chiamato, al programmatore viene nuovamente assegnata la responsabilità di liberare le risorse allocate.

Nelle build di debug, si verificherà un errore di asserzione se la variabile membro [CAutoVectorPtr::m_p](#m_p) punta attualmente a un valore esistente; vale a dire, non è uguale a NULL.

## <a name="cautovectorptrcautovectorptr"></a><a name="cautovectorptr"></a>CAutoVectorPtr::CAutoVectorPtr

Costruttore.

```
CAutoVectorPtr() throw();
explicit CAutoVectorPtr(T* p) throw();
CAutoVectorPtr(CAutoVectorPtr<T>& p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Un puntatore esistente.

### <a name="remarks"></a>Osservazioni

L'oggetto `CAutoVectorPtr` può essere creato utilizzando un puntatore esistente, nel qual caso trasferisce la proprietà del puntatore.

## <a name="cautovectorptrcautovectorptr"></a><a name="dtor"></a>CAutoVectorPtr:: CAutoVectorPtr

Distruttore.

```
~CAutoVectorPtr() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate. Chiama [CAutoVectorPtr::Free](#free).

## <a name="cautovectorptrdetach"></a><a name="detach"></a>CAutoVectorPtr::Detach

Chiamare questo metodo per rilasciare la proprietà di un puntatore.

```
T* Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una copia del puntatore.

### <a name="remarks"></a>Osservazioni

Rilascia la proprietà di un puntatore, imposta la variabile membro [CAutoVectorPtr::m_p](#m_p) su NULL e restituisce una copia del puntatore. Dopo `Detach`aver chiamato , spetta al programmatore liberare `CAutoVectorPtr` le risorse allocate di cui l'oggetto potrebbe aver precedentemente assunto la responsabilità.

## <a name="cautovectorptrfree"></a><a name="free"></a>CAutoVectorPtr::Gratuito

Chiamare questo metodo per eliminare un `CAutoVectorPtr`oggetto a cui punta un oggetto .

```cpp
void Free() throw();
```

### <a name="remarks"></a>Osservazioni

L'oggetto a `CAutoVectorPtr` cui fa riferimento l'oggetto viene liberato e la variabile membro [CAutoVectorPtr::m_p](#m_p) è impostata su NULL.

## <a name="cautovectorptrm_p"></a><a name="m_p"></a>CAutoVectorPtr::m_p

Variabile membro dati puntatore.

```
T* m_p;
```

### <a name="remarks"></a>Osservazioni

Questa variabile membro contiene le informazioni sul puntatore.

## <a name="cautovectorptroperator-"></a><a name="operator_eq"></a>CAutoVectorPtr::operatore

Operatore di assegnazione.

```
CAutoVectorPtr<T>& operator= (CAutoVectorPtr<T>& p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Un puntatore.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento a un **cAutoVectorPtr\< T >**.

### <a name="remarks"></a>Osservazioni

L'operatore di `CAutoVectorPtr` assegnazione scollega l'oggetto da qualsiasi puntatore corrente e associa il nuovo puntatore, *p*, al suo posto.

## <a name="cautovectorptroperator-t-"></a><a name="operator_t__star"></a>CAutoVectorPtr::operatore T

Operatore di cast.

```
operator T*() const throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce un puntatore al tipo di dati dell'oggetto definito nel modello di classe.

## <a name="see-also"></a>Vedere anche

[Classe CAutoPtr](../../atl/reference/cautoptr-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
