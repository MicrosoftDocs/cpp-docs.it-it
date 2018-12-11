---
title: Classe CDialog
ms.date: 11/04/2016
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
ms.openlocfilehash: 9eac0f7efdacc6181d8aaa15398f4d7365c0edd3
ms.sourcegitcommit: 975098222db3e8b297607cecaa1f504570a11799
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2018
ms.locfileid: "53178499"
---
# <a name="cdialog-class"></a>Classe CDialog

La classe base utilizzata per la visualizzazione di finestre di dialogo sullo schermo.

## <a name="syntax"></a>Sintassi

```
class CDialog : public CWnd
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDialog::CDialog](#cdialog)|Costruisce un oggetto `CDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDialog::Create](#create)|Inizializza il `CDialog` oggetto. Crea una finestra di dialogo non modale e lo collega al `CDialog` oggetto.|
|[CDialog::CreateIndirect](#createindirect)|Crea una finestra di dialogo non modale da un modello di finestra di dialogo in memoria (non basata sulle risorse).|
|[CDialog::DoModal](#domodal)|Chiama una finestra di dialogo modale e restituisce al termine.|
|[CDialog::EndDialog](#enddialog)|Chiude una finestra di dialogo modale.|
|[CDialog::GetDefID](#getdefid)|Ottiene l'ID del controllo pulsante predefinito per una finestra di dialogo.|
|[CDialog::GotoDlgCtrl](#gotodlgctrl)|Sposta lo stato attivo a un controllo di finestra di dialogo specificata nella finestra di dialogo.|
|[CDialog:: InitModalIndirect](#initmodalindirect)|Crea una finestra di dialogo modale da un modello di finestra di dialogo in memoria (non basata sulle risorse). I parametri vengono archiviati finché la funzione `DoModal` viene chiamato.|
|[CDialog::MapDialogRect](#mapdialogrect)|Converte le unità finestra di dialogo di un rettangolo in unità dello schermo.|
|[CDialog::NextDlgCtrl](#nextdlgctrl)|Sposta lo stato attivo al successivo controllo finestra di dialogo nella finestra di dialogo.|
|[CDialog](#oninitdialog)|Eseguire l'override per aumentare l'inizializzazione della finestra di dialogo.|
|[CDialog::OnSetFont](#onsetfont)|Eseguire l'override per specificare il tipo di carattere è un controllo di finestra di dialogo da utilizzare quando disegna il testo.|
|[CDialog::PrevDlgCtrl](#prevdlgctrl)|Sposta lo stato attivo al controllo della finestra di dialogo precedente nella finestra di dialogo.|
|[CDialog::SetDefID](#setdefid)|Modifica il controllo di pulsanti di comando predefinito per una finestra di dialogo per un pulsante di comando specificato.|
|[CDialog::SetHelpID](#sethelpid)|Imposta l'ID della Guida sensibile al contesto della finestra di dialogo.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CDialog::OnCancel](#oncancel)|Eseguire l'override per il pulsante Annulla o azione con tasto ESC. Il valore predefinito si chiude la finestra di dialogo e `DoModal` restituisce IDCANCEL.|
|[CDialog::OnOK](#onok)|Eseguire l'override per l'azione sul pulsante OK nella finestra di dialogo modale. Il valore predefinito si chiude la finestra di dialogo e `DoModal` restituisce IDOK.|

## <a name="remarks"></a>Note

Finestre di dialogo sono disponibili due tipi: modali e non modali. Finestra di dialogo modale deve essere chiusa dall'utente prima di proceda con l'applicazione. Una finestra di dialogo non modale consente all'utente visualizzare la finestra di dialogo e tornare a un'altra attività senza l'annullamento o la rimozione di finestra di dialogo.

Oggetto `CDialog` oggetto è una combinazione di un modello di finestra di dialogo e un `CDialog`-classe derivata. Usare l'editor finestre per creare il modello di finestra di dialogo e archiviarlo in una risorsa, quindi usare la procedura guidata Aggiungi classe per creare una classe derivata da `CDialog`.

Una finestra di dialogo, come qualsiasi altra finestra, riceve messaggi da Windows. In una finestra di dialogo sono particolarmente interessate alla gestione dei messaggi di notifica dai controlli della finestra di dialogo in quanto si tratta di come l'utente interagisce con la finestra di dialogo. Utilizzare la finestra proprietà per selezionare i messaggi che si desidera all'handle e aggiungerà le voci della mappa messaggi appropriato e le funzioni membro di gestore di messaggi alla classe per l'utente. È sufficiente scrivere codice specifico dell'applicazione in funzioni di membro di gestione.

Se si preferisce, è sempre possibile scrivere funzioni membro e le voci della mappa messaggi manualmente.

In tutto tranne la finestra di dialogo più semplice è aggiungere variabili membro alla classe di finestre di dialogo derivata per archiviare i dati immessi nei controlli della finestra di dialogo dall'utente o per visualizzare i dati per l'utente. È possibile utilizzare la procedura guidata Aggiungi variabile per creare le variabili membro e associarli a controlli. Allo stesso tempo, si sceglie un tipo di variabile e l'intervallo consentito di valori per ogni variabile. La procedura guidata per codice aggiunge le variabili membro alla classe di finestre di dialogo derivata.

Un mapping dei dati viene generato per gestiscono automaticamente lo scambio di dati tra le variabili membro e i controlli della finestra di dialogo. Il mapping dei dati sono disponibili funzioni che consentono di inizializzare i controlli nella finestra di dialogo con i valori appropriati, recuperare i dati e convalidare i dati.

Per creare una finestra di dialogo modale, costruire un oggetto nello stack utilizzando il costruttore per la classe di finestre di dialogo derivata e quindi chiamare `DoModal` per creare la finestra di dialogo e i relativi controlli. Se si vuole creare una finestra di dialogo non modale, chiamare `Create` nel costruttore della classe della finestra.

È anche possibile creare un modello in memoria usando un [DLGTEMPLATE](/windows/desktop/api/winuser/ns-winuser-dlgtemplate) struttura dei dati, come descritto nel SDK di Windows. Dopo aver creato un `CDialog` dell'oggetto, chiamare [CreateIndirect](#createindirect) per creare un non modale la finestra di dialogo oppure chiamare [InitModalIndirect](#initmodalindirect) e [DoModal](#domodal) per creare una finestra modale finestra di dialogo.

Il mapping dei dati di exchange e la convalida viene scritto in un override di `CWnd::DoDataExchange` che viene aggiunto alla nuova classe della finestra. Vedere le [DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange) funzione di membro in `CWnd` per altre informazioni sulla funzionalità di exchange e la convalida.

Sia il programmatore e la chiamata di framework `DoDataExchange` indirettamente tramite una chiamata a [CWnd::UpdateData](../../mfc/reference/cwnd-class.md#updatedata).

Il framework chiama `UpdateData` quando l'utente fa clic sul pulsante OK per chiudere una finestra di dialogo modale. (I dati non vengono recuperati se si fa clic sul pulsante Annulla.) L'implementazione predefinita di [OnInitDialog](#oninitdialog) chiama anche `UpdateData` per impostare i valori iniziali dei controlli. È in genere eseguire l'override `OnInitDialog` ulteriormente inizializzare i controlli. `OnInitDialog` viene chiamato dopo che tutti i controlli di finestra di dialogo vengono creati e immediatamente prima della finestra di dialogo viene visualizzata la finestra.

È possibile chiamare `CWnd::UpdateData` in qualsiasi momento durante l'esecuzione di una finestra di dialogo modale o non modale.

Se si sviluppa una finestra di dialogo manualmente, è aggiungersi le variabili membro necessari per la classe di finestra di dialogo derivata ed è aggiungere le funzioni membro per impostare o ottenere questi valori.

Finestra di dialogo modale viene chiusa automaticamente quando l'utente preme i pulsanti OK o Annulla o quando il codice chiama il `EndDialog` funzione membro.

Quando si implementa una finestra di dialogo non modale, sempre eseguire l'override di `OnCancel` funzione membro e chiamare `DestroyWindow` all'interno di esso. Non chiamare la classe di base `CDialog::OnCancel`, poiché chiama `EndDialog`, che renderà invisibili la finestra di dialogo, ma non eliminare definitivamente. È inoltre consigliabile eseguire l'override `PostNcDestroy` per le finestre di dialogo non modali per eliminare **ciò**, dal momento che le finestre di dialogo non modali vengono generalmente allocate con **nuovo**. Finestre di dialogo modali sono costruite in genere sul frame e non è necessario `PostNcDestroy` pulizia.

Per ulteriori informazioni sul `CDialog`, vedere [finestre di dialogo](../../mfc/dialog-boxes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="cdialog"></a>  CDialog::CDialog

Per costruire una finestra di dialogo modale basata sulle risorse, chiamare qualsiasi formato pubblico del costruttore.

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
Contiene una stringa con terminazione null che rappresenta il nome di una risorsa modello-finestra di dialogo.

*nIDTemplate*<br/>
Contiene il numero di ID di una risorsa modello-finestra di dialogo.

*pParentWnd*<br/>
Punta all'oggetto finestra padre o proprietaria (typu [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, finestra padre dell'oggetto finestra di dialogo è impostata per la finestra principale dell'applicazione.

### <a name="remarks"></a>Note

Un form del costruttore fornisce l'accesso alla risorsa finestra di dialogo in base al nome di modello. L'altro costruttore consente l'accesso dal numero di ID modello, in genere con un **IDD _** prefisso (ad esempio IDD_DIALOG1).

Per costruire una finestra di dialogo modale da un modello in memoria, prima di richiamare il costruttore senza parametri, protetto e quindi chiamare `InitModalIndirect`.

Dopo aver creato una finestra di dialogo modale con uno dei metodi sopra riportati, chiamare `DoModal`.

Per costruire una finestra di dialogo non modale, usare il formato protetto del `CDialog` costruttore. Il costruttore è protetto perché è necessario derivare la propria classe di finestra di dialogo per implementare una finestra di dialogo non modale. Costruzione di una finestra di dialogo non modale è un processo in due passaggi. Prima chiamata al costruttore. Chiamare quindi il `Create` funzione di membro per creare una finestra di dialogo basata sulle risorse o chiamare `CreateIndirect` per creare la finestra di dialogo da un modello in memoria.

##  <a name="create"></a>  CDialog::Create

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
Contiene una stringa con terminazione null che rappresenta il nome di una risorsa modello-finestra di dialogo.

*pParentWnd*<br/>
Punta all'oggetto finestra padre (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, finestra padre dell'oggetto finestra di dialogo è impostata per la finestra principale dell'applicazione.

*nIDTemplate*<br/>
Contiene il numero di ID di una risorsa modello-finestra di dialogo.

### <a name="return-value"></a>Valore restituito

Entrambe le forme restituiscono diverso da zero se l'inizializzazione e la creazione della finestra di dialogo hanno avuto esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

È possibile inserire la chiamata a `Create` all'interno del costruttore o chiamata dopo il costruttore viene richiamato.

Due forme del `Create` funzione membro vengono forniti per l'accesso alla risorsa modello-finestra di dialogo per il nome di modello o numero ID del modello (ad esempio IDD_DIALOG1).

Per entrambi i form, passare un puntatore all'oggetto finestra padre. Se *pParentWnd* è NULL, verrà creata la finestra di dialogo con la finestra padre o proprietario impostata nella finestra principale dell'applicazione.

Il `Create` funzione membro restituisce immediatamente dopo aver creato la finestra di dialogo.

Utilizzare lo stile WS_VISIBLE nel modello di finestra di dialogo se la finestra di dialogo deve essere visualizzato quando viene creata la finestra padre. In caso contrario, è necessario chiamare `ShowWindow`. Per un'ulteriore gli stili di finestra di dialogo e la loro applicazione, vedere la [DLGTEMPLATE](/windows/desktop/api/winuser/ns-winuser-dlgtemplate) struttura nel SDK di Windows e [stili Window](../../mfc/reference/styles-used-by-mfc.md#window-styles) nel *riferimenti alla libreria MFC*.

Usare la `CWnd::DestroyWindow` funzione eliminare definitivamente una finestra di dialogo creata dal `Create` (funzione).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#62](../../mfc/codesnippet/cpp/cdialog-class_1.cpp)]

##  <a name="createindirect"></a>  CDialog::CreateIndirect

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
Punta alla memoria che contiene un modello di finestra di dialogo considerato di creare la finestra di dialogo. Questo modello è sotto forma di una [DLGTEMPLATE](/windows/desktop/api/winuser/ns-winuser-dlgtemplate) informazioni di struttura e il controllo, come descritto nel SDK di Windows.

*pParentWnd*<br/>
Punta all'oggetto finestra padre dell'oggetto finestra di dialogo (typu [CWnd](../../mfc/reference/cwnd-class.md)). Se è NULL, finestra padre dell'oggetto finestra di dialogo è impostata per la finestra principale dell'applicazione.

*lpDialogInit*<br/>
Punta a una risorsa DLGINIT.

*hDialogTemplate*<br/>
Contiene un handle per la memoria globale che contiene un modello di finestra di dialogo. Questo modello è sotto forma di un `DLGTEMPLATE` struttura e i dati per ogni controllo nella finestra di dialogo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra di dialogo è stata creata e inizializzata correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

Il `CreateIndirect` funzione membro restituisce immediatamente dopo aver creato la finestra di dialogo.

Utilizzare lo stile WS_VISIBLE nel modello di finestra di dialogo se la finestra di dialogo deve essere visualizzato quando viene creata la finestra padre. In caso contrario, è necessario chiamare `ShowWindow` per fare in modo che venga visualizzato. Per altre informazioni sul modo in cui è possibile specificare altri stili di finestra di dialogo nel modello, vedere la [DLGTEMPLATE](/windows/desktop/api/winuser/ns-winuser-dlgtemplate) struttura nel SDK di Windows.

Usare la `CWnd::DestroyWindow` funzione eliminare definitivamente una finestra di dialogo creata dal `CreateIndirect` (funzione).

Le finestre di dialogo che contengono i controlli ActiveX richiedono informazioni aggiuntive fornite in una risorsa DLGINIT.

##  <a name="domodal"></a>  CDialog::DoModal

Chiamare questa funzione membro per richiamare la finestra di dialogo modale e restituire il risultato della finestra di dialogo al termine.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Un' **int** valore che specifica il valore della *Nrisultato* parametro passato al [CDialog::EndDialog](#enddialog) funzione membro, che consente di chiudere la finestra di dialogo. Il valore restituito è -1 se la funzione non è stato possibile creare la finestra di dialogo o IDABORT se si è verificato un altro errore, nel qual caso la finestra di output conterrà informazioni sull'errore dal [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360).

### <a name="remarks"></a>Note

Questa funzione membro gestisce tutte le interazioni con l'utente mentre è attiva la finestra di dialogo. Questo è ciò che rende la finestra di dialogo modale; vale a dire, l'utente non è possibile interagire con altre finestre fino a quando non viene chiusa la finestra di dialogo.

Se l'utente fa clic su uno dei pulsanti di comando nella finestra di dialogo, ad esempio OK o Annulla, una funzione membro di gestore di messaggi, ad esempio [OnOK](#onok) oppure [OnCancel](#oncancel), viene chiamato per tentare di chiudere la finestra di dialogo. Il valore predefinito `OnOK` funzione membro verrà convalidare e aggiornare i dati della finestra di dialogo e chiudere la finestra di dialogo con risultato IDOK e il valore predefinito `OnCancel` funzione membro verrà chiusa la finestra di dialogo con risultato IDCANCEL senza la convalida o l'aggiornamento di dati finestra di dialogo. È possibile eseguire l'override di queste funzioni gestore messaggi per modificare il comportamento.

> [!NOTE]
> `PreTranslateMessage` è ora denominata per l'elaborazione dei messaggi di finestra di dialogo modale.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#63](../../mfc/codesnippet/cpp/cdialog-class_2.cpp)]

##  <a name="enddialog"></a>  CDialog::EndDialog

Chiamare questa funzione membro per terminare una finestra di dialogo modale.

```
void EndDialog(int nResult);
```

### <a name="parameters"></a>Parametri

*Nrisultato*<br/>
Contiene il valore deve essere restituito dalla finestra di dialogo al chiamante di `DoModal`.

### <a name="remarks"></a>Note

Questa funzione membro restituisce *Nrisultato* come valore restituito di `DoModal`. È necessario usare il `EndDialog` funzione sia terminata l'elaborazione di ogni volta che viene creata una finestra di dialogo modale.

È possibile chiamare `EndDialog` in qualsiasi momento, anche nei [OnInitDialog](#oninitdialog), nel qual caso è necessario chiudere la finestra di dialogo prima di esso viene visualizzata o prima che venga impostato lo stato attivo.

`EndDialog` non chiude la finestra di dialogo immediatamente. Al contrario, imposta un flag che indica la finestra di dialogo per chiudere appena restituisce il gestore di messaggi corrente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#64](../../mfc/codesnippet/cpp/cdialog-class_3.cpp)]

[!code-cpp[NVC_MFCControlLadenDialog#65](../../mfc/codesnippet/cpp/cdialog-class_4.cpp)]

##  <a name="getdefid"></a>  CDialog::GetDefID

Chiamare il `GetDefID` funzione membro per ottenere l'ID del controllo pulsante predefinito per una finestra di dialogo.

```
DWORD GetDefID() const;
```

### <a name="return-value"></a>Valore restituito

Un valore a 32 bit ( `DWORD`). Se il pulsante di comando predefinito ha un valore di ID, la parola più significativa contiene DC_HASDEFID e la parola meno significativa contiene il valore ID. Se il pulsante predefinito non ha un valore di ID, il valore restituito è 0.

### <a name="remarks"></a>Note

In genere si tratta un pulsante OK.

##  <a name="gotodlgctrl"></a>  CDialog::GotoDlgCtrl

Sposta lo stato attivo al controllo specificato nella finestra di dialogo.

```
void GotoDlgCtrl(CWnd* pWndCtrl);
```

### <a name="parameters"></a>Parametri

*pWndCtrl*<br/>
Identifica la finestra (controllo) che deve ricevere lo stato attivo.

### <a name="remarks"></a>Note

Per ottenere un puntatore al controllo (finestra figlio) da passare come *pWndCtrl*, chiamare il `CWnd::GetDlgItem` funzione membro, che restituisce un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [GetDlgItem](../../mfc/reference/cwnd-class.md#getdlgitem).

##  <a name="initmodalindirect"></a>  CDialog:: InitModalIndirect

Chiamare questa funzione membro per inizializzare un oggetto finestra di dialogo modale usando un modello di finestra di dialogo che si costruisce in memoria.

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
Punta alla memoria che contiene un modello di finestra di dialogo considerato di creare la finestra di dialogo. Questo modello è sotto forma di una [DLGTEMPLATE](/windows/desktop/api/winuser/ns-winuser-dlgtemplate) informazioni di struttura e il controllo, come descritto nel SDK di Windows.

*hDialogTemplate*<br/>
Contiene un handle per la memoria globale che contiene un modello di finestra di dialogo. Questo modello è sotto forma di un `DLGTEMPLATE` struttura e i dati per ogni controllo nella finestra di dialogo.

*pParentWnd*<br/>
Punta all'oggetto finestra padre o proprietaria (typu [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, finestra padre dell'oggetto finestra di dialogo è impostata per la finestra principale dell'applicazione.

*lpDialogInit*<br/>
Punta a una risorsa DLGINIT.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto finestra di dialogo è stato creato e inizializzato correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

Per creare una finestra di dialogo modale indirettamente, allocare un blocco di memoria globale e riempirlo con il modello di finestra di dialogo. Chiamare quindi vuoto `CDialog` costruttore per costruire l'oggetto finestra di dialogo. Quindi, chiamare il metodo `InitModalIndirect` per archiviare l'handle per il modello di finestra di dialogo in memoria. La finestra di dialogo di Windows verrà creata e visualizzata in seguito, quando la [DoModal](#domodal) viene chiamata la funzione membro.

Le finestre di dialogo che contengono i controlli ActiveX richiedono informazioni aggiuntive fornite in una risorsa DLGINIT.

##  <a name="mapdialogrect"></a>  CDialog::MapDialogRect

Chiamata per convertire le unità finestra di dialogo di un rettangolo in unità dello schermo.

```
void MapDialogRect(LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*lpRect*<br/>
Punta a un [RECT](/windows/desktop/api/windef/ns-windef-tagrect) struttura oppure [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che contiene la finestra di dialogo coordina da convertire.

### <a name="remarks"></a>Note

Finestra di dialogo unità è espresse in termini di unità di base-finestra di dialogo corrente derivato dalla media larghezza e altezza dei caratteri nel tipo di carattere utilizzato per il testo della finestra di dialogo. Un'unità orizzontale è un quarto dell'unità di base-larghezza della finestra di dialogo e un'unità verticale è un ottavo dell'unità di base altezza della finestra di dialogo.

Il `GetDialogBaseUnits` Windows funzione restituisce informazioni sulle dimensioni di carattere del sistema, ma è possibile specificare un carattere diverso per ogni finestra di dialogo se si usa lo stile DS_SETFONT nel file di definizione di risorsa. Il `MapDialogRect` per questa finestra di dialogo funzione di Windows utilizza il tipo di carattere appropriato.

Il `MapDialogRect` funzione membro sostituisce le unità finestra di dialogo *lpRect* con schermata unità (pixel) in modo che il rettangolo può essere utilizzato per creare una finestra di dialogo o posizionare un controllo all'interno di una finestra.

##  <a name="nextdlgctrl"></a>  CDialog::NextDlgCtrl

Sposta lo stato attivo al controllo successivo nella finestra di dialogo.

```
void NextDlgCtrl() const;
```

### <a name="remarks"></a>Note

Se lo stato attivo si trova l'ultimo controllo nella finestra di dialogo, viene spostato sul primo controllo.

##  <a name="oncancel"></a>  CDialog::OnCancel

Il framework chiama questo metodo quando l'utente sceglie **annullare** o preme il tasto ESC in una finestra di dialogo modale o non modale.

```
virtual void OnCancel();
```

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo per eseguire azioni (ad esempio, il ripristino dei dati precedenti) quando un utente chiude la finestra di dialogo facendo **annullare** o premendo il tasto ESC. Il valore predefinito viene chiusa una finestra di dialogo modale chiamando [EndDialog](#enddialog) causando [DoModal](#domodal) restituire IDCANCEL.

Se si implementa il **annullare** pulsante in una finestra di dialogo non modale, è necessario eseguire l'override di `OnCancel` (metodo) e chiamare [DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow) in essa contenuti. Non chiamare il metodo di classe di base, poiché chiama `EndDialog`, che verrà rendere invisibile nella finestra di dialogo, ma non eliminarla definitivamente.

> [!NOTE]
>  È possibile eseguire l'override di questo metodo quando si usa un `CFileDialog` oggetto in un programma che viene compilato in Windows XP. Per altre informazioni sulle `CFileDialog`, vedere [classe CFileDialog](../../mfc/reference/cfiledialog-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#66](../../mfc/codesnippet/cpp/cdialog-class_5.cpp)]

##  <a name="oninitdialog"></a>  CDialog

Questo metodo viene chiamato in risposta al `WM_INITDIALOG` messaggio.

```
virtual BOOL OnInitDialog();
```

### <a name="return-value"></a>Valore restituito

Specifica se l'applicazione ha impostato lo stato attivo a uno dei controlli nella finestra di dialogo. Se `OnInitDialog` restituisce un valore diverso da zero, Windows imposta lo stato attivo di input nel percorso predefinito, il primo controllo nella finestra di dialogo. L'applicazione può restituire 0 solo se lo stato attivo è impostato in modo esplicito su uno dei controlli nella finestra di dialogo.

### <a name="remarks"></a>Note

Windows invia i `WM_INITDIALOG` messaggio alla finestra di dialogo durante le [Create](#create), [CreateIndirect](#createindirect), o [DoModal](#domodal) chiamate che precedono immediatamente la finestra di dialogo viene visualizzato.

Eseguire l'override di questo metodo se si desidera eseguire un'elaborazione speciale quando viene inizializzata nella finestra di dialogo. Nella versione sottoposta a override, chiamare innanzitutto la classe di base `OnInitDialog` ma ignora il valore restituito corrispondente. In genere si tornerà `TRUE` dal metodo sottoposto a override.

Le chiamate di Windows il `OnInitDialog` funzione utilizzando la procedura standard globale-finestra di dialogo comune a tutte le finestre di dialogo libreria Microsoft Foundation Class. Non chiama questa funzione tramite la mappa dei messaggi e pertanto non è necessaria una voce della mappa messaggi per questo metodo.

> [!NOTE]
> È possibile eseguire l'override di questo metodo quando si usa un `CFileDialog` oggetto in un programma che viene compilato in Windows Vista o sistemi operativi successivi. Per altre informazioni sulle modifiche apportate al `CFileDialog` in Windows Vista e versioni successive, vedere [classe CFileDialog](../../mfc/reference/cfiledialog-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#67](../../mfc/codesnippet/cpp/cdialog-class_6.cpp)]

##  <a name="onok"></a>  CDialog::OnOK

Chiamato quando l'utente sceglie il **OK** pulsante (il pulsante con un ID di IDOK).

```
virtual void OnOK();
```

### <a name="remarks"></a>Note

Eseguire l'override di questo metodo per eseguire azioni quando le **OK** viene attivato il pulsante. Se la finestra di dialogo sono inclusi exchange e la convalida automatica dei dati, l'implementazione predefinita di questo metodo convalida i dati della finestra di dialogo e aggiorna le variabili appropriate nell'applicazione.

Se si implementa il **OK** pulsante in una finestra di dialogo non modale, è necessario eseguire l'override di `OnOK` metodo e chiamare [DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow) in essa contenuti. Non chiamare il metodo di classe di base, poiché chiama [EndDialog](#enddialog) che rende invisibile la finestra di dialogo, ma non eliminarla definitivamente.

> [!NOTE]
>  È possibile eseguire l'override di questo metodo quando si usa un `CFileDialog` oggetto in un programma che viene compilato in Windows XP. Per altre informazioni sulle `CFileDialog`, vedere [classe CFileDialog](../../mfc/reference/cfiledialog-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#68](../../mfc/codesnippet/cpp/cdialog-class_7.cpp)]

##  <a name="onsetfont"></a>  CDialog::OnSetFont

Specifica il tipo di carattere che utilizzerà un controllo di finestra di dialogo durante il disegno di testo.

```
Virtual void OnSetFont(CFont* pFont);
```

### <a name="parameters"></a>Parametri

*pFont*<br/>
[in] Specifica un puntatore al tipo di carattere che verrà usato come tipo di carattere predefinito per tutti i controlli nella finestra di dialogo.

### <a name="remarks"></a>Note

La finestra di dialogo utilizzerà il tipo di carattere specificato come valore predefinito per tutti i relativi controlli.

L'editor della finestra di dialogo in genere imposta il tipo di carattere della finestra di dialogo come parte della risorsa modello-finestra di dialogo.

> [!NOTE]
> È possibile eseguire l'override di questo metodo quando si usa un `CFileDialog` oggetto in un programma che viene compilato in Windows Vista o sistemi operativi successivi. Per altre informazioni sulle modifiche apportate al `CFileDialog` in Windows Vista e versioni successive, vedere [classe CFileDialog](../../mfc/reference/cfiledialog-class.md).

##  <a name="prevdlgctrl"></a>  CDialog::PrevDlgCtrl

Imposta lo stato attivo al controllo precedente nella finestra di dialogo.

```
void PrevDlgCtrl() const;
```

### <a name="remarks"></a>Note

Se lo stato attivo si trova il primo controllo nella finestra di dialogo, passa all'ultimo controllo nella finestra di.

##  <a name="setdefid"></a>  CDialog::SetDefID

Modifica il controllo di pulsanti di comando predefinito per una finestra di dialogo.

```
void SetDefID(UINT nID);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Specifica l'ID del controllo pulsante che diventerà il valore predefinito.

##  <a name="sethelpid"></a>  CDialog::SetHelpID

Imposta l'ID della Guida sensibile al contesto della finestra di dialogo.

```
void SetHelpID(UINT nIDR);
```

### <a name="parameters"></a>Parametri

*nIDR*<br/>
Specifica l'ID della Guida sensibile al contesto.

## <a name="see-also"></a>Vedere anche

[DLGCBR32 esempio MFC](../../visual-cpp-samples.md)<br/>
[Esempio MFC DLGTEMPL](../../visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)

