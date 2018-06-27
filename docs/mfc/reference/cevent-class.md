---
title: Classe CEvent | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CEvent
- AFXMT/CEvent
- AFXMT/CEvent::CEvent
- AFXMT/CEvent::PulseEvent
- AFXMT/CEvent::ResetEvent
- AFXMT/CEvent::SetEvent
- AFXMT/CEvent::Unlock
dev_langs:
- C++
helpviewer_keywords:
- CEvent [MFC], CEvent
- CEvent [MFC], PulseEvent
- CEvent [MFC], ResetEvent
- CEvent [MFC], SetEvent
- CEvent [MFC], Unlock
ms.assetid: df676042-ce27-4702-800a-e73ff4f44395
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8450f4b4105f5302750ea0f369d0e6c1dc2925ab
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36950885"
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
|[CEvent::PulseEvent](#pulseevent)|Imposta l'evento alla disponibile (segnalato), rilascia thread in attesa e imposta l'evento su non disponibile (non segnalato).|  
|[CEvent::ResetEvent](#resetevent)|Imposta l'evento su non disponibile (non segnalato).|  
|[CEvent::SetEvent](#setevent)|Imposta l'evento disponibile (segnalato) e rilascia qualsiasi thread in attesa.|  
|[CEvent::Unlock](#unlock)|Rilascia l'oggetto evento.|  
  
## <a name="remarks"></a>Note  
 Gli eventi sono utili quando un thread necessario sapere quando eseguire la relativa attività. Ad esempio, un thread che copia i dati in un archivio dati deve essere informato quando sono disponibili nuovi dati. Utilizzando un `CEvent` oggetto per notificare il thread di copia, quando nuovi dati sono disponibili, il thread può eseguire la propria attività appena possibile.  
  
 `CEvent` gli oggetti hanno due tipi: manuale e automatico.  
  
 Automatica `CEvent` object automaticamente restituisce uno stato non segnalato (non disponibile) dopo il rilascio di almeno un thread. Per impostazione predefinita, un `CEvent` oggetto è automatico a meno che non si passa `TRUE` per il *bManualReset* parametro durante la costruzione.  
  
 Un manuale `CEvent` oggetto rimane nello stato impostato da [SetEvent](#setevent) o [ResetEvent](#resetevent) fino a quando non viene chiamata l'altra funzione. Per creare un manuale `CEvent` dell'oggetto, passare `TRUE` per il `bManualReset` parametro durante la costruzione.  
  
 Per utilizzare un `CEvent` dell'oggetto, costruire il `CEvent` oggetto quando richiesto. Specificare il nome dell'evento di cui che si desidera attendere e anche specificare che l'applicazione deve inizialmente i proprietari. È quindi possibile accedere all'evento quando viene restituito il costruttore. Chiamare [SetEvent](#setevent) segnale (rendere disponibili) l'oggetto evento e quindi chiamare [Unlock](#unlock) dopo avere l'accesso alla risorsa controllata.  
  
 Un metodo alternativo per l'utilizzo `CEvent` oggetti consiste nell'aggiungere una variabile di tipo `CEvent` come un membro dati per la classe che si desidera controllare. Durante la costruzione dell'oggetto controllato, chiamare il costruttore del `CEvent` (membro dati) e specificare se l'evento viene segnalato inizialmente e anche specifythe tipo dell'oggetto evento desiderato, il nome dell'evento (se verrà utilizzata tra processo limiti) e degli attributi di sicurezza desiderato.  
  
 Accedere a una risorsa controllata da un `CEvent` dell'oggetto in questo modo, creare innanzitutto una variabile di entrambi i tipi [CSingleLock](../../mfc/reference/csinglelock-class.md) o un tipo [CMultiLock](../../mfc/reference/cmultilock-class.md) nel metodo di accesso della risorsa. Chiamare quindi il `Lock` metodo dell'oggetto di blocco (ad esempio [CMultiLock::Lock](../../mfc/reference/cmultilock-class.md#lock)). A questo punto, il thread verrà di ottenere l'accesso a risorse, attendere che la risorsa essere rilasciato e ottenere l'accesso, attendere la risorsa deve essere rilasciato, è previsto un timeout e non riescono a ottenere l'accesso alla risorsa. In ogni caso, la risorsa è stato effettuato l'accesso in modo thread-safe. Per rilasciare la risorsa, chiamare `SetEvent` per segnalare l'oggetto evento e quindi usare il `Unlock` metodo dell'oggetto di blocco (ad esempio [CMultiLock::Unlock](../../mfc/reference/cmultilock-class.md#unlock)), o si lascia l'oggetto di blocco di uscire dall'ambito.  
  
 Per ulteriori informazioni su come usare `CEvent` degli oggetti, vedere [Multithreading: utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#45](../../mfc/codesnippet/cpp/cevent-class_1.cpp)]  
  
 [!code-cpp[NVC_MFC_Utilities#46](../../mfc/codesnippet/cpp/cevent-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSyncObject](../../mfc/reference/csyncobject-class.md)  
  
 `CEvent`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmt. h  
  
##  <a name="cevent"></a>  CEvent::CEvent  
 Costruisce un nome o senza nome `CEvent` oggetto.  
  
```  
CEvent(
    BOOL bInitiallyOwn = FALSE,  
    BOOL bManualReset = FALSE,  
    LPCTSTR lpszName = NULL,  
    LPSECURITY_ATTRIBUTES lpsaAttribute = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *bInitiallyOwn*  
 Se **TRUE**, il thread per il `CMultilock` o `CSingleLock` oggetto è abilitato. In caso contrario, devono attendere tutti i thread che desiderano accedere alla risorsa.  
  
 *bManualReset*  
 Se **TRUE**, specifica che l'oggetto evento è un evento manuale, in caso contrario, l'oggetto evento è un evento automatico.  
  
 *lpszName*  
 Nome dell'oggetto `CEvent`. Specificare se verrà utilizzato l'oggetto limiti dei processi. Se il nome corrisponde a un evento esistente, il costruttore crea un nuovo `CEvent` oggetto cui fa riferimento all'evento di tale nome. Se il nome corrisponde a un oggetto di sincronizzazione esistente che non è un evento, la costruzione avrà esito negativo. Se **NULL**, il nome sarà null.  
  
 *lpsaAttribute*  
 Attributi di sicurezza per l'oggetto evento. Per una descrizione completa di questa struttura, vedere [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Per accedere o rilasciare un `CEvent` dell'oggetto, creare un [CMultiLock](../../mfc/reference/cmultilock-class.md) o [CSingleLock](../../mfc/reference/csinglelock-class.md) oggetto e chiamare il metodo relativo [blocco](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) funzioni membro.  
  
 Per modificare lo stato di un `CEvent` oggetto segnalato (thread di non dover attendere), chiamare [SetEvent](#setevent) o [PulseEvent](#pulseevent). Per impostare lo stato di un `CEvent` oggetto su non segnalato (thread devono attendere), chiamare [ResetEvent](#resetevent).  
  
> [!IMPORTANT]
>  Dopo aver creato il `CEvent` dell'oggetto, utilizzare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) per garantire che il mutex non esiste già. Se il mutex esisteva in modo imprevisto, potrebbe indicare un processo è squatting e intenda utilizzare mutex da utenti malintenzionati. In questo caso, la procedura consigliata di sicurezza è un fattore è per chiudere l'handle e continua come se si è verificato un errore nella creazione dell'oggetto.  
  
##  <a name="pulseevent"></a>  CEvent::PulseEvent  
 Imposta lo stato dell'evento su segnalato (disponibile), rilascia qualsiasi thread in attesa e reimpostarlo su non segnalato (non disponibile) automaticamente.  
  
```  
BOOL PulseEvent();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se l'evento è manuale, vengono rilasciati tutti i thread in attesa, l'evento è impostato su non segnalato, e `PulseEvent` restituisce. Se l'evento è automatica, viene rilasciato un singolo thread, l'evento è impostato su non segnalato, e `PulseEvent` restituisce.  
  
 Se nessun thread è in attesa o nessun thread può essere rilasciato immediatamente, `PulseEvent` imposta lo stato dell'evento su non segnalato e restituisce.  
  
 `PulseEvent` Usa Win32 sottostante `PulseEvent` funzione, che può essere rimossa temporaneamente dallo stato di attesa mediante una chiamata di routine asincrono in modalità kernel. Pertanto, `PulseEvent` non è attendibile e non deve essere usata da nuove applicazioni. Per altre informazioni, vedere la [funzione PulseEvent](http://msdn.microsoft.com/library/windows/desktop/ms684914).  
  
##  <a name="resetevent"></a>  CEvent::ResetEvent  
 Imposta lo stato dell'evento su non segnalato fino impostato in modo esplicito a segnalato dal [SetEvent](#setevent) funzione membro.  
  
```  
BOOL ResetEvent();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 In questo modo tutti i thread che desiderano accedere a questo evento di attesa.  
  
 Questa funzione membro non viene utilizzata dagli eventi automatico.  
  
##  <a name="setevent"></a>  CEvent::SetEvent  
 Imposta lo stato dell'evento su segnalato, come rilasciare qualsiasi thread in attesa.  
  
```  
BOOL SetEvent();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se l'evento è manuale, l'evento rimarrà segnalato fino a quando [ResetEvent](#resetevent) viene chiamato. Più di un thread può essere rilasciato in questo caso. Se l'evento è automatica, l'evento rimarrà segnalato fino a quando non viene rilasciato un singolo thread. Il sistema verrà quindi impostato lo stato dell'evento su non segnalato. Se nessun thread è in attesa, lo stato rimane segnalato fino a quando non viene rilasciato un thread.  
  
##  <a name="unlock"></a>  CEvent::Unlock  
 Rilascia l'oggetto evento.  
  
```  
BOOL Unlock();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il thread di proprietà dell'oggetto evento e l'evento è un evento automatico; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata dal thread che dispone di un evento automatico per rilasciarlo dopo che vengono eseguite, se l'oggetto di blocco è debba essere riutilizzate. Se l'oggetto di blocco non devono essere riutilizzata, questa funzione verrà chiamata dal distruttore dell'oggetto di blocco.  
  
## <a name="see-also"></a>Vedere anche  
 [CSyncObject (classe)](../../mfc/reference/csyncobject-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)

