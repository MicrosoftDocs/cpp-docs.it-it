---
title: Classe COleMessageFilter
ms.date: 11/04/2016
f1_keywords:
- COleMessageFilter
- AFXOLE/COleMessageFilter
- AFXOLE/COleMessageFilter::COleMessageFilter
- AFXOLE/COleMessageFilter::BeginBusyState
- AFXOLE/COleMessageFilter::EnableBusyDialog
- AFXOLE/COleMessageFilter::EnableNotRespondingDialog
- AFXOLE/COleMessageFilter::EndBusyState
- AFXOLE/COleMessageFilter::OnMessagePending
- AFXOLE/COleMessageFilter::Register
- AFXOLE/COleMessageFilter::Revoke
- AFXOLE/COleMessageFilter::SetBusyReply
- AFXOLE/COleMessageFilter::SetMessagePendingDelay
- AFXOLE/COleMessageFilter::SetRetryReply
helpviewer_keywords:
- COleMessageFilter [MFC], COleMessageFilter
- COleMessageFilter [MFC], BeginBusyState
- COleMessageFilter [MFC], EnableBusyDialog
- COleMessageFilter [MFC], EnableNotRespondingDialog
- COleMessageFilter [MFC], EndBusyState
- COleMessageFilter [MFC], OnMessagePending
- COleMessageFilter [MFC], Register
- COleMessageFilter [MFC], Revoke
- COleMessageFilter [MFC], SetBusyReply
- COleMessageFilter [MFC], SetMessagePendingDelay
- COleMessageFilter [MFC], SetRetryReply
ms.assetid: b1fd1639-fac4-4fd0-bf17-15172deba13c
ms.openlocfilehash: 4e12b4dc41c0e384025a2af567cb118d066aaa72
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50478247"
---
# <a name="colemessagefilter-class"></a>Classe COleMessageFilter

Gestisce la concorrenza richiesta dall'interazione delle applicazioni OLE.

## <a name="syntax"></a>Sintassi

```
class COleMessageFilter : public CCmdTarget
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleMessageFilter::COleMessageFilter](#colemessagefilter)|Costruisce un oggetto `COleMessageFilter`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleMessageFilter::BeginBusyState](#beginbusystate)|Inserisce l'applicazione nello stato occupato.|
|[COleMessageFilter::EnableBusyDialog](#enablebusydialog)|Abilita e disabilita la finestra di dialogo che viene visualizzato quando un'applicazione denominata è occupata.|
|[COleMessageFilter::EnableNotRespondingDialog](#enablenotrespondingdialog)|Abilita e disabilita la finestra di dialogo che viene visualizzato quando un'applicazione denominata non risponde.|
|[COleMessageFilter::EndBusyState](#endbusystate)|Termina lo stato dell'applicazione occupata.|
|[COleMessageFilter::OnMessagePending](#onmessagepending)|Chiamato dal framework per elaborare i messaggi mentre è in corso una chiamata OLE.|
|[COleMessageFilter::Register](#register)|Registra il filtro messaggi con le DLL di sistema OLE.|
|[COleMessageFilter::Revoke](#revoke)|Revoca la registrazione del filtro messaggi con le DLL di sistema OLE.|
|[COleMessageFilter::SetBusyReply](#setbusyreply)|Determina la risposta dell'applicazione occupata da una chiamata OLE.|
|[COleMessageFilter::SetMessagePendingDelay](#setmessagependingdelay)|Determina per quanto tempo l'applicazione attende una risposta a una chiamata OLE.|
|[COleMessageFilter::SetRetryReply](#setretryreply)|Determina la risposta dell'applicazione chiamante per un'applicazione occupata.|

## <a name="remarks"></a>Note

Il `COleMessageFilter` classe è utile nelle applicazioni di server e contenitore di modifica visiva, nonché applicazioni di automazione OLE. Per le applicazioni server che vengono chiamate, questa classe può essere utilizzata per rendere l'applicazione "occupato" in modo che le chiamate in ingresso da altre applicazioni contenitore sono annullate o ripetute in un secondo momento. Questa classe è anche utilizzabile per determinare l'azione da eseguire da un'applicazione chiamante quando l'applicazione denominata è occupata.

Utilizzo comune è un'applicazione server può chiamare [BeginBusyState](#beginbusystate) e [EndBusyState](#endbusystate) quando sarebbe pericoloso per un documento o un altro oggetto accessibile OLE da distruggere. Tali chiamate vengono eseguite nel [CWinApp](../../mfc/reference/cwinapp-class.md#onidle) durante gli aggiornamenti dell'interfaccia utente.

Per impostazione predefinita, un `COleMessageFilter` oggetto viene allocato quando l'applicazione viene inizializzata. Può essere recuperato con [AfxOleGetMessageFilter](application-control.md#afxolegetmessagefilter).

Si tratta di una classe avanzata. raramente è necessario lavorare direttamente con esso.

Per altre informazioni, vedere l'articolo [server: implementazione di un Server](../../mfc/servers-implementing-a-server.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleMessageFilter`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

