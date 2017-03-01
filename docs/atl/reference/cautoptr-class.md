---
title: Classe su CAutoPtr | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAutoPtr
dev_langs:
- C++
helpviewer_keywords:
- CAutoPtr class
ms.assetid: 08988d53-4fb0-4711-bdfc-8ac29c63f410
caps.latest.revision: 23
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
ms.openlocfilehash: 309a3d0ddceab2995c85e156c7db09ddd7edfa86
ms.lasthandoff: 02/24/2017

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
|[CAutoPtr::Attach](#attach)|Chiamare questo metodo per assumere la proprietà di un puntatore esistente.|  
|[CAutoPtr::Detach](#detach)|Chiamare questo metodo per rilasciare la proprietà di un puntatore.|  
|[CAutoPtr::Free](#free)|Chiamare questo metodo per eliminare un oggetto a cui fa riferimento un `CAutoPtr`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtr::operator T *](#operator_t_star)|L'operatore di cast.|  
|[CAutoPtr::operator =](#operator_eq)|L'operatore di assegnazione.|  
|[CAutoPtr::operator->](#operator_ptr)|L'operatore puntatore a membro.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtr::m_p](#m_p)|La variabile di membro dati puntatore.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce metodi per la creazione e gestione di un puntatore intelligente, che consentirà di evitare perdite di memoria liberando risorse automaticamente quando diventa esterno all'ambito.  
  
 Inoltre, `CAutoPtr`del costruttore di copia e assegnazione operatore trasferire la proprietà del puntatore, copiando il puntatore di origine al puntatore di destinazione e impostare il puntatore di origine su NULL. Non è pertanto possibile disporre di due `CAutoPtr` oggetti ogni memorizza il puntatore stesso e questo riduce la possibilità di eliminare due volte lo stesso puntatore.  
  
 `CAutoPtr`semplifica inoltre la creazione di raccolte di puntatori. Anziché derivare una classe di raccolta e si esegue l'override del distruttore, è più semplice creare una raccolta di `CAutoPtr` oggetti. Quando viene eliminata la raccolta, il `CAutoPtr` oggetti verranno escono dall'ambito ed eliminare automaticamente se stessi.  
  
 [CHeapPtr](../../atl/reference/cheapptr-class.md) e varianti funzionano nello stesso modo come `CAutoPtr`, ad eccezione del fatto che essi allocare e liberare memoria mediante funzioni degli heap diversi anziché C++ **nuova** e **eliminare** operatori. [CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md) è simile a `CAutoPtr`, la sola differenza è che usa **vettoriale new []** e **vettore delete []** per allocare e liberare memoria.  
  
 Vedere anche [CAutoPtrArray](../../atl/reference/cautoptrarray-class.md) e [CAutoPtrList](../../atl/reference/cautoptrlist-class.md) quando sono necessari le matrici o elenchi di puntatori intelligenti.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#74;](../../atl/codesnippet/cpp/cautoptr-class_1.cpp)]  
  
##  <a name="a-nameattacha--cautoptrattach"></a><a name="attach"></a>CAutoPtr::Attach  
 Chiamare questo metodo per assumere la proprietà di un puntatore esistente.  
  
```
void Attach(T* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Il `CAutoPtr` oggetto assumerà la proprietà del puntatore ' this '.  
  
### <a name="remarks"></a>Note  
 Quando un `CAutoPtr` oggetto acquisisce la proprietà di un puntatore, verrà automaticamente eliminato il puntatore e i dati allocati quando esce dall'ambito. Se [CAutoPtr::Detach](#detach) viene chiamato, il programmatore è nuovamente dato responsabilità per liberare le risorse allocato.  
  
 Nelle build di debug, un errore di asserzione verificherà se il [CAutoPtr::m_p](#m_p) (membro dati) attualmente fa riferimento a un valore esistente; ovvero, non è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).  
  
##  <a name="a-namecautoptra--cautoptrcautoptr"></a><a name="cautoptr"></a>CAutoPtr::CAutoPtr  
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
 Un puntatore esistente.  
  
 `TSrc`  
 Il tipo gestito da un altro `CAutoPtr`, utilizzato per inizializzare l'oggetto corrente.  
  
### <a name="remarks"></a>Note  
 Il `CAutoPtr` oggetto può essere creato utilizzando un puntatore esistente, nel qual caso trasferisce la proprietà del puntatore.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).  
  
##  <a name="a-namedtora--cautoptrcautoptr"></a><a name="dtor"></a>Su CAutoPtr:: ~ su CAutoPtr  
 Distruttore.  
  
```
~CAutoPtr() throw();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate. Chiamate [CAutoPtr::Free](#free).  
  
##  <a name="a-namedetacha--cautoptrdetach"></a><a name="detach"></a>CAutoPtr::Detach  
 Chiamare questo metodo per rilasciare la proprietà di un puntatore.  
  
```
T* Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una copia del puntatore.  
  
### <a name="remarks"></a>Note  
 Rilascia la proprietà di un puntatore, imposta il [CAutoPtr::m_p](#m_p) variabile membro dati su NULL e restituisce una copia del puntatore. Dopo la chiamata **scollegamento**, è fino al programmatore di liberare eventuali risorse allocata su cui il `CAutoPtr` potrebbe avere precedentemente utilizzato oggetto reponsibility.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).  
  
##  <a name="a-namefreea--cautoptrfree"></a><a name="free"></a>CAutoPtr::Free  
 Chiamare questo metodo per eliminare un oggetto a cui fa riferimento un `CAutoPtr`.  
  
```
void Free() throw();
```  
  
### <a name="remarks"></a>Note  
 L'oggetto a cui punta il `CAutoPtr` viene liberato e [CAutoPtr::m_p](#m_p) variabile membro dati è impostato su NULL.  
  
##  <a name="a-namempa--cautoptrmp"></a><a name="m_p"></a>CAutoPtr::m_p  
 La variabile di membro dati puntatore.  
  
```
T* m_p;
```  
  
### <a name="remarks"></a>Note  
 Questa variabile membro contiene le informazioni di puntatore.  
  
##  <a name="a-nameoperatoreqa--cautoptroperator-"></a><a name="operator_eq"></a>CAutoPtr::operator =  
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
 L'operatore di assegnazione consente di scollegare il `CAutoPtr` oggetto da qualsiasi puntatore corrente e associa il nuovo puntatore `p`, al suo posto.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).  
  
##  <a name="a-nameoperatorptra--cautoptroperator--gt"></a><a name="operator_ptr"></a>CAutoPtr::operator-&gt;  
 L'operatore puntatore a membro.  
  
```
T* operator->() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di [CAutoPtr::m_p](#m_p) variabile membro dati.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo operatore per chiamare un metodo in una classe a cui fa riferimento il `CAutoPtr` oggetto. Nelle build di debug, un errore di asserzione verificherà se il `CAutoPtr` fa riferimento a NULL.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [Cenni preliminari su CAutoPtr](../../atl/reference/cautoptr-class.md).  
  
##  <a name="a-nameoperatortstara--cautoptroperator-t"></a><a name="operator_t_star"></a>CAutoPtr::operator T *  
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

