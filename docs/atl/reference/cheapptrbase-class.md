---
title: Classe CHeapPtrBase | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CHeapPtrBase
- ATLCORE/ATL::CHeapPtrBase
- ATLCORE/ATL::CHeapPtrBase::AllocateBytes
- ATLCORE/ATL::CHeapPtrBase::Attach
- ATLCORE/ATL::CHeapPtrBase::Detach
- ATLCORE/ATL::CHeapPtrBase::Free
- ATLCORE/ATL::CHeapPtrBase::ReallocateBytes
- ATLCORE/ATL::CHeapPtrBase::m_pData
dev_langs:
- C++
helpviewer_keywords:
- CHeapPtrBase class
ms.assetid: 501ac1b2-fb34-4c72-b7e6-a4f1fc8fda21
caps.latest.revision: 20
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 8084104489f6f1e2358ce0cbb573f4e20a0c4fce
ms.lasthandoff: 02/24/2017

---
# <a name="cheapptrbase-class"></a>Classe CHeapPtrBase
Questa classe costituisce la base per diverse classi di puntatore intelligente dell'heap.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T, class Allocator = CCRTAllocator>  
class CHeapPtrBase
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di oggetto da archiviare nell'heap.  
  
 `Allocator`  
 La classe di allocazione di memoria da utilizzare. Per impostazione predefinita le routine CRT vengono utilizzate per allocare e liberare memoria.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeapPtrBase:: ~ CHeapPtrBase](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeapPtrBase::AllocateBytes](#allocatebytes)|Chiamare questo metodo per allocare memoria.|  
|[CHeapPtrBase::Attach](#attach)|Chiamare questo metodo per assumere la proprietà di un puntatore esistente.|  
|[CHeapPtrBase::Detach](#detach)|Chiamare questo metodo per rilasciare la proprietà di un puntatore.|  
|[CHeapPtrBase::Free](#free)|Chiamare questo metodo per eliminare un oggetto a cui fa riferimento un `CHeapPtrBase`.|  
|[CHeapPtrBase::ReallocateBytes](#reallocatebytes)|Chiamare questo metodo per riallocare la memoria.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeapPtrBase::operator T *](#operator_t_star)|L'operatore di cast.|  
|[CHeapPtrBase::operator /](#operator_amp)|L'operatore /.|  
|[CHeapPtrBase::operator->](#operator_ptr)|L'operatore puntatore a membro.|  

  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeapPtrBase::m_pData](#m_pdata)|La variabile di membro dati puntatore.|  
  
## <a name="remarks"></a>Note  
 Questa classe costituisce la base per diverse classi di puntatore intelligente dell'heap. Le classi derivate, ad esempio, [CHeapPtr](../../atl/reference/cheapptr-class.md) e [template CComHeapPtr](../../atl/reference/ccomheapptr-class.md), aggiungere i propri costruttori e operatori. Queste classi per gli esempi di implementazione, vedere.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcore. h  
  
##  <a name="allocatebytes"></a>CHeapPtrBase::AllocateBytes  
 Chiamare questo metodo per allocare memoria.  
  
```
bool AllocateBytes(size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBytes`  
 Il numero di byte di memoria da allocare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se la memoria è stata allocata, false in caso contrario.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug, un errore di asserzione verificherà se il [CHeapPtrBase::m_pData](#m_pdata) variabile membro attualmente fa riferimento a un valore esistente, vale a dire, non è uguale a NULL.  
  
##  <a name="attach"></a>CHeapPtrBase::Attach  
 Chiamare questo metodo per assumere la proprietà di un puntatore esistente.  
  
```
void Attach(T* pData) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `pData`  
 Il `CHeapPtrBase` oggetto assumerà la proprietà del puntatore ' this '.  
  
### <a name="remarks"></a>Note  
 Quando un `CHeapPtrBase` oggetto acquisisce la proprietà di un puntatore, verrà automaticamente eliminato il puntatore e i dati allocati quando esce dall'ambito.  
  
 Nelle build di debug, un errore di asserzione verificherà se il [CHeapPtrBase::m_pData](#m_pdata) variabile membro attualmente fa riferimento a un valore esistente, vale a dire, non è uguale a NULL.  
  
##  <a name="dtor"></a>CHeapPtrBase:: ~ CHeapPtrBase  
 Distruttore.  
  
```
~CHeapPtrBase() throw();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate.  
  
##  <a name="detach"></a>CHeapPtrBase::Detach  
 Chiamare questo metodo per rilasciare la proprietà di un puntatore.  
  
```
T* Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una copia del puntatore.  
  
### <a name="remarks"></a>Note  
 Rilascia la proprietà di un puntatore, imposta il [CHeapPtrBase::m_pData](#m_pdata) variabile membro su NULL e restituisce una copia del puntatore.  
  
##  <a name="free"></a>CHeapPtrBase::Free  
 Chiamare questo metodo per eliminare un oggetto a cui fa riferimento un `CHeapPtrBase`.  
  
```
void Free() throw();
```  
  
### <a name="remarks"></a>Note  
 L'oggetto a cui punta il `CHeapPtrBase` viene liberato e [CHeapPtrBase::m_pData](#m_pdata) variabile membro è impostata su NULL.  
  
##  <a name="m_pdata"></a>CHeapPtrBase::m_pData  
 La variabile di membro dati puntatore.  
  
```
T* m_pData;
```  
  
### <a name="remarks"></a>Note  
 Questa variabile membro contiene le informazioni di puntatore.  
  
##  <a name="operator_amp"></a>CHeapPtrBase::operator&amp;  
 L'operatore /.  
  
```
T** operator&() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'indirizzo dell'oggetto a cui fa riferimento il `CHeapPtrBase` oggetto.  
  

##  <a name="operator_ptr"></a>CHeapPtrBase::operator-&gt;  

 L'operatore puntatore a membro.  
  
```
T* operator->() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di [CHeapPtrBase::m_pData](#m_pdata) variabile membro.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo operatore per chiamare un metodo in una classe a cui fa riferimento il `CHeapPtrBase` oggetto. Nelle build di debug, un errore di asserzione verificherà se il `CHeapPtrBase` fa riferimento a NULL.  
  
##  <a name="operator_t_star"></a>CHeapPtrBase::operator T *  
 L'operatore di cast.  
  
```  
operator T*() const throw();
```  
  
### <a name="remarks"></a>Note  
 Restituisce [CHeapPtrBase::m_pData](#m_pdata).  
  
##  <a name="reallocatebytes"></a>CHeapPtrBase::ReallocateBytes  
 Chiamare questo metodo per riallocare la memoria.  
  
```
bool ReallocateBytes(size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBytes`  
 La nuova quantità di memoria da allocare, in byte.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se la memoria è stata allocata, false in caso contrario.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CHeapPtr](../../atl/reference/cheapptr-class.md)   
 [Classe template CComHeapPtr](../../atl/reference/ccomheapptr-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