##  <a name="beginbusystate"></a>  COleMessageFilter::BeginBusyState

Chiamare questa funzione per iniziare a uno stato occupato.

```
virtual void BeginBusyState();
```

### <a name="remarks"></a>Note

Funziona in combinazione con [EndBusyState](#endbusystate) per controllare lo stato dell'applicazione occupata. La funzione [SetBusyReply](#setbusyreply) determina la risposta dell'applicazione per le applicazioni chiamanti quando è occupato.

Il `BeginBusyState` e `EndBusyState` chiamate incrementare e decrementare, rispettivamente, un contatore che determina se l'applicazione è occupata. Ad esempio, due chiamate a `BeginBusyState` e una chiamata a `EndBusyState` comunque risultato in uno stato occupato. Per annullare uno stato occupato, è necessario chiamare `EndBusyState` lo stesso numero di volte in cui `BeginBusyState` è stato chiamato.

Per impostazione predefinita, il framework passa allo stato occupato durante l'elaborazione inattiva, che viene eseguita dal [CWinApp](../../mfc/reference/cwinapp-class.md#onidle). Mentre l'applicazione gestisce le notifiche ON_COMMANDUPDATEUI, le chiamate in ingresso vengono gestite in un secondo momento, al termine dell'elaborazione inattiva.

##  <a name="colemessagefilter"></a>  COleMessageFilter::COleMessageFilter

Crea un oggetto `COleMessageFilter`.

```
COleMessageFilter();
```

##  <a name="enablebusydialog"></a>  COleMessageFilter::EnableBusyDialog

Abilita e disabilita la finestra di dialogo occupato, che viene visualizzato quando il ritardo in sospeso di messaggio è scaduto (vedere [SetRetryReply](#setretryreply)) durante una chiamata OLE.

```
void EnableBusyDialog(BOOL bEnableBusy = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnableBusy*<br/>
Specifica se la finestra di dialogo "occupato" è abilitata o disabilitata.

##  <a name="enablenotrespondingdialog"></a>  COleMessageFilter::EnableNotRespondingDialog

Abilita e disabilita la finestra di dialogo "non risponde", che viene visualizzata se un messaggio della tastiera o passare il mouse è in sospeso durante un oggetto OLE chiamata e il timeout.

```
void EnableNotRespondingDialog(BOOL bEnableNotResponding = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnableNotResponding*<br/>
Specifica se la finestra di dialogo "non risponde" è abilitata o disabilitata.

##  <a name="endbusystate"></a>  COleMessageFilter::EndBusyState

Chiamare questa funzione per terminare uno stato occupato.

```
virtual void EndBusyState();
```

### <a name="remarks"></a>Note

Funziona in combinazione con [BeginBusyState](#beginbusystate) per controllare lo stato dell'applicazione occupata. La funzione [SetBusyReply](#setbusyreply) determina la risposta dell'applicazione per le applicazioni chiamanti quando è occupato.

Il `BeginBusyState` e `EndBusyState` chiamate incrementare e decrementare, rispettivamente, un contatore che determina se l'applicazione è occupata. Ad esempio, due chiamate a `BeginBusyState` e una chiamata a `EndBusyState` comunque risultato in uno stato occupato. Per annullare uno stato occupato, è necessario chiamare `EndBusyState` lo stesso numero di volte in cui `BeginBusyState` è stato chiamato.

Per impostazione predefinita, il framework passa allo stato occupato durante l'elaborazione inattiva, che viene eseguita dal [CWinApp](../../mfc/reference/cwinapp-class.md#onidle). Mentre l'applicazione gestisce le notifiche ON_UPDATE_COMMAND_UI, le chiamate in ingresso vengono gestite dopo che è stata completata l'elaborazione inattiva.

##  <a name="onmessagepending"></a>  COleMessageFilter::OnMessagePending

Chiamato dal framework per elaborare i messaggi mentre è in corso una chiamata OLE.

```
virtual BOOL OnMessagePending(const MSG* pMsg);
```

### <a name="parameters"></a>Parametri

*pMsg*<br/>
Puntatore al messaggio in sospeso.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Quando un'applicazione chiamante è in attesa di una chiamata essere completati, il framework chiama `OnMessagePending` con un puntatore al messaggio in sospeso. Per impostazione predefinita, il framework invia i messaggi WM_PAINT, in modo che gli aggiornamenti di finestra possono verificarsi durante una chiamata che sta richiedendo molto tempo.

È necessario registrare il filtro dei messaggi mediante una chiamata a [registrare](#register) prima che possa diventare attivo.

##  <a name="register"></a>  COleMessageFilter::Register

Registra il filtro messaggi con le DLL di sistema OLE.

```
BOOL Register();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Un filtro dei messaggi non ha alcun effetto a meno che non è registrato con le DLL di sistema. In genere il codice di inizializzazione dell'applicazione registra il filtro messaggi dell'applicazione. Qualsiasi altro filtro di messaggio registrato dall'applicazione deve essere revocato prima che il programma termina mediante una chiamata a [revocare](#revoke).

Filtro messaggi predefinito del framework viene automaticamente registrato durante l'inizializzazione e revocato alla chiusura.

##  <a name="revoke"></a>  COleMessageFilter::Revoke

Revoca una registrazione precedente eseguita da una chiamata a [registrare](#register).

```
void Revoke();
```

### <a name="remarks"></a>Note

Un filtro dei messaggi deve essere revocato prima che il programma termina.

Il filtro di messaggi predefinito, che viene creato e registrato automaticamente dal framework, viene revocato anche automaticamente.

##  <a name="setbusyreply"></a>  COleMessageFilter::SetBusyReply

La funzione imposta la risposta dell'applicazione "occupato."

```
void SetBusyReply(SERVERCALL nBusyReply);
```

### <a name="parameters"></a>Parametri

*nBusyReply*<br/>
Un valore compreso il `SERVERCALL` enumerazione, definito nel COMPOBJ. H. Può avere uno dei valori seguenti:

- SERVERCALL_ISHANDLED l'applicazione può accettare le chiamate, ma non riesca l'elaborazione di una particolare chiamata.

- SERVERCALL_REJECTED l'applicazione probabilmente non sarà in grado di elaborare una chiamata.

- SERVERCALL_RETRYLATER l'applicazione è temporaneamente in uno stato in cui non è possibile elaborare una chiamata.

### <a name="remarks"></a>Note

Il [BeginBusyState](#beginbusystate) e [EndBusyState](#endbusystate) funzioni lo stato della disponibilità dell'applicazione.

Quando un'applicazione è diventata occupata con una chiamata a `BeginBusyState`, risponde alle chiamate dalle DLL di sistema OLE con un valore determinato dall'impostazione dell'ultimo `SetBusyReply`. L'applicazione chiamante Usa questa risposta occupata per determinare l'azione da intraprendere.

Per impostazione predefinita, la risposta occupata è SERVERCALL_RETRYLATER. Questa risposta, l'applicazione chiama a ripetere la chiamata appena possibile.

##  <a name="setmessagependingdelay"></a>  COleMessageFilter::SetMessagePendingDelay

Determina per quanto tempo all'applicazione chiamante attende una risposta dall'applicazione chiamata prima di intraprendere ulteriori azioni.

```
void SetMessagePendingDelay(DWORD nTimeout = 5000);
```

### <a name="parameters"></a>Parametri

*nTimeout*<br/>
Numero di millisecondi di ritardo messaggi in sospeso.

### <a name="remarks"></a>Note

Questa funzione funziona in combinazione con [SetRetryReply](#setretryreply).

##  <a name="setretryreply"></a>  COleMessageFilter::SetRetryReply

Determina l'azione dell'applicazione chiamante quando riceve una risposta di occupato da un'applicazione denominata.

```
void SetRetryReply(DWORD nRetryReply = 0);
```

### <a name="parameters"></a>Parametri

*nRetryReply*<br/>
Numero di millisecondi tra i tentativi.

### <a name="remarks"></a>Note

Quando un'applicazione chiamata indica che è occupato, l'applicazione chiamante può decidere di attendere che il server non è più occupato per ritentare immediatamente, o un nuovo tentativo dopo un intervallo specificato. Può anche decidere di annullare completamente la chiamata.

Risposta del chiamante è controllata dalle funzioni `SetRetryReply` e [SetMessagePendingDelay](#setmessagependingdelay). `SetRetryReply` determina quanto tempo l'applicazione chiamante deve attendere tra i tentativi per una determinata chiamata. `SetMessagePendingDelay` Determina il tempo di attesa dell'applicazione chiamante di una risposta dal server prima di eseguire altre azioni.

In genere le impostazioni predefinite siano accettabili e non devono essere modificati. Il framework ripete la chiamata ogni *nRetryReply* millisecondi fino a quando la chiamata passa attraverso o è scaduto il ritardo in attesa di messaggi. Un valore pari a 0 per *nRetryReply* un tentativo immediato e - 1 specifica l'annullamento della chiamata.

Quando è scaduto il ritardo in attesa di messaggi, OLE "occupato la finestra di dialogo" (vedere [COleBusyDialog](../../mfc/reference/colebusydialog-class.md)) viene visualizzato in modo che l'utente può scegliere di annullare o ripetere la chiamata. Chiamare [EnableBusyDialog](#enablebusydialog) per abilitare o disabilitare questa finestra di dialogo.

Quando un messaggio della tastiera o passare il mouse è in sospeso durante una chiamata e la chiamata è scaduta (superato l'intervallo in attesa di messaggi), viene visualizzata la finestra di dialogo "non risponde". Chiamare [EnableNotRespondingDialog](#enablenotrespondingdialog) per abilitare o disabilitare questa finestra di dialogo. In genere questo stato della situazione indica che si è verificato un errore e l'utente abbia impazienti.

Quando le finestre di dialogo sono disabilitate, il corrente "Riprova reply" viene sempre utilizzato per le chiamate alle applicazioni occupate.

## <a name="see-also"></a>Vedere anche

[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)
