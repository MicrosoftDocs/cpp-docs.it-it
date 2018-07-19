---
title: Classe CAutoPtr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CAutoPtr
- ATLBASE/ATL::CAutoPtr
- ATLBASE/ATL::CAutoPtr::CAutoPtr
- ATLBASE/ATL::CAutoPtr::Attach
- ATLBASE/ATL::CAutoPtr::Detach
- ATLBASE/ATL::CAutoPtr::Free
- ATLBASE/ATL::CAutoPtr::m_p
dev_langs:
- C++
helpviewer_keywords:
- CAutoPtr class
ms.assetid: 08988d53-4fb0-4711-bdfc-8ac29c63f410
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 118e303fe176684ea837861ef3855dd6c03fb04e
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37881136"
---
# <a name="cautoptr-class"></a>Classe CAutoPtr
Questa classe rappresenta un oggetto del puntatore intelligente.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename T>  
class CAutoPtr
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 Il tipo di puntatore.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtr::CAutoPtr](#cautoptr)|Costruttore.|  
|[CAutoPtr:: ~ CAutoPtr](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtr::Attach](#attach)|Chiamare questo metodo per acquisire la proprietà di un indicatore di misura esistente.|  
|[CAutoPtr::Detach](#detach)|Chiamare questo metodo per rilasciare la proprietà di un puntatore.|  
|[CAutoPtr::Free](#free)|Chiamare questo metodo per eliminare un oggetto a cui punta un `CAutoPtr`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtr::operator T *](#operator_t_star)|L'operatore di cast.|  
|[CAutoPtr::operator =](#operator_eq)|L'operatore di assegnazione.|  
|[CAutoPtr::operator ->](#operator_ptr)|Operatore puntatore a membro.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtr::m_p](#m_p)|La variabile di membro dati puntatore.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce metodi per la creazione e la gestione di un puntatore intelligente, che aiuterà a proteggere le perdite di memoria da automaticamente quando rientra più nell'ambito, liberando così risorse.  
  
 Inoltre, `CAutoPtr`del costruttore di copia e trasferire la proprietà operatore di assegnazione dell'indicatore di misura, copiando il puntatore di origine al puntatore di destinazione e impostare il puntatore di origine su NULL. Non è pertanto possibile disporre di due `CAutoPtr` oggetti ognuno memorizza il puntatore stesso e questo riduce la possibilità di eliminare lo stesso puntatore due volte.  
  
 `CAutoPtr` semplifica anche la creazione di raccolte di puntatori. Invece di derivazione di una classe di raccolta e il distruttore di override, risulta più semplice rendere una raccolta di `CAutoPtr` oggetti. Quando la raccolta viene eliminata, il `CAutoPtr` oggetti verranno escono dall'ambito ed eliminarsi automaticamente.  
  
 [CHeapPtr](../../atl/reference/cheapptr-class.md) e varianti lavorare nello stesso modo `CAutoPtr`, ad eccezione del fatto che si allocano e liberano memoria utilizzo delle funzioni di heap diversi anziché C++ **nuove** e **Elimina** operatori. [CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md) è simile a `CAutoPtr`, l'unica differenza è che usa **vettoriale new []** e **vettore delete []** per allocare e liberare memoria.  
  
 Vedere anche [CAutoPtrArray](../../atl/reference/cautoptrarray-class.md) e [CAutoPtrList](../../atl/reference/cautoptrlist-class.md) quando sono necessari matrici o elenchi di puntatori intelligenti.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#74](../../atl/codesnippet/cpp/cautoptr-class_1.cpp)]  
  
##  <a name="attach"></a>  CAutoPtr::Attach  
 Chiamare questo metodo per acquisire la proprietà di un indicatore di misura esistente.  
  
```
void Attach(T* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 Il `CAutoPtr` oggetto assumerà la proprietà del puntatore ' this '.  
  
### <a name="remarks"></a>Note  
 Quando un `CAutoPtr` oggetto acquisisce la proprietà di un puntatore, eliminerà automaticamente tutti i dati allocati e il puntatore del mouse quando esce dall'ambito. Se [CAutoPtr::Detach](#detach) viene chiamato, il programmatore è nuovo dato responsabilità per il rilascio di qualsiasi le risorse allocato.  
  
 Nelle build di debug, un errore di asserzione si verificherà se il [CAutoPtr::m_p](#m_p) membro dati attualmente punta a un valore esistente; vale a dire non è uguale a NULL.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [CAutoPtr Panoramica](../../atl/reference/cautoptr-class.md).  
  
##  <a name="cautoptr"></a>  CAutoPtr::CAutoPtr  
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
 *p*  
 Un puntatore esistente.  
  
 *TSrc*  
 Il tipo gestito da un altro `CAutoPtr`, usato per inizializzare l'oggetto corrente.  
  
### <a name="remarks"></a>Note  
 Il `CAutoPtr` oggetto può essere creato usando un puntatore esistente, nel qual caso trasferisce la proprietà del puntatore.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [CAutoPtr Panoramica](../../atl/reference/cautoptr-class.md).  
  
##  <a name="dtor"></a>  CAutoPtr:: ~ CAutoPtr  
 Distruttore.  
  
```
~CAutoPtr() throw();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate. Le chiamate [CAutoPtr::Free](#free).  
  
##  <a name="detach"></a>  CAutoPtr::Detach  
 Chiamare questo metodo per rilasciare la proprietà di un puntatore.  
  
```
T* Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una copia del puntatore.  
  
### <a name="remarks"></a>Note  
 Rilascia la proprietà di un puntatore, imposta la [CAutoPtr::m_p](#m_p) variabile membro dei dati su NULL e restituisce una copia del puntatore. Dopo avere chiamato `Detach`, fino al programmatore di liberare qualsiasi allocarla risorse su cui il `CAutoPtr` oggetto può avere in precedenza si presuppone che reponsibility.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [CAutoPtr Panoramica](../../atl/reference/cautoptr-class.md).  
  
##  <a name="free"></a>  CAutoPtr::Free  
 Chiamare questo metodo per eliminare un oggetto a cui punta un `CAutoPtr`.  
  
```
void Free() throw();
```  
  
### <a name="remarks"></a>Note  
 L'oggetto a cui fa riferimento il `CAutoPtr` viene liberato e il [CAutoPtr::m_p](#m_p) variabile membro dati è impostato su NULL.  
  
##  <a name="m_p"></a>  CAutoPtr::m_p  
 La variabile di membro dati puntatore.  
  
```
T* m_p;
```  
  
### <a name="remarks"></a>Note  
 Questa variabile membro contiene le informazioni di puntatore.  
  
##  <a name="operator_eq"></a>  CAutoPtr::operator =  
 L'operatore di assegnazione.  
  
```
template<>
CAutoPtr<T>& operator= (CAutoPtr<T>& p);

template<typename TSrc>
CAutoPtr<T>& operator= (CAutoPtr<TSrc>& p);
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 Un puntatore.  
  
 *TSrc*  
 Un tipo di classe.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento a un **CAutoPtr\< T >**.  
  
### <a name="remarks"></a>Note  
 L'operatore di assegnazione consente di scollegare il `CAutoPtr` oggetti da qualsiasi puntatore corrente e associa il nuovo puntatore *p*, al suo posto.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [CAutoPtr Panoramica](../../atl/reference/cautoptr-class.md).  
  
##  <a name="operator_ptr"></a>  CAutoPtr::operator-&gt;  
 Operatore puntatore a membro.  
  
```
T* operator->() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore della [CAutoPtr::m_p](#m_p) variabile membro dati.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo operatore per chiamare un metodo in una classe a cui punta il `CAutoPtr` oggetto. Nelle build di debug, un errore di asserzione si verificherà se il `CAutoPtr` punta a NULL.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [CAutoPtr Panoramica](../../atl/reference/cautoptr-class.md).  
  
##  <a name="operator_t_star"></a>  CAutoPtr::operator T *  
 L'operatore di cast.  
  
```  
operator T* () const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore al tipo di dati di oggetto definito nel modello di classe.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio nel [CAutoPtr Panoramica](../../atl/reference/cautoptr-class.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CHeapPtr](../../atl/reference/cheapptr-class.md)   
 [Classe CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)
