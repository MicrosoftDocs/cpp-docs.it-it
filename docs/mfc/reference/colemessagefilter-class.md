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
ms.openlocfilehash: f6db5f012aedf08edd87980e304e181295bfb953
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374920"
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
|[COleMessageFilter::EnableBusyDialog](#enablebusydialog)|Abilita e disabilita la finestra di dialogo visualizzata quando un'applicazione chiamata è occupata.|
|[COleMessageFilter::EnableNotRespondingDialog (Filtro Messaggidi COleMessageFilter::EnableNotRespondingDialog)](#enablenotrespondingdialog)|Abilita e disabilita la finestra di dialogo visualizzata quando un'applicazione chiamata non risponde.|
|[COleMessageFilter::EndBusyState](#endbusystate)|Termina lo stato occupato dell'applicazione.|
|[COleMessageFilter::OnMessagePending](#onmessagepending)|Chiamato dal framework per elaborare i messaggi mentre è in corso una chiamata OLE.|
|[COleMessageFilter::Register](#register)|Registra il filtro messaggi con le DLL di sistema OLE.|
|[COleMessageFilter::Revoke](#revoke)|Revoca la registrazione del filtro messaggi con le DLL di sistema OLE.|
|[COleMessageFilter::SetBusyReply](#setbusyreply)|Determina la risposta dell'applicazione occupata a una chiamata OLE.|
|[COleMessageFilter::SetMessagePendingDelay](#setmessagependingdelay)|Determina il tempo di attesa dell'applicazione per una risposta a una chiamata OLE.|
|[COleMessageFilter::SetRetryReply](#setretryreply)|Determina la risposta dell'applicazione chiamante a un'applicazione occupata.|

## <a name="remarks"></a>Osservazioni

La `COleMessageFilter` classe è utile nelle applicazioni server e contenitore di modifica visiva, nonché nelle applicazioni di automazione OLE. Per le applicazioni server che vengono chiamate, questa classe può essere utilizzata per rendere l'applicazione "occupata" in modo che le chiamate in ingresso da altre applicazioni contenitore vengano annullate o ritentate in un secondo momento. Questa classe può essere utilizzata anche per determinare l'azione che deve essere eseguita da un'applicazione chiamante quando l'applicazione chiamata è occupata.

L'utilizzo comune è che un'applicazione server chiami [BeginBusyState](#beginbusystate) e [EndBusyState](#endbusystate) quando sarebbe pericoloso per un documento o un altro oggetto accessibile OLE essere eliminato. Queste chiamate vengono effettuate in [CWinApp::OnIdle](../../mfc/reference/cwinapp-class.md#onidle) durante gli aggiornamenti dell'interfaccia utente.

Per impostazione `COleMessageFilter` predefinita, un oggetto viene allocato quando l'applicazione viene inizializzata. Può essere recuperato con [AfxOleGetMessageFilter](application-control.md#afxolegetmessagefilter).

Questa è una classe avanzata; raramente è necessario lavorare con esso direttamente.

Per ulteriori informazioni, vedere l'articolo [Server: implementazione di un server](../../mfc/servers-implementing-a-server.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleMessageFilter`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxole.h

## <a name="colemessagefilterbeginbusystate"></a><a name="beginbusystate"></a>COleMessageFilter::BeginBusyState

Chiamare questa funzione per iniziare uno stato occupato.

```
virtual void BeginBusyState();
```

### <a name="remarks"></a>Osservazioni

Funziona in combinazione con [EndBusyState](#endbusystate) per controllare lo stato occupato dell'applicazione. La funzione [SetBusyReply](#setbusyreply) determina la risposta dell'applicazione alle applicazioni chiamanti quando è occupata.

L'incremento `BeginBusyState` e il decremento delle chiamate e, `EndBusyState` rispettivamente, un contatore che determina se l'applicazione è occupata. Ad esempio, due `BeginBusyState` chiamate a `EndBusyState` e una chiamata a ancora provocare uno stato occupato. Per annullare uno stato occupato `EndBusyState` è necessario `BeginBusyState` chiamare lo stesso numero di volte è stato chiamato.

Per impostazione predefinita, il framework entra nello stato occupato durante l'elaborazione inattiva, che viene eseguita da [CWinApp::OnIdle](../../mfc/reference/cwinapp-class.md#onidle). Mentre l'applicazione gestisce le notifiche ON_COMMANDUPDATEUI, le chiamate in ingresso vengono gestite in un secondo momento, al termine dell'elaborazione inattiva.

## <a name="colemessagefiltercolemessagefilter"></a><a name="colemessagefilter"></a>COleMessageFilter::COleMessageFilter

Crea un oggetto `COleMessageFilter`.

```
COleMessageFilter();
```

## <a name="colemessagefilterenablebusydialog"></a><a name="enablebusydialog"></a>COleMessageFilter::EnableBusyDialog

Attiva e disabilita la finestra di dialogo occupato, che viene visualizzata alla scadenza del ritardo in sospeso del messaggio (vedere [SetRetryReply](#setretryreply)) durante una chiamata OLE.

```
void EnableBusyDialog(BOOL bEnableBusy = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnableBusy (Informazioni in base a Tale controllo)*<br/>
Specifica se la finestra di dialogo "occupato" è abilitata o disabilitata.

## <a name="colemessagefilterenablenotrespondingdialog"></a><a name="enablenotrespondingdialog"></a>COleMessageFilter::EnableNotRespondingDialog (Filtro Messaggidi COleMessageFilter::EnableNotRespondingDialog)

Attiva e disabilita la finestra di dialogo "non risponde", che viene visualizzata se un messaggio della tastiera o del mouse è in sospeso durante una chiamata OLE e la chiamata è scaduta.

```
void EnableNotRespondingDialog(BOOL bEnableNotResponding = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnableNotResponding*<br/>
Specifica se la finestra di dialogo "non risponde" è abilitata o disabilitata.

## <a name="colemessagefilterendbusystate"></a><a name="endbusystate"></a>COleMessageFilter::EndBusyState

Chiamare questa funzione per terminare uno stato occupato.

```
virtual void EndBusyState();
```

### <a name="remarks"></a>Osservazioni

Funziona in combinazione con [BeginBusyState](#beginbusystate) per controllare lo stato occupato dell'applicazione. La funzione [SetBusyReply](#setbusyreply) determina la risposta dell'applicazione alle applicazioni chiamanti quando è occupata.

L'incremento `BeginBusyState` e il decremento delle chiamate e, `EndBusyState` rispettivamente, un contatore che determina se l'applicazione è occupata. Ad esempio, due `BeginBusyState` chiamate a `EndBusyState` e una chiamata a ancora provocare uno stato occupato. Per annullare uno stato occupato `EndBusyState` è necessario `BeginBusyState` chiamare lo stesso numero di volte è stato chiamato.

Per impostazione predefinita, il framework entra nello stato occupato durante l'elaborazione inattiva, che viene eseguita da [CWinApp::OnIdle](../../mfc/reference/cwinapp-class.md#onidle). Mentre l'applicazione gestisce le notifiche ON_UPDATE_COMMAND_UI, le chiamate in ingresso vengono gestite al termine dell'elaborazione inattiva.

## <a name="colemessagefilteronmessagepending"></a><a name="onmessagepending"></a>COleMessageFilter::OnMessagePending

Chiamato dal framework per elaborare i messaggi mentre è in corso una chiamata OLE.

```
virtual BOOL OnMessagePending(const MSG* pMsg);
```

### <a name="parameters"></a>Parametri

*pMsg*<br/>
Puntatore al messaggio in sospeso.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Quando un'applicazione chiamante è in attesa del `OnMessagePending` completamento di una chiamata, il framework chiama con un puntatore al messaggio in sospeso. Per impostazione predefinita, il framework invia WM_PAINT messaggi, in modo che gli aggiornamenti della finestra possono verificarsi durante una chiamata che richiede molto tempo.

È necessario registrare il filtro messaggi tramite una chiamata a [Register](#register) prima che possa diventare attivo.

## <a name="colemessagefilterregister"></a><a name="register"></a>COleMessageFilter::Register

Registra il filtro messaggi con le DLL di sistema OLE.

```
BOOL Register();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Un filtro messaggi non ha effetto a meno che non sia registrato con le DLL di sistema. In genere il codice di inizializzazione dell'applicazione registra il filtro messaggi dell'applicazione. Qualsiasi altro filtro messaggi registrato dall'applicazione deve essere revocato prima che il programma termini con una chiamata a [Revoke](#revoke).

Il filtro messaggi predefinito del framework viene registrato automaticamente durante l'inizializzazione e revocato alla terminazione.

## <a name="colemessagefilterrevoke"></a><a name="revoke"></a>COleMessageFilter::Revoke

Revoca una registrazione precedente eseguita da una chiamata a [Register](#register).

```
void Revoke();
```

### <a name="remarks"></a>Osservazioni

Un filtro messaggi deve essere revocato prima del termine del programma.

Anche il filtro messaggi predefinito, creato e registrato automaticamente dal framework, viene revocato automaticamente.

## <a name="colemessagefiltersetbusyreply"></a><a name="setbusyreply"></a>COleMessageFilter::SetBusyReply

Questa funzione imposta la "risposta occupata" dell'applicazione.

```
void SetBusyReply(SERVERCALL nBusyReply);
```

### <a name="parameters"></a>Parametri

*nBusyReply (risposta)*<br/>
Valore dell'enumerazione, `SERVERCALL` definito in COMP. H. Può avere uno dei seguenti valori:

- SERVERCALL_ISHANDLED L'applicazione può accettare chiamate ma potrebbe non riuscire nell'elaborazione di una particolare chiamata.

- SERVERCALL_REJECTED L'applicazione probabilmente non sarà mai in grado di elaborare una chiamata.

- SERVERCALL_RETRYLATER L'applicazione si trova temporaneamente in uno stato in cui non è in grado di elaborare una chiamata.

### <a name="remarks"></a>Osservazioni

Le funzioni [BeginBusyState](#beginbusystate) ed [EndBusyState](#endbusystate) controllano lo stato occupato dell'applicazione.

Quando un'applicazione è stata resa `BeginBusyState`occupata con una chiamata a , risponde alle chiamate dalle DLL `SetBusyReply`di sistema OLE con un valore determinato dall'ultima impostazione di . L'applicazione chiamante utilizza questa risposta occupata per determinare l'azione da eseguire.

Per impostazione predefinita, la risposta occupata è SERVERCALL_RETRYLATER. Questa risposta fa sì che l'applicazione chiamante ritentare la chiamata il prima possibile.

## <a name="colemessagefiltersetmessagependingdelay"></a><a name="setmessagependingdelay"></a>COleMessageFilter::SetMessagePendingDelay

Determina per quanto tempo l'applicazione chiamante attende una risposta dall'applicazione chiamata prima di eseguire ulteriori azioni.

```
void SetMessagePendingDelay(DWORD nTimeout = 5000);
```

### <a name="parameters"></a>Parametri

*nTimeout (Timeout)*<br/>
Numero di millisecondi per il ritardo in attesa del messaggio.

### <a name="remarks"></a>Osservazioni

Questa funzione funziona in concerto con [SetRetryReply](#setretryreply).

## <a name="colemessagefiltersetretryreply"></a><a name="setretryreply"></a>COleMessageFilter::SetRetryReply

Determina l'azione dell'applicazione chiamante quando riceve una risposta occupata da un'applicazione chiamata.

```
void SetRetryReply(DWORD nRetryReply = 0);
```

### <a name="parameters"></a>Parametri

*nRetryReply (informazioni in stato in stato in stato in stato*<br/>
Numero di millisecondi tra un tentativo e l'altro.

### <a name="remarks"></a>Osservazioni

Quando un'applicazione chiamata indica che è occupata, l'applicazione chiamante può decidere di attendere fino a quando il server non è più occupato, di riprovare immediatamente o di riprovare dopo un intervallo specificato. Può anche decidere di annullare del tutto la chiamata.

La risposta del chiamante è `SetRetryReply` controllata dalle funzioni e [SetMessagePendingDelay](#setmessagependingdelay). `SetRetryReply`determina per quanto tempo l'applicazione chiamante deve attendere tra i tentativi per una determinata chiamata. `SetMessagePendingDelay`determina per quanto tempo l'applicazione chiamante attende una risposta dal server prima di intraprendere ulteriori azioni.

In genere i valori predefiniti sono accettabili e non è necessario modificarli. Il framework ritenta la chiamata ogni *nRetryReply* millisecondi fino a quando la chiamata passa o il ritardo in attesa di messaggio è scaduto. Il valore 0 per *nRetryReply* specifica un nuovo tentativo immediato e - 1 specifica l'annullamento della chiamata.

Quando il ritardo in sospeso del messaggio è scaduto, viene visualizzata la "finestra di dialogo occupata" OLE (vedere [COleBusyDialog](../../mfc/reference/colebusydialog-class.md)) in modo che l'utente possa scegliere di annullare o ritentare la chiamata. Chiamare [EnableBusyDialog](#enablebusydialog) per abilitare o disabilitare questa finestra di dialogo.

Quando un messaggio della tastiera o del mouse è in sospeso durante una chiamata e la chiamata è scaduta (superato il ritardo in sospeso del messaggio), viene visualizzata la finestra di dialogo "non risponde". Chiamare [EnableNotRespondingDialog](#enablenotrespondingdialog) per abilitare o disabilitare questa finestra di dialogo. Di solito questo stato di cose indica che qualcosa è andato storto e l'utente sta diventando impaziente.

Quando le finestre di dialogo sono disabilitate, la "risposta tentativi" corrente viene sempre utilizzata per le chiamate alle applicazioni occupate.

## <a name="see-also"></a>Vedere anche

[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)
