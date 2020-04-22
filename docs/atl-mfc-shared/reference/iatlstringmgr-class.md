---
title: Classe IAtlStringMgr
ms.date: 10/18/2018
f1_keywords:
- IAtlStringMgr
- ATLSIMPSTR/ATL::IAtlStringMgr
- ATLSIMPSTR/ATL::Allocate
- ATLSIMPSTR/ATL::Clone
- ATLSIMPSTR/ATL::Free
- ATLSIMPSTR/ATL::GetNilString
- ATLSIMPSTR/ATL::Reallocate
helpviewer_keywords:
- shared classes, IAtlStringMgr
- memory, managing
- IAtlStringMgr class
ms.assetid: 722f0346-a770-4aa7-8f94-177be8dba823
ms.openlocfilehash: c3fabb7a7a6da4129787d219bd83b2a35fa0c4dd
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81746603"
---
# <a name="iatlstringmgr-class"></a>Classe IAtlStringMgr

Questa classe rappresenta l'interfaccia per un `CStringT` gestore di memoria.

## <a name="syntax"></a>Sintassi

```
__interface IAtlStringMgr
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[Allocare](#allocate)|Chiamare questo metodo per allocare una nuova struttura di dati stringa.|
|[Clone](#clone) (Clona)|Chiamare questo metodo per restituire un puntatore a un `CSimpleStringT`nuovo gestore di stringhe da utilizzare con un'altra istanza di .|
|[Free](#free)|Chiamare questo metodo per liberare una struttura di dati stringa.|
|[GetNilString (Informazioni in base a P:Ao)](#getnilstring)|Restituisce un `CStringData` puntatore all'oggetto utilizzato da oggetti stringa vuota.|
|[Ridistribuire](#reallocate)|Chiamare questo metodo per riallocare una struttura di dati stringa.|

## <a name="remarks"></a>Osservazioni

Questa interfaccia gestisce la memoria utilizzata dalle classi stringa indipendenti da MFC; quali [CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md), [CStringT](../../atl-mfc-shared/reference/cstringt-class.md)e [CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md).

È inoltre possibile utilizzare questa classe per implementare un gestore di memoria personalizzato per la classe stringa personalizzata. Per ulteriori informazioni, vedere [Gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpstr.h

## <a name="iatlstringmgrallocate"></a><a name="allocate"></a>IAtlStringMgr::Allocare

Alloca una nuova struttura di dati di stringa.

```
CStringData* Allocate(int nAllocLength,int nCharSize) throw();
```

### <a name="parameters"></a>Parametri

*nAllocLength (lunghezza in talld)*<br/>
Numero di caratteri nel nuovo blocco di memoria.

*nCharSize (informazioni in base a i caratteri s*<br/>
Dimensione (in byte) del tipo di carattere utilizzato dal gestore di stringhe.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria appena allocata.

> [!NOTE]
> Non segnalare un'allocazione non riuscita generando un'eccezione. Al contrario, un'allocazione non riuscita deve essere segnalata restituendo NULL.

### <a name="remarks"></a>Osservazioni

Chiamare [IAtlStringMgr::Free](#free) o [IAtlStringMgr::ReAllocate](#reallocate) per liberare la memoria allocata da questo metodo.

> [!NOTE]
> Per esempi di utilizzo, vedere [Gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="iatlstringmgrclone"></a><a name="clone"></a>IAtlStringMgr::Clone

Restituisce un puntatore a un nuovo `CSimpleStringT`gestore di stringhe da utilizzare con un'altra istanza di .

```
IAtlStringMgr* Clone() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una copia dell'oggetto `IAtlStringMgr`.

### <a name="remarks"></a>Osservazioni

Comunemente chiamato dal framework quando è necessario un gestore di stringhe per una nuova stringa. Nella maggior parte dei casi, viene restituito il puntatore **this.**

Tuttavia, se il gestore della memoria `CSimpleStringT`non supporta l'utilizzo da più istanze di , deve essere restituito un puntatore a un gestore di stringhe condisse.

> [!NOTE]
> Per esempi di utilizzo, vedere [Gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="iatlstringmgrfree"></a><a name="free"></a>IAtlStringMgr::Disponibile

Libera una struttura di dati di stringa.

```cpp
void Free(CStringData* pData) throw();
```

### <a name="parameters"></a>Parametri

*pDati*<br/>
Puntatore al blocco di memoria da liberare.

### <a name="remarks"></a>Osservazioni

Libera il blocco di memoria specificato in precedenza allocato da [Alloca](#allocate) o [Rialloca](../../atl/reference/iatlmemmgr-class.md#reallocate).

> [!NOTE]
> Per esempi di utilizzo, vedere [Gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="iatlstringmgrgetnilstring"></a><a name="getnilstring"></a>IAtlStringMgr::GetNilString

Restituisce un puntatore a una struttura di dati stringa per una stringa vuota.

```
CStringData* GetNilString() throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto `CStringData` utilizzato per rappresentare una stringa vuota.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per restituire una rappresentazione di una stringa vuota.

> [!NOTE]
> Quando si implementa un gestore di stringhe personalizzato, questa funzione non deve mai avere esito negativo. È possibile garantire questo incorporando `CNilStringData` un'istanza di nella classe di gestione di stringhe e restituire un puntatore a tale istanza.

> [!NOTE]
> Per esempi di utilizzo, vedere [Gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="iatlstringmgrreallocate"></a><a name="reallocate"></a>IAtlStringMgr::Riallocare

Rialloca una struttura di dati di stringa.

```
CStringData* Reallocate(
    CStringData* pData,
    int nAllocLength,
    int nCharSize) throw();
```

### <a name="parameters"></a>Parametri

*pDati*<br/>
Puntatore alla memoria allocata in precedenza da questo gestore di memoria.

*nAllocLength (lunghezza in talld)*<br/>
Numero di caratteri nel nuovo blocco di memoria.

*nCharSize (informazioni in base a i caratteri s*<br/>
Dimensione (in byte) del tipo di carattere utilizzato dal gestore di stringhe.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria allocata.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per ridimensionare il blocco di memoria esistente specificato da *pData*.

Chiamare [IAtlStringMgr::Free](#free) per liberare la memoria allocata da questo metodo.

> [!NOTE]
> Per esempi di utilizzo, vedere [Gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
