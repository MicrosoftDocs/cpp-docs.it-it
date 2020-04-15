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
ms.openlocfilehash: cb8e3d6b71db6ab60b3b246bd8c5bf4f2c9aaa34
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321261"
---
# <a name="cautoptr-class"></a>Classe CAutoPtr

Questa classe rappresenta un oggetto puntatore intelligente.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <typename T>
class CAutoPtr
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di puntatore.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoPtr::CAutoPtr](#cautoptr)|Costruttore.|
|[CAutoPtr:: : CAutoPtr](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoPtr::Associare](#attach)|Chiamare questo metodo per assumere la proprietà di un puntatore esistente.|
|[CAutoPtr::Detach](#detach)|Chiamare questo metodo per rilasciare la proprietà di un puntatore.|
|[CAutoPtr::Gratuito](#free)|Chiamare questo metodo per eliminare un `CAutoPtr`oggetto a cui punta un oggetto .|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoPtr::operatore T](#operator_t_star)|Operatore di cast.|
|[CAutoPtr::operatore](#operator_eq)|Operatore di assegnazione.|
|[CAutoPtr::operatore ->](#operator_ptr)|Operatore puntatore a membro.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoPtr::m_p](#m_p)|Variabile membro dati puntatore.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce metodi per la creazione e la gestione di un puntatore intelligente, che consente di proteggere da perdite di memoria liberando automaticamente le risorse quando rientra nell'ambito.

Inoltre, `CAutoPtr`'s copy costruttore e l'operatore di assegnazione trasferire la proprietà del puntatore, copiando il puntatore di origine al puntatore di destinazione e impostando il puntatore di origine su NULL. È quindi impossibile `CAutoPtr` avere due oggetti ciascuno che archivia lo stesso puntatore e questo riduce la possibilità di eliminare lo stesso puntatore due volte.

`CAutoPtr`semplifica inoltre la creazione di raccolte di puntatori. Anziché derivare una classe di raccolta ed eseguire l'override del `CAutoPtr` distruttore, è più semplice creare una raccolta di oggetti. Quando la raccolta viene `CAutoPtr` eliminata, gli oggetti usciranno dall'ambito ed eliminano automaticamente se stessi.

[CHeapPtr](../../atl/reference/cheapptr-class.md) e varianti funzionano nello `CAutoPtr`stesso modo di , ad eccezione del fatto che allocano e liberano memoria utilizzando funzioni heap diverse invece degli operatori **new** e **delete** di C. [CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md) è `CAutoPtr`simile a , l'unica differenza è che utilizza **new[]** e **vector delete[]** per allocare e liberare memoria.

Vedere anche [CAutoPtrArray](../../atl/reference/cautoptrarray-class.md) e [CAutoPtrList](../../atl/reference/cautoptrlist-class.md) quando sono necessari matrici o elenchi di puntatori intelligenti.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#74](../../atl/codesnippet/cpp/cautoptr-class_1.cpp)]

## <a name="cautoptrattach"></a><a name="attach"></a>CAutoPtr::Associare

Chiamare questo metodo per assumere la proprietà di un puntatore esistente.

```
void Attach(T* p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
L'oggetto `CAutoPtr` assumerà la proprietà di questo puntatore.

### <a name="remarks"></a>Osservazioni

Quando `CAutoPtr` un oggetto assume la proprietà di un puntatore, eliminerà automaticamente il puntatore e tutti i dati allocati quando esce dall'ambito. Se [CAutoPtr::Detach](#detach) viene chiamato, al programmatore viene nuovamente assegnata la responsabilità di liberare le risorse allocate.

Nelle build di debug, si verificherà un errore di asserzione se il [CAutoPtr::m_p](#m_p) membro dati attualmente punta a un valore esistente; vale a dire, non è uguale a NULL.

### <a name="example"></a>Esempio

Vedere l'esempio in [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).

## <a name="cautoptrcautoptr"></a><a name="cautoptr"></a>CAutoPtr::CAutoPtr

Costruttore.

```
CAutoPtr() throw();
explicit CAutoPtr(T* p) throw();

template<typename TSrc>
CAutoPtr(CAutoPtr<TSrc>& p) throw();

template<>
CAutoPtr(CAutoPtr<T>& p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Un puntatore esistente.

*TSrc*<br/>
Tipo gestito da `CAutoPtr`un altro oggetto , utilizzato per inizializzare l'oggetto corrente.

### <a name="remarks"></a>Osservazioni

L'oggetto `CAutoPtr` può essere creato utilizzando un puntatore esistente, nel qual caso trasferisce la proprietà del puntatore.

### <a name="example"></a>Esempio

Vedere l'esempio in [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).

## <a name="cautoptrcautoptr"></a><a name="dtor"></a>CAutoPtr:: : CAutoPtr

Distruttore.

```
~CAutoPtr() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate. Chiama [CAutoPtr::Free](#free).

## <a name="cautoptrdetach"></a><a name="detach"></a>CAutoPtr::Detach

Chiamare questo metodo per rilasciare la proprietà di un puntatore.

```
T* Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una copia del puntatore.

### <a name="remarks"></a>Osservazioni

Rilascia la proprietà di un puntatore, imposta la variabile membro dati [CAutoPtr::m_p](#m_p) su NULL e restituisce una copia del puntatore. Dopo `Detach`aver chiamato , spetta al programmatore liberare `CAutoPtr` le risorse allocate su cui l'oggetto potrebbe aver precedentemente assunto la responsabilità.

### <a name="example"></a>Esempio

Vedere l'esempio in [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).

## <a name="cautoptrfree"></a><a name="free"></a>CAutoPtr::Gratuito

Chiamare questo metodo per eliminare un `CAutoPtr`oggetto a cui punta un oggetto .

```
void Free() throw();
```

### <a name="remarks"></a>Osservazioni

L'oggetto a `CAutoPtr` cui fa riferimento l'oggetto viene liberato e la variabile membro [di dati CAutoPtr::m_p](#m_p) è impostata su NULL.

## <a name="cautoptrm_p"></a><a name="m_p"></a>CAutoPtr::m_p

Variabile membro dati puntatore.

```
T* m_p;
```

### <a name="remarks"></a>Osservazioni

Questa variabile membro contiene le informazioni sul puntatore.

## <a name="cautoptroperator-"></a><a name="operator_eq"></a>CAutoPtr::operatore

Operatore di assegnazione.

```
template<>
CAutoPtr<T>& operator= (CAutoPtr<T>& p);

template<typename TSrc>
CAutoPtr<T>& operator= (CAutoPtr<TSrc>& p);
```

### <a name="parameters"></a>Parametri

*P*<br/>
Un puntatore.

*TSrc*<br/>
Tipo di classe.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento a un **cAutoPtr\< T >**.

### <a name="remarks"></a>Osservazioni

L'operatore di `CAutoPtr` assegnazione scollega l'oggetto da qualsiasi puntatore corrente e associa il nuovo puntatore, *p*, al suo posto.

### <a name="example"></a>Esempio

Vedere l'esempio in [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).

## <a name="cautoptroperator--gt"></a><a name="operator_ptr"></a>CAutoPtr::operatore -&gt;

Operatore puntatore a membro.

```
T* operator->() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore della variabile membro dati [CAutoPtr::m_p.](#m_p)

### <a name="remarks"></a>Osservazioni

Utilizzare questo operatore per chiamare un metodo `CAutoPtr` in una classe a cui punta l'oggetto. Nelle build di debug, si verificherà un errore di asserzione se punta `CAutoPtr` a NULL.

### <a name="example"></a>Esempio

Vedere l'esempio in [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).

## <a name="cautoptroperator-t"></a><a name="operator_t_star"></a>CAutoPtr::operatore T

Operatore di cast.

```
operator T* () const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al tipo di dati dell'oggetto definito nel modello di classe.

### <a name="example"></a>Esempio

Vedere l'esempio in [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).

## <a name="see-also"></a>Vedere anche

[CHeapPtr (classe)](../../atl/reference/cheapptr-class.md)<br/>
[CAutoVectorPtr (classe)](../../atl/reference/cautovectorptr-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
