---
description: 'Altre informazioni su: Classe COleMessageFilter'
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
ms.openlocfilehash: f0ab1d473704f5355933c04072a195c12fb71c73
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226896"
---
# <a name="colemessagefilter-class"></a>Classe COleMessageFilter

Gestisce la concorrenza richiesta dall'interazione delle applicazioni OLE.

## <a name="syntax"></a>Sintassi

```
class COleMessageFilter : public CCmdTarget
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleMessageFilter:: COleMessageFilter](#colemessagefilter)|Costruisce un oggetto `COleMessageFilter`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleMessageFilter:: BeginBusyState](#beginbusystate)|Inserisce l'applicazione nello stato occupato.|
|[COleMessageFilter:: EnableBusyDialog](#enablebusydialog)|Abilita e Disabilita la finestra di dialogo visualizzata quando un'applicazione chiamata è occupata.|
|[COleMessageFilter:: EnableNotRespondingDialog](#enablenotrespondingdialog)|Abilita e Disabilita la finestra di dialogo visualizzata quando un'applicazione chiamata non risponde.|
|[COleMessageFilter:: EndBusyState](#endbusystate)|Termina lo stato di disponibilità dell'applicazione.|
|[COleMessageFilter:: OnMessagePending](#onmessagepending)|Chiamata eseguita dal Framework per elaborare i messaggi mentre è in corso una chiamata OLE.|
|[COleMessageFilter:: Register](#register)|Registra il filtro messaggi con le DLL di sistema OLE.|
|[COleMessageFilter:: Revoke](#revoke)|Revoca la registrazione del filtro messaggi con le DLL di sistema OLE.|
|[COleMessageFilter:: SetBusyReply](#setbusyreply)|Determina la risposta dell'applicazione occupata a una chiamata OLE.|
|[COleMessageFilter:: SetMessagePendingDelay](#setmessagependingdelay)|Determina per quanto tempo l'applicazione attende una risposta a una chiamata OLE.|
|[COleMessageFilter:: SetRetryReply](#setretryreply)|Determina la risposta dell'applicazione chiamante a un'applicazione occupata.|

## <a name="remarks"></a>Commenti

La `COleMessageFilter` classe è utile nelle applicazioni per il server e il contenitore visive, nonché per le applicazioni di automazione OLE. Per le applicazioni server che vengono chiamate, questa classe può essere utilizzata per rendere l'applicazione "occupata" in modo che le chiamate in ingresso da altre applicazioni contenitore vengano annullate o ritentate in un secondo momento. Questa classe può essere utilizzata anche per determinare l'azione che deve essere eseguita da un'applicazione chiamante quando l'applicazione chiamata è occupata.

Un uso comune è che un'applicazione server chiami [BeginBusyState](#beginbusystate) e [EndBusyState](#endbusystate) quando sarebbe pericoloso che un documento o un altro oggetto accessibile OLE venisse eliminato definitivamente. Queste chiamate vengono effettuate in [CWinApp:: OnIdle](../../mfc/reference/cwinapp-class.md#onidle) durante gli aggiornamenti dell'interfaccia utente.

Per impostazione predefinita, un `COleMessageFilter` oggetto viene allocato al momento dell'inizializzazione dell'applicazione. Può essere recuperato con [AfxOleGetMessageFilter](application-control.md#afxolegetmessagefilter).

Si tratta di una classe avanzata; raramente è necessario lavorarvi direttamente.

Per ulteriori informazioni, vedere l'articolo [Server: implementazione di un server](../../mfc/servers-implementing-a-server.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleMessageFilter`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

## <a name="colemessagefilterbeginbusystate"></a><a name="beginbusystate"></a> COleMessageFilter:: BeginBusyState

Chiamare questa funzione per iniziare uno stato occupato.

```
virtual void BeginBusyState();
```

### <a name="remarks"></a>Commenti

