---
title: Classe CEvent | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CEvent
dev_langs:
- C++
helpviewer_keywords:
- synchronization objects, event
- synchronization classes, CEvent class
- CEvent class
ms.assetid: df676042-ce27-4702-800a-e73ff4f44395
caps.latest.revision: 27
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 9edadeec87cf04ae6166c173c65463d1509eb1d8
ms.lasthandoff: 02/24/2017

---
# <a name="cevent-class"></a>CEvent (classe)
Rappresenta un evento, ovvero un oggetto di sincronizzazione che consente a un thread di notificare a un altro che si è verificato un evento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CEvent : public CSyncObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CEvent::CEvent](#cevent)|Costruisce un oggetto `CEvent`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CEvent::PulseEvent](#pulseevent)|Imposta l'evento disponibile (segnalato) rilascia i thread in attesa e imposta l'evento su non disponibile (non segnalato).|  
|[CEvent::ResetEvent](#resetevent)|Imposta l'evento su non disponibile (non segnalato).|  
|[CEvent::SetEvent](#setevent)|Imposta l'evento disponibile (segnalato) e rilascia qualsiasi thread in attesa.|  
|[CEvent::Unlock](#unlock)|Rilascia l'oggetto evento.|  
  
## <a name="remarks"></a>Note  
 Gli eventi sono utili quando un thread deve sapere quando eseguire la propria attività. Ad esempio, un thread che copia i dati in un archivio dati deve essere notificato quando sono disponibili nuovi dati. Utilizzando un `CEvent` oggetto di notificare il thread di copia quando nuovi dati sono disponibili, il thread può eseguire la propria attività appena possibile.  
  
 `CEvent`gli oggetti hanno due tipi: manuale e automatico.  
  
 Automatico `CEvent` oggetto automaticamente restituisce uno stato non segnalato (non disponibile) dopo il rilascio di almeno un thread. Per impostazione predefinita, un `CEvent` oggetto è automatico, a meno che non si passa `TRUE` per il `bManualReset` parametro durante la costruzione.  
  
 Un manuale `CEvent` oggetto rimane nello stato impostato da [SetEvent](#setevent) o [ResetEvent](#resetevent) fino a quando non viene chiamata l'altra funzione. Per creare un manuale `CEvent` oggetto, passare `TRUE` per il `bManualReset` parametro durante la costruzione.  
  
 Per utilizzare un `CEvent` dell'oggetto, creare il `CEvent` dell'oggetto quando è necessaria. Specificare il nome dell'evento di cui che si desidera attendere e anche specificare che l'applicazione deve inizialmente proprietari. È quindi possibile accedere all'evento quando viene restituito il costruttore. Chiamare [SetEvent](#setevent) segnale (rendere disponibili) l'oggetto evento e chiamare quindi [Unlock](#unlock) una volta completata l'accesso alla risorsa controllata.  
  
 Un metodo alternativo per l'utilizzo di `CEvent` oggetti consiste nell'aggiungere una variabile di tipo `CEvent` come un membro dati alla classe che si desidera controllare. Durante la costruzione dell'oggetto controllato, chiamare il costruttore del `CEvent` (membro dati) e specificare se l'evento è inizialmente segnalato e anche specifythe tipo dell'oggetto evento desiderato, il nome dell'evento (se verrà utilizzata nell'ambito dei processi), e sicurezza di tutti gli attributi si desidera.  
  
 Accedere a una risorsa controllata da un `CEvent` oggetto in questo modo, creare innanzitutto una variabile di tipo [CSingleLock](../../mfc/reference/csinglelock-class.md) o tipo [CMultiLock](../../mfc/reference/cmultilock-class.md) nel metodo di accesso della risorsa. Chiamare quindi il `Lock` metodo dell'oggetto di blocco (ad esempio, [CMultiLock::Lock](../../mfc/reference/cmultilock-class.md#lock)). A questo punto, il thread verrà di accedere alla risorsa, attendere che la risorsa rilasciare e ottenere l'accesso o attendere che la risorsa deve essere rilasciato, timeout e non riescono a ottenere l'accesso alla risorsa. In ogni caso, la risorsa che si accede in modo thread-safe. Per rilasciare la risorsa, chiamare `SetEvent` per segnalare l'oggetto evento e quindi utilizzare il `Unlock` metodo dell'oggetto di blocco (ad esempio, [CMultiLock::Unlock](../../mfc/reference/cmultilock-class.md#unlock)), o lasciare che l'oggetto di blocco uscire dall'ambito.  
  
 Per ulteriori informazioni su come usare `CEvent` degli oggetti, vedere [Multithreading: procedura: utilizzare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## <a name="example"></a>Esempio  
 [!code-cpp[N. NVC_MFC_Utilities&45;](../../mfc/codesnippet/cpp/cevent-class_1.cpp)]  
  
 [!code-cpp[NVC_MFC_Utilities n.&46;](../../mfc/codesnippet/cpp/cevent-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSyncObject](../../mfc/reference/csyncobject-class.md)  
  
 `CEvent`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmt. h  
  
##  <a name="a-nameceventa--ceventcevent"></a><a name="cevent"></a>CEvent::CEvent  
 Costruisce un nome o senza nome `CEvent` oggetto.  
  
```  
CEvent(
    BOOL bInitiallyOwn = FALSE,  
    BOOL bManualReset = FALSE,  
    LPCTSTR lpszName = NULL,  
    LPSECURITY_ATTRIBUTES lpsaAttribute = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `bInitiallyOwn`  
 Se **TRUE**, il thread per il **CMultilock** o `CSingleLock` oggetto è attivato. In caso contrario, è necessario attendere tutti i thread che desiderano accedere alla risorsa.  
  
 *bManualReset*  
 Se **TRUE**, specifica che l'oggetto evento è un evento manuale, in caso contrario l'oggetto evento è un evento automatico.  
  
 `lpszName`  
 Nome dell'oggetto `CEvent`. Deve essere specificato se l'oggetto verrà utilizzato nell'ambito dei processi. Se il nome corrisponde a un evento esistente, il costruttore crea un nuovo `CEvent` oggetto cui fa riferimento all'evento di tale nome. Se il nome corrisponde a un oggetto di sincronizzazione esistente che non è un evento, la costruzione avrà esito negativo. Se **NULL**, il nome sarà null.  
  
 `lpsaAttribute`  
 Attributi di sicurezza per l'oggetto evento. Per una descrizione completa di questa struttura, vedere [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Per accedere o rilasciare un `CEvent` dell'oggetto, creare un [CMultiLock](../../mfc/reference/cmultilock-class.md) o [CSingleLock](../../mfc/reference/csinglelock-class.md) oggetto e chiamare il metodo relativo [blocco](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) funzioni membro.  
  
 Per modificare lo stato di un `CEvent` oggetto segnalato (thread non è in attesa), chiamare [SetEvent](#setevent) o [PulseEvent](#pulseevent). Per impostare lo stato di un `CEvent` oggetto su non segnalato (thread deve attendere), chiamare [ResetEvent](#resetevent).  
  
> [!IMPORTANT]
>  Dopo aver creato il `CEvent` , utilizzare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) per garantire che il mutex non esiste già. Se il mutex non erano presenti in modo imprevisto, potrebbe indicare un processo è squatting e intenda utilizzare mutex da utenti malintenzionati. In questo caso, la procedura consigliata di protezione è un fattore è per chiudere l'handle e procedere come se si è verificato un errore nella creazione dell'oggetto.  
  
##  <a name="a-namepulseeventa--ceventpulseevent"></a><a name="pulseevent"></a>CEvent::PulseEvent  
 Imposta lo stato dell'evento su segnalato (disponibile) e rilascia qualsiasi thread in attesa viene reimpostato su non segnalato (non disponibile) automaticamente.  
  
```  
BOOL PulseEvent();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se l'evento è manuale, vengono rilasciati tutti i thread in attesa, l'evento è impostato su non segnalato, e `PulseEvent` restituisce. Se l'evento è automatico, viene rilasciato un singolo thread, l'evento è impostato su non segnalato, e `PulseEvent` restituisce.  
  
 Se nessun thread è in attesa o nessun thread può essere rilasciato immediatamente, `PulseEvent` imposta lo stato dell'evento su non segnalato e restituisce.  
  
 `PulseEvent`utilizza Win32 sottostante `PulseEvent` funzione, che può essere rimossa solo temporaneamente dallo stato di attesa mediante una chiamata di procedura asincrono in modalità kernel. Di conseguenza, `PulseEvent` non è affidabile e non deve essere utilizzato per le nuove applicazioni. Per ulteriori informazioni, vedere il [funzione PulseEvent](http://msdn.microsoft.com/library/windows/desktop/ms684914).  
  
##  <a name="a-namereseteventa--ceventresetevent"></a><a name="resetevent"></a>CEvent::ResetEvent  
 Imposta lo stato dell'evento su non segnalato finché non impostata in modo esplicito a segnalato dal [SetEvent](#setevent) funzione membro.  
  
```  
BOOL ResetEvent();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 In questo modo tutti i thread che desidera accedere a questo evento di attesa.  
  
 Questa funzione membro non viene utilizzata dagli eventi automatica.  
  
##  <a name="a-nameseteventa--ceventsetevent"></a><a name="setevent"></a>CEvent::SetEvent  
 Imposta lo stato dell'evento su segnalato, rilasciando tutti i thread in attesa.  
  
```  
BOOL SetEvent();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se l'evento è manuale, l'evento rimane segnalato fino a quando [ResetEvent](#resetevent) viene chiamato. Più di un thread può essere rilasciato in questo caso. Se l'evento è automatica, l'evento rimane segnalato fino al rilascio di un singolo thread. Il sistema verrà quindi impostare lo stato dell'evento su non segnalato. Se nessun thread è in attesa, lo stato rimane segnalato fino a quando non verrà rilasciato un thread.  
  
##  <a name="a-nameunlocka--ceventunlock"></a><a name="unlock"></a>CEvent::Unlock  
 Rilascia l'oggetto evento.  
  
```  
BOOL Unlock();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il thread proprietario dell'oggetto evento e l'evento è un evento automatico; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal thread che dispone di un evento automatico per rilasciarlo dopo aver completato l'attività, se dell'oggetto di blocco deve essere riutilizzato. Se l'oggetto non deve essere riutilizzato, questa funzione verrà chiamata dal distruttore dell'oggetto di blocco.  
  
## <a name="see-also"></a>Vedere anche  
 [CSyncObject (classe)](../../mfc/reference/csyncobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)


