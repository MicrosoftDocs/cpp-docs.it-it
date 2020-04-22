---
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
ms.openlocfilehash: e247b4f488411ffdcde5d1d9016436c9c36fe793
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81747690"
---
# <a name="cheapptrbase-class"></a>Classe CHeapPtrBase

Questa classe costituisce la base per diverse classi puntatore heap intelligente.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T, class Allocator = CCRTAllocator>
class CHeapPtrBase
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di oggetto da archiviare nell'heap.

*Allocatore*<br/>
Classe di allocazione di memoria da utilizzare. Per impostazione predefinita, le routine CRT vengono utilizzate per allocare e liberare memoria.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHeapPtrBase:: CHeapPtrBase](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHeapPtrBase::AllocateBytes](#allocatebytes)|Chiamare questo metodo per allocare memoria.|
|[CHeapPtrBase::Attach](#attach)|Chiamare questo metodo per assumere la proprietà di un puntatore esistente.|
|[CHeapPtrBase::Detach](#detach)|Chiamare questo metodo per rilasciare la proprietà di un puntatore.|
|[CHeapPtrBase::Libero](#free)|Chiamare questo metodo per eliminare un `CHeapPtrBase`oggetto a cui punta un oggetto .|
|[CHeapPtrBase::ReallocateBytes](#reallocatebytes)|Chiamare questo metodo per riallocare la memoria.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHeapPtrBase::operatore T](#operator_t_star)|Operatore di cast.|
|[CHeapPtrBase::operatore &](#operator_amp)|Operatore &.|
|[CHeapPtrBase::operatore ->](#operator_ptr)|Operatore puntatore a membro.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHeapPtrBase::m_pData](#m_pdata)|Variabile membro dati puntatore.|

## <a name="remarks"></a>Osservazioni

Questa classe costituisce la base per diverse classi puntatore heap intelligente. Le classi derivate, ad esempio [CHeapPtr](../../atl/reference/cheapptr-class.md) e [CComHeapPtr](../../atl/reference/ccomheapptr-class.md), aggiungono i propri costruttori e operatori. Vedere queste classi per esempi di implementazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore.h

## <a name="cheapptrbaseallocatebytes"></a><a name="allocatebytes"></a>CHeapPtrBase::AllocateBytes

Chiamare questo metodo per allocare memoria.

```
bool AllocateBytes(size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*nByte*<br/>
Numero di byte di memoria da allocare.

### <a name="return-value"></a>Valore restituito

Restituisce true se la memoria viene allocata correttamente, false in caso contrario.

### <a name="remarks"></a>Osservazioni

Nelle build di debug, si verificherà un errore di asserzione se la variabile membro [CHeapPtrBase::m_pData](#m_pdata) punta attualmente a un valore esistente; vale a dire, non è uguale a NULL.

## <a name="cheapptrbaseattach"></a><a name="attach"></a>CHeapPtrBase::Attach

Chiamare questo metodo per assumere la proprietà di un puntatore esistente.

```cpp
void Attach(T* pData) throw();
```

### <a name="parameters"></a>Parametri

*pDati*<br/>
L'oggetto `CHeapPtrBase` assumerà la proprietà di questo puntatore.

### <a name="remarks"></a>Osservazioni

Quando `CHeapPtrBase` un oggetto assume la proprietà di un puntatore, eliminerà automaticamente il puntatore e tutti i dati allocati quando esce dall'ambito.

Nelle build di debug, si verificherà un errore di asserzione se la variabile membro [CHeapPtrBase::m_pData](#m_pdata) punta attualmente a un valore esistente; vale a dire, non è uguale a NULL.

## <a name="cheapptrbasecheapptrbase"></a><a name="dtor"></a>CHeapPtrBase:: CHeapPtrBase

Distruttore.

```
~CHeapPtrBase() throw();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate.

## <a name="cheapptrbasedetach"></a><a name="detach"></a>CHeapPtrBase::Detach

Chiamare questo metodo per rilasciare la proprietà di un puntatore.

```
T* Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una copia del puntatore.

### <a name="remarks"></a>Osservazioni

Rilascia la proprietà di un puntatore, imposta la variabile membro [CHeapPtrBase::m_pData](#m_pdata) su NULL e restituisce una copia del puntatore.

## <a name="cheapptrbasefree"></a><a name="free"></a>CHeapPtrBase::Libero

Chiamare questo metodo per eliminare un `CHeapPtrBase`oggetto a cui punta un oggetto .

```cpp
void Free() throw();
```

### <a name="remarks"></a>Osservazioni

L'oggetto a `CHeapPtrBase` cui fa riferimento l'oggetto viene liberato e la variabile membro [CHeapPtrBase::m_pData](#m_pdata) è impostata su NULL.

## <a name="cheapptrbasem_pdata"></a><a name="m_pdata"></a>CHeapPtrBase::m_pData

Variabile membro dati puntatore.

```
T* m_pData;
```

### <a name="remarks"></a>Osservazioni

Questa variabile membro contiene le informazioni sul puntatore.

## <a name="cheapptrbaseoperator-amp"></a><a name="operator_amp"></a>CHeapPtrBase::operatore&amp;

Operatore &.

```
T** operator&() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'indirizzo dell'oggetto `CHeapPtrBase` a cui punta l'oggetto.

## <a name="cheapptrbaseoperator--gt"></a><a name="operator_ptr"></a>CHeapPtrBase::operatore -&gt;

Operatore puntatore a membro.

```
T* operator->() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore della variabile membro [CHeapPtrBase::m_pData.](#m_pdata)

### <a name="remarks"></a>Osservazioni

Utilizzare questo operatore per chiamare un metodo `CHeapPtrBase` in una classe a cui punta l'oggetto. Nelle build di debug, si verificherà un errore di asserzione se punta `CHeapPtrBase` a NULL.

## <a name="cheapptrbaseoperator-t"></a><a name="operator_t_star"></a>CHeapPtrBase::operatore T

Operatore di cast.

```
operator T*() const throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce [CHeapPtrBase::m_pData](#m_pdata).

## <a name="cheapptrbasereallocatebytes"></a><a name="reallocatebytes"></a>CHeapPtrBase::ReallocateBytes

Chiamare questo metodo per riallocare la memoria.

```
bool ReallocateBytes(size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*nByte*<br/>
Nuova quantità di memoria da allocare, in byte.

### <a name="return-value"></a>Valore restituito

Restituisce true se la memoria viene allocata correttamente, false in caso contrario.

## <a name="see-also"></a>Vedere anche

[CHeapPtr (classe)](../../atl/reference/cheapptr-class.md)<br/>
[CComHeapPtr (classe)](../../atl/reference/ccomheapptr-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
