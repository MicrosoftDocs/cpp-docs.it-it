---
title: Controllo Application
ms.date: 11/04/2016
helpviewer_keywords:
- application control [MFC]
ms.assetid: c1f69f15-e0fe-4515-9f36-d63d31869deb
ms.openlocfilehash: 1f438d3344e90a16def2bd4c0f9cedcd47a64203
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81363562"
---
# <a name="application-control"></a>Controllo Application

OLE richiede un controllo sostanziale sulle applicazioni e sui relativi oggetti. Le DLL di sistema OLE devono essere in grado di avviare e rilasciare automaticamente le applicazioni, coordinarne la produzione e la modifica degli oggetti e così via. Le funzioni in questo argomento soddisfano tali requisiti. Oltre a essere chiamate dalle DLL di sistema OLE, queste funzioni a volte devono essere chiamate anche dalle applicazioni.

### <a name="application-control"></a>Controllo Application

|||
|-|-|
|[AfxOleCanExitApp](#afxolecanexitapp)|Indica se l'applicazione può terminare.|
|[AfxOleGetMessageFilter](#afxolegetmessagefilter)|Recupera il filtro messaggi corrente dell'applicazione.|
|[AfxOleGetUserCtrl](#afxolegetuserctrl)|Recupera il flag corrente del controllo utente.|
|[AfxOleSetUserCtrl](#afxolesetuserctrl)|Imposta o cancella il flag del controllo utente.|
|[AfxOleLockApp](#afxolelockapp)|Incrementa il conteggio globale del framework del numero di oggetti attivi in un'applicazione.|
|[AfxOleLockControl](#afxolelockcontrol)| Blocca la class factory del controllo specificato. |
|[AfxOleUnlockApp](#afxoleunlockapp)|Decrementa il conteggio del framework del numero di oggetti attivi in un'applicazione.|
|[AfxOleUnlockControl](#afxoleunlockcontrol)| Sblocca la class factory del controllo specificato. |
|[AfxOleRegisterServerClass](#afxoleregisterserverclass)|Registra un server nel Registro di sistema OLE.|
|[AfxOleSetEditMenu](#afxoleseteditmenu)|Implementa l'interfaccia utente per il comando *typename* Object.|

## <a name="afxolecanexitapp"></a><a name="afxolecanexitapp"></a>AfxOleCanExitApp

Indica se l'applicazione può terminare.

```
BOOL AFXAPI AfxOleCanExitApp();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'applicazione può essere chiusa; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Un'applicazione non deve terminare se sono presenti riferimenti a oggetti in attesa. Le funzioni globali `AfxOleLockApp` e `AfxOleUnlockApp` rispettivamente incrementano e decrementano un contatore di riferimenti agli oggetti dell'applicazione. L'applicazione non deve terminare quando questo contatore è diverso da zero. Se il contatore è diverso da zero, quando l'utente sceglie Chiudi dal menu di sistema o Esci dal menu File la finestra principale dell'applicazione viene nascosta (non eliminata definitivamente). Il framework chiama `CFrameWnd::OnClose`questa funzione in .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAutomation#2](../../mfc/codesnippet/cpp/application-control_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp.h

## <a name="afxolegetmessagefilter"></a><a name="afxolegetmessagefilter"></a>AfxOleGetMessageFilter

Recupera il filtro messaggi corrente dell'applicazione.

```
COleMessageFilter* AFXAPI AfxOleGetMessageFilter();
```

### <a name="return-value"></a>Valore restituito

Puntatore al filtro messaggi corrente.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per accedere all'oggetto derivato da `COleMessageFilter` corrente, in modo analogo a come si utilizza `AfxGetApp` per accedere all'oggetto applicazione corrente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAutomation#3](../../mfc/codesnippet/cpp/application-control_2.cpp)]

[!code-cpp[NVC_MFCAutomation#4](../../mfc/codesnippet/cpp/application-control_3.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione**: afxwin.h

## <a name="afxolegetuserctrl"></a><a name="afxolegetuserctrl"></a>AfxOleGetUserCtrl

Recupera il flag corrente del controllo utente.

```
BOOL AFXAPI AfxOleGetUserCtrl();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente controlla l'applicazione; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

L'utente controlla l'applicazione quando apre o crea in modo esplicito un nuovo documento. L'utente controlla inoltre l'applicazione se l'applicazione non è stata avviata dalle DLL del sistema OL, in altre parole se l'utente ha avviato l'applicazione con la shell di sistema.

### <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp.h

## <a name="afxolesetuserctrl"></a><a name="afxolesetuserctrl"></a>AfxOleSetUserCtrl (AfxOleSetUserCtrl)

Imposta o cancella il flag del controllo utente, `AfxOleGetUserCtrl`illustrato nel riferimento per .

```
void AFXAPI AfxOleSetUserCtrl(BOOL bUserCtrl);
```

### <a name="parameters"></a>Parametri

*bUserCtrl (Ctrl)*<br/>
Specifica se il flag del controllo utente deve essere impostato o deselezionato.

### <a name="remarks"></a>Osservazioni

Il framework chiama questa funzione quando l'utente crea o carica un documento, ma non quando un documento viene caricato o creato tramite un'azione indiretta, ad esempio il caricamento di un oggetto incorporato da un'applicazione contenitore.

Chiamare questa funzione se altre azioni nell'applicazione devono inserire l'utente nel controllo dell'applicazione.

### <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp.h

## <a name="afxolelockapp"></a><a name="afxolelockapp"></a>AfxOleLockApp

Incrementa il conteggio globale del framework del numero di oggetti attivi nell'applicazione.

```
void AFXAPI AfxOleLockApp();
```

### <a name="remarks"></a>Osservazioni

Il framework mantiene un conteggio del numero di oggetti attivi in un'applicazione. Le `AfxOleLockApp` `AfxOleUnlockApp` funzioni e, rispettivamente, incrementano e decrementano questo conteggio.

Quando l'utente tenta di chiudere un'applicazione che dispone di oggetti attivi, ovvero un'applicazione per cui il numero di oggetti attivi è diverso da zero, il framework nasconde l'applicazione dalla visualizzazione dell'utente anziché arrestarla completamente. La `AfxOleCanExitApp` funzione indica se l'applicazione può terminare.

Chiamata `AfxOleLockApp` da qualsiasi oggetto che espone interfacce OLE, se non è auspicabile che l'oggetto venga eliminato mentre è ancora utilizzato da un'applicazione client. `AfxOleUnlockApp` Chiamare anche il distruttore di qualsiasi `AfxOleLockApp` oggetto che chiama nel costruttore. Per impostazione predefinita, `COleDocument` (e le classi derivate) bloccano e sbloccano automaticamente l'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAutomation#5](../../mfc/codesnippet/cpp/application-control_4.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp.h

## <a name="afxoleunlockapp"></a><a name="afxoleunlockapp"></a>AfxOleUnlockApp

Decrementa il conteggio del framework di oggetti attivi nell'applicazione.

```
void AFXAPI AfxOleUnlockApp();
```

### <a name="remarks"></a>Osservazioni

Vedere `AfxOleLockApp` per ulteriori informazioni.

Quando il numero di oggetti `AfxOleOnReleaseAllObjects` attivi raggiunge lo zero, viene chiamato.

### <a name="example"></a>Esempio

Vedere l'esempio per [AfxOleLockApp](#afxolelockapp).

### <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp.h

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

*lpszProgID (ID Prog)*<br/>
ID univoco del programma del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la class factory del controllo è stata bloccata con successo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Ciò può accelerare notevolmente la visualizzazione dei comandi. Ad esempio, una volta creato un controllo in una finestra di dialogo e bloccato il controllo con `AfxOleLockControl`, non è necessario crearlo e interromperne l'esecuzione ogni volta che la finestra di dialogo viene visualizzata o viene terminata in modo permanente. Se l'utente apre e chiude una finestra di dialogo ripetutamente, il blocco dei controlli può migliorare significativamente le prestazioni. Quando si è pronti per eliminare il controllo in modo permanente, chiamare `AfxOleUnlockControl`.

### <a name="example"></a>Esempio

```cpp
// Starts and locks control's (Microsoft Calendar) class factory.
// Control will remain in memory for lifetime of
// application or until AfxOleUnlockControl() is called.

AfxOleLockControl(_T("MSCAL.Calendar"));
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="afxoleregisterserverclass"></a><a name="afxoleregisterserverclass"></a>AfxOleRegisterServerClass (classe AfxOleRegisterServerClass)

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
Riferimento all'ID di classe OLE del server.

*lpszClassName (nome di classe)*<br/>
Puntatore a una stringa contenente il nome della classe degli oggetti del server.

*lpszShortTypeName (Nome tipo di campo)*<br/>
Puntatore a una stringa contenente il nome breve del tipo di oggetto del server, ad esempio "Chart".

*lpszLongTypeName (Nome tipo lpszLongType)*<br/>
Puntatore a una stringa contenente il nome lungo del tipo di oggetto del server, ad esempio "Grafico di Microsoft Excel 5.0".

*nAppType (Tipo di inademiche*<br/>
Valore, tratto dall'enumerazione OLE_APPTYPE, che specifica il tipo di applicazione OLE. Di seguito sono indicati i valori possibili:

- OAT_INPLACE_SERVER Server dispone di un'interfaccia utente server completa.

- OAT_SERVER Server supporta solo l'incorporamento.

- OAT_CONTAINER Container supporta i collegamenti agli incorporamenti.

- OAT_DISPATCH_OBJECT `IDispatch`oggetto capace.

*RglpszRegister*<br/>
Matrice di puntatori a stringhe che rappresentano le chiavi e i valori da aggiungere al Registro di sistema OLE se non vengono trovati valori esistenti per le chiavi.

*RglpszOverwrite*<br/>
Matrice di puntatori a stringhe che rappresentano le chiavi e i valori da aggiungere al Registro di sistema OLE se il Registro di sistema contiene valori esistenti per le chiavi fornite.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la classe server è stata registrata correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La maggior `COleTemplateServer::Register` parte delle applicazioni può utilizzare per registrare i tipi di documento dell'applicazione. Se il formato del Registro di sistema dell'applicazione `AfxOleRegisterServerClass` non rientra nel modello tipico, è possibile usare per un maggiore controllo.

Il Registro di sistema è costituito da un insieme di chiavi e valori. Gli argomenti *rglpszRegister* e *rglpszOverwrite* sono matrici di puntatori a stringhe, ognuno **NULL** costituito `'\0'`da una chiave e da un valore separato da un carattere NULL ( ). Ognuna di queste stringhe può avere parametri sostituibili le cui posizioni sono contrassegnate dalle sequenze di caratteri *da %1* a *%5*.

I simboli vengono compilati come segue:

|Simbolo|Valore|
|------------|-----------|
|%1|ID di classe, formattato come stringa|
|%2|Nome di classe|
|%3|Percorso del file eseguibile|
|%4|Nome del tipo breve|
|%5|Nome del tipo lungo|

### <a name="requirements"></a>Requisiti

**Intestazione**: afxdisp.h

## <a name="afxoleseteditmenu"></a><a name="afxoleseteditmenu"></a>AfxOleSetEditMenu

Implementa l'interfaccia utente per il comando *typename* Object.

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

*pCliente*<br/>
Puntatore all'elemento OLE client.

*pMenu (Menu)*<br/>
Puntatore all'oggetto menu da aggiornare.

*IMenuItem (informazioni in stato in questo gruppo)*<br/>
Indice della voce di menu da aggiornare.

*NIDVerbMin*<br/>
ID di comando che corrisponde al verbo primario.

*nIDVerbMax*<br/>
ID di comando che corrisponde all'ultimo verbo.

*nIDConvert*<br/>
ID per la voce di menu Converti.

### <a name="remarks"></a>Osservazioni

Se il server riconosce solo un verbo primario, la voce di menu diventa "verbo *nometipo* Oggetto" e il comando *nIDVerbMin* viene inviato quando l'utente sceglie il comando. Se il server riconosce diversi verbi, la voce di menu diventa " *typename* Object " e un sottomenu che elenca tutti i verbi viene visualizzato quando l'utente sceglie il comando. Quando l'utente sceglie un verbo dal sottomenu, *nIDVerbMin* viene inviato se viene scelto il primo verbo, *nIDVerbMin* - 1 viene inviato se viene scelto il secondo verbo e così via. L'implementazione predefinita `COleDocument` gestisce automaticamente questa funzionalità.

È necessario disporre della seguente istruzione nello script delle risorse dell'applicazione del client (. RC):

**#include \<>afxolecl.rc**

### <a name="requirements"></a>Requisiti

**Intestazione**: afxole.h

## <a name="afxoleunlockcontrol"></a><a name="afxoleunlockcontrol"></a>AfxOleUnlockControl

Sblocca la class factory del controllo specificato.

### <a name="syntax"></a>Sintassi

```
BOOL AFXAPI AfxOleUnlockControl( REFCLSID clsid );
BOOL AFXAPI AfxOleUnlockControl( LPCTSTR lpszProgID );
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
ID univoco della classe del controllo.

*lpszProgID (ID Prog)*<br/>
ID univoco del programma del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la class factory del controllo è stata sbloccata correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Un controllo è `AfxOleLockControl`bloccato con , in modo che i dati creati dinamicamente associati al controllo rimangano in memoria. Ciò può velocizzare notevolmente la visualizzazione del controllo perché il controllo non deve essere creato ed eliminato ogni volta che viene visualizzato. Quando si è pronti per eliminare il controllo in modo permanente, chiamare `AfxOleUnlockControl`.

### <a name="example"></a>Esempio

```cpp
// Unlock control's (Microsoft Calendar Control) class factory.

AfxOleUnlockControl(_T("MSCAL.Calendar"));
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
