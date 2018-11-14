---
title: Controllo Application
ms.date: 11/04/2016
f1_keywords:
- vc.mfc.macros
helpviewer_keywords:
- application control [MFC]
ms.assetid: c1f69f15-e0fe-4515-9f36-d63d31869deb
ms.openlocfilehash: 55a5dcad21502e7aff7427dbdad41d25298356e7
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51518918"
---
# <a name="application-control"></a>Controllo Application

OLE richiede un maggiore controllo delle applicazioni e i relativi oggetti. DLL del sistema OL deve essere in grado di avviare e rilascia automaticamente le applicazioni, coordinare la produzione e la modifica degli oggetti e così via. Le funzioni in questo argomento soddisfano tali requisiti. Oltre a essere chiamato da DLL del sistema ol, queste funzioni devono essere chiamate a volte anche applicazioni.

### <a name="application-control"></a>Controllo Application

|||
|-|-|
|[AfxOleCanExitApp](#afxolecanexitapp)|Indica se l'applicazione può terminare.|
|[AfxOleGetMessageFilter](#afxolegetmessagefilter)|Recupera il filtro messaggi corrente dell'applicazione.|
|[AfxOleGetUserCtrl](#afxolegetuserctrl)|Recupera il flag corrente del controllo utente.|
|[AfxOleSetUserCtrl](#afxolesetuserctrl)|Imposta o Cancella il flag di controllo utente.|
|[AfxOleLockApp](#afxolelockapp)|Incrementa conteggio globale del framework del numero di oggetti attivi in un'applicazione.|
|[AfxOleLockControl](#afxolelockcontrol)| Blocca la class factory del controllo specificato. |
|[AfxOleUnlockApp](#afxoleunlockapp)|Decrementa il conteggio del framework del numero di oggetti attivi in un'applicazione.|
|[AfxOleUnlockControl](#afxoleunlockcontrol)| Sblocca la class factory del controllo specificato. |
|[AfxOleRegisterServerClass](#afxoleregisterserverclass)|Un server viene registrato nel Registro di sistema OLE.|
|[AfxOleSetEditMenu](#afxoleseteditmenu)|Implementa l'interfaccia utente per il *typename* oggetto comando.|

##  <a name="afxolecanexitapp"></a>  AfxOleCanExitApp

Indica se l'applicazione può terminare.

```
BOOL AFXAPI AfxOleCanExitApp();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'applicazione può essere chiusa; in caso contrario, 0.

### <a name="remarks"></a>Note

Un'applicazione non deve terminare se sono presenti riferimenti a oggetti in attesa. Le funzioni globali `AfxOleLockApp` e `AfxOleUnlockApp` rispettivamente incrementano e decrementano un contatore di riferimenti agli oggetti dell'applicazione. L'applicazione non deve terminare quando questo contatore è diverso da zero. Se il contatore è diverso da zero, quando l'utente sceglie Chiudi dal menu di sistema o Esci dal menu File la finestra principale dell'applicazione viene nascosta (non eliminata definitivamente). Il framework chiama questa funzione `CFrameWnd::OnClose`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAutomation#2](../../mfc/codesnippet/cpp/application-control_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp. h

##  <a name="afxolegetmessagefilter"></a>  AfxOleGetMessageFilter

Recupera il filtro messaggi corrente dell'applicazione.

```
COleMessageFilter* AFXAPI AfxOleGetMessageFilter();
```

### <a name="return-value"></a>Valore restituito

Puntatore al filtro messaggi corrente.

### <a name="remarks"></a>Note

Chiamare questa funzione per accedere all'oggetto derivato da `COleMessageFilter` corrente, in modo analogo a come si utilizza `AfxGetApp` per accedere all'oggetto applicazione corrente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAutomation#3](../../mfc/codesnippet/cpp/application-control_2.cpp)]

[!code-cpp[NVC_MFCAutomation#4](../../mfc/codesnippet/cpp/application-control_3.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione**: AFXWIN. h

##  <a name="afxolegetuserctrl"></a>  AfxOleGetUserCtrl

Recupera il flag corrente del controllo utente.

```
BOOL AFXAPI AfxOleGetUserCtrl();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente controlla l'applicazione; in caso contrario, 0.

### <a name="remarks"></a>Note

L'utente controlla l'applicazione quando apre o crea in modo esplicito un nuovo documento. L'utente controlla inoltre l'applicazione se l'applicazione non è stata avviata dalle DLL del sistema OL, in altre parole se l'utente ha avviato l'applicazione con la shell di sistema.

### <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp. h

##  <a name="afxolesetuserctrl"></a>  AfxOleSetUserCtrl

Imposta o Cancella il flag di controllo utente, la procedura è descritta negli argomenti di riferimento per `AfxOleGetUserCtrl`.

```
void AFXAPI AfxOleSetUserCtrl(BOOL bUserCtrl);
```

### <a name="parameters"></a>Parametri

*bUserCtrl*<br/>
Specifica se il flag di controllo utente da impostare o cancellato.

### <a name="remarks"></a>Note

Il framework chiama questa funzione quando l'utente crea o carica un documento, ma non quando un documento viene caricato o creato tramite un'azione indiretta, ad esempio il caricamento di un oggetto incorporato da un'applicazione contenitore.

Chiamare questa funzione se altre azioni nell'applicazione devono mettere l'utente controlla l'applicazione.

### <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp. h

##  <a name="afxolelockapp"></a>  AfxOleLockApp

Incrementa conteggio globale del framework del numero di oggetti attivi nell'applicazione.

```
void AFXAPI AfxOleLockApp();
```

### <a name="remarks"></a>Note

Il framework mantiene un conteggio del numero di oggetti attivo in un'applicazione. Il `AfxOleLockApp` e `AfxOleUnlockApp` funzioni, rispettivamente, incrementare e decrementare il conteggio.

Quando l'utente tenta di chiudere un'applicazione che dispone di oggetti active, ovvero un'applicazione per il quale il conteggio di oggetti attivi è diverso da zero, il framework nasconde l'applicazione dalla vista dell'utente anziché completamente all'arresto. Il `AfxOleCanExitApp` funzione indica se l'applicazione può terminare.

Chiamare `AfxOleLockApp` da qualsiasi oggetto che espone le interfacce OLE, nel caso in cui potrebbe essere inaccettabile per l'oggetto da distruggere pur essendo ancora utilizzato da un'applicazione client. Anche chiamata `AfxOleUnlockApp` nel distruttore di qualsiasi oggetto che chiama `AfxOleLockApp` nel costruttore. Per impostazione predefinita, `COleDocument` (e le classi derivate) automaticamente bloccare e sbloccare l'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAutomation#5](../../mfc/codesnippet/cpp/application-control_4.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp. h

##  <a name="afxoleunlockapp"></a>  AfxOleUnlockApp

Decrementa il conteggio del framework di oggetti attivi nell'applicazione.

```
void AFXAPI AfxOleUnlockApp();
```

### <a name="remarks"></a>Note

Vedere `AfxOleLockApp` per altre informazioni.

Quando il numero di oggetti attivi raggiunge lo zero, `AfxOleOnReleaseAllObjects` viene chiamato.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [AfxOleLockApp](#afxolelockapp).

### <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp. h

## <a name="afxolelockcontrol"></a>AfxOleLockControl

Blocca la class factory del controllo specificato in modo che i dati creati dinamicamente associati al controllo rimangano in memoria.

### <a name="syntax"></a>Sintassi

```
BOOL AFXAPI AfxOleLockControl(  REFCLSID clsid  );
BOOL AFXAPI AfxOleLockControl( LPCTSTR lpszProgID );
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
ID univoco della classe del controllo.

*lpszProgID*<br/>
ID univoco del programma del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la class factory del controllo è stata bloccata con successo; in caso contrario, 0.

### <a name="remarks"></a>Note

Ciò può accelerare notevolmente la visualizzazione dei comandi. Ad esempio, una volta creato un controllo in una finestra di dialogo e bloccato il controllo con `AfxOleLockControl`, non è necessario crearlo e interromperne l'esecuzione ogni volta che la finestra di dialogo viene visualizzata o viene eliminata in modo permanente. Se l'utente apre e chiude una finestra di dialogo ripetutamente, il blocco dei controlli può migliorare significativamente le prestazioni. Quando si è pronti per eliminare definitivamente il controllo, chiamare `AfxOleUnlockControl`.

### <a name="example"></a>Esempio

```cpp
// Starts and locks control's (Microsoft Calendar) class factory.
// Control will remain in memory for lifetime of
// application or until AfxOleUnlockControl() is called.

AfxOleLockControl(_T("MSCAL.Calendar"));
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

### <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[AfxOleUnlockControl](#afxoleunlockcontrol)

##  <a name="afxoleregisterserverclass"></a>  AfxOleRegisterServerClass

Questa funzione consente di registrare il server nel Registro di sistema OLE.

```
BOOL AFXAPI AfxOleRegisterServerClass(
    REFCLSID clsid,
    LPCTSTR lpszClassName,
    LPCTSTR lpszShortTypeName,
    LPCTSTR lpszLongTypeName,
    OLE_APPTYPE nAppType = OAT_SERVER,
    LPCTSTR* rglpszRegister = NULL,
    LPCTSTR* rglpszOverwrite = NULL);
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
Riferimento all'ID della classe OLE. del server

*lpszClassName*<br/>
Puntatore a una stringa contenente il nome della classe di oggetti del server.

*lpszShortTypeName*<br/>
Puntatore a una stringa contenente il nome breve del tipo di oggetto del server, ad esempio "Grafico".

*lpszLongTypeName*<br/>
Puntatore a una stringa contenente il nome lungo del tipo di oggetto del server, ad esempio "Microsoft Excel 5.0 grafico".

*nAppType*<br/>
Valore ricavato dall'enumerazione OLE_APPTYPE, che specifica il tipo di un'applicazione OLE. I valori possibili sono i seguenti:

- OAT_INPLACE_SERVER Server con interfaccia utente completa di server.

- OAT_SERVER Server supporta solo l'incorporamento.

- OAT_CONTAINER contenitore supporta collegamenti a incorporamenti.

- OAT_DISPATCH_OBJECT `IDispatch`-oggetto in grado di supportare.

*rglpszRegister*<br/>
Matrice di puntatori a stringhe che rappresentano le chiavi e valori da aggiungere al Registro di sistema OLE se nessun valore esistente per le chiavi vengono trovato.

*rglpszOverwrite*<br/>
Matrice di puntatori a stringhe che rappresentano le chiavi e valori da aggiungere al Registro di sistema OLE se nel Registro di sistema contiene i valori esistenti per le chiavi specificate.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la classe del server viene registrata. in caso contrario 0.

### <a name="remarks"></a>Note

La maggior parte delle applicazioni possono usare `COleTemplateServer::Register` per registrare i tipi di documenti dell'applicazione. Se il formato del Registro di sistema dell'applicazione non rientrano nel modello tipico, è possibile usare `AfxOleRegisterServerClass` per un maggiore controllo.

Il Registro di sistema è costituito da un set di chiavi e valori. Il *rglpszRegister* e *rglpszOverwrite* gli argomenti sono le matrici di puntatori alle stringhe, ognuno costituito da una chiave e un valore separato da una **NULL** carattere ( `'\0'`). Ognuna di queste stringhe possa avere parametri sostituibili cui posizioni sono contrassegnati dalle sequenze di caratteri *%1* attraverso *%5*.

I simboli sono compilati nel modo seguente:

|Simbolo|Valore|
|------------|-----------|
|%1|ID di classe, formattati come stringa|
|%2|Nome di classe|
|%3|Percorso file eseguibile|
|%4|Nome breve del tipo|
|%5|Nome di tipo Long|

### <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp. h

##  <a name="afxoleseteditmenu"></a>  AfxOleSetEditMenu

Implementa l'interfaccia utente per il *typename* oggetto comando.

```
void AFXAPI AfxOleSetEditMenu(
    COleClientItem* pClient,
    CMenu* pMenu,
    UINT iMenuItem,
    UINT nIDVerbMin,
    UINT nIDVerbMax = 0,
    UINT nIDConvert = 0);
```

### <a name="parameters"></a>Parametri

*pClient*<br/>
Un puntatore all'elemento client OLE.

*pMenu*<br/>
Un puntatore all'oggetto menu da aggiornare.

*iMenuItem*<br/>
L'indice della voce di menu da aggiornare.

*nIDVerbMin*<br/>
L'ID di comando che corrisponde al verbo primario.

*nIDVerbMax*<br/>
L'ID di comando che corrisponde all'ultimo verbo.

*nIDConvert*<br/>
ID della voce di menu Convert.

### <a name="remarks"></a>Note

Se il server riconosce solo un verbo primario, la voce di menu diventa "verbo *nomeTipo* oggetto" e il *nIDVerbMin* comando viene inviato quando l'utente sceglie il comando. Se il server riconosca diversi verbi e quindi diventa la voce di menu " *typename* oggetto" e viene visualizzato un sottomenu che elenca tutti i verbi quando l'utente sceglie il comando. Quando l'utente sceglie un verbo dal sottomenu *nIDVerbMin* viene inviato se viene scelto il primo verbo, *nIDVerbMin* + 1 viene inviato se il verbo secondo viene scelto e così via. Il valore predefinito `COleDocument` implementazione gestisce automaticamente questa funzionalità.

È necessario disporre l'istruzione seguente nello script di risorsa dell'applicazione del client (. File RC):

**#includere \<afxolecl.rc >**

### <a name="requirements"></a>Requisiti

**Intestazione**: AFXOLE. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

## <a name="afxoleunlockcontrol"></a> AfxOleUnlockControl

Sblocca la class factory del controllo specificato.

### <a name="syntax"></a>Sintassi

```
BOOL AFXAPI AfxOleUnlockControl( REFCLSID clsid );
BOOL AFXAPI AfxOleUnlockControl( LPCTSTR lpszProgID );
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
ID univoco della classe del controllo.

*lpszProgID*<br/>
ID univoco del programma del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la class factory del controllo è stata sbloccata; in caso contrario 0.

### <a name="remarks"></a>Note

Un controllo è bloccato con `AfxOleLockControl`, in modo che i dati creati dinamicamente associati al controllo rimangono in memoria. Ciò può accelerare notevolmente la visualizzazione del controllo, perché il controllo non debba essere creato ed eliminato ogni volta che viene visualizzato. Quando si è pronti per eliminare definitivamente il controllo, chiamare `AfxOleUnlockControl`.

### <a name="example"></a>Esempio

```cpp
// Unlock control's (Microsoft Calendar Control) class factory.

AfxOleUnlockControl(_T("MSCAL.Calendar"));
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

### <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[AfxOleLockControl](#afxolelockcontrol)

