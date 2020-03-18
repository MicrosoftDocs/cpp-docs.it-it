---
title: Classe CDialog
ms.date: 09/07/2019
f1_keywords:
- CDialog
- AFXWIN/CDialog
- AFXWIN/CDialog::CDialog
- AFXWIN/CDialog::Create
- AFXWIN/CDialog::CreateIndirect
- AFXWIN/CDialog::DoModal
- AFXWIN/CDialog::EndDialog
- AFXWIN/CDialog::GetDefID
- AFXWIN/CDialog::GotoDlgCtrl
- AFXWIN/CDialog::InitModalIndirect
- AFXWIN/CDialog::MapDialogRect
- AFXWIN/CDialog::NextDlgCtrl
- AFXWIN/CDialog::OnInitDialog
- AFXWIN/CDialog::OnSetFont
- AFXWIN/CDialog::PrevDlgCtrl
- AFXWIN/CDialog::SetDefID
- AFXWIN/CDialog::SetHelpID
- AFXWIN/CDialog::OnCancel
- AFXWIN/CDialog::OnOK
helpviewer_keywords:
- CDialog [MFC], CDialog
- CDialog [MFC], Create
- CDialog [MFC], CreateIndirect
- CDialog [MFC], DoModal
- CDialog [MFC], EndDialog
- CDialog [MFC], GetDefID
- CDialog [MFC], GotoDlgCtrl
- CDialog [MFC], InitModalIndirect
- CDialog [MFC], MapDialogRect
- CDialog [MFC], NextDlgCtrl
- CDialog [MFC], OnInitDialog
- CDialog [MFC], OnSetFont
- CDialog [MFC], PrevDlgCtrl
- CDialog [MFC], SetDefID
- CDialog [MFC], SetHelpID
- CDialog [MFC], OnCancel
- CDialog [MFC], OnOK
ms.assetid: ca64b77e-2cd2-47e3-8eff-c2645ad578f9
ms.openlocfilehash: b07190c70fb11950b25aff45fb10e850c0e81b24
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79418720"
---
# <a name="cdialog-class"></a>Classe CDialog

Classe di base utilizzata per la visualizzazione delle finestre di dialogo sullo schermo.

## <a name="syntax"></a>Sintassi

