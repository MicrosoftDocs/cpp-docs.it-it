---
title: Classe IAtlStringMgr | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IAtlStringMgr
dev_langs:
- C++
helpviewer_keywords:
- shared classes, IAtlStringMgr
- memory, managing
- IAtlStringMgr class
ms.assetid: 722f0346-a770-4aa7-8f94-177be8dba823
caps.latest.revision: 16
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 4ff4aa01a6d30f377560962f98a5892bdcc37837
ms.lasthandoff: 02/24/2017

---
# <a name="iatlstringmgr-class"></a>Classe IAtlStringMgr
Questa classe rappresenta l'interfaccia per un `CStringT` di gestione della memoria.  
  
## <a name="syntax"></a>Sintassi  
  
```
__interface IAtlStringMgr
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Allocare](#allocate)|Chiamare questo metodo per allocare una nuova struttura di dati stringa.|  
|[Clone](#clone)|Chiamare questo metodo per restituire un puntatore a un nuovo responsabile per l'utilizzo con un'altra istanza di stringa `CSimpleStringT`.|  
|[Gratuito](#free)|Chiamare questo metodo per liberare una struttura di dati stringa.|  
|[GetNilString](#getnilstring)|Restituisce un puntatore per il `CStringData` oggetto utilizzata dagli oggetti di una stringa vuota.|  
|[Riallocare](#reallocate)|Chiamare questo metodo per riallocare una struttura di dati stringa.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia gestisce la memoria utilizzata dalle classi di stringa indipendente da MFC; ad esempio [CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md), [CStringT](../../atl-mfc-shared/reference/cstringt-class.md), e [CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md).  
  
 È inoltre possibile utilizzare questa classe per implementare un gestore di memoria personalizzato per la classe di stringa personalizzata. Per ulteriori informazioni, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsimpstr.h  
  
##  <a name="a-nameallocatea--iatlstringmgrallocate"></a><a name="allocate"></a>IAtlStringMgr:: allocate  
 Alloca una nuova struttura di dati stringa.  
  
```
CStringData* Allocate(int nAllocLength,int nCharSize) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nAllocLength`  
 Il numero di caratteri del nuovo blocco di memoria.  
  
 `nCharSize`  
 Dimensione (in byte) del tipo di carattere utilizzato dal gestore di stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore all'inizio del blocco di memoria appena allocata.  
  
> [!NOTE]
>  Generando un'eccezione, non segnalare un'allocazione non riuscita. Al contrario, un'allocazione non riuscita deve essere segnalata restituendo **NULL**.  
  
### <a name="remarks"></a>Note  
 Chiamare [IAtlStringMgr::Free](#free) o [IAtlStringMgr:: ReAllocate](#reallocate) per liberare la memoria allocata da questo metodo.  
  
> [!NOTE]
>  Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
##  <a name="a-nameclonea--iatlstringmgrclone"></a><a name="clone"></a>IAtlStringMgr::Clone  
 Restituisce un puntatore a un nuovo responsabile per l'utilizzo con un'altra istanza di stringa `CSimpleStringT`.  
  
```
IAtlStringMgr* Clone() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una copia di `IAtlStringMgr` oggetto.  
  
### <a name="remarks"></a>Note  
 In genere chiamato dal framework quando un gestore di stringhe è necessaria per una nuova stringa. Nella maggior parte dei casi, il **questo** puntatore viene restituito.  
  
 Tuttavia, se il gestore della memoria non supporta utilizzata da più istanze di `CSimpleStringT`, deve essere restituito un puntatore a un gestore di stringhe condivisibile.  
  
> [!NOTE]
>  Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
##  <a name="a-namefreea--iatlstringmgrfree"></a><a name="free"></a>IAtlStringMgr::Free  
 Libera una struttura di dati stringa.  
  
```
void Free(CStringData* pData) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pData`  
 Puntatore al blocco di memoria da liberare.  
  
### <a name="remarks"></a>Note  
 Consente di liberare il blocco di memoria specificata precedentemente allocato dal [alloca](#allocate) o [riallocare](../../atl/reference/iatlmemmgr-class.md#reallocate).  
  
> [!NOTE]
>  Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
##  <a name="a-namegetnilstringa--iatlstringmgrgetnilstring"></a><a name="getnilstring"></a>IAtlStringMgr::GetNilString  
 Restituisce un puntatore a una struttura di dati stringa per una stringa vuota.  
  
```
CStringData* GetNilString() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il `CStringData` oggetto utilizzato per rappresentare una stringa vuota.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per restituire la rappresentazione di stringa vuota.  
  
> [!NOTE]
>  Quando si implementa un gestore di stringhe personalizzate, questa funzione non deve mai avere esito negativo. È possibile garantire tale requisito consiste nell'incorporare un'istanza di **CNilStringData** nella classe di gestione di stringa e restituiscono un puntatore a quell'istanza.  
  
> [!NOTE]
>  Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
##  <a name="a-namereallocatea--iatlstringmgrreallocate"></a><a name="reallocate"></a>IAtlStringMgr:: ReAllocate  
 Rialloca una struttura di dati stringa.  
  
```
CStringData* Reallocate(  
 CStringData* pData,
 int nAllocLength,
 int nCharSize) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pData`  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria.  
  
 `nAllocLength`  
 Il numero di caratteri del nuovo blocco di memoria.  
  
 `nCharSize`  
 Dimensione (in byte) del tipo di carattere utilizzato dal gestore di stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore all'inizio del blocco di memoria allocata.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per ridimensionare il blocco di memoria esistente specificato da `pData`.  
  
 Chiamare [IAtlStringMgr::Free](#free) per liberare la memoria allocata da questo metodo.  
  
> [!NOTE]
>  Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)



