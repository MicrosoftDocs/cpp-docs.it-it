---
title: Classe CComCriticalSection | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
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
dev_langs: C++
helpviewer_keywords: CComCriticalSection class
ms.assetid: 44e1edd2-90be-4bfe-9739-58e8b419e7d1
caps.latest.revision: "21"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ef8ca542ef9bda72bd89b633d42db727bce3e94a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
 `CComCriticalSection`è simile alla classe [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md), ad eccezione del fatto che è necessario eseguire in modo esplicito inizializzare e il rilascio della sezione critica.  
  
 In genere, si utilizza `CComCriticalSection` tramite il `typedef` nome [CriticalSection](ccommultithreadmodel-class.md#criticalsection). Questo nome fa riferimento a `CComCriticalSection` quando [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) è in uso.  

  
 Vedere [CComCritSecLock classe](../../atl/reference/ccomcritseclock-class.md) per un metodo più sicuro per utilizzare questa classe anziché `Lock` e `Unlock` direttamente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcore  
  
##  <a name="ccomcriticalsection"></a>CComCriticalSection::CComCriticalSection  
 Costruttore.  
  
```
CComCriticalSection() throw();
```  
  
### <a name="remarks"></a>Note  
 Imposta il [m_sec](#m_sec) un membro dati NULL **.**  
  
##  <a name="init"></a>CComCriticalSection::Init  
 Chiama la funzione Win32 [InitializeCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms683472), che inizializza l'oggetto sezione critica contenuto nel [m_sec](#m_sec) (membro dati).  
  
```
HRESULT Init() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` in caso di esito positivo **E_OUTOFMEMORY** o **E_FAIL** in caso di errore.  
  
##  <a name="lock"></a>CComCriticalSection::Lock  
 Chiama la funzione Win32 [EnterCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms682608), che attende fino a quando il thread può diventare proprietario dell'oggetto sezione critica contenuta nel [m_sec](#m_sec) (membro dati).  
  
```
HRESULT Lock() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` in caso di esito positivo **E_OUTOFMEMORY** o **E_FAIL** in caso di errore.  
  
### <a name="remarks"></a>Note  
 L'oggetto sezione critica deve essere prima inizializzato con una chiamata al [Init](#init) metodo. Al termine dell'esecuzione di codice protetto, è necessario chiamare il thread [Unlock](#unlock) per rilasciare la proprietà della sezione critica.  
  
##  <a name="m_sec"></a>CComCriticalSection::m_sec  
 Contiene un oggetto sezione critica che viene utilizzato da tutti i `CComCriticalSection` metodi.  
  
```
CRITICAL_SECTION m_sec;
```  
  
##  <a name="term"></a>CComCriticalSection::Term  
 Chiama la funzione Win32 [DeleteCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms682552), che rilascia tutte le risorse usate dall'oggetto sezione critica contenuto nel [m_sec](#m_sec) (membro dati).  
  
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
 Per ottenere la prima proprietà, è necessario chiamare il thread di [blocco](#lock) metodo. Ogni chiamata a `Lock` richiede una chiamata corrispondente a `Unlock` per rilasciare la proprietà della sezione critica.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe CComCritSecLock](../../atl/reference/ccomcritseclock-class.md)
