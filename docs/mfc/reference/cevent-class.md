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
ms.openlocfilehash: 009a17342cb92025d67bf2fe0df1b9d5c7c0c6f0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373950"
---
# <a name="cevent-class"></a>Classe CEvent

Rappresenta un evento, ovvero un oggetto di sincronizzazione che consente a un thread di notificare a un altro che si è verificato un evento.

## <a name="syntax"></a>Sintassi

```
class CEvent : public CSyncObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CEvent::CEvent (Evento)](#cevent)|Costruisce un oggetto `CEvent`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CEvent::PulseEvent (evento)](#pulseevent)|Imposta l'evento su available (segnalato), rilascia i thread in attesa e imposta l'evento su non disponibile (non segnalato).|
|[CEvent::ResetEvent (evento):ResetEvent (evento::ResetEvent)](#resetevent)|Imposta l'evento su Non disponibile (non segnalato).|
|[CEvent::SetEvent](#setevent)|Imposta l'evento su available (segnalato) e rilascia eventuali thread in attesa.|
|[CEvent::Sblocca](#unlock)|Rilascia l'oggetto evento.|

## <a name="remarks"></a>Osservazioni

Gli eventi sono utili quando un thread deve sapere quando eseguire l'attività. Ad esempio, un thread che copia i dati in un archivio dati deve ricevere una notifica quando sono disponibili nuovi dati. Utilizzando un `CEvent` oggetto per notificare il thread di copia quando sono disponibili nuovi dati, il thread può eseguire la propria attività appena possibile.

`CEvent`oggetti hanno due tipi: manuale e automatico.

Un `CEvent` oggetto automatico torna automaticamente a uno stato non segnalato (non disponibile) dopo il rilascio di almeno un thread. Per impostazione `CEvent` predefinita, un `TRUE` oggetto è automatico a meno che non venga passato per il parametro *bManualReset* durante la costruzione.

Un `CEvent` oggetto manuale rimane nello stato impostato da [SetEvent](#setevent) o [ResetEvent](#resetevent) finché non viene chiamata l'altra funzione. Per creare `CEvent` un oggetto `TRUE` manuale, passare il parametro durante la `bManualReset` costruzione.

Per utilizzare `CEvent` un oggetto, costruire l'oggetto `CEvent` quando è necessario. Specificare il nome dell'evento che si desidera attendere e specificare che l'applicazione deve essere proprietaria inizialmente. È quindi possibile accedere all'evento quando il costruttore restituisce . Chiamare [SetEvent](#setevent) per segnalare (rendere disponibile) l'oggetto evento e quindi chiamare [Unlock](#unlock) al termine dell'accesso alla risorsa controllata.

Un metodo alternativo `CEvent` per l'utilizzo di `CEvent` oggetti consiste nell'aggiungere una variabile di tipo come membro dati alla classe che si desidera controllare. Durante la costruzione dell'oggetto controllato, `CEvent` chiamare il costruttore del membro dati e specificare se l'evento viene inizialmente segnalato e specificare anche il tipo di oggetto evento desiderato, il nome dell'evento (se verrà utilizzato oltre i limiti del processo) e gli eventuali attributi di sicurezza desiderati.

Per accedere a una `CEvent` risorsa controllata da un oggetto in questo modo, creare innanzitutto una variabile di tipo [CSingleLock](../../mfc/reference/csinglelock-class.md) o [CMultiLock](../../mfc/reference/cmultilock-class.md) nel metodo di accesso della risorsa. Chiamare quindi `Lock` il metodo dell'oggetto di blocco, ad esempio [CMultiLock::Lock](../../mfc/reference/cmultilock-class.md#lock). A questo punto, il thread otterrà l'accesso alla risorsa, attenderà che la risorsa venga rilasciata e accese l'accesso oppure attenderà che la risorsa venga rilasciata, scada e non riesca ad accedere alla risorsa. In ogni caso, l'accesso alla risorsa è stato eseguito in modo thread-safe. Per rilasciare la `SetEvent` risorsa, chiamare per segnalare `Unlock` l'oggetto evento e quindi utilizzare il metodo dell'oggetto di blocco (ad esempio, [CMultiLock::Unlock](../../mfc/reference/cmultilock-class.md#unlock)) oppure lasciare che l'oggetto di blocco non rientri nell'ambito.

Per ulteriori informazioni sull'utilizzo `CEvent` degli oggetti, vedere [Multithreading: utilizzo delle classi](../../parallel/multithreading-how-to-use-the-synchronization-classes.md)di sincronizzazione .

## <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#45](../../mfc/codesnippet/cpp/cevent-class_1.cpp)]

[!code-cpp[NVC_MFC_Utilities#46](../../mfc/codesnippet/cpp/cevent-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CSyncObject](../../mfc/reference/csyncobject-class.md)

`CEvent`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt.h

## <a name="ceventcevent"></a><a name="cevent"></a>CEvent::CEvent (Evento)

Costruisce un oggetto denominato `CEvent` o senza nome.

```
CEvent(
    BOOL bInitiallyOwn = FALSE,
    BOOL bManualReset = FALSE,
    LPCTSTR lpszName = NULL,
    LPSECURITY_ATTRIBUTES lpsaAttribute = NULL);
