---
title: Classe COleMessageFilter | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs: C++
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
caps.latest.revision: "21"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6ea5972a46d6e8d5ff106ddcc1c8692a3cdd8ff3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[COleMessageFilter::EnableBusyDialog](#enablebusydialog)|Abilita e disabilita la finestra di dialogo che viene visualizzato quando un'applicazione di chiamata è occupata.|  
|[COleMessageFilter::EnableNotRespondingDialog](#enablenotrespondingdialog)|Abilita e disabilita la finestra di dialogo che viene visualizzato quando un'applicazione di chiamata non risponde.|  
|[COleMessageFilter::EndBusyState](#endbusystate)|Termina lo stato dell'applicazione occupata.|  
|[COleMessageFilter::OnMessagePending](#onmessagepending)|Chiamato dal framework per elaborare i messaggi mentre è in corso una chiamata OLE.|  
|[COleMessageFilter::Register](#register)|Registra il filtro messaggi con le DLL di sistema OLE.|  
|[COleMessageFilter::Revoke](#revoke)|Revoca la registrazione del filtro messaggi con le DLL di sistema OLE.|  
|[COleMessageFilter::SetBusyReply](#setbusyreply)|Determina la risposta dell'applicazione occupata per una chiamata OLE.|  
|[COleMessageFilter::SetMessagePendingDelay](#setmessagependingdelay)|Determina per quanto tempo l'applicazione attende una risposta a una chiamata OLE.|  
|[COleMessageFilter::SetRetryReply](#setretryreply)|Determina la risposta dell'applicazione chiamante per un'applicazione occupata.|  
  
## <a name="remarks"></a>Note  
 La `COleMessageFilter` classe è utile nelle applicazioni di server e contenitore di modifica visiva, nonché le applicazioni di automazione OLE. Per le applicazioni server che vengono chiamate, questa classe può essere utilizzata per rendere l'applicazione "occupato" in modo che le chiamate in ingresso da altre applicazioni contenitore sono annullate o ripetute in un secondo momento. Questa classe può essere utilizzata anche per determinare l'azione da eseguire da un'applicazione chiamante quando l'applicazione di chiamata è occupata.  
  
 Utilizzo comune è un'applicazione server può chiamare [BeginBusyState](#beginbusystate) e [EndBusyState](#endbusystate) può essere pericoloso per un documento o un altro oggetto accessibile OLE per essere distrutti. Queste chiamate vengono eseguite [CWinApp](../../mfc/reference/cwinapp-class.md#onidle) durante gli aggiornamenti dell'interfaccia utente.  
  
 Per impostazione predefinita, un `COleMessageFilter` oggetto viene allocato quando viene inizializzato l'applicazione. Possono essere recuperato con [AfxOleGetMessageFilter](application-control.md#afxolegetmessagefilter).  
  
 Questa è una classe di avanzate; raramente è necessario lavorare direttamente con esso.  
  
 Per ulteriori informazioni, vedere l'articolo [server: implementazione di un Server](../../mfc/servers-implementing-a-server.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleMessageFilter`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="beginbusystate"></a>COleMessageFilter::BeginBusyState  
 Chiamare questa funzione per iniziare a uno stato occupato.  
  
```  
virtual void BeginBusyState();
```  
  
### <a name="remarks"></a>Note  
 Funziona in combinazione con [EndBusyState](#endbusystate) per controllare lo stato di disponibilità dell'applicazione. La funzione [SetBusyReply](#setbusyreply) determina la risposta dell'applicazione per la chiamata delle applicazioni quando è occupata.  
  
 Il `BeginBusyState` e `EndBusyState` chiamate incrementare e decrementare, rispettivamente, di un contatore che determina se l'applicazione è occupata. Ad esempio, due chiamate a `BeginBusyState` e una chiamata a `EndBusyState` mantenere comunque in uno stato occupato. Per annullare uno stato occupato, è necessario chiamare `EndBusyState` lo stesso numero di volte in cui `BeginBusyState` è stato chiamato.  
  
 Per impostazione predefinita, il framework passa allo stato occupato durante l'elaborazione di inattività, che viene eseguita dal [CWinApp](../../mfc/reference/cwinapp-class.md#onidle). Mentre l'applicazione gestisce **ON_COMMANDUPDATEUI** notifiche, le chiamate in ingresso vengono gestite in un secondo momento, al termine dell'elaborazione di inattività.  
  
##  <a name="colemessagefilter"></a>COleMessageFilter::COleMessageFilter  
 Crea un oggetto `COleMessageFilter`.  
  
```  
COleMessageFilter();
```  
  
##  <a name="enablebusydialog"></a>COleMessageFilter::EnableBusyDialog  
 Abilita e disabilita la finestra di dialogo occupato, che viene visualizzata quando scade il ritardo di un messaggio in sospeso (vedere [SetRetryReply](#setretryreply)) durante una chiamata OLE.  
  
```  
void EnableBusyDialog(BOOL bEnableBusy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *bEnableBusy*  
 Specifica se la finestra di dialogo "occupato" è abilitata o disabilitata.  
  
##  <a name="enablenotrespondingdialog"></a>COleMessageFilter::EnableNotRespondingDialog  
 Abilita e disabilita la finestra di dialogo "non risponde", che viene visualizzata se è in sospeso un messaggio della tastiera o mouse OLE durante la chiamata e il timeout.  
  
```  
void EnableNotRespondingDialog(BOOL bEnableNotResponding = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *bEnableNotResponding*  
 Specifica se la finestra di dialogo "non risponde" è abilitata o disabilitata.  
  
##  <a name="endbusystate"></a>COleMessageFilter::EndBusyState  
 Chiamare questa funzione per terminare un stato occupato.  
  
```  
virtual void EndBusyState();
```  
  
### <a name="remarks"></a>Note  
 Funziona in combinazione con [BeginBusyState](#beginbusystate) per controllare lo stato di disponibilità dell'applicazione. La funzione [SetBusyReply](#setbusyreply) determina la risposta dell'applicazione per la chiamata delle applicazioni quando è occupata.  
  
 Il `BeginBusyState` e `EndBusyState` chiamate incrementare e decrementare, rispettivamente, di un contatore che determina se l'applicazione è occupata. Ad esempio, due chiamate a `BeginBusyState` e una chiamata a `EndBusyState` mantenere comunque in uno stato occupato. Per annullare uno stato occupato, è necessario chiamare `EndBusyState` lo stesso numero di volte in cui `BeginBusyState` è stato chiamato.  
  
 Per impostazione predefinita, il framework passa allo stato occupato durante l'elaborazione di inattività, che viene eseguita dal [CWinApp](../../mfc/reference/cwinapp-class.md#onidle). Mentre l'applicazione gestisce `ON_UPDATE_COMMAND_UI` notifiche, le chiamate in ingresso vengono gestite al termine dell'elaborazione di inattività.  
  
##  <a name="onmessagepending"></a>COleMessageFilter::OnMessagePending  
 Chiamato dal framework per elaborare i messaggi mentre è in corso una chiamata OLE.  
  
```  
virtual BOOL OnMessagePending(const MSG* pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 `pMsg`  
 Puntatore al messaggio in sospeso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero in caso di esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Quando un'applicazione chiamante è in attesa di una chiamata per il completamento, il framework chiama `OnMessagePending` con un puntatore al messaggio in sospeso. Per impostazione predefinita, il framework Invia `WM_PAINT` messaggi, in modo che gli aggiornamenti di finestra possono verificarsi durante una chiamata che richiede molto tempo.  
  
 È necessario registrare il filtro messaggi mediante una chiamata a [registrare](#register) prima che possa diventare attivo.  
  
##  <a name="register"></a>COleMessageFilter::Register  
 Registra il filtro messaggi con le DLL di sistema OLE.  
  
```  
BOOL Register();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero in caso di esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Un filtro dei messaggi non ha alcun effetto a meno che non è registrato con le DLL di sistema. In genere il codice di inizializzazione dell'applicazione registra il filtro messaggi dell'applicazione. Qualsiasi altro filtro di messaggio registrato dall'applicazione deve essere revocato prima che il programma termina mediante una chiamata a [revocare](#revoke).  
  
 Filtro dei messaggi del framework predefinito viene automaticamente registrato durante l'inizializzazione e revocato alla chiusura.  
  
##  <a name="revoke"></a>COleMessageFilter::Revoke  
 Revoca di una registrazione precedente eseguita da una chiamata a [registrare](#register).  
  
```  
void Revoke();
```  
  
### <a name="remarks"></a>Note  
 Un filtro messaggi deve essere revocato prima che il programma termina.  
  
 Il filtro di messaggi predefinito, che viene creato e registrato automaticamente dal framework, viene automaticamente anche revocato.  
  
##  <a name="setbusyreply"></a>COleMessageFilter::SetBusyReply  
 La funzione imposta "occupato reply" dell'applicazione.  
  
```  
void SetBusyReply(SERVERCALL nBusyReply);
```  
  
### <a name="parameters"></a>Parametri  
 *nBusyReply*  
 Valore compreso tra il `SERVERCALL` enumerazione, è definito in COMPOBJ. H. Può avere uno dei valori seguenti:  
  
- **SERVERCALL_ISHANDLED** l'applicazione può accettare chiamate ma potrebbe non riuscire durante l'elaborazione di una determinata chiamata.  
  
- **SERVERCALL_REJECTED** l'applicazione probabilmente non sarà in grado di elaborare una chiamata.  
  
- **SERVERCALL_RETRYLATER** l'applicazione è temporaneamente in uno stato in cui è in grado di elaborare una chiamata.  
  
### <a name="remarks"></a>Note  
 Il [BeginBusyState](#beginbusystate) e [EndBusyState](#endbusystate) funzioni controllano lo stato dell'applicazione occupata.  
  
 Quando un'applicazione è diventata occupata con una chiamata a `BeginBusyState`, risponde alle chiamate dalle DLL di sistema OLE con un valore determinato dall'impostazione dell'ultimo `SetBusyReply`. L'applicazione chiamante utilizza tale risposta occupata per determinare l'azione da intraprendere.  
  
 Per impostazione predefinita, la risposta occupata è **SERVERCALL_RETRYLATER**. La risposta, l'applicazione chiamante ripetere la chiamata appena possibile.  
  
##  <a name="setmessagependingdelay"></a>COleMessageFilter::SetMessagePendingDelay  
 Determina per quanto tempo l'applicazione chiamante attende una risposta dall'applicazione chiamato prima di eseguire ulteriori azioni.  
  
```  
void SetMessagePendingDelay(DWORD nTimeout = 5000);
```  
  
### <a name="parameters"></a>Parametri  
 `nTimeout`  
 Numero di millisecondi di ritardo in attesa di messaggi.  
  
### <a name="remarks"></a>Note  
 Questa funzione funziona insieme ad [SetRetryReply](#setretryreply).  
  
##  <a name="setretryreply"></a>COleMessageFilter::SetRetryReply  
 Determina l'azione dell'applicazione chiamante quando viene ricevuta una risposta occupata da un'applicazione di chiamata.  
  
```  
void SetRetryReply(DWORD nRetryReply = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `nRetryReply`  
 Numero di millisecondi tra i tentativi.  
  
### <a name="remarks"></a>Note  
 Quando un'applicazione denominata indica che è occupato, l'applicazione chiamante può decidere di attendere che il server non è occupato, riprovare subito o riprovare dopo un intervallo specificato. Potrebbe inoltre decidere di annullare completamente la chiamata.  
  
 Risposta del chiamante è controllata dalle funzioni `SetRetryReply` e [SetMessagePendingDelay](#setmessagependingdelay). `SetRetryReply`Determina per quanto tempo l'applicazione chiamante deve attendere tra i tentativi per una determinata chiamata. `SetMessagePendingDelay`Determina il tempo applicazione chiamante attende una risposta dal server prima di eseguire un'ulteriore azione.  
  
 In genere i valori predefiniti sono accettabili e non devono essere modificati. Il framework Ritenta la chiamata ogni `nRetryReply` millisecondi fino a quando la chiamata attraversa o è scaduto il ritardo di un messaggio in sospeso. Il valore 0 per `nRetryReply` specifica un tentativo immediato e - 1 indica l'annullamento della chiamata.  
  
 Quando si è scaduta il ritardo di un messaggio in sospeso, OLE "occupato la finestra di dialogo" (vedere [classe COleBusyDialog](../../mfc/reference/colebusydialog-class.md)) viene visualizzato in modo che l'utente può scegliere di annullare o ripetere la chiamata. Chiamare [EnableBusyDialog](#enablebusydialog) per abilitare o disabilitare questa finestra di dialogo.  
  
 Quando un messaggio della tastiera o mouse non è in sospeso durante una chiamata e la chiamata è scaduta (supera il ritardo di un messaggio in sospeso), viene visualizzata la finestra di dialogo "non risponde". Chiamare [EnableNotRespondingDialog](#enablenotrespondingdialog) per abilitare o disabilitare questa finestra di dialogo. Questo stato, della situazione indica in genere che si è verificato un errore e l'utente sta per diventare fa.  
  
 Quando le finestre di dialogo sono disabilitati, corrente "tentativi risposta" viene sempre utilizzato per le chiamate alle applicazioni occupate.  
  
## <a name="see-also"></a>Vedere anche  
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)
