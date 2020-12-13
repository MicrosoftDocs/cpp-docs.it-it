---
description: 'Altre informazioni su: classe CHeapPtrBase'
title: Classe CHeapPtrBase
ms.date: 11/04/2016
f1_keywords:
- CHeapPtrBase
- ATLCORE/ATL::CHeapPtrBase
- ATLCORE/ATL::CHeapPtrBase::AllocateBytes
- ATLCORE/ATL::CHeapPtrBase::Attach
- ATLCORE/ATL::CHeapPtrBase::Detach
- ATLCORE/ATL::CHeapPtrBase::Free
- ATLCORE/ATL::CHeapPtrBase::ReallocateBytes
- ATLCORE/ATL::CHeapPtrBase::m_pData
helpviewer_keywords:
- CHeapPtrBase class
ms.assetid: 501ac1b2-fb34-4c72-b7e6-a4f1fc8fda21
ms.openlocfilehash: 6186f68066f4c159c16c458f9f00725478aa98a0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141635"
---
# <a name="cheapptrbase-class"></a>Classe CHeapPtrBase

Questa classe costituisce la base per diverse classi di puntatore dell'heap intelligente.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T, class Allocator = CCRTAllocator>
class CHeapPtrBase
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di oggetto da archiviare nell'heap.

*Allocatore*<br/>
Classe di allocazione della memoria da utilizzare. Per impostazione predefinita, le routine CRT vengono utilizzate per allocare e liberare memoria.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CHeapPtrBase:: ~ CHeapPtrBase](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CHeapPtrBase:: AllocateBytes](#allocatebytes)|Chiamare questo metodo per allocare memoria.|
|[CHeapPtrBase:: Connetti](#attach)|Chiamare questo metodo per assumere la proprietà di un puntatore esistente.|
|[CHeapPtrBase::D etach](#detach)|Chiamare questo metodo per rilasciare la proprietà di un puntatore.|
|[CHeapPtrBase:: Free](#free)|Chiamare questo metodo per eliminare un oggetto a cui fa riferimento un oggetto `CHeapPtrBase` .|
|[CHeapPtrBase:: ReallocateBytes](#reallocatebytes)|Chiamare questo metodo per riallocare la memoria.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CHeapPtrBase:: operator T *](#operator_t_star)|Operatore cast.|
|[&CHeapPtrBase:: operator ](#operator_amp)|Operatore &.|
|[CHeapPtrBase:: operator->](#operator_ptr)|Operatore puntatore a membro.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CHeapPtrBase:: m_pData](#m_pdata)|Variabile del membro dati del puntatore.|

## <a name="remarks"></a>Commenti

Questa classe costituisce la base per diverse classi di puntatore dell'heap intelligente. Le classi derivate, ad esempio [CHeapPtr](../../atl/reference/cheapptr-class.md) e [CComHeapPtr](../../atl/reference/ccomheapptr-class.md), aggiungono costruttori e operatori propri. Per esempi di implementazione, vedere le classi seguenti.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore. h

## <a name="cheapptrbaseallocatebytes"></a><a name="allocatebytes"></a> CHeapPtrBase:: AllocateBytes

Chiamare questo metodo per allocare memoria.

```
bool AllocateBytes(size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*nBytes*<br/>
Numero di byte di memoria da allocare.

### <a name="return-value"></a>Valore restituito

Restituisce true se la memoria viene allocata correttamente; in caso contrario, false.

### <a name="remarks"></a>Commenti

Nelle build di debug, si verificherà un errore di asserzione se la variabile membro [CHeapPtrBase:: m_pData](#m_pdata) attualmente punta a un valore esistente. ovvero, non è uguale a NULL.

## <a name="cheapptrbaseattach"></a><a name="attach"></a> CHeapPtrBase:: Connetti

Chiamare questo metodo per assumere la proprietà di un puntatore esistente.

```cpp
void Attach(T* pData) throw();
```

### <a name="parameters"></a>Parametri

*pData*<br/>
L' `CHeapPtrBase` oggetto assumerà la proprietà di questo puntatore.

### <a name="remarks"></a>Commenti

Quando un `CHeapPtrBase` oggetto acquisisce la proprietà di un puntatore, eliminerà automaticamente il puntatore e i dati allocati quando esce dall'ambito.

Nelle build di debug, si verificherà un errore di asserzione se la variabile membro [CHeapPtrBase:: m_pData](#m_pdata) attualmente punta a un valore esistente. ovvero, non è uguale a NULL.

## <a name="cheapptrbasecheapptrbase"></a><a name="dtor"></a> CHeapPtrBase:: ~ CHeapPtrBase

Distruttore.

```
~CHeapPtrBase() throw();
```

### <a name="remarks"></a>Commenti

Libera tutte le risorse allocate.

## <a name="cheapptrbasedetach"></a><a name="detach"></a> CHeapPtrBase::D etach

Chiamare questo metodo per rilasciare la proprietà di un puntatore.

```
T* Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una copia del puntatore.

### <a name="remarks"></a>Commenti

Rilascia la proprietà di un puntatore, imposta la variabile membro [CHeapPtrBase:: m_pData](#m_pdata) su null e restituisce una copia del puntatore.

## <a name="cheapptrbasefree"></a><a name="free"></a> CHeapPtrBase:: Free

Chiamare questo metodo per eliminare un oggetto a cui fa riferimento un oggetto `CHeapPtrBase` .

```cpp
void Free() throw();
```

### <a name="remarks"></a>Commenti

L'oggetto a cui fa riferimento `CHeapPtrBase` viene liberato e la variabile membro [CHeapPtrBase:: m_pData](#m_pdata) è impostata su null.

## <a name="cheapptrbasem_pdata"></a><a name="m_pdata"></a> CHeapPtrBase:: m_pData

Variabile del membro dati del puntatore.

```
T* m_pData;
```

### <a name="remarks"></a>Commenti

Questa variabile membro include le informazioni sul puntatore.

## <a name="cheapptrbaseoperator-amp"></a><a name="operator_amp"></a> Operatore CHeapPtrBase:: &amp;

Operatore &.

```
T** operator&() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'indirizzo dell'oggetto a cui fa riferimento l' `CHeapPtrBase` oggetto.

## <a name="cheapptrbaseoperator--gt"></a><a name="operator_ptr"></a> Operatore CHeapPtrBase:: operator-&gt;

Operatore puntatore a membro.

```
T* operator->() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore della variabile membro [CHeapPtrBase:: m_pData](#m_pdata) .

### <a name="remarks"></a>Commenti

Utilizzare questo operatore per chiamare un metodo in una classe a cui fa riferimento l' `CHeapPtrBase` oggetto. Nelle build di debug, si verificherà un errore di asserzione se `CHeapPtrBase` punta a null.

## <a name="cheapptrbaseoperator-t"></a><a name="operator_t_star"></a> CHeapPtrBase:: operator T *

Operatore cast.

```
operator T*() const throw();
```

### <a name="remarks"></a>Commenti

Restituisce [CHeapPtrBase:: m_pData](#m_pdata).

## <a name="cheapptrbasereallocatebytes"></a><a name="reallocatebytes"></a> CHeapPtrBase:: ReallocateBytes

Chiamare questo metodo per riallocare la memoria.

```
bool ReallocateBytes(size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*nBytes*<br/>
Nuova quantità di memoria da allocare, in byte.

### <a name="return-value"></a>Valore restituito

Restituisce true se la memoria viene allocata correttamente; in caso contrario, false.

## <a name="see-also"></a>Vedi anche

[Classe CHeapPtr](../../atl/reference/cheapptr-class.md)<br/>
[Classe CComHeapPtr](../../atl/reference/ccomheapptr-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
