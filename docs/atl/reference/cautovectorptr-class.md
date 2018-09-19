---
title: Classe CAutoVectorPtr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CAutoVectorPtr
- ATLBASE/ATL::CAutoVectorPtr
- ATLBASE/ATL::CAutoVectorPtr::CAutoVectorPtr
- ATLBASE/ATL::CAutoVectorPtr::Allocate
- ATLBASE/ATL::CAutoVectorPtr::Attach
- ATLBASE/ATL::CAutoVectorPtr::Detach
- ATLBASE/ATL::CAutoVectorPtr::Free
- ATLBASE/ATL::CAutoVectorPtr::m_p
dev_langs:
- C++
helpviewer_keywords:
- CAutoVectorPtr class
ms.assetid: 0030362b-6bc4-4a47-9b5b-3c3899dceab4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8d60a7f40fc90d5586d7a8a7d41cab81a4d97c85
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46054480"
---
# <a name="cautovectorptr-class"></a>Classe CAutoVectorPtr

Questa classe rappresenta un oggetto del puntatore intelligente utilizzando il vettore di nuovo ed Elimina gli operatori.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<typename T>
class CAutoVectorPtr
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di puntatore.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoVectorPtr::CAutoVectorPtr](#cautovectorptr)|Costruttore.|
|[CAutoVectorPtr:: ~ CAutoVectorPtr](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoVectorPtr::Allocate](#allocate)|Chiamare questo metodo per allocare la memoria necessaria per la matrice di oggetti a cui punta `CAutoVectorPtr`.|
|[CAutoVectorPtr::Attach](#attach)|Chiamare questo metodo per acquisire la proprietà di un indicatore di misura esistente.|
|[CAutoVectorPtr::Detach](#detach)|Chiamare questo metodo per rilasciare la proprietà di un puntatore.|
|[CAutoVectorPtr::Free](#free)|Chiamare questo metodo per eliminare un oggetto a cui punta un `CAutoVectorPtr`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoVectorPtr::operator T *](#operator_t__star)|L'operatore di cast.|
|[CAutoVectorPtr::operator =](#operator_eq)|L'operatore di assegnazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAutoVectorPtr::m_p](#m_p)|La variabile di membro dati puntatore.|

## <a name="remarks"></a>Note

Questa classe fornisce metodi per la creazione e la gestione di un puntatore intelligente, che aiuterà a proteggere le perdite di memoria da automaticamente quando rientra più nell'ambito, liberando così risorse. `CAutoVectorPtr` è simile a `CAutoPtr`, l'unica differenza è che `CAutoVectorPtr` Usa [vettore new&#91; &#93; ](../../standard-library/new-operators.md#op_new_arr) e [vettore delete&#91; &#93; ](../../standard-library/new-operators.md#op_delete_arr) per allocare e liberare la memoria invece di C++ **nuove** e **eliminare** operatori. Visualizzare [CAutoVectorPtrElementTraits](../../atl/reference/cautovectorptrelementtraits-class.md) se le classi di insiemi di `CAutoVectorPtr` sono necessari.

Visualizzare [CAutoPtr](../../atl/reference/cautoptr-class.md) per un esempio dell'uso di una classe del puntatore intelligente.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="allocate"></a>  CAutoVectorPtr::Allocate

Chiamare questo metodo per allocare la memoria necessaria per la matrice di oggetti a cui punta `CAutoVectorPtr`.

```
bool Allocate(size_t nElements) throw();
```

### <a name="parameters"></a>Parametri

*nElements*<br/>
Numero di elementi nella matrice.

### <a name="return-value"></a>Valore restituito

Restituisce true se la memoria è stata allocata, false in caso di errore.

### <a name="remarks"></a>Note

Nelle build di debug, un errore di asserzione si verificherà se il [CAutoVectorPtr::m_p](#m_p) variabile membro attualmente punta a un valore esistente; vale a dire non è uguale a NULL.

##  <a name="attach"></a>  CAutoVectorPtr::Attach

Chiamare questo metodo per acquisire la proprietà di un indicatore di misura esistente.

```
void Attach(T* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Il `CAutoVectorPtr` oggetto assumerà la proprietà del puntatore ' this '.

### <a name="remarks"></a>Note

Quando un `CAutoVectorPtr` oggetto acquisisce la proprietà di un puntatore, eliminerà automaticamente tutti i dati allocati e il puntatore del mouse quando esce dall'ambito. Se [CAutoVectorPtr::Detach](#detach) viene chiamato, il programmatore è nuovo dato responsabilità per il rilascio di qualsiasi le risorse allocato.

Nelle build di debug, un errore di asserzione si verificherà se il [CAutoVectorPtr::m_p](#m_p) variabile membro attualmente punta a un valore esistente; vale a dire non è uguale a NULL.

##  <a name="cautovectorptr"></a>  CAutoVectorPtr::CAutoVectorPtr

Costruttore.

```
CAutoVectorPtr() throw();
explicit CAutoVectorPtr(T* p) throw();
CAutoVectorPtr(CAutoVectorPtr<T>& p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Un puntatore esistente.

### <a name="remarks"></a>Note

Il `CAutoVectorPtr` oggetto può essere creato usando un puntatore esistente, nel qual caso trasferisce la proprietà del puntatore.

##  <a name="dtor"></a>  CAutoVectorPtr:: ~ CAutoVectorPtr

Distruttore.

```
~CAutoVectorPtr() throw();
```

### <a name="remarks"></a>Note

Libera tutte le risorse allocate. Le chiamate [CAutoVectorPtr::Free](#free).

##  <a name="detach"></a>  CAutoVectorPtr::Detach

Chiamare questo metodo per rilasciare la proprietà di un puntatore.

```
T* Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una copia del puntatore.

### <a name="remarks"></a>Note

Rilascia la proprietà di un puntatore, imposta la [CAutoVectorPtr::m_p](#m_p) variabile membro null e restituisce una copia del puntatore. Dopo avere chiamato `Detach`, fino al programmatore di liberare qualsiasi allocarla risorse su cui il `CAutoVectorPtr` oggetto può avere in precedenza si presuppone che la responsabilità.

##  <a name="free"></a>  CAutoVectorPtr::Free

Chiamare questo metodo per eliminare un oggetto a cui punta un `CAutoVectorPtr`.

```
void Free() throw();
```

### <a name="remarks"></a>Note

L'oggetto a cui fa riferimento il `CAutoVectorPtr` viene liberato e il [CAutoVectorPtr::m_p](#m_p) variabile membro è impostata su NULL.

##  <a name="m_p"></a>  CAutoVectorPtr::m_p

La variabile di membro dati puntatore.

```
T* m_p;
```

### <a name="remarks"></a>Note

Questa variabile membro contiene le informazioni di puntatore.

##  <a name="operator_eq"></a>  CAutoVectorPtr::operator =

L'operatore di assegnazione.

```
CAutoVectorPtr<T>& operator= (CAutoVectorPtr<T>& p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Un puntatore.

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento a un **CAutoVectorPtr\< T >**.

### <a name="remarks"></a>Note

L'operatore di assegnazione consente di scollegare il `CAutoVectorPtr` oggetti da qualsiasi puntatore corrente e associa il nuovo puntatore *p*, al suo posto.

##  <a name="operator_t__star"></a>  CAutoVectorPtr::operator T *

L'operatore di cast.

```
operator T*() const throw();
```

### <a name="remarks"></a>Note

Restituisce un puntatore al tipo di dati di oggetto definito nel modello di classe.

## <a name="see-also"></a>Vedere anche

[Classe CAutoPtr](../../atl/reference/cautoptr-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
