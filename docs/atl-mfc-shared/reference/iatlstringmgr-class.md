---
title: Classe IAtlStringMgr | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IAtlStringMgr
- ATLSIMPSTR/ATL::IAtlStringMgr
- ATLSIMPSTR/ATL::Allocate
- ATLSIMPSTR/ATL::Clone
- ATLSIMPSTR/ATL::Free
- ATLSIMPSTR/ATL::GetNilString
- ATLSIMPSTR/ATL::Reallocate
dev_langs:
- C++
helpviewer_keywords:
- shared classes, IAtlStringMgr
- memory, managing
- IAtlStringMgr class
ms.assetid: 722f0346-a770-4aa7-8f94-177be8dba823
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 85b99b0b1f35ecbc35b4096ac8c2260d0a55680d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[Clone](#clone)|Chiamare questo metodo per restituire un puntatore a un nuovo responsabile di stringa per l'utilizzo con un'altra istanza di `CSimpleStringT`.|  
|[Disponibile](#free)|Chiamare questo metodo per liberare una struttura di dati stringa.|  
|[GetNilString](#getnilstring)|Restituisce un puntatore al `CStringData` oggetto utilizzata dagli oggetti di una stringa vuota.|  
|[Riallocare](#reallocate)|Chiamare questo metodo per riallocare una struttura di dati stringa.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia gestisce la memoria utilizzata dalle classi; stringa indipendente da MFC ad esempio [CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md), [CStringT](../../atl-mfc-shared/reference/cstringt-class.md), e [CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md).  
  
 È inoltre possibile utilizzare questa classe per implementare un gestore di memoria personalizzato per la classe di stringa personalizzato. Per ulteriori informazioni, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsimpstr.h  
  
##  <a name="allocate"></a>IAtlStringMgr:: allocate  
 Alloca una nuova struttura di dati stringa.  
  
```
CStringData* Allocate(int nAllocLength,int nCharSize) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nAllocLength`  
 Il numero di caratteri nel nuovo blocco di memoria.  
  
 `nCharSize`  
 Le dimensioni (in byte) del tipo di carattere utilizzato dal gestore di stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore all'inizio del blocco di memoria appena allocata.  
  
> [!NOTE]
>  Impossibile segnalare un'allocazione non riuscita generando un'eccezione. Al contrario, un'allocazione non riuscita deve essere segnalata restituendo **NULL**.  
  
### <a name="remarks"></a>Note  
 Chiamare [IAtlStringMgr::Free](#free) o [IAtlStringMgr:: ReAllocate](#reallocate) per liberare la memoria allocata da questo metodo.  
  
> [!NOTE]
>  Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
##  <a name="clone"></a>IAtlStringMgr::Clone  
 Restituisce un puntatore a un nuovo responsabile di stringa per l'utilizzo con un'altra istanza di `CSimpleStringT`.  
  
```
IAtlStringMgr* Clone() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una copia del `IAtlStringMgr` oggetto.  
  
### <a name="remarks"></a>Note  
 In genere chiamato dal framework quando un gestore di stringhe è necessaria per una nuova stringa. Nella maggior parte dei casi, il **questo** puntatore viene restituito.  
  
 Tuttavia, se il gestore della memoria non supporta utilizzato da più istanze di `CSimpleStringT`, deve essere restituito un puntatore a un gestore di stringhe condivisibile.  
  
> [!NOTE]
>  Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
##  <a name="free"></a>IAtlStringMgr::Free  
 Libera una struttura di dati stringa.  
  
```
void Free(CStringData* pData) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pData`  
 Puntatore al blocco di memoria da liberare.  
  
### <a name="remarks"></a>Note  
 Consente di liberare il blocco di memoria specificato precedentemente allocato dal [allocare](#allocate) o [riallocare](../../atl/reference/iatlmemmgr-class.md#reallocate).  
  
> [!NOTE]
>  Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
##  <a name="getnilstring"></a>IAtlStringMgr::GetNilString  
 Restituisce un puntatore a una struttura di dati stringa per una stringa vuota.  
  
```
CStringData* GetNilString() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al `CStringData` oggetto utilizzato per rappresentare una stringa vuota.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per restituire la rappresentazione di stringa vuota.  
  
> [!NOTE]
>  Quando si implementa un gestore di stringa personalizzato, questa funzione non deve mai avere esito negativo. È possibile garantire tale requisito consiste nell'incorporare un'istanza di **CNilStringData** nella classe di gestione di stringa e restituiscono un puntatore a quell'istanza.  
  
> [!NOTE]
>  Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
##  <a name="reallocate"></a>IAtlStringMgr:: ReAllocate  
 Rialloca una struttura di dati stringa.  
  
```
CStringData* Reallocate(  
 CStringData* pData,
 int nAllocLength,
 int nCharSize) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pData`  
 Puntatore alla memoria precedentemente allocata da questo gestore di memoria.  
  
 `nAllocLength`  
 Il numero di caratteri nel nuovo blocco di memoria.  
  
 `nCharSize`  
 Le dimensioni (in byte) del tipo di carattere utilizzato dal gestore di stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore all'inizio del blocco di memoria allocata.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per ridimensionare il blocco di memoria esistente specificato dal `pData`.  
  
 Chiamare [IAtlStringMgr::Free](#free) per liberare la memoria allocata da questo metodo.  
  
> [!NOTE]
>  Per esempi di utilizzo, vedere [gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)


