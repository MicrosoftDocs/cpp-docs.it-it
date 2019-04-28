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
ms.openlocfilehash: 978d33c719b9cb8c2708dc97fa78874534dfd748
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62199827"
---
# <a name="iatlstringmgr-class"></a>Classe IAtlStringMgr

Questa classe rappresenta l'interfaccia per un `CStringT` gestore della memoria.

## <a name="syntax"></a>Sintassi

```
__interface IAtlStringMgr
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[allocare](#allocate)|Chiamare questo metodo per allocare una nuova struttura di dati stringa.|
|[Clone](#clone)|Chiamare questo metodo per restituire un puntatore a un nuovo gestore di stringa per l'uso con un'altra istanza di `CSimpleStringT`.|
|[gratuito](#free)|Chiamare questo metodo per liberare una struttura di dati stringa.|
|[GetNilString](#getnilstring)|Restituisce un puntatore al `CStringData` oggetto utilizzata dagli oggetti di una stringa vuota.|
|[Riallocare](#reallocate)|Chiamare questo metodo per riallocare una struttura di dati stringa.|

## <a name="remarks"></a>Note

Questa interfaccia gestisce la memoria utilizzata dalle classi di stringa indipendente da MFC; ad esempio [CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md), [CStringT](../../atl-mfc-shared/reference/cstringt-class.md), e [CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md).

È anche possibile usare questa classe per implementare un gestore della memoria personalizzati per la classe di stringa personalizzato. Per altre informazioni, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpstr.h

##  <a name="allocate"></a>  IAtlStringMgr::Allocate

Consente di allocare una nuova struttura di dati stringa.

```
CStringData* Allocate(int nAllocLength,int nCharSize) throw();
```

### <a name="parameters"></a>Parametri

*nAllocLength*<br/>
Il numero di caratteri del nuovo blocco di memoria.

*nCharSize*<br/>
Le dimensioni (in byte) del tipo di carattere utilizzato per la gestione di stringhe.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria appena allocata.

> [!NOTE]
>  Non segnalare un'allocazione non riuscita generando un'eccezione. Al contrario, un'allocazione non riuscita deve essere segnalata tramite la restituzione di NULL.

### <a name="remarks"></a>Note

Chiamare [IAtlStringMgr::Free](#free) oppure [IAtlStringMgr:: ReAllocate](#reallocate) per liberare la memoria allocata da questo metodo.

> [!NOTE]
>  Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

##  <a name="clone"></a>  IAtlStringMgr::Clone

Restituisce un puntatore a un nuovo gestore di stringa per l'uso con un'altra istanza di `CSimpleStringT`.

```
IAtlStringMgr* Clone() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce una copia del `IAtlStringMgr` oggetto.

### <a name="remarks"></a>Note

In genere chiamato dal framework quando è necessaria una gestione stringhe per una nuova stringa. Nella maggior parte dei casi, il **ciò** puntatore viene restituito.

Tuttavia, se il gestore della memoria non supporta usato da più istanze di `CSimpleStringT`, deve essere restituito un puntatore a una gestione stringhe condivisibile.

> [!NOTE]
>  Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

##  <a name="free"></a>  IAtlStringMgr::Free

Libera una struttura di dati stringa.

```
void Free(CStringData* pData) throw();
```

### <a name="parameters"></a>Parametri

*pData*<br/>
Puntatore al blocco di memoria da liberare.

### <a name="remarks"></a>Note

Libera il blocco di memoria specificato precedentemente allocato da [Allocate](#allocate) oppure [riallocare](../../atl/reference/iatlmemmgr-class.md#reallocate).

> [!NOTE]
>  Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

##  <a name="getnilstring"></a>  IAtlStringMgr::GetNilString

Restituisce un puntatore a una struttura di dati stringa di una stringa vuota.

```
CStringData* GetNilString() throw();
```

### <a name="return-value"></a>Valore restituito

Un puntatore al `CStringData` oggetto utilizzato per rappresentare una stringa vuota.

### <a name="remarks"></a>Note

Chiamare questa funzione per restituire la rappresentazione di una stringa vuota.

> [!NOTE]
> Quando si implementa una gestione stringhe personalizzata, questa funzione non deve avere mai esito negativo. È possibile garantire tale requisito incorporamento di un'istanza di `CNilStringData` nella classe di gestione di stringhe e restituire un puntatore a quell'istanza.

> [!NOTE]
> Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="reallocate"></a>  IAtlStringMgr::Reallocate

Rialloca una struttura di dati stringa.

```
CStringData* Reallocate(
    CStringData* pData,
    int nAllocLength,
    int nCharSize) throw();
```

### <a name="parameters"></a>Parametri

*pData*<br/>
Puntatore alla memoria precedentemente allocata da questo gestore di memoria.

*nAllocLength*<br/>
Il numero di caratteri del nuovo blocco di memoria.

*nCharSize*<br/>
Le dimensioni (in byte) del tipo di carattere utilizzato per la gestione di stringhe.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria allocata.

### <a name="remarks"></a>Note

Chiamare questa funzione per ridimensionare il blocco di memoria esistente specificato da *pData*.

Chiamare [IAtlStringMgr::Free](#free) per liberare la memoria allocata da questo metodo.

> [!NOTE]
> Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
