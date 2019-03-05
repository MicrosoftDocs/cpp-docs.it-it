---
title: Classe CEvent
ms.date: 11/04/2016
f1_keywords:
- CEvent
- AFXMT/CEvent
- AFXMT/CEvent::CEvent
- AFXMT/CEvent::PulseEvent
- AFXMT/CEvent::ResetEvent
- AFXMT/CEvent::SetEvent
- AFXMT/CEvent::Unlock
helpviewer_keywords:
- CEvent [MFC], CEvent
- CEvent [MFC], PulseEvent
- CEvent [MFC], ResetEvent
- CEvent [MFC], SetEvent
- CEvent [MFC], Unlock
ms.assetid: df676042-ce27-4702-800a-e73ff4f44395
ms.openlocfilehash: d7731c87c6d6b0ebdec9a0c72c24b04334aa0662
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57300271"
---
# <a name="cevent-class"></a>Classe CEvent

Rappresenta un evento, vale a dire un oggetto di sincronizzazione che consente a un solo thread notificare a un altro che si è verificato un evento.

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
|[CEvent::PulseEvent](#pulseevent)|Imposta l'evento disponibile (segnalato), rilascia i thread in attesa e imposta l'evento su non disponibile (non segnalato).|
|[CEvent::ResetEvent](#resetevent)|Imposta l'evento su non disponibile (non segnalato).|
|[CEvent::SetEvent](#setevent)|Imposta l'evento disponibile (segnalato) e rilascia qualsiasi thread in attesa.|
|[CEvent::Unlock](#unlock)|Rilascia l'oggetto evento.|

## <a name="remarks"></a>Note

Gli eventi sono utili quando un thread necessario sapere quando eseguire la propria attività. Ad esempio, un thread che copia i dati in un archivio dati deve essere notificato quando sono disponibili nuovi dati. Usando un `CEvent` per notificare il thread di copia quando nuovi dati sono disponibili, il thread può eseguire la propria attività appena possibile.

`CEvent` gli oggetti hanno due tipi: manuale e automatico.

Un'automatica `CEvent` oggetto automaticamente restituisce uno stato non segnalato (non disponibile) dopo il rilascio di almeno un thread. Per impostazione predefinita, un `CEvent` oggetto è automatico solo se viene passato `TRUE` per il *bManualReset* parametro durante la costruzione.

Un manuale `CEvent` oggetto rimane nello stato impostato da [SetEvent](#setevent) oppure [ResetEvent](#resetevent) fino a quando non viene chiamata l'altra funzione. Per creare un manuale `CEvent` dell'oggetto, viene passato `TRUE` per il `bManualReset` parametro durante la costruzione.

Usare un `CEvent` dell'oggetto, costruire il `CEvent` oggetto quando è necessario. Specificare il nome dell'evento di cui che si vuole attendere e anche specificare che l'applicazione deve inizialmente i proprietari. È quindi possibile accedere all'evento quando viene restituito il costruttore. Chiamare [SetEvent](#setevent) segnale (rendere disponibili) l'oggetto dell'evento e quindi chiamare [Unlock](#unlock) al termine l'accesso alla risorsa controllata.

Un metodo alternativo per l'utilizzo `CEvent` oggetti consiste nell'aggiungere una variabile di tipo `CEvent` come membro dei dati per la classe a cui si vuole controllare. Durante la costruzione dell'oggetto controllato, chiamare il costruttore del `CEvent` (membro dati) e specificare se l'evento è inizialmente segnalato e anche specifythe tipo dell'oggetto evento desiderato, il nome dell'evento (se verrà usato fra i processi i limiti) e degli attributi di sicurezza desiderato.

Accedere a una risorsa controllata da un `CEvent` dell'oggetto in questo modo, prima di tutto creare una variabile di tipo [CSingleLock](../../mfc/reference/csinglelock-class.md) o un tipo [CMultiLock](../../mfc/reference/cmultilock-class.md) nel metodo di accesso della risorsa. Chiamare quindi il `Lock` metodo dell'oggetto di blocco (ad esempio [CMultiLock::Lock](../../mfc/reference/cmultilock-class.md#lock)). A questo punto, i thread verranno sia ottenere l'accesso alla risorsa, attendere che la risorsa essere rilasciato e ottenere l'accesso, attendere la risorsa deve essere rilasciato, timeout e non è possibile ottenere l'accesso alla risorsa. In ogni caso, la risorsa è stato eseguito l'accesso in modo thread-safe. Per rilasciare la risorsa, chiamare `SetEvent` per l'oggetto evento di segnale e quindi usare il `Unlock` metodo dell'oggetto di blocco (ad esempio [CMultiLock::Unlock](../../mfc/reference/cmultilock-class.md#unlock)), o lasciare che l'oggetto blocco uscire dall'ambito.

Per altre informazioni su come usare `CEvent` oggetti, vedere [Multithreading: Come usare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

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

*bInitiallyOwn*<br/>
Se TRUE, il thread per il `CMultilock` o `CSingleLock` oggetto è abilitato. In caso contrario, è necessario attendere tutti i thread che desiderano accedere alla risorsa.

*bManualReset*<br/>
Se TRUE, specifica che l'oggetto evento è un evento manuale, in caso contrario, l'oggetto evento è un evento automatico.

*lpszName*<br/>
Nome dell'oggetto `CEvent`. Deve essere specificato se l'oggetto verrà usato nell'ambito dei processi. Se il nome corrisponde a un evento esistente, il costruttore crea un nuovo `CEvent` oggetto cui fa riferimento all'evento di tale nome. Se il nome corrisponde a un oggetto di sincronizzazione esistente che non è un evento, la creazione avrà esito negativo. Se NULL, il nome sarà null.

*lpsaAttribute*<br/>
Attributi di sicurezza per l'oggetto evento. Per una descrizione completa di questa struttura, vedere [SECURITY_ATTRIBUTES](https://msdn.microsoft.com/library/windows/desktop/aa379560) nel SDK di Windows.

### <a name="remarks"></a>Note

Per accedere o rilasciare un `CEvent` dell'oggetto, creare un [CMultiLock](../../mfc/reference/cmultilock-class.md) o [CSingleLock](../../mfc/reference/csinglelock-class.md) oggetto e chiamare relativo [blocco](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) funzioni membro.

Per modificare lo stato di un `CEvent` oggetto segnalato (thread non è in attesa), chiamare [SetEvent](#setevent) oppure [PulseEvent](#pulseevent). Per impostare lo stato di un `CEvent` oggetto su non segnalato (thread devono attendere) e chiamare [ResetEvent](#resetevent).

> [!IMPORTANT]
>  Dopo aver creato il `CEvent` dell'oggetto, usare [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) per garantire che il mutex non esista già. Se il mutex non erano presenti in modo imprevisto, potrebbe indicare un processo è squatting e potrebbe voler usare mutex da utenti malintenzionati. In questo caso, la procedura di altissimo di sicurezza consigliata è di chiudere l'handle e continuare come se si è verificato un errore nella creazione dell'oggetto.

##  <a name="pulseevent"></a>  CEvent::PulseEvent

Imposta lo stato dell'evento su segnalato (disponibile), rilascia qualsiasi thread in attesa e reimpostarlo su non segnalato (non disponibile) automaticamente.

```
BOOL PulseEvent();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Se l'evento è manuale, vengono rilasciati tutti i thread in attesa, l'evento è impostato su non segnalato, e `PulseEvent` restituisce. Se l'evento è automatica, viene rilasciato un singolo thread, l'evento è impostato su non segnalato, e `PulseEvent` restituisce.

Se nessun thread in attesa o nessun thread può essere rilasciato immediatamente, `PulseEvent` imposta lo stato dell'evento su non segnalato e restituisce.

`PulseEvent` Usa Win32 sottostante `PulseEvent` funzione, che può essere temporaneamente rimosso dallo stato di attesa da una chiamata di procedura asincrono in modalità kernel. Pertanto, `PulseEvent` non è affidabile e non deve essere usata da nuove applicazioni. Per altre informazioni, vedere la [PulseEvent funzione](/windows/desktop/api/winbase/nf-winbase-pulseevent).

##  <a name="resetevent"></a>  CEvent::ResetEvent

Imposta lo stato dell'evento su non segnalato fino al impostata in modo esplicito a segnalato dal [SetEvent](#setevent) funzione membro.

```
BOOL ResetEvent();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

In questo modo tutti i thread che desiderano accedere a questo evento di attesa.

Questa funzione membro non viene utilizzata dagli eventi automatici.

##  <a name="setevent"></a>  CEvent::SetEvent

Imposta lo stato dell'evento su segnalato, qualsiasi thread in attesa di rilascio.

```
BOOL SetEvent();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo, altrimenti 0.

### <a name="remarks"></a>Note

Se l'evento è manuale, l'evento rimane segnalato finché non [ResetEvent](#resetevent) viene chiamato. Più di un thread può essere rilasciato in questo caso. Se l'evento è automatica, l'evento rimane segnalato finché non viene rilasciato un singolo thread. Il sistema imposterà quindi lo stato dell'evento su non segnalato. Se nessun thread in attesa, lo stato rimane segnalato finché non viene rilasciato un solo thread.

##  <a name="unlock"></a>  CEvent::Unlock

Rilascia l'oggetto evento.

```
BOOL Unlock();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il thread è proprietario dell'oggetto evento e l'evento è un evento automatico; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata dal thread che attualmente possiede un evento automatico per lo rilascia dopo aver completato l'attività, se l'oggetto di blocco deve essere riutilizzato. Se l'oggetto di blocco non devono essere riutilizzato, questa funzione viene chiamata dal distruttore dell'oggetto di blocco.

## <a name="see-also"></a>Vedere anche

[Classe CSyncObject](../../mfc/reference/csyncobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
