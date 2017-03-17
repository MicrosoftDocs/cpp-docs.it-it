---
title: Classe CComCriticalSection | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComCriticalSection
- ATLCORE/ATL::CComCriticalSection
- ATLCORE/ATL::CComCriticalSection::CComCriticalSection
- ATLCORE/ATL::CComCriticalSection::Init
- ATLCORE/ATL::CComCriticalSection::Lock
- ATLCORE/ATL::CComCriticalSection::Term
- ATLCORE/ATL::CComCriticalSection::Unlock
- ATLCORE/ATL::CComCriticalSection::m_sec
dev_langs:
- C++
helpviewer_keywords:
- CComCriticalSection class
ms.assetid: 44e1edd2-90be-4bfe-9739-58e8b419e7d1
caps.latest.revision: 21
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
ms.sourcegitcommit: 050e7483670bd32f633660ba44491c8bb3fc462d
ms.openlocfilehash: a7c4fbc87ff06bb09766eb3e4ad0d7c5275eed65
ms.lasthandoff: 02/24/2017

---
# <a name="ccomcriticalsection-class"></a>Classe CComCriticalSection
Questa classe fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComCriticalSection
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCriticalSection::CComCriticalSection](#ccomcriticalsection)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCriticalSection::Init](#init)|Crea e Inizializza un oggetto sezione critica.|  
|[CComCriticalSection::Lock](#lock)|Ottiene la proprietà dell'oggetto sezione critica.|  
|[CComCriticalSection::Term](#term)|Rilascia le risorse di sistema utilizzate dall'oggetto sezione critica.|  
|[CComCriticalSection::Unlock](#unlock)|Rilascia la proprietà dell'oggetto sezione critica.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCriticalSection::m_sec](#m_sec)|Oggetto **CRITICAL_SECTION** oggetto.|  
  
## <a name="remarks"></a>Note  
 `CComCriticalSection`è simile alla classe [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md), ad eccezione del fatto che è necessario inizializzare e rilascerà la sezione critica in modo esplicito.  
  
 In genere, si utilizza `CComCriticalSection` tramite il `typedef` nome [CriticalSection](ccommultithreadmodel-class.md#criticalsection). Questo nome fa riferimento a `CComCriticalSection` quando [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) è in uso.  

  
 Vedere [CComCritSecLock classe](../../atl/reference/ccomcritseclock-class.md) per un metodo più sicuro per utilizzare questa classe anziché chiamare il metodo `Lock` e `Unlock` direttamente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcore. h  
  
##  <a name="ccomcriticalsection"></a>CComCriticalSection::CComCriticalSection  
 Costruttore.  
  
```
CComCriticalSection() throw();
```  
  
### <a name="remarks"></a>Note  
 Set di [m_sec](#m_sec) membro dati null **.**  
  
##  <a name="init"></a>CComCriticalSection::Init  
 Chiama la funzione Win32 [InitializeCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms683472), che inizializza l'oggetto sezione critica contenuto nel [m_sec](#m_sec) (membro dati).  
  
```
HRESULT Init() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo, **E_OUTOFMEMORY** o **E_FAIL** in caso di errore.  
  
##  <a name="lock"></a>CComCriticalSection::Lock  
 Chiama la funzione Win32 [EnterCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms682608), quali attende che il thread può assumere la proprietà dell'oggetto sezione critica contenuta nel [m_sec](#m_sec) (membro dati).  
  
```
HRESULT Lock() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` esito positivo, **E_OUTOFMEMORY** o **E_FAIL** in caso di errore.  
  
### <a name="remarks"></a>Note  
 L'oggetto sezione critica prima deve essere inizializzato con una chiamata al [Init](#init) metodo. Al termine dell'esecuzione di codice protetto, il thread deve chiamare [Unlock](#unlock) per rilasciare la proprietà della sezione critica.  
  
##  <a name="m_sec"></a>CComCriticalSection::m_sec  
 Contiene un oggetto sezione critica che viene utilizzato da tutti `CComCriticalSection` metodi.  
  
```
CRITICAL_SECTION m_sec;
```  
  
##  <a name="term"></a>CComCriticalSection::Term  
 Chiama la funzione Win32 [DeleteCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms682552), che rilascia tutte le risorse utilizzate dall'oggetto sezione critica contenuto nel [m_sec](#m_sec) (membro dati).  
  
```
HRESULT Term() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Una volta `Term` è stato chiamato critici sezione non può essere utilizzata per la sincronizzazione.  
  
##  <a name="unlock"></a>CComCriticalSection::Unlock  
 Chiama la funzione Win32 [LeaveCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms684169), che rilascia la proprietà dell'oggetto sezione critica contenuta nel [m_sec](#m_sec) (membro dati).  
  
```
HRESULT Unlock() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Per ottenere la prima proprietà, è necessario chiamare il thread di [blocco](#lock) metodo. Ogni chiamata a `Lock` richiede una chiamata corrispondente al `Unlock` per rilasciare la proprietà della sezione critica.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe CComCritSecLock](../../atl/reference/ccomcritseclock-class.md)

