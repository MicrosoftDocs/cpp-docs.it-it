---
title: Classe su CAutoPtr | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAutoPtr
- ATLBASE/ATL::CAutoPtr
- ATLBASE/ATL::CAutoPtr::CAutoPtr
- ATLBASE/ATL::CAutoPtr::Attach
- ATLBASE/ATL::CAutoPtr::Detach
- ATLBASE/ATL::CAutoPtr::Free
- ATLBASE/ATL::CAutoPtr::m_p
dev_langs: C++
helpviewer_keywords: CAutoPtr class
ms.assetid: 08988d53-4fb0-4711-bdfc-8ac29c63f410
caps.latest.revision: "23"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2b8ded7bbf4dbe4e4f2ada7054cebab996934316
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cautoptr-class"></a>Classe su CAutoPtr
Questa classe rappresenta un oggetto del puntatore intelligente.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename T>  
class CAutoPtr
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di puntatore.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtr::CAutoPtr](#cautoptr)|Costruttore.|  
|[Su CAutoPtr:: ~ su CAutoPtr](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtr::Attach](#attach)|Chiamare questo metodo per assumere la proprietà di un indicatore di misura esistente.|  
|[CAutoPtr::Detach](#detach)|Chiamare questo metodo per rilasciare la proprietà di un puntatore.|  
|[CAutoPtr::Free](#free)|Chiamare questo metodo per eliminare un oggetto a cui fa riferimento un `CAutoPtr`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtr::operator T *](#operator_t_star)|L'operatore di cast.|  
|[CAutoPtr::operator =](#operator_eq)|L'operatore di assegnazione.|  
|[CAutoPtr::operator ->](#operator_ptr)|L'operatore puntatore a membro.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtr::m_p](#m_p)|La variabile membro di dati puntatore.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce metodi per la creazione e gestione di un puntatore intelligente, che consentirà di evitare perdite di memoria automaticamente liberando risorse quando rientra dall'ambito.  
  
 Inoltre, `CAutoPtr`del costruttore di copia e assegnazione operatore trasferire la proprietà dell'indicatore di misura, copia il puntatore di origine per l'indicatore di misura di destinazione e impostare il puntatore di origine su NULL. Non è pertanto possibile disporre di due `CAutoPtr` oggetti ogni memorizzando il puntatore stesso e questo riduce la possibilità di eliminazione due volte lo stesso puntatore.  
  
 `CAutoPtr`semplifica inoltre la creazione di raccolte di puntatori. Invece di derivazione di una classe di raccolta e si esegue l'override del distruttore, è più semplice creare una raccolta di `CAutoPtr` oggetti. Quando viene eliminata la raccolta, il `CAutoPtr` oggetti verranno escono dall'ambito ed eliminarsi automaticamente.  
  
 [CHeapPtr](../../atl/reference/cheapptr-class.md) e di lavoro nello stesso modo come varianti `CAutoPtr`, ad eccezione del fatto che essi allocare e liberare memoria tramite le funzioni di heap diversi anziché C++ **nuova** e **eliminare** operatori. [CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md) è simile a `CAutoPtr`, la sola differenza che utilizza **vettore new []** e **vettore delete []** per allocare e liberare memoria.  
  
 Vedere anche [CAutoPtrArray](../../atl/reference/cautoptrarray-class.md) e [CAutoPtrList](../../atl/reference/cautoptrlist-class.md) quando sono necessari matrici o elenchi di puntatori intelligenti.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#74](../../atl/codesnippet/cpp/cautoptr-class_1.cpp)]  
  
##  <a name="attach"></a>CAutoPtr::Attach  
 Chiamare questo metodo per assumere la proprietà di un indicatore di misura esistente.  
  
```
void Attach(T* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Il `CAutoPtr` oggetto assumerà la proprietà del puntatore ' this '.  
  
### <a name="remarks"></a>Note  
 Quando un `CAutoPtr` oggetto acquisisce la proprietà di un puntatore, verranno automaticamente eliminati il puntatore e i dati allocati quando esce dall'ambito. Se [CAutoPtr::Detach](#detach) viene chiamato, il programmatore è nuovamente specificato responsabilità per liberare le risorse allocato.  
  
 Nelle build di debug, un errore di asserzione si verificherà se il [CAutoPtr::m_p](#m_p) (membro dati) attualmente fa riferimento a un valore esistente; ovvero, non è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).  
  
##  <a name="cautoptr"></a>CAutoPtr::CAutoPtr  
 Costruttore.  
  
```
CAutoPtr() throw();
explicit CAutoPtr(T* p) throw();

template<typename TSrc>
CAutoPtr(CAutoPtr<TSrc>& p) throw();

template<> 
CAutoPtr(CAutoPtr<T>& p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Un indicatore di misura esistente.  
  
 `TSrc`  
 Il tipo gestito da un altro `CAutoPtr`, utilizzato per inizializzare l'oggetto corrente.  
  
### <a name="remarks"></a>Note  
 Il `CAutoPtr` oggetto può essere creato utilizzando un indicatore di misura esistente, nel qual caso trasferisce la proprietà dell'indicatore di misura.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).  
  
##  <a name="dtor"></a>Su CAutoPtr:: ~ su CAutoPtr  
 Distruttore.  
  
```
~CAutoPtr() throw();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate. Chiamate [CAutoPtr::Free](#free).  
  
##  <a name="detach"></a>CAutoPtr::Detach  
 Chiamare questo metodo per rilasciare la proprietà di un puntatore.  
  
```
T* Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una copia dell'indicatore di misura.  
  
### <a name="remarks"></a>Note  
 Rilascia la proprietà di un puntatore, imposta il [CAutoPtr::m_p](#m_p) variabile membro dati su NULL e restituisce una copia dell'indicatore di misura. Dopo la chiamata **scollegamento**, è fino al programmatore di liberare le risorse allocata su cui il `CAutoPtr` potrebbe avere precedentemente utilizzato oggetto reponsibility.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).  
  
##  <a name="free"></a>CAutoPtr::Free  
 Chiamare questo metodo per eliminare un oggetto a cui fa riferimento un `CAutoPtr`.  
  
```
void Free() throw();
```  
  
### <a name="remarks"></a>Note  
 L'oggetto a cui punta il `CAutoPtr` viene liberato e [CAutoPtr::m_p](#m_p) variabile membro dati è impostato su NULL.  
  
##  <a name="m_p"></a>CAutoPtr::m_p  
 La variabile membro di dati puntatore.  
  
```
T* m_p;
```  
  
### <a name="remarks"></a>Note  
 Questa variabile membro contiene le informazioni di puntatore.  
  
##  <a name="operator_eq"></a>CAutoPtr::operator =  
 L'operatore di assegnazione.  
  
```
template<>
CAutoPtr<T>& operator= (CAutoPtr<T>& p);

template<typename TSrc>
CAutoPtr<T>& operator= (CAutoPtr<TSrc>& p);
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Un puntatore.  
  
 `TSrc`  
 Un tipo di classe.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento a un **su CAutoPtr\< T >**.  
  
### <a name="remarks"></a>Note  
 L'operatore di assegnazione scollega il `CAutoPtr` oggetto da qualsiasi puntatore corrente e associa il nuovo puntatore `p`, al suo posto.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).  
  
##  <a name="operator_ptr"></a>CAutoPtr::operator-&gt;  
 L'operatore puntatore a membro.  
  
```
T* operator->() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore della [CAutoPtr::m_p](#m_p) variabile membro dati.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo operatore per chiamare un metodo in una classe a cui fa riferimento il `CAutoPtr` oggetto. Nelle build di debug, un errore di asserzione si verificherà se il `CAutoPtr` fa riferimento a NULL.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).  
  
##  <a name="operator_t_star"></a>CAutoPtr::operator T *  
 L'operatore di cast.  
  
```  
operator T* () const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore al tipo di dati oggetto definito nel modello di classe.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CHeapPtr](../../atl/reference/cheapptr-class.md)   
 [Classe CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
