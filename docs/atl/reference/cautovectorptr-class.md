---
title: Classe CAutoVectorPtr | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL::CAutoVectorPtr
- ATL.CAutoVectorPtr
- ATL.CAutoVectorPtr<T>
- CAutoVectorPtr
- ATL::CAutoVectorPtr<T>
dev_langs:
- C++
helpviewer_keywords:
- CAutoVectorPtr class
ms.assetid: 0030362b-6bc4-4a47-9b5b-3c3899dceab4
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: bb4bbd110552d1e3cf604add44de7e428d2703ee
ms.lasthandoff: 02/24/2017

---
# <a name="cautovectorptr-class"></a>Classe CAutoVectorPtr
Questa classe rappresenta un oggetto del puntatore intelligente con vettore nuova ed Elimina gli operatori.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename T>  
class CAutoVectorPtr
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
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
|[CAutoVectorPtr::Allocate](#allocate)|Chiamare questo metodo per allocare la memoria necessaria per la matrice di oggetti a cui puntata `CAutoVectorPtr`.|  
|[CAutoVectorPtr::Attach](#attach)|Chiamare questo metodo per assumere la proprietà di un puntatore esistente.|  
|[CAutoVectorPtr::Detach](#detach)|Chiamare questo metodo per rilasciare la proprietà di un puntatore.|  
|[CAutoVectorPtr::Free](#free)|Chiamare questo metodo per eliminare un oggetto a cui fa riferimento un `CAutoVectorPtr`.|  
  
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
 Questa classe fornisce metodi per la creazione e gestione di un puntatore intelligente, che consentirà di evitare perdite di memoria liberando risorse automaticamente quando diventa esterno all'ambito. `CAutoVectorPtr`è simile a `CAutoPtr`, la sola differenza è che `CAutoVectorPtr` utilizza [vettoriale new []](../../standard-library/new-operators.md#operator_new_arr) e [vettore delete []](../../standard-library/new-operators.md#operator_delete_arr) per allocare e liberare memoria anziché C++ **nuova** e **eliminare** operatori. Vedere [CAutoVectorPtrElementTraits](../../atl/reference/cautovectorptrelementtraits-class.md) se le classi di insiemi di `CAutoVectorPtr` sono necessari.  

  
 Vedere [su CAutoPtr](../../atl/reference/cautoptr-class.md) per un esempio dell'utilizzo di una classe di puntatore intelligente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="a-nameallocatea--cautovectorptrallocate"></a><a name="allocate"></a>CAutoVectorPtr::Allocate  
 Chiamare questo metodo per allocare la memoria necessaria per la matrice di oggetti a cui puntata `CAutoVectorPtr`.  
  
```
bool Allocate(size_t nElements) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nElements`  
 Numero di elementi nella matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se la memoria è stata allocata, false in caso di errore.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug, un errore di asserzione verificherà se il [CAutoVectorPtr::m_p](#m_p) variabile membro attualmente fa riferimento a un valore esistente, vale a dire, non è uguale a NULL.  
  
##  <a name="a-nameattacha--cautovectorptrattach"></a><a name="attach"></a>CAutoVectorPtr::Attach  
 Chiamare questo metodo per assumere la proprietà di un puntatore esistente.  
  
```
void Attach(T* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Il `CAutoVectorPtr` oggetto assumerà la proprietà del puntatore ' this '.  
  
### <a name="remarks"></a>Note  
 Quando un `CAutoVectorPtr` oggetto acquisisce la proprietà di un puntatore, verrà automaticamente eliminato il puntatore e i dati allocati quando esce dall'ambito. Se [CAutoVectorPtr::Detach](#detach) viene chiamato, il programmatore è nuovamente dato responsabilità per liberare le risorse allocato.  
  
 Nelle build di debug, un errore di asserzione verificherà se il [CAutoVectorPtr::m_p](#m_p) variabile membro attualmente fa riferimento a un valore esistente, vale a dire, non è uguale a NULL.  
  
##  <a name="a-namecautovectorptra--cautovectorptrcautovectorptr"></a><a name="cautovectorptr"></a>CAutoVectorPtr::CAutoVectorPtr  
 Costruttore.  
  
```
CAutoVectorPtr() throw();
explicit CAutoVectorPtr(T* p) throw();
CAutoVectorPtr(CAutoVectorPtr<T>& p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Un puntatore esistente.  
  
### <a name="remarks"></a>Note  
 Il `CAutoVectorPtr` oggetto può essere creato utilizzando un puntatore esistente, nel qual caso trasferisce la proprietà del puntatore.  
  
##  <a name="a-namedtora--cautovectorptrcautovectorptr"></a><a name="dtor"></a>CAutoVectorPtr:: ~ CAutoVectorPtr  
 Distruttore.  
  
```
~CAutoVectorPtr() throw();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate. Chiamate [CAutoVectorPtr::Free](#free).  
  
##  <a name="a-namedetacha--cautovectorptrdetach"></a><a name="detach"></a>CAutoVectorPtr::Detach  
 Chiamare questo metodo per rilasciare la proprietà di un puntatore.  
  
```
T* Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una copia del puntatore.  
  
### <a name="remarks"></a>Note  
 Rilascia la proprietà di un puntatore, imposta il [CAutoVectorPtr::m_p](#m_p) variabile membro su NULL e restituisce una copia del puntatore. Dopo la chiamata **scollegamento**, è fino al programmatore di liberare eventuali risorse allocata su cui il `CAutoVectorPtr` oggetto potrebbe avere precedentemente assunto responsabilità.  
  
##  <a name="a-namefreea--cautovectorptrfree"></a><a name="free"></a>CAutoVectorPtr::Free  
 Chiamare questo metodo per eliminare un oggetto a cui fa riferimento un `CAutoVectorPtr`.  
  
```
void Free() throw();
```  
  
### <a name="remarks"></a>Note  
 L'oggetto a cui punta il `CAutoVectorPtr` viene liberato e [CAutoVectorPtr::m_p](#m_p) variabile membro è impostata su NULL.  
  
##  <a name="a-namempa--cautovectorptrmp"></a><a name="m_p"></a>CAutoVectorPtr::m_p  
 La variabile di membro dati puntatore.  
  
```
T* m_p;
```  
  
### <a name="remarks"></a>Note  
 Questa variabile membro contiene le informazioni di puntatore.  
  
##  <a name="a-nameoperatoreqa--cautovectorptroperator-"></a><a name="operator_eq"></a>CAutoVectorPtr::operator =  
 L'operatore di assegnazione.  
  
```
CAutoVectorPtr<T>& operator= (CAutoVectorPtr<T>& p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Un puntatore.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento a un **CAutoVectorPtr\< T >**.  
  
### <a name="remarks"></a>Note  
 L'operatore di assegnazione consente di scollegare il `CAutoVectorPtr` oggetto da qualsiasi puntatore corrente e associa il nuovo puntatore `p`, al suo posto.  
  
##  <a name="a-nameoperatortstara--cautovectorptroperator-t-"></a><a name="operator_t__star"></a>CAutoVectorPtr::operator T *  
 L'operatore di cast.  
  
```  
operator T*() const throw();
```  
  
### <a name="remarks"></a>Note  
 Restituisce un puntatore al tipo di dati oggetto definito nel modello di classe.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe su CAutoPtr](../../atl/reference/cautoptr-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