```
class CDialog : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDialog:: CDialog](#cdialog)|Costruisce un oggetto `CDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDialog:: create](#create)|Inizializza l'oggetto `CDialog`. Crea una finestra di dialogo non modale e la collega all'oggetto `CDialog`.|
|[CDialog:: CreateIndirect](#createindirect)|Crea una finestra di dialogo non modale da un modello di finestra di dialogo in memoria (non basato su risorse).|
|[CDialog::D oModal](#domodal)|Chiama una finestra di dialogo modale e restituisce al termine.|
|[CDialog:: EndDialog](#enddialog)|Chiude una finestra di dialogo modale.|
|[CDialog:: GetDefID](#getdefid)|Ottiene l'ID del controllo pulsante predefinito per una finestra di dialogo.|
|[CDialog:: GotoDlgCtrl](#gotodlgctrl)|Sposta lo stato attivo su un controllo della finestra di dialogo specificato nella finestra di dialogo.|
|[CDialog:: InitModalIndirect](#initmodalindirect)|Crea una finestra di dialogo modale da un modello di finestra di dialogo in memoria (non basato su risorse). I parametri vengono archiviati fino a quando non viene chiamata la funzione `DoModal`.|
|[CDialog:: MapDialogRect](#mapdialogrect)|Converte le unità della finestra di dialogo di un rettangolo in unità dello schermo.|
|[CDialog:: NextDlgCtrl](#nextdlgctrl)|Sposta lo stato attivo sul controllo della finestra di dialogo successivo nella finestra di dialogo.|
|[CDialog:: OnInitDialog](#oninitdialog)|Eseguire l'override per aumentare l'inizializzazione della finestra di dialogo.|
|[CDialog:: OnSetFont](#onsetfont)|Eseguire l'override di per specificare il tipo di carattere da utilizzare per il controllo della finestra di dialogo quando viene disegnato il testo.|
|[CDialog::P revDlgCtrl](#prevdlgctrl)|Sposta lo stato attivo sul controllo della finestra di dialogo precedente nella finestra di dialogo.|
|[CDialog:: SetDefID](#setdefid)|Modifica il controllo pulsante predefinito per una finestra di dialogo in un pulsante specificato.|
|[CDialog:: SetHelpID](#sethelpid)|Imposta un ID della Guida sensibile al contesto per la finestra di dialogo.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CDialog:: OnCancel](#oncancel)|Eseguire l'override di per eseguire il pulsante Annulla o l'azione tasto ESC. Il valore predefinito chiude la finestra di dialogo e `DoModal` restituisce IDCANCEL.|
|[CDialog:: OnOK (](#onok)|Eseguire l'override di per eseguire l'azione pulsante OK in una finestra di dialogo modale. Il valore predefinito chiude la finestra di dialogo e `DoModal` restituisce IDOK.|

## <a name="remarks"></a>Osservazioni

Le finestre di dialogo sono di due tipi: modale e non modale. Una finestra di dialogo modale deve essere chiusa dall'utente prima che l'applicazione continui. Una finestra di dialogo non modale consente all'utente di visualizzare la finestra di dialogo e tornare a un'altra attività senza annullare o rimuovere la finestra di dialogo.

Un oggetto `CDialog` è una combinazione di un modello di finestra di dialogo e di una classe derivata da `CDialog`. Utilizzare l'editor finestre per creare il modello di finestra di dialogo e archiviarlo in una risorsa, quindi utilizzare la procedura guidata Aggiungi classe per creare una classe derivata da `CDialog`.

Una finestra di dialogo, come qualsiasi altra finestra, riceve messaggi da Windows. In una finestra di dialogo è particolarmente interessante gestire i messaggi di notifica dai controlli della finestra di dialogo, poiché questo è il modo in cui l'utente interagisce con la finestra di dialogo. Utilizzare la [creazione guidata classe](mfc-class-wizard.md) per selezionare i messaggi che si desidera gestire e aggiungere le voci della mappa messaggi e le funzioni membro del gestore messaggi appropriati alla classe. È sufficiente scrivere codice specifico dell'applicazione nelle funzioni membro del gestore.

Se si preferisce, è sempre possibile scrivere manualmente le voci della mappa messaggi e le funzioni membro.

In tutta la finestra di dialogo, tranne la più semplice, si aggiungono le variabili membro alla classe della finestra di dialogo derivata per archiviare i dati immessi nei controlli della finestra di dialogo dall'utente o per visualizzare i dati per l'utente. È possibile utilizzare la procedura guidata Aggiungi variabile per creare variabili membro e associarle ai controlli. Allo stesso tempo, è possibile scegliere un tipo di variabile e un intervallo di valori consentiti per ogni variabile. La creazione guidata codice consente di aggiungere le variabili membro alla classe della finestra di dialogo derivata.

Viene generata una mappa dati per gestire automaticamente lo scambio di dati tra le variabili membro e i controlli della finestra di dialogo. La mappa dei dati fornisce funzioni che inizializzano i controlli della finestra di dialogo con i valori appropriati, recuperano i dati e convalidano i dati.

Per creare una finestra di dialogo modale, costruire un oggetto nello stack usando il costruttore per la classe della finestra di dialogo derivata, quindi chiamare `DoModal` per creare la finestra di dialogo e i relativi controlli. Se si vuole creare una finestra di dialogo non modale, chiamare `Create` nel costruttore della classe della finestra di dialogo.

È anche possibile creare un modello in memoria usando una struttura di dati [DLGTEMPLATE](/windows/win32/api/winuser/ns-winuser-dlgtemplate) come descritto nel Windows SDK. Dopo aver costruito un oggetto `CDialog`, chiamare [CreateIndirect](#createindirect) per creare una finestra di dialogo non modale oppure chiamare [InitModalIndirect](#initmodalindirect) e [DoModal](#domodal) per creare una finestra di dialogo modale.

Il mapping dei dati di Exchange e di convalida viene scritto in un override di `CWnd::DoDataExchange` aggiunto alla nuova classe della finestra di dialogo. Vedere la funzione membro [DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange) in `CWnd` per altre informazioni sulle funzionalità di Exchange e di convalida.

Il programmatore e il Framework chiamano `DoDataExchange` indirettamente tramite una chiamata a [CWnd:: UpdateData](../../mfc/reference/cwnd-class.md#updatedata).

Il Framework chiama `UpdateData` quando l'utente fa clic sul pulsante OK per chiudere una finestra di dialogo modale. I dati non vengono recuperati se si fa clic sul pulsante Annulla. L'implementazione predefinita di [OnInitDialog](#oninitdialog) chiama anche `UpdateData` per impostare i valori iniziali dei controlli. In genere si esegue l'override di `OnInitDialog` per inizializzare ulteriormente i controlli. `OnInitDialog` viene chiamato dopo la creazione di tutti i controlli della finestra di dialogo e immediatamente prima della visualizzazione della finestra di dialogo.

È possibile chiamare `CWnd::UpdateData` in qualsiasi momento durante l'esecuzione di una finestra di dialogo modale o non modale.

Se si sviluppa manualmente una finestra di dialogo, si aggiungono le variabili membro necessarie alla classe della finestra di dialogo derivata e si aggiungono funzioni membro per impostare o ottenere questi valori.

Una finestra di dialogo modale viene chiusa automaticamente quando l'utente preme i pulsanti OK o Annulla oppure quando il codice chiama la funzione membro `EndDialog`.

Quando si implementa una finestra di dialogo non modale, è sempre necessario eseguire l'override della funzione membro `OnCancel` e chiamare `DestroyWindow` all'interno. Non chiamare la classe di base `CDialog::OnCancel`, perché chiama `EndDialog`, che renderà invisibile la finestra di dialogo, ma non la eliminerà. È inoltre consigliabile eseguire l'override `PostNcDestroy` per le finestre di dialogo non modali **per eliminarlo**, poiché le finestre di dialogo non modali vengono in genere allocate con **New**. Le finestre di dialogo modali vengono in genere costruite sul frame e non necessitano di `PostNcDestroy` pulitura.

Per ulteriori informazioni su `CDialog`, vedere [finestre di dialogo](../../mfc/dialog-boxes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cdialog"></a>CDialog:: CDialog

Per costruire una finestra di dialogo modale basata sulle risorse, chiamare una delle forme pubbliche del costruttore.

```
explicit CDialog(
    LPCTSTR lpszTemplateName,
    CWnd* pParentWnd = NULL);

explicit CDialog(
    UINT nIDTemplate,
    CWnd* pParentWnd = NULL);

CDialog();
```

### <a name="parameters"></a>Parametri

*lpszTemplateName*<br/>
Contiene una stringa a terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.

*nIDTemplate*<br/>
Contiene il numero di ID di una risorsa modello di finestra di dialogo.

*pParentWnd*<br/>
Punta all'oggetto padre o alla finestra proprietaria (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Osservazioni

Un form del costruttore consente di accedere alla risorsa della finestra di dialogo in base al nome del modello. L'altro costruttore fornisce l'accesso in base al numero ID del modello, in genere con un prefisso **IDD_** , ad esempio IDD_DIALOG1.

Per costruire una finestra di dialogo modale da un modello in memoria, richiamare innanzitutto il costruttore protetto senza parametri, quindi chiamare `InitModalIndirect`.

Dopo aver costruito una finestra di dialogo modale con uno dei metodi precedenti, chiamare `DoModal`.

Per costruire una finestra di dialogo non modale, utilizzare il form protetto del costruttore `CDialog`. Il costruttore è protetto perché è necessario derivare la propria classe della finestra di dialogo per implementare una finestra di dialogo non modale. La costruzione di una finestra di dialogo non modale è un processo in due passaggi. Chiamare prima il costruttore; chiamare quindi la funzione membro `Create` per creare una finestra di dialogo basata su risorse oppure chiamare `CreateIndirect` per creare la finestra di dialogo da un modello in memoria.

##  <a name="create"></a>CDialog:: create

Chiamare `Create` per creare una finestra di dialogo non modale usando un modello di finestra di dialogo da una risorsa.

```
virtual BOOL Create(
    LPCTSTR lpszTemplateName,
    CWnd* pParentWnd = NULL);

virtual BOOL Create(
    UINT nIDTemplate,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*lpszTemplateName*<br/>
Contiene una stringa a terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.

*pParentWnd*<br/>
Punta all'oggetto finestra padre (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

*nIDTemplate*<br/>
Contiene il numero di ID di una risorsa modello di finestra di dialogo.

### <a name="return-value"></a>Valore restituito

Entrambi i form restituiscono un valore diverso da zero se la creazione e l'inizializzazione della finestra di dialogo sono state in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

È possibile inserire la chiamata a `Create` all'interno del costruttore o chiamarla dopo che il costruttore è stato richiamato.

Sono disponibili due forme della funzione membro `Create` per accedere alla risorsa modello della finestra di dialogo in base al nome del modello o al numero ID del modello, ad esempio IDD_DIALOG1.

Per entrambi i form, passare un puntatore all'oggetto finestra padre. Se *pParentWnd* è null, la finestra di dialogo verrà creata con la finestra padre o proprietaria impostata sulla finestra principale dell'applicazione.

La funzione membro `Create` viene restituita immediatamente dopo la creazione della finestra di dialogo.

Utilizzare lo stile WS_VISIBLE nel modello della finestra di dialogo se la finestra di dialogo deve essere visualizzata quando viene creata la finestra padre. In caso contrario, è necessario chiamare `ShowWindow`. Per altri stili della finestra di dialogo e per l'applicazione, vedere la struttura [DLGTEMPLATE](/windows/win32/api/winuser/ns-winuser-dlgtemplate) negli stili Windows SDK e [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) in *riferimenti a MFC*.

Utilizzare la funzione `CWnd::DestroyWindow` per eliminare definitivamente una finestra di dialogo creata dalla funzione `Create`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#62](../../mfc/codesnippet/cpp/cdialog-class_1.cpp)]

##  <a name="createindirect"></a>CDialog:: CreateIndirect

Chiamare questa funzione membro per creare una finestra di dialogo non modale da un modello di finestra di dialogo in memoria.

```
virtual BOOL CreateIndirect(
    LPCDLGTEMPLATE lpDialogTemplate,
    CWnd* pParentWnd = NULL,
    void* lpDialogInit = NULL);

virtual BOOL CreateIndirect(
    HGLOBAL hDialogTemplate,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*lpDialogTemplate*<br/>
Punta alla memoria che contiene un modello di finestra di dialogo utilizzato per creare la finestra di dialogo. Questo modello è sotto forma di una struttura [DLGTEMPLATE](/windows/win32/api/winuser/ns-winuser-dlgtemplate) e di informazioni di controllo, come descritto nel Windows SDK.

*pParentWnd*<br/>
Punta all'oggetto finestra padre dell'oggetto finestra di dialogo (di tipo [CWnd](../../mfc/reference/cwnd-class.md)). Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

*lpDialogInit*<br/>
Punta a una risorsa DLGINIT.

*hDialogTemplate*<br/>
Contiene un handle per la memoria globale contenente un modello di finestra di dialogo. Questo modello è sotto forma di struttura `DLGTEMPLATE` e dati per ogni controllo nella finestra di dialogo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra di dialogo è stata creata e inizializzata correttamente. in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

La funzione membro `CreateIndirect` viene restituita immediatamente dopo la creazione della finestra di dialogo.

Utilizzare lo stile WS_VISIBLE nel modello della finestra di dialogo se la finestra di dialogo deve essere visualizzata quando viene creata la finestra padre. In caso contrario, è necessario chiamare `ShowWindow` per determinarne la visualizzazione. Per ulteriori informazioni su come è possibile specificare altri stili della finestra di dialogo nel modello, vedere la struttura [DLGTEMPLATE](/windows/win32/api/winuser/ns-winuser-dlgtemplate) nel Windows SDK.

Utilizzare la funzione `CWnd::DestroyWindow` per eliminare definitivamente una finestra di dialogo creata dalla funzione `CreateIndirect`.

Le finestre di dialogo che contengono controlli ActiveX richiedono informazioni aggiuntive fornite in una risorsa DLGINIT.

##  <a name="domodal"></a>CDialog::D oModal

Chiamare questa funzione membro per richiamare la finestra di dialogo modale e restituire il risultato della finestra di dialogo al termine dell'operazione.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Valore **int** che specifica il valore del parametro *nResult* passato alla funzione membro [CDialog:: EndDialog](#enddialog) , che viene utilizzata per chiudere la finestra di dialogo. Il valore restituito è-1 se la funzione non è in grado di creare la finestra di dialogo o IDABORT se si è verificato un altro errore, nel qual caso la finestra di output conterrà le informazioni sull'errore da [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### <a name="remarks"></a>Osservazioni

Questa funzione membro gestisce tutte le interazioni con l'utente mentre la finestra di dialogo è attiva. Questa operazione rende la finestra di dialogo modale. ovvero, l'utente non può interagire con altre finestre finché la finestra di dialogo non viene chiusa.

Se l'utente fa clic su uno dei pulsanti nella finestra di dialogo, ad esempio OK o Annulla, viene chiamata una funzione membro del gestore del messaggio, ad esempio [OnOK (](#onok) o [OnCancel](#oncancel), per tentare di chiudere la finestra di dialogo. La funzione membro `OnOK` predefinita convaliderà e aggiornerà i dati della finestra di dialogo e chiuderà la finestra di dialogo con il risultato IDOK e la funzione membro `OnCancel` predefinita chiuderà la finestra di dialogo con il risultato IDCANCEL senza convalidare o aggiornare i dati della finestra di dialogo. È possibile eseguire l'override di queste funzioni del gestore di messaggi per modificarne il comportamento.

> [!NOTE]
> `PreTranslateMessage` viene ora chiamato per l'elaborazione modale dei messaggi della finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#63](../../mfc/codesnippet/cpp/cdialog-class_2.cpp)]

##  <a name="enddialog"></a>CDialog:: EndDialog

Chiamare questa funzione membro per terminare una finestra di dialogo modale.

```
void EndDialog(int nResult);
```

### <a name="parameters"></a>Parametri

*nResult*<br/>
Contiene il valore da restituire dalla finestra di dialogo al chiamante del `DoModal`.

### <a name="remarks"></a>Osservazioni

Questa funzione membro restituisce *nResult* come valore restituito di `DoModal`. È necessario utilizzare la funzione `EndDialog` per completare l'elaborazione ogni volta che viene creata una finestra di dialogo modale.

È possibile chiamare `EndDialog` in qualsiasi momento, anche in [OnInitDialog](#oninitdialog), nel qual caso è necessario chiudere la finestra di dialogo prima che venga visualizzata o prima di impostare lo stato attivo per l'input.

`EndDialog` non chiude immediatamente la finestra di dialogo. Imposta invece un flag che indirizza la finestra di dialogo alla chiusura non appena viene restituito il gestore di messaggi corrente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#64](../../mfc/codesnippet/cpp/cdialog-class_3.cpp)]

[!code-cpp[NVC_MFCControlLadenDialog#65](../../mfc/codesnippet/cpp/cdialog-class_4.cpp)]

##  <a name="getdefid"></a>CDialog:: GetDefID

Chiamare la funzione membro `GetDefID` per ottenere l'ID del controllo pulsante predefinito per una finestra di dialogo.

```
DWORD GetDefID() const;
```

### <a name="return-value"></a>Valore restituito

Valore a 32 bit (`DWORD`). Se il pulsante predefinito ha un valore ID, la parola più significativa contiene DC_HASDEFID e la parola di ordine inferiore contiene il valore ID. Se il pulsante predefinito non dispone di un valore ID, il valore restituito è 0.

### <a name="remarks"></a>Osservazioni

Si tratta in genere di un pulsante OK.

##  <a name="gotodlgctrl"></a>CDialog:: GotoDlgCtrl

Sposta lo stato attivo sul controllo specificato nella finestra di dialogo.

```
void GotoDlgCtrl(CWnd* pWndCtrl);
```

### <a name="parameters"></a>Parametri

*pWndCtrl*<br/>
Identifica la finestra (controllo) che deve ricevere lo stato attivo.

### <a name="remarks"></a>Osservazioni

Per ottenere un puntatore al controllo (finestra figlio) da passare come *pWndCtrl*, chiamare la funzione membro `CWnd::GetDlgItem`, che restituisce un puntatore a un oggetto [CWnd](../../mfc/reference/cwnd-class.md) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWnd:: GetDlgItem](../../mfc/reference/cwnd-class.md#getdlgitem).

##  <a name="initmodalindirect"></a>CDialog:: InitModalIndirect

Chiamare questa funzione membro per inizializzare un oggetto finestra di dialogo modale usando un modello di finestra di dialogo che viene costruito in memoria.

```
BOOL InitModalIndirect(
    LPCDLGTEMPLATE lpDialogTemplate,
    CWnd* pParentWnd = NULL,
    void* lpDialogInit = NULL);

    BOOL InitModalIndirect(
    HGLOBAL hDialogTemplate,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*lpDialogTemplate*<br/>
Punta alla memoria che contiene un modello di finestra di dialogo utilizzato per creare la finestra di dialogo. Questo modello è sotto forma di una struttura [DLGTEMPLATE](/windows/win32/api/winuser/ns-winuser-dlgtemplate) e di informazioni di controllo, come descritto nel Windows SDK.

*hDialogTemplate*<br/>
Contiene un handle per la memoria globale contenente un modello di finestra di dialogo. Questo modello è sotto forma di struttura `DLGTEMPLATE` e dati per ogni controllo nella finestra di dialogo.

*pParentWnd*<br/>
Punta all'oggetto padre o alla finestra proprietaria (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

*lpDialogInit*<br/>
Punta a una risorsa DLGINIT.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto finestra di dialogo è stato creato e inizializzato correttamente. in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Per creare una finestra di dialogo modale indirettamente, allocare prima di tutto un blocco di memoria globale e riempirlo con il modello della finestra di dialogo. Chiamare quindi il costruttore `CDialog` vuoto per costruire l'oggetto della finestra di dialogo. Chiamare quindi `InitModalIndirect` per archiviare l'handle nel modello della finestra di dialogo in memoria. La finestra di dialogo di Windows viene creata e visualizzata in un secondo momento, quando viene chiamata la funzione membro [DoModal](#domodal) .

Le finestre di dialogo che contengono controlli ActiveX richiedono informazioni aggiuntive fornite in una risorsa DLGINIT.

##  <a name="mapdialogrect"></a>CDialog:: MapDialogRect

Chiamare per convertire le unità della finestra di dialogo di un rettangolo in unità dello schermo.

```
void MapDialogRect(LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Punta a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) o a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) che contiene le coordinate della finestra di dialogo da convertire.

### <a name="remarks"></a>Osservazioni

Le unità della finestra di dialogo vengono indicate in termini di unità di base della finestra di dialogo corrente derivata dalla larghezza media e dall'altezza dei caratteri nel tipo di carattere utilizzato per il testo della finestra di dialogo. Un'unità orizzontale è un quarto dell'unità di larghezza base della finestra di dialogo e un'unità verticale è un ottavo dell'unità altezza di base della finestra di dialogo.

La funzione `GetDialogBaseUnits` Windows restituisce le informazioni sulle dimensioni per il tipo di carattere del sistema, ma è possibile specificare un tipo di carattere diverso per ogni finestra di dialogo se si utilizza lo stile DS_SETFONT nel file di definizione delle risorse. La funzione `MapDialogRect` Windows utilizza il tipo di carattere appropriato per questa finestra di dialogo.

La funzione membro `MapDialogRect` sostituisce le unità della finestra di dialogo in *lpRect* con unità schermo (pixel), in modo che il rettangolo possa essere utilizzato per creare una finestra di dialogo o posizionare un controllo all'interno di una casella.

##  <a name="nextdlgctrl"></a>CDialog:: NextDlgCtrl

Sposta lo stato attivo sul controllo successivo nella finestra di dialogo.

```
void NextDlgCtrl() const;
```

### <a name="remarks"></a>Osservazioni

Se lo stato attivo è l'ultimo controllo nella finestra di dialogo, si sposta sul primo controllo.

##  <a name="oncancel"></a>CDialog:: OnCancel

Il Framework chiama questo metodo quando l'utente fa clic su **Annulla** o preme il tasto ESC in una finestra di dialogo modale o non modale.

```
virtual void OnCancel();
```

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per eseguire azioni, ad esempio il ripristino di dati obsoleti, quando un utente chiude la finestra di dialogo facendo clic su **Annulla** o premendo il tasto ESC. Il valore predefinito chiude una finestra di dialogo modale chiamando [EndDialog](#enddialog) e causando la restituzione di IDCANCEL da [DoModal](#domodal) .

Se si implementa il pulsante **Annulla** in una finestra di dialogo non modale, è necessario eseguire l'override del metodo `OnCancel` e chiamare [DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow) al suo interno. Non chiamare il metodo della classe base perché chiama `EndDialog`, che rende invisibile la finestra di dialogo ma non la Elimina.

> [!NOTE]
>  Non è possibile eseguire l'override di questo metodo quando si utilizza un oggetto `CFileDialog` in un programma compilato in Windows XP. Per ulteriori informazioni su `CFileDialog`, vedere la [classe CFileDialog](../../mfc/reference/cfiledialog-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#66](../../mfc/codesnippet/cpp/cdialog-class_5.cpp)]

##  <a name="oninitdialog"></a>CDialog:: OnInitDialog

Questo metodo viene chiamato in risposta al messaggio di `WM_INITDIALOG`.

```
virtual BOOL OnInitDialog();
```

### <a name="return-value"></a>Valore restituito

Specifica se l'applicazione ha impostato lo stato attivo per l'input su uno dei controlli della finestra di dialogo. Se `OnInitDialog` restituisce un valore diverso da zero, Windows imposta lo stato attivo per l'input sul percorso predefinito, ovvero il primo controllo nella finestra di dialogo. L'applicazione può restituire 0 solo se ha impostato in modo esplicito lo stato attivo per l'input su uno dei controlli della finestra di dialogo.

### <a name="remarks"></a>Osservazioni

Windows invia il messaggio di `WM_INITDIALOG` alla finestra di dialogo durante le chiamate [create](#create), [CreateIndirect](#createindirect)o [DoModal](#domodal) , che si verificano immediatamente prima della visualizzazione della finestra di dialogo.

Eseguire l'override di questo metodo se si desidera eseguire un'elaborazione speciale quando la finestra di dialogo viene inizializzata. Nella versione sottoposta a override, chiamare prima la classe di base `OnInitDialog` ignorando il relativo valore restituito. In genere viene restituito `TRUE` dal metodo sottoposto a override.

Windows chiama la funzione `OnInitDialog` usando la procedura standard globale della finestra di dialogo comune a tutte le finestre di dialogo libreria Microsoft Foundation Class. Questa funzione non viene chiamata tramite la mappa messaggi e pertanto non è necessaria una voce della mappa messaggi per questo metodo.

> [!NOTE]
> Non è possibile eseguire l'override di questo metodo quando si utilizza un oggetto `CFileDialog` in un programma compilato in Windows Vista o in sistemi operativi successivi. Per ulteriori informazioni sulle modifiche apportate a `CFileDialog` in Windows Vista e versioni successive, vedere la [classe CFileDialog](../../mfc/reference/cfiledialog-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#67](../../mfc/codesnippet/cpp/cdialog-class_6.cpp)]

##  <a name="onok"></a>CDialog:: OnOK (

Chiamato quando l'utente fa clic sul pulsante **OK** (il pulsante con ID IDOK).

```
virtual void OnOK();
```

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per eseguire azioni quando viene attivato il pulsante **OK** . Se la finestra di dialogo include lo scambio e la convalida automatica dei dati, l'implementazione predefinita di questo metodo convalida i dati della finestra di dialogo e aggiorna le variabili appropriate nell'applicazione.

Se si implementa il pulsante **OK** in una finestra di dialogo non modale, è necessario eseguire l'override del metodo `OnOK` e chiamare [DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow) al suo interno. Non chiamare il metodo della classe base perché chiama [EndDialog](#enddialog) , che rende invisibile la finestra di dialogo ma non la Elimina definitivamente.

> [!NOTE]
>  Non è possibile eseguire l'override di questo metodo quando si utilizza un oggetto `CFileDialog` in un programma compilato in Windows XP. Per ulteriori informazioni su `CFileDialog`, vedere la [classe CFileDialog](../../mfc/reference/cfiledialog-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#68](../../mfc/codesnippet/cpp/cdialog-class_7.cpp)]

##  <a name="onsetfont"></a>CDialog:: OnSetFont

Specifica il tipo di carattere utilizzato da un controllo finestra di dialogo durante il disegno del testo.

```
Virtual void OnSetFont(CFont* pFont);
```

### <a name="parameters"></a>Parametri

*pFont*<br/>
in Specifica un puntatore al tipo di carattere che verrà utilizzato come carattere predefinito per tutti i controlli in questa finestra di dialogo.

### <a name="remarks"></a>Osservazioni

La finestra di dialogo utilizzerà il tipo di carattere specificato come valore predefinito per tutti i relativi controlli.

Nell'editor finestre di solito il tipo di carattere della finestra di dialogo viene impostato come parte della risorsa modello della finestra di dialogo.

> [!NOTE]
> Non è possibile eseguire l'override di questo metodo quando si utilizza un oggetto `CFileDialog` in un programma compilato in Windows Vista o in sistemi operativi successivi. Per ulteriori informazioni sulle modifiche apportate a `CFileDialog` in Windows Vista e versioni successive, vedere la [classe CFileDialog](../../mfc/reference/cfiledialog-class.md).

##  <a name="prevdlgctrl"></a>CDialog::P revDlgCtrl

Imposta lo stato attivo sul controllo precedente nella finestra di dialogo.

```
void PrevDlgCtrl() const;
```

### <a name="remarks"></a>Osservazioni

Se lo stato attivo si trova sul primo controllo nella finestra di dialogo, si sposta sull'ultimo controllo nella casella.

##  <a name="setdefid"></a>CDialog:: SetDefID

Modifica il controllo pulsante predefinito per una finestra di dialogo.

```
void SetDefID(UINT nID);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Specifica l'ID del controllo pulsante che diventerà il valore predefinito.

##  <a name="sethelpid"></a>CDialog:: SetHelpID

Imposta un ID della Guida sensibile al contesto per la finestra di dialogo.

```
void SetHelpID(UINT nIDR);
```

### <a name="parameters"></a>Parametri

*nIDR*<br/>
Specifica l'ID della Guida sensibile al contesto.

## <a name="see-also"></a>Vedere anche

[DLGCBR32 di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[DLGTEMPL di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
