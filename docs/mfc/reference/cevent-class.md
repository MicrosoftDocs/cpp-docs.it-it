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
ms.openlocfilehash: fbf2d834163199107aae44bd5723ceff79e36f91
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69506683"
---
# <a name="cevent-class"></a>Classe CEvent

Rappresenta un evento, ovvero un oggetto di sincronizzazione che consente a un thread di notificare a un altro thread che si è verificato un evento.

## <a name="syntax"></a>Sintassi

```
class CEvent : public CSyncObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CEvent:: CEvent](#cevent)|Costruisce un oggetto `CEvent`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CEvent::P ulseEvent](#pulseevent)|Imposta l'evento su disponibile (segnalato), rilascia i thread in attesa e imposta l'evento su non disponibile (non segnalato).|
|[CEvent::ResetEvent](#resetevent)|Imposta l'evento su non disponibile (non segnalato).|
|[CEvent::SetEvent](#setevent)|Imposta l'evento su disponibile (segnalato) e rilascia tutti i thread in attesa.|
|[CEvent:: Unlock](#unlock)|Rilascia l'oggetto evento.|

## <a name="remarks"></a>Note

Gli eventi sono utili quando un thread deve essere in grado di stabilire quando eseguire la relativa attività. Ad esempio, un thread che copia i dati in un archivio dati deve ricevere una notifica quando sono disponibili nuovi dati. Utilizzando un `CEvent` oggetto per notificare al thread di copia quando sono disponibili nuovi dati, il thread può eseguire l'attività il prima possibile.

`CEvent`gli oggetti hanno due tipi: manuale e automatico.

Un oggetto `CEvent` automatico ritorna automaticamente a uno stato non segnalato (non disponibile) dopo che è stato rilasciato almeno un thread. Per impostazione predefinita, `CEvent` un oggetto è automatico a meno che `TRUE` non venga passato per il parametro *bManualReset* durante la costruzione.

Un oggetto `CEvent` manuale rimane nello stato impostato da [seevent](#setevent) o [ResetEvent](#resetevent) fino a quando non viene chiamata l'altra funzione. Per creare un oggetto `CEvent` manuale, passare `TRUE` per il `bManualReset` parametro durante la costruzione.

Per usare un `CEvent` oggetto, costruire l' `CEvent` oggetto quando è necessario. Specificare il nome dell'evento che si desidera attendere e specificare anche che l'applicazione deve essere proprietaria iniziale. È quindi possibile accedere all'evento quando viene restituito il costruttore. Chiamare [seevent](#setevent) per segnalare (rendere disponibile) l'oggetto evento e quindi chiamare [Unlock](#unlock) dopo aver eseguito l'accesso alla risorsa controllata.

Un metodo alternativo per l' `CEvent` utilizzo di oggetti consiste nell'aggiungere una variabile `CEvent` di tipo come membro dati alla classe che si desidera controllare. Durante la costruzione dell'oggetto controllato, chiamare il costruttore del `CEvent` membro dati e specificare se l'evento viene inizialmente segnalato e specifythe il tipo di oggetto evento desiderato, il nome dell'evento (se verrà usato nel processo limiti) ed eventuali attributi di sicurezza desiderati.

Per accedere a una risorsa controllata da `CEvent` un oggetto in questo modo, creare prima di tutto una variabile di tipo [CSingleLock](../../mfc/reference/csinglelock-class.md) o [CMultiLock](../../mfc/reference/cmultilock-class.md) nel metodo di accesso della risorsa. Chiamare quindi il `Lock` metodo dell'oggetto Lock, ad esempio [CMultiLock:: Lock](../../mfc/reference/cmultilock-class.md#lock). A questo punto, il thread otterrà l'accesso alla risorsa, attenderà che la risorsa venga rilasciata e ottenga l'accesso oppure attenda che la risorsa venga rilasciata, il timeout e non riesca ad accedere alla risorsa. In ogni caso, l'accesso alla risorsa è stato eseguito in modo thread-safe. Per rilasciare la risorsa, chiamare `SetEvent` per segnalare l'oggetto evento, quindi usare il `Unlock` metodo dell'oggetto Lock (ad esempio, [CMultiLock:: Unlock](../../mfc/reference/cmultilock-class.md#unlock)) o lasciare che l'oggetto Lock rientri nell'ambito.

Per ulteriori informazioni sull'utilizzo `CEvent` degli oggetti, vedere [multithreading: Come usare le classi](../../parallel/multithreading-how-to-use-the-synchronization-classes.md)di sincronizzazione.

## <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#45](../../mfc/codesnippet/cpp/cevent-class_1.cpp)]

[!code-cpp[NVC_MFC_Utilities#46](../../mfc/codesnippet/cpp/cevent-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CSyncObject](../../mfc/reference/csyncobject-class.md)

`CEvent`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt. h

##  <a name="cevent"></a>CEvent:: CEvent

Costruisce un `CEvent` oggetto denominato o senza nome.

```
CEvent(
    BOOL bInitiallyOwn = FALSE,
    BOOL bManualReset = FALSE,
    LPCTSTR lpszName = NULL,
    LPSECURITY_ATTRIBUTES lpsaAttribute = NULL);