Funziona insieme a [EndBusyState](#endbusystate) per controllare lo stato occupato dell'applicazione. La funzione [SetBusyReply](#setbusyreply) determina la risposta dell'applicazione alla chiamata di applicazioni quando è occupata.

`BeginBusyState`E `EndBusyState` chiama rispettivamente Increment e Decrement, un contatore che determina se l'applicazione è occupata. Ad esempio, due chiamate a `BeginBusyState` e una chiamata a comportano `EndBusyState` comunque un stato occupato. Per annullare uno stato occupato è necessario chiamare `EndBusyState` lo stesso numero di volte in cui `BeginBusyState` è stato chiamato.

Per impostazione predefinita, il Framework entra nello stato occupato durante l'elaborazione inattiva, che viene eseguita da [CWinApp:: OnIdle](../../mfc/reference/cwinapp-class.md#onidle). Mentre l'applicazione gestisce ON_COMMANDUPDATEUI notifiche, le chiamate in ingresso vengono gestite in un secondo momento, al termine dell'elaborazione inattiva.

## <a name="colemessagefiltercolemessagefilter"></a><a name="colemessagefilter"></a> COleMessageFilter:: COleMessageFilter

Crea un oggetto `COleMessageFilter`.

```
COleMessageFilter();
```

## <a name="colemessagefilterenablebusydialog"></a><a name="enablebusydialog"></a> COleMessageFilter:: EnableBusyDialog

Abilita e Disabilita la finestra di dialogo occupato, che viene visualizzata quando il ritardo del messaggio in attesa scade (vedere [SetRetryReply](#setretryreply)) durante una chiamata OLE.

```cpp
void EnableBusyDialog(BOOL bEnableBusy = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnableBusy*<br/>
Specifica se la finestra di dialogo "occupato" è abilitata o disabilitata.

## <a name="colemessagefilterenablenotrespondingdialog"></a><a name="enablenotrespondingdialog"></a> COleMessageFilter:: EnableNotRespondingDialog

Abilita e Disabilita la finestra di dialogo "non risponde", che viene visualizzata se una tastiera o un messaggio del mouse è in sospeso durante una chiamata OLE e si è verificato il timeout della chiamata.

```cpp
void EnableNotRespondingDialog(BOOL bEnableNotResponding = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnableNotResponding*<br/>
Specifica se la finestra di dialogo "non risponde" è abilitata o disabilitata.

## <a name="colemessagefilterendbusystate"></a><a name="endbusystate"></a> COleMessageFilter:: EndBusyState

Chiamare questa funzione per terminare uno stato occupato.

```
virtual void EndBusyState();
```

### <a name="remarks"></a>Commenti

Funziona insieme a [BeginBusyState](#beginbusystate) per controllare lo stato occupato dell'applicazione. La funzione [SetBusyReply](#setbusyreply) determina la risposta dell'applicazione alla chiamata di applicazioni quando è occupata.

`BeginBusyState`E `EndBusyState` chiama rispettivamente Increment e Decrement, un contatore che determina se l'applicazione è occupata. Ad esempio, due chiamate a `BeginBusyState` e una chiamata a comportano `EndBusyState` comunque un stato occupato. Per annullare uno stato occupato è necessario chiamare `EndBusyState` lo stesso numero di volte in cui `BeginBusyState` è stato chiamato.

Per impostazione predefinita, il Framework entra nello stato occupato durante l'elaborazione inattiva, che viene eseguita da [CWinApp:: OnIdle](../../mfc/reference/cwinapp-class.md#onidle). Mentre l'applicazione gestisce ON_UPDATE_COMMAND_UI notifiche, le chiamate in ingresso vengono gestite dopo il completamento dell'elaborazione inattiva.

## <a name="colemessagefilteronmessagepending"></a><a name="onmessagepending"></a> COleMessageFilter:: OnMessagePending

Chiamata eseguita dal Framework per elaborare i messaggi mentre è in corso una chiamata OLE.

```
virtual BOOL OnMessagePending(const MSG* pMsg);
```

### <a name="parameters"></a>Parametri

*pMsg*<br/>
Puntatore al messaggio in sospeso.

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Quando un'applicazione chiamante è in attesa del completamento di una chiamata, il Framework chiama `OnMessagePending` con un puntatore al messaggio in sospeso. Per impostazione predefinita, il framework invia WM_PAINT messaggi, in modo che gli aggiornamenti della finestra possano verificarsi durante una chiamata che richiede molto tempo.

È necessario registrare il filtro messaggi per mezzo di una chiamata per la [registrazione](#register) prima che diventi attiva.

## <a name="colemessagefilterregister"></a><a name="register"></a> COleMessageFilter:: Register

Registra il filtro messaggi con le DLL di sistema OLE.

```
BOOL Register();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Un filtro messaggi non ha alcun effetto a meno che non sia registrato con le DLL di sistema. In genere il codice di inizializzazione dell'applicazione registra il filtro messaggi dell'applicazione. Qualsiasi altro filtro messaggi registrato dall'applicazione deve essere revocato prima che il programma termini mediante una chiamata a [Revoke](#revoke).

Il filtro messaggi predefinito del Framework viene registrato automaticamente durante l'inizializzazione e revocato alla chiusura.

## <a name="colemessagefilterrevoke"></a><a name="revoke"></a> COleMessageFilter:: Revoke

Revoca una registrazione precedente eseguita da una chiamata per la [registrazione](#register).

```cpp
void Revoke();
```

### <a name="remarks"></a>Commenti

Un filtro messaggi deve essere revocato prima della terminazione del programma.

Anche il filtro messaggi predefinito, creato e registrato automaticamente dal Framework, viene revocato automaticamente.

## <a name="colemessagefiltersetbusyreply"></a><a name="setbusyreply"></a> COleMessageFilter:: SetBusyReply

Questa funzione imposta la "risposta occupata" dell'applicazione.

```cpp
void SetBusyReply(SERVERCALL nBusyReply);
```

### <a name="parameters"></a>Parametri

*nBusyReply*<br/>
Valore dell' `SERVERCALL` enumerazione, definito in compobj. H. Può avere uno dei valori seguenti:

- SERVERCALL_ISHANDLED l'applicazione può accettare le chiamate, ma potrebbe non riuscire a elaborare una particolare chiamata.

- SERVERCALL_REJECTED l'applicazione probabilmente non sarà mai in grado di elaborare una chiamata.

- SERVERCALL_RETRYLATER l'applicazione è temporaneamente in uno stato in cui non è in grado di elaborare una chiamata.

### <a name="remarks"></a>Commenti

Le funzioni [BeginBusyState](#beginbusystate) e [EndBusyState](#endbusystate) controllano lo stato di disponibilità dell'applicazione.

Quando un'applicazione è stata occupata con una chiamata a `BeginBusyState` , risponde alle chiamate dalle DLL di sistema OLE con un valore determinato dall'ultima impostazione di `SetBusyReply` . L'applicazione chiamante usa questa risposta occupata per determinare l'azione da intraprendere.

Per impostazione predefinita, la risposta occupata è SERVERCALL_RETRYLATER. Questa risposta fa in modo che l'applicazione chiamante ritenti la chiamata il prima possibile.

## <a name="colemessagefiltersetmessagependingdelay"></a><a name="setmessagependingdelay"></a> COleMessageFilter:: SetMessagePendingDelay

Determina per quanto tempo l'applicazione chiamante resta in attesa di una risposta dall'applicazione chiamata prima di intraprendere ulteriori azioni.

```cpp
void SetMessagePendingDelay(DWORD nTimeout = 5000);
```

### <a name="parameters"></a>Parametri

*nTimeout*<br/>
Numero di millisecondi per il ritardo del messaggio in sospeso.

### <a name="remarks"></a>Commenti

Questa funzione funziona in concerto con [SetRetryReply](#setretryreply).

## <a name="colemessagefiltersetretryreply"></a><a name="setretryreply"></a> COleMessageFilter:: SetRetryReply

Determina l'azione dell'applicazione chiamante quando riceve una risposta occupata da un'applicazione chiamata.

```cpp
void SetRetryReply(DWORD nRetryReply = 0);
```

### <a name="parameters"></a>Parametri

*nRetryReply*<br/>
Numero di millisecondi tra i tentativi.

### <a name="remarks"></a>Commenti

Quando un'applicazione chiamata indica che è occupata, l'applicazione chiamante può decidere di attendere fino a quando il server non è più occupato, di riprovare immediatamente o di riprovare dopo un intervallo specificato. Può inoltre decidere di annullare completamente la chiamata.

La risposta del chiamante è controllata dalle funzioni `SetRetryReply` e da [SetMessagePendingDelay](#setmessagependingdelay). `SetRetryReply` determina per quanto tempo l'applicazione chiamante deve attendere tra i tentativi per una determinata chiamata. `SetMessagePendingDelay` determina per quanto tempo l'applicazione chiamante resta in attesa di una risposta dal server prima di intraprendere ulteriori azioni.

In genere i valori predefiniti sono accettabili e non è necessario modificarli. Il Framework ritenta la chiamata ogni *nRetryReply* millisecondi fino alla scadenza della chiamata o al ritardo del messaggio in sospeso. Il valore 0 per *nRetryReply* specifica un tentativo immediato e-1 specifica l'annullamento della chiamata.

Quando il ritardo del messaggio in sospeso è scaduto, viene visualizzata la finestra di dialogo OLE "occupato" (vedere [COleBusyDialog](../../mfc/reference/colebusydialog-class.md)) in modo che l'utente possa scegliere di annullare o ritentare la chiamata. Chiamare [EnableBusyDialog](#enablebusydialog) per abilitare o disabilitare questa finestra di dialogo.

Quando un messaggio della tastiera o del mouse è in sospeso durante una chiamata e si è verificato il timeout della chiamata (superamento del ritardo del messaggio), viene visualizzata la finestra di dialogo "non risponde". Chiamare [EnableNotRespondingDialog](#enablenotrespondingdialog) per abilitare o disabilitare questa finestra di dialogo. In genere, questo stato indica che si è verificato un errore e che l'utente sta diventando impaziente.

Quando le finestre di dialogo sono disabilitate, viene sempre utilizzata la "risposta di ripetizione" corrente per le chiamate alle applicazioni occupate.

## <a name="see-also"></a>Vedi anche

[CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)
