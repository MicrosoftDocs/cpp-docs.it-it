---
title: Classe CAutoPtr
ms.date: 11/04/2016
f1_keywords:
- CAutoPtr
- ATLBASE/ATL::CAutoPtr
- ATLBASE/ATL::CAutoPtr::CAutoPtr
- ATLBASE/ATL::CAutoPtr::Attach
- ATLBASE/ATL::CAutoPtr::Detach
- ATLBASE/ATL::CAutoPtr::Free
- ATLBASE/ATL::CAutoPtr::m_p
helpviewer_keywords:
- CAutoPtr class
ms.assetid: 08988d53-4fb0-4711-bdfc-8ac29c63f410
ms.openlocfilehash: 7f15e16b075b9a5327723a7f081100313f14ea77
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82167721"
---
# <a name="cautoptr-class"></a>Classe CAutoPtr

Questa classe rappresenta un oggetto puntatore intelligente.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
template <typename T>
class CAutoPtr
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di puntatore.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoPtr:: CAutoPtr](#cautoptr)|Costruttore.|
|[CAutoPtr:: ~ CAutoPtr](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoPtr:: Connetti](#attach)|Chiamare questo metodo per assumere la proprietà di un puntatore esistente.|
|[CAutoPtr::D etach](#detach)|Chiamare questo metodo per rilasciare la proprietà di un puntatore.|
|[CAutoPtr:: Free](#free)|Chiamare questo metodo per eliminare un oggetto a cui fa riferimento `CAutoPtr`un oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoPtr:: operator T *](#operator_t_star)|Operatore cast.|
|[CAutoPtr:: operator =](#operator_eq)|Operatore di assegnazione.|
|[CAutoPtr:: operator->](#operator_ptr)|Operatore puntatore a membro.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoPtr:: m_p](#m_p)|Variabile del membro dati del puntatore.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce metodi per la creazione e la gestione di un puntatore intelligente, che consente di proteggersi da perdite di memoria liberando automaticamente le risorse quando questo non rientra nell'ambito.

Inoltre, `CAutoPtr`il costruttore di copia e l'operatore di assegnazione trasferiscono la proprietà del puntatore, copiando il puntatore di origine nel puntatore di destinazione e impostando il puntatore di origine su null. Non è pertanto possibile avere due `CAutoPtr` oggetti ognuno dei quali archivia lo stesso puntatore. in questo modo si riduce la possibilità di eliminare lo stesso puntatore due volte.

`CAutoPtr`semplifica anche la creazione di raccolte di puntatori. Anziché derivare una classe di raccolta ed eseguire l'override del distruttore, è più semplice creare una raccolta di `CAutoPtr` oggetti. Quando la raccolta viene eliminata, `CAutoPtr` gli oggetti escono dall'ambito e si eliminano automaticamente.

[CHeapPtr](../../atl/reference/cheapptr-class.md) e Variant funzionano in modo analogo a `CAutoPtr`, ad eccezione del fatto che allocano e liberano memoria usando funzioni heap diverse anziché gli operatori **New** e **Delete** di C++. [CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md) è simile a `CAutoPtr`, l'unica differenza consiste nel fatto che usa **vector New []** e **vector delete []** per allocare e liberare memoria.

Vedere anche [CAutoPtrArray](../../atl/reference/cautoptrarray-class.md) e [CAutoPtrList](../../atl/reference/cautoptrlist-class.md) quando sono necessarie matrici o elenchi di puntatori intelligenti.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#74](../../atl/codesnippet/cpp/cautoptr-class_1.cpp)]

## <a name="cautoptrattach"></a><a name="attach"></a>CAutoPtr:: Connetti

Chiamare questo metodo per assumere la proprietà di un puntatore esistente.

```cpp
void Attach(T* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
L' `CAutoPtr` oggetto assumerà la proprietà di questo puntatore.

### <a name="remarks"></a>Osservazioni

Quando un `CAutoPtr` oggetto acquisisce la proprietà di un puntatore, eliminerà automaticamente il puntatore e i dati allocati quando esce dall'ambito. Se [CAutoPtr::D etach](#detach) viene chiamato, il programmatore riceve di nuovo la responsabilità di liberare le risorse allocate.

Nelle build di debug, si verificherà un errore di asserzione se il membro dati [CAutoPtr:: m_p](#m_p) attualmente punta a un valore esistente. ovvero, non è uguale a NULL.

### <a name="example"></a>Esempio

Vedere l'esempio nella [Panoramica di CAutoPtr](../../atl/reference/cautoptr-class.md).

## <a name="cautoptrcautoptr"></a><a name="cautoptr"></a>CAutoPtr:: CAutoPtr

Costruttore.

```cpp
CAutoPtr() throw();
explicit CAutoPtr(T* p) throw();

template<typename TSrc>
CAutoPtr(CAutoPtr<TSrc>& p) throw();

template<>
CAutoPtr(CAutoPtr<T>& p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Un puntatore esistente.

*TSrc*<br/>
Tipo gestito da un altro `CAutoPtr`oggetto, utilizzato per inizializzare l'oggetto corrente.

### <a name="remarks"></a>Osservazioni

L' `CAutoPtr` oggetto può essere creato utilizzando un puntatore esistente, nel qual caso trasferisce la proprietà del puntatore.

### <a name="example"></a>Esempio

Vedere l'esempio nella [Panoramica di CAutoPtr](../../atl/reference/cautoptr-class.md).

## <a name="cautoptrcautoptr"></a><a name="dtor"></a>CAutoPtr:: ~ CAutoPtr

Distruttore.

```cpp
~CAutoPtr() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate. Chiama [CAutoPtr:: Free](#free).

## <a name="cautoptrdetach"></a><a name="detach"></a>CAutoPtr::D etach

Chiamare questo metodo per rilasciare la proprietà di un puntatore.

```cpp
T* Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una copia del puntatore.

### <a name="remarks"></a>Osservazioni

Rilascia la proprietà di un puntatore, imposta la variabile membro dati [CAutoPtr:: m_p](#m_p) su null e restituisce una copia del puntatore. Dopo aver `Detach`chiamato, spetta al programmatore liberare tutte le risorse allocate sulle quali l' `CAutoPtr` oggetto potrebbe avere già assunto reponsibility.

### <a name="example"></a>Esempio

Vedere l'esempio nella [Panoramica di CAutoPtr](../../atl/reference/cautoptr-class.md).

## <a name="cautoptrfree"></a><a name="free"></a>CAutoPtr:: Free

Chiamare questo metodo per eliminare un oggetto a cui fa riferimento `CAutoPtr`un oggetto.

```cpp
void Free() throw();
```

### <a name="remarks"></a>Osservazioni

L'oggetto a cui `CAutoPtr` fa riferimento viene liberato e la variabile membro dati [CAutoPtr:: m_p](#m_p) è impostata su null.

## <a name="cautoptrm_p"></a><a name="m_p"></a>CAutoPtr:: m_p

Variabile del membro dati del puntatore.

```cpp
T* m_p;
```

### <a name="remarks"></a>Osservazioni

Questa variabile membro include le informazioni sul puntatore.

## <a name="cautoptroperator-"></a><a name="operator_eq"></a>CAutoPtr:: operator =

Operatore di assegnazione.

```cpp
template<>
CAutoPtr<T>& operator= (CAutoPtr<T>& p);

template<typename TSrc>
CAutoPtr<T>& operator= (CAutoPtr<TSrc>& p);
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore.

*TSrc*<br/>
Tipo di classe.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento a un **CAutoPtr\< T >**.

### <a name="remarks"></a>Osservazioni

L'operatore di assegnazione disconnette l' `CAutoPtr` oggetto da qualsiasi puntatore corrente e connette il nuovo puntatore, *p*, al suo posto.

### <a name="example"></a>Esempio

Vedere l'esempio nella [Panoramica di CAutoPtr](../../atl/reference/cautoptr-class.md).

## <a name="cautoptroperator--gt"></a><a name="operator_ptr"></a>Operatore CAutoPtr:: operator-&gt;

Operatore puntatore a membro.

```cpp
T* operator->() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore della variabile membro dati [CAutoPtr:: m_p](#m_p) .

### <a name="remarks"></a>Osservazioni

Utilizzare questo operatore per chiamare un metodo in una classe a cui fa riferimento `CAutoPtr` l'oggetto. Nelle build di debug, si verificherà un errore di `CAutoPtr` asserzione se punta a null.

### <a name="example"></a>Esempio

Vedere l'esempio nella [Panoramica di CAutoPtr](../../atl/reference/cautoptr-class.md).

## <a name="cautoptroperator-t"></a><a name="operator_t_star"></a>CAutoPtr:: operator T *

Operatore cast.

```cpp
operator T* () const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al tipo di dati dell'oggetto definito nel modello di classe.

### <a name="example"></a>Esempio

Vedere l'esempio nella [Panoramica di CAutoPtr](../../atl/reference/cautoptr-class.md).

## <a name="see-also"></a>Vedere anche

[Classe CHeapPtr](../../atl/reference/cheapptr-class.md)<br/>
[Classe CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