```

### <a name="parameters"></a>Parametri

*bInitiallyOwn*<br/>
Se true, il thread per l' `CMultilock` oggetto `CSingleLock` o è abilitato. In caso contrario, è necessario attendere tutti i thread che vogliono accedere alla risorsa.

*bManualReset*<br/>
Se TRUE, specifica che l'oggetto evento è un evento manuale. in caso contrario, l'oggetto evento è un evento automatico.

*lpszName*<br/>
Nome dell'oggetto `CEvent`. Deve essere specificato se l'oggetto verrà usato tra i limiti del processo. Se il nome corrisponde a un evento esistente, il costruttore compila un `CEvent` nuovo oggetto che fa riferimento all'evento con tale nome. Se il nome corrisponde a un oggetto di sincronizzazione esistente che non è un evento, la costruzione non riuscirà. Se NULL, il nome sarà null.

*lpsaAttribute*<br/>
Attributi di sicurezza per l'oggetto evento. Per una descrizione completa di questa struttura, vedere [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) nel Windows SDK.

### <a name="remarks"></a>Note

Per accedere o rilasciare un `CEvent` oggetto, creare un oggetto [CMultiLock](../../mfc/reference/cmultilock-class.md) o [CSingleLock](../../mfc/reference/csinglelock-class.md) e chiamare le funzioni membro [Lock](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) .

Per modificare lo stato di un `CEvent` oggetto in segnalato (i thread non devono attendere), chiamare [seevent](#setevent) o [PulseEvent](#pulseevent). Per impostare lo stato di un `CEvent` oggetto su non segnalato (i thread devono attendere), chiamare [ResetEvent](#resetevent).

> [!IMPORTANT]
>  Dopo aver creato `CEvent` l'oggetto, utilizzare [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per assicurarsi che mutex non esista già. Se il mutex esisteva in modo imprevisto, potrebbe indicare che un processo non autorizzato è accovacciato e potrebbe avere intenzione di usare il mutex in modo dannoso. In questo caso, la procedura consigliata per la sicurezza è quella di chiudere l'handle e continuare come se si fosse verificato un errore durante la creazione dell'oggetto.

##  <a name="pulseevent"></a>CEvent::P ulseEvent

Imposta lo stato dell'evento su segnalato (disponibile), rilascia tutti i thread in attesa e li Reimposta su non segnalato (non disponibile) automaticamente.

```
BOOL PulseEvent();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Se l'evento è manuale, tutti i thread in attesa vengono rilasciati, l'evento viene impostato su non `PulseEvent` segnalato e viene restituito. Se l'evento è automatico, viene rilasciato un singolo thread, l'evento viene impostato su non segnalato e `PulseEvent` viene restituito.

Se nessun thread è in attesa o non è possibile rilasciare immediatamente alcun thread `PulseEvent` , imposta lo stato dell'evento su non segnalato e restituisce.

`PulseEvent`Usa la funzione Win32 `PulseEvent` sottostante, che può essere momentaneamente rimossa dallo stato di attesa mediante una chiamata di procedura asincrona in modalità kernel. Pertanto, `PulseEvent` è inaffidabile e non deve essere utilizzato dalle nuove applicazioni. Per ulteriori informazioni, vedere la [funzione PulseEvent](/windows/win32/api/winbase/nf-winbase-pulseevent).

##  <a name="resetevent"></a>CEvent:: ResetEvent

Imposta lo stato dell'evento su non segnalato fino a quando non viene impostato in modo esplicito su segnalato dalla funzione membro [seevent](#setevent) .

```
BOOL ResetEvent();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

In questo modo, tutti i thread che desiderano accedere a questo evento attendono.

Questa funzione membro non viene utilizzata dagli eventi automatici.

##  <a name="setevent"></a>CEvent:: seevent

Imposta lo stato dell'evento su segnalato, rilasciando eventuali thread in attesa.

```
BOOL SetEvent();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha avuto esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Se l'evento è manuale, l'evento rimarrà segnalato fino a quando non viene chiamato [ResetEvent](#resetevent) . In questo caso è possibile rilasciare più di un thread. Se l'evento è automatico, l'evento rimarrà segnalato fino al rilascio di un singolo thread. Il sistema imposterà quindi lo stato dell'evento su non segnalato. Se nessun thread è in attesa, lo stato rimane segnalato fino a quando non viene rilasciato un thread.

##  <a name="unlock"></a>CEvent:: Unlock

Rilascia l'oggetto evento.

```
BOOL Unlock();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il thread di proprietà dell'oggetto evento e l'evento è un evento automatico; in caso contrario, 0.

### <a name="remarks"></a>Note

Questa funzione membro viene chiamata dai thread che attualmente sono proprietari di un evento automatico per rilasciarla dopo che sono state eseguite, se è necessario riutilizzare l'oggetto Lock. Se non è necessario riutilizzare l'oggetto Lock, questa funzione verrà chiamata dal distruttore dell'oggetto Lock.

## <a name="see-also"></a>Vedere anche

[Classe CSyncObject](../../mfc/reference/csyncobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
