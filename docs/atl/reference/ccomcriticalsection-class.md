---
title: Classe CComCriticalSection | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b5957d55ae75723331e35984b9ab3c8e34c4fa78
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43204958"
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
|[CComCriticalSection::m_sec](#m_sec)|Un oggetto CRITICAL_SECTION.|  
  
## <a name="remarks"></a>Note  
 `CComCriticalSection` è simile alla classe [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md), ad eccezione del fatto che deve esplicitamente inizializzare e rilascerà la sezione critica.  
  
 In genere, si usa `CComCriticalSection` tramite il **typedef** name [CriticalSection](ccommultithreadmodel-class.md#criticalsection). Questo nome fa riferimento a `CComCriticalSection` quando si [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) è in uso.  

  
 Visualizzare [classe CComCritSecLock](../../atl/reference/ccomcritseclock-class.md) per utilizzare questa classe anziché in modo più sicuro `Lock` e `Unlock` direttamente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcore  
  
##  <a name="ccomcriticalsection"></a>  CComCriticalSection::CComCriticalSection  
 Costruttore.  
  
```
CComCriticalSection() throw();
```  
  
### <a name="remarks"></a>Note  
 Imposta il [m_sec](#m_sec) membro dati su NULL.  
  
##  <a name="init"></a>  CComCriticalSection::Init  
 Chiama la funzione Win32 [InitializeCriticalSection](/windows/desktop/api/synchapi/nf-synchapi-initializecriticalsection), che inizializza l'oggetto sezione critica contenuto nel [m_sec](#m_sec) (membro dati).  
  
```
HRESULT Init() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, E_OUTOFMEMORY o E_FAIL in caso di errore.  
  
##  <a name="lock"></a>  CComCriticalSection::Lock  
 Chiama la funzione Win32 [EnterCriticalSection](/windows/desktop/api/synchapi/nf-synchapi-entercriticalsection), che attende che il thread può assumere la proprietà dell'oggetto sezione critica contenuta nel [m_sec](#m_sec) (membro dati).  
  
```
HRESULT Lock() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, E_OUTOFMEMORY o E_FAIL in caso di errore.  
  
### <a name="remarks"></a>Note  
 Prima di tutto necessario inizializzare l'oggetto sezione critica con una chiamata ai [Init](#init) (metodo). Quando il codice protetto ha terminato l'esecuzione, il thread deve chiamare [Unlock](#unlock) per rilasciare la proprietà della sezione critica.  
  
##  <a name="m_sec"></a>  CComCriticalSection::m_sec  
 Contiene un oggetto sezione critica che viene usato da tutti `CComCriticalSection` metodi.  
  
```
CRITICAL_SECTION m_sec;
```  
  
##  <a name="term"></a>  CComCriticalSection::Term  
 Chiama la funzione Win32 [DeleteCriticalSection](/windows/desktop/api/synchapi/nf-synchapi-deletecriticalsection), che rilascia tutte le risorse usate dall'oggetto contenuto nella sezione critica il [m_sec](#m_sec) (membro dati).  
  
```
HRESULT Term() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK.  
  
### <a name="remarks"></a>Note  
 Una volta `Term` è stato chiamato il critici sezione non è più può essere usata per la sincronizzazione.  
  
##  <a name="unlock"></a>  CComCriticalSection::Unlock  
 Chiama la funzione Win32 [LeaveCriticalSection](/windows/desktop/api/synchapi/nf-synchapi-leavecriticalsection), che rilascia la proprietà dell'oggetto contenuto nella sezione critica il [m_sec](#m_sec) (membro dati).  
  
```
HRESULT Unlock() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK.  
  
### <a name="remarks"></a>Note  
 Per ottenere prima la proprietà, il thread deve chiamare il [blocco](#lock) (metodo). Ogni chiamata a `Lock` richiede una chiamata corrispondente al `Unlock` per rilasciare la proprietà della sezione critica.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)   
 [Classe CComCritSecLock](../../atl/reference/ccomcritseclock-class.md)
