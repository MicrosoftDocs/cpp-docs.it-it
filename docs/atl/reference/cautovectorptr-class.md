---
title: Classe CAutoVectorPtr | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
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
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b01bb9f74793e739ff0930bae070f00cb909dd61
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cautovectorptr-class"></a>Classe CAutoVectorPtr
Questa classe rappresenta un oggetto del puntatore intelligente usando il vettore di nuovo ed Elimina gli operatori.  
  
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
|[CAutoVectorPtr::Attach](#attach)|Chiamare questo metodo per assumere la proprietà di un indicatore di misura esistente.|  
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
|[CAutoVectorPtr::m_p](#m_p)|La variabile membro di dati puntatore.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce metodi per la creazione e gestione di un puntatore intelligente, che consentirà di evitare perdite di memoria automaticamente liberando risorse quando rientra dall'ambito. `CAutoVectorPtr`è simile a `CAutoPtr`, la sola differenza che `CAutoVectorPtr` Usa [vettore new &#91; &#93;](../../standard-library/new-operators.md#op_new_arr) e [vettore delete &#91; &#93;](../../standard-library/new-operators.md#op_delete_arr) per allocare e liberare memoria invece di C++ **nuova** e **eliminare** operatori. Vedere [CAutoVectorPtrElementTraits](../../atl/reference/cautovectorptrelementtraits-class.md) se le classi di raccolte di `CAutoVectorPtr` sono necessari.  

  
 Vedere [su CAutoPtr](../../atl/reference/cautoptr-class.md) per un esempio di utilizzo di una classe del puntatore intelligente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="allocate"></a>CAutoVectorPtr::Allocate  
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
 Nelle build di debug, un errore di asserzione si verificherà se il [CAutoVectorPtr::m_p](#m_p) variabile membro attualmente fa riferimento a un valore esistente; ovvero, non è uguale a NULL.  
  
##  <a name="attach"></a>CAutoVectorPtr::Attach  
 Chiamare questo metodo per assumere la proprietà di un indicatore di misura esistente.  
  
```
void Attach(T* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Il `CAutoVectorPtr` oggetto assumerà la proprietà del puntatore ' this '.  
  
### <a name="remarks"></a>Note  
 Quando un `CAutoVectorPtr` oggetto acquisisce la proprietà di un puntatore, verranno automaticamente eliminati il puntatore e i dati allocati quando esce dall'ambito. Se [CAutoVectorPtr::Detach](#detach) viene chiamato, il programmatore è nuovamente specificato responsabilità per liberare le risorse allocato.  
  
 Nelle build di debug, un errore di asserzione si verificherà se il [CAutoVectorPtr::m_p](#m_p) variabile membro attualmente fa riferimento a un valore esistente; ovvero, non è uguale a NULL.  
  
##  <a name="cautovectorptr"></a>CAutoVectorPtr::CAutoVectorPtr  
 Costruttore.  
  
```
CAutoVectorPtr() throw();
explicit CAutoVectorPtr(T* p) throw();
CAutoVectorPtr(CAutoVectorPtr<T>& p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Un indicatore di misura esistente.  
  
### <a name="remarks"></a>Note  
 Il `CAutoVectorPtr` oggetto può essere creato utilizzando un indicatore di misura esistente, nel qual caso trasferisce la proprietà dell'indicatore di misura.  
  
##  <a name="dtor"></a>CAutoVectorPtr:: ~ CAutoVectorPtr  
 Distruttore.  
  
```
~CAutoVectorPtr() throw();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate. Chiamate [CAutoVectorPtr::Free](#free).  
  
##  <a name="detach"></a>CAutoVectorPtr::Detach  
 Chiamare questo metodo per rilasciare la proprietà di un puntatore.  
  
```
T* Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una copia dell'indicatore di misura.  
  
### <a name="remarks"></a>Note  
 Rilascia la proprietà di un puntatore, imposta il [CAutoVectorPtr::m_p](#m_p) variabile membro su NULL e restituisce una copia dell'indicatore di misura. Dopo la chiamata **scollegamento**, è fino al programmatore di liberare le risorse allocata su cui il `CAutoVectorPtr` potrebbe avere precedentemente utilizzato oggetto responsabilità.  
  
##  <a name="free"></a>CAutoVectorPtr::Free  
 Chiamare questo metodo per eliminare un oggetto a cui fa riferimento un `CAutoVectorPtr`.  
  
```
void Free() throw();
```  
  
### <a name="remarks"></a>Note  
 L'oggetto a cui punta il `CAutoVectorPtr` viene liberato e [CAutoVectorPtr::m_p](#m_p) variabile membro è impostata su NULL.  
  
##  <a name="m_p"></a>CAutoVectorPtr::m_p  
 La variabile membro di dati puntatore.  
  
```
T* m_p;
```  
  
### <a name="remarks"></a>Note  
 Questa variabile membro contiene le informazioni di puntatore.  
  
##  <a name="operator_eq"></a>CAutoVectorPtr::operator =  
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
 L'operatore di assegnazione scollega il `CAutoVectorPtr` oggetto da qualsiasi puntatore corrente e associa il nuovo puntatore `p`, al suo posto.  
  
##  <a name="operator_t__star"></a>CAutoVectorPtr::operator T *  
 L'operatore di cast.  
  
```  
operator T*() const throw();
```  
  
### <a name="remarks"></a>Note  
 Restituisce un puntatore al tipo di dati oggetto definito nel modello di classe.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe su CAutoPtr](../../atl/reference/cautoptr-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