```

### <a name="parameters"></a>Parametri

*bInizialmenteProprietà*<br/>
Se TRUE, il `CMultilock` thread `CSingleLock` per l'oggetto o è abilitato. In caso contrario, tutti i thread che desiderano accedere alla risorsa devono attendere.

*bReservermanuale*<br/>
Se TRUE, specifica che l'oggetto evento è un evento manuale, altrimenti l'oggetto evento è un evento automatico.

*lpszName*<br/>
Nome dell'oggetto `CEvent`. Deve essere fornito se l'oggetto verrà utilizzato oltre i limiti del processo. Se il nome corrisponde a un evento `CEvent` esistente, il costruttore compila un nuovo oggetto che fa riferimento all'evento di tale nome. Se il nome corrisponde a un oggetto di sincronizzazione esistente che non è un evento, la costruzione avrà esito negativo. Se NULL, il nome sarà null.

*LpsaAttribu*<br/>
Attributi di sicurezza per l'oggetto evento. Per una descrizione completa di questa struttura, vedere [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Per accedere o `CEvent` rilasciare un oggetto, creare un [oggetto CMultiLock](../../mfc/reference/cmultilock-class.md) o [CSingleLock](../../mfc/reference/csinglelock-class.md) e chiamare le relative funzioni membro [Lock](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) .

Per modificare lo `CEvent` stato di un oggetto in segnalato (i thread non devono attendere), chiamare [SetEvent](#setevent) o [PulseEvent](#pulseevent). Per impostare lo `CEvent` stato di un oggetto su non segnalato (i thread devono attendere), chiamare [ResetEvent](#resetevent).

> [!IMPORTANT]
> Dopo aver `CEvent` creato l'oggetto, usare [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per assicurarsi che il mutex non esista già. Se il mutex esisteva inaspettatamente, potrebbe indicare che un processo non autorizzato è accovacciato e potrebbe essere intenzionato a utilizzare il mutex maliziosamente. In questo caso, la procedura consigliata per la sicurezza è quella di chiudere l'handle e continuare come se si fosse verificato un errore nella creazione dell'oggetto.

## <a name="ceventpulseevent"></a><a name="pulseevent"></a>CEvent::PulseEvent (evento)

Imposta lo stato dell'evento su segnalato (disponibile), rilascia eventuali thread in attesa e lo reimposta automaticamente su non segnalato (non disponibile).

```
BOOL PulseEvent();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se l'evento è manuale, tutti i thread in attesa `PulseEvent` vengono rilasciati, l'evento viene impostato su non segnalato e restituisce. Se l'evento è automatico, viene rilasciato un singolo thread, `PulseEvent` l'evento viene impostato su non segnalato e restituisce.

Se nessun thread è in attesa o `PulseEvent` nessun thread può essere rilasciato immediatamente, imposta lo stato dell'evento su non segnalato e restituisce.

`PulseEvent`utilizza la funzione `PulseEvent` Win32 sottostante, che può essere momentaneamente rimossa dallo stato di attesa da una chiamata di procedura asincrona in modalità kernel. Pertanto, `PulseEvent` è inaffidabile e non deve essere utilizzato da nuove applicazioni. Per ulteriori informazioni, vedere la [funzione PulseEvent](/windows/win32/api/winbase/nf-winbase-pulseevent).

## <a name="ceventresetevent"></a><a name="resetevent"></a>CEvent::ResetEvent (evento):ResetEvent (evento::ResetEvent)

Imposta lo stato dell'evento su non segnalato fino a quando non viene impostato in modo esplicito su segnalato dalla funzione membro [SetEvent.](#setevent)

```
BOOL ResetEvent();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

In questo modo tutti i thread che desiderano accedere a questo evento di attendere.

Questa funzione membro non viene utilizzata dagli eventi automatici.

## <a name="ceventsetevent"></a><a name="setevent"></a>CEvent::SetEvent

Imposta lo stato dell'evento su segnalato, rilasciando eventuali thread in attesa.

```
BOOL SetEvent();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo, in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se l'evento è manuale, l'evento rimarrà segnalato fino a quando [resetEvent](#resetevent) viene chiamato. In questo caso è possibile rilasciare più thread. Se l'evento è automatico, l'evento rimarrà segnalato fino al rilascio di un singolo thread. Il sistema imposterà quindi lo stato dell'evento su non segnalato. Se nessun thread è in attesa, lo stato rimane segnalato fino al rilascio di un thread.

## <a name="ceventunlock"></a><a name="unlock"></a>CEvent::Sblocca

Rilascia l'oggetto evento.

```
BOOL Unlock();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il thread proprietario dell'oggetto evento e l'evento è un evento automatico; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene chiamata dai thread che attualmente possiedono un evento automatico per rilasciarlo al termine, se il relativo oggetto di blocco deve essere riutilizzato. Se l'oggetto di blocco non deve essere riutilizzato, questa funzione verrà chiamata dal distruttore dell'oggetto di blocco.

## <a name="see-also"></a>Vedere anche

[Classe CSyncObject](../../mfc/reference/csyncobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
