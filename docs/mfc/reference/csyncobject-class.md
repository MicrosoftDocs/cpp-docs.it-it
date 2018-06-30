---
title: Classe CSyncObject | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CSyncObject
- AFXMT/CSyncObject
- AFXMT/CSyncObject::CSyncObject
- AFXMT/CSyncObject::Lock
- AFXMT/CSyncObject::Unlock
- AFXMT/CSyncObject::m_hObject
dev_langs:
- C++
helpviewer_keywords:
- CSyncObject [MFC], CSyncObject
- CSyncObject [MFC], Lock
- CSyncObject [MFC], Unlock
- CSyncObject [MFC], m_hObject
ms.assetid: c62ea6eb-a17b-4e01-aed4-321fc435a5f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bcc5290b08b6a0b6159c1ba9b0b5b05d02a178ba
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37122069"
---
# <a name="csyncobject-class"></a>CSyncObject (classe)
Classe virtuale pura che fornisce la funzionalità comune agli oggetti di sincronizzazione in Win32.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSyncObject : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSyncObject::CSyncObject](#csyncobject)|Costruisce un oggetto `CSyncObject`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSyncObject::Lock](#lock)|Ottiene l'accesso all'oggetto di sincronizzazione.|  
|[CSyncObject::Unlock](#unlock)|Ottiene l'accesso all'oggetto di sincronizzazione.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSyncObject::operator HANDLE](#operator_handle)|Fornisce l'accesso all'oggetto di sincronizzazione.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSyncObject::m_hObject](#m_hobject)|L'handle all'oggetto sottostante, la sincronizzazione.|  
  
## <a name="remarks"></a>Note  
 La libreria Microsoft Foundation Class fornisce diverse classi derivate da `CSyncObject`. Si tratta [CEvent](../../mfc/reference/cevent-class.md), [CMutex](../../mfc/reference/cmutex-class.md), [CCriticalSection](../../mfc/reference/ccriticalsection-class.md), e [CSemaphore](../../mfc/reference/csemaphore-class.md).  
  
 Per informazioni su come usare gli oggetti di sincronizzazione, vedere l'articolo [Multithreading: utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CSyncObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmt. h  
  
##  <a name="csyncobject"></a>  CSyncObject::CSyncObject  
 Costruisce un oggetto di sincronizzazione con il nome fornito.  
  
```  
explicit CSyncObject(LPCTSTR pstrName);  
virtual ~CSyncObject();
```  
  
### <a name="parameters"></a>Parametri  
 *pstrName*  
 Nome dell'oggetto. Se NULL, *pstrName* sarà null.  
  
##  <a name="lock"></a>  CSyncObject::Lock  
 Chiamare questa funzione per ottenere l'accesso alla risorsa controllata dall'oggetto di sincronizzazione.  
  
```  
virtual BOOL Lock(DWORD dwTimeout = INFINITE);
```  
  
### <a name="parameters"></a>Parametri  
 *dwTimeout*  
 Specifica la quantità di tempo in millisecondi di attesa per l'oggetto di sincronizzazione disponibilità (segnalato). Se è infinito, `Lock` attenderà fino a quando non viene segnalata l'oggetto prima della restituzione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto di sincronizzazione non viene segnalato, `Lock` restituirà correttamente e il thread ora proprietario dell'oggetto. Se l'oggetto di sincronizzazione è impostato su non segnalato (non disponibile), `Lock` attenderà per l'oggetto di sincronizzazione vengano segnalati fino al numero di millisecondi specificato nella *dwTimeOut* parametro. Se l'oggetto di sincronizzazione non è stato segnalato nel periodo di tempo, specificato `Lock` restituisce un errore.  
  
##  <a name="m_hobject"></a>  CSyncObject::m_hObject  
 L'handle all'oggetto sottostante, la sincronizzazione.  
  
```  
HANDLE m_hObject;  
```  
  
##  <a name="operator_handle"></a>  CSyncObject::operator HANDLE  
 Utilizzare questo operatore per ottenere l'handle del `CSyncObject` oggetto.  
  
```  
operator HANDLE() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se l'operazione riesce, l'handle dell'oggetto di sincronizzazione; in caso contrario, NULL.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare l'handle per chiamare direttamente le API di Windows.  
  
##  <a name="unlock"></a>  CSyncObject::Unlock  
 La dichiarazione di `Unlock` senza parametri è una funzione virtuale pura e deve essere sottoposto a override da tutte le classi che derivano da `CSyncObject`.  
  
```  
virtual BOOL Unlock() = 0; virtual BOOL Unlock(
    LONG lCount,  
    LPLONG lpPrevCount = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lCount*  
 Non utilizzato dall'implementazione predefinita.  
  
 *lpPrevCount*  
 Non utilizzato dall'implementazione predefinita.  
  
### <a name="return-value"></a>Valore restituito  
 Implementazione predefinita restituisce sempre TRUE.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita della dichiarazione con due parametri sempre restituisce TRUE. Questa funzione viene chiamata per rilasciare l'accesso all'oggetto di sincronizzazione della proprietà del thread chiamante. La seconda dichiarazione è disponibile per gli oggetti di sincronizzazione, ad esempio semafori che consentono il più accesso di una risorsa controllata.  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



