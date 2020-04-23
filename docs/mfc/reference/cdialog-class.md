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
ms.openlocfilehash: 36913cfdd8beda31136176c966890a90077c1b30
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753360"
---
# <a name="cdialog-class"></a>Classe CDialog

Classe base utilizzata per la visualizzazione delle finestre di dialogo sullo schermo.

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
|[CDialog::Creazione](#create)|Inizializza l'oggetto `CDialog`. Crea una finestra di dialogo non `CDialog` modale e la associa all'oggetto.|
|[CDialog::CreateIndiretto](#createindirect)|Crea una finestra di dialogo non modale da un modello di finestra di dialogo in memoria (non basata su risorse).|
|[Finestra di dialogo::DoModal](#domodal)|Chiama una finestra di dialogo modale e restituisce al termine.|
|[Finestra di dialogo::CDialog::EndDialog](#enddialog)|Chiude una finestra di dialogo modale.|
|[CDialog::GetDefID](#getdefid)|Ottiene l'ID del controllo pulsante push button predefinito per una finestra di dialogo.|
|[CDialog::GotoDlgCtrl](#gotodlgctrl)|Sposta lo stato attivo su un controllo finestra di dialogo specificato nella finestra di dialogo.|
|[CDialog::InitModalIndiretto](#initmodalindirect)|Crea una finestra di dialogo modale da un modello di finestra di dialogo in memoria (non basata su risorse). I parametri vengono archiviati fino a quando non viene chiamata la funzione. `DoModal`|
|[CDialog::MapDialogRect](#mapdialogrect)|Converte le unità della finestra di dialogo di un rettangolo in unità dello schermo.|
|[CDialog::NextDlgCtrl](#nextdlgctrl)|Sposta lo stato attivo sul controllo finestra di dialogo successivo nella finestra di dialogo.|
|[CDialog::OnInitDialog](#oninitdialog)|Eseguire l'override per aumentare l'inizializzazione della finestra di dialogo.|
|[CDialog::OnSetFont](#onsetfont)|Eseguire l'override per specificare il tipo di carattere che deve essere utilizzato da un controllo finestra di dialogo quando viene disegnato testo.|
|[CDialog::PrevDlgCtrl](#prevdlgctrl)|Sposta lo stato attivo sul controllo finestra di dialogo precedente nella finestra di dialogo.|
|[CDialog::SetDefID](#setdefid)|Modifica il controllo pulsante push button predefinito per una finestra di dialogo in un pulsante di comando specificato.|
|[CDialog::SetHelpID](#sethelpid)|Imposta un ID della Guida sensibile al contesto per la finestra di dialogo.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CDialog::OnCancel](#oncancel)|Eseguire l'override per eseguire il pulsante Annulla o l'azione del tasto ESC. Il valore predefinito chiude `DoModal` la finestra di dialogo e restituisce IDCANCEL.|
|[CDialog::OnOK](#onok)|Eseguire l'override per eseguire l'azione del pulsante OK in una finestra di dialogo modale. Il valore predefinito chiude `DoModal` la finestra di dialogo e restituisce IDOK.|

## <a name="remarks"></a>Osservazioni

Le finestre di dialogo sono di due tipi: modale e non modale. Una finestra di dialogo modale deve essere chiusa dall'utente prima che l'applicazione continui. Una finestra di dialogo non modale consente all'utente di visualizzare la finestra di dialogo e tornare a un'altra attività senza annullare o rimuovere la finestra di dialogo.

Un `CDialog` oggetto è una combinazione di `CDialog`un modello di finestra di dialogo e una classe derivata. Utilizzare l'editor finestre per creare il modello di finestra di dialogo e archiviarlo in una risorsa, quindi utilizzare la procedura guidata Aggiungi classe per creare una classe derivata da `CDialog`.

Una finestra di dialogo, come qualsiasi altra finestra, riceve messaggi da Windows. In una finestra di dialogo, si è particolarmente interessati a gestire i messaggi di notifica dai controlli della finestra di dialogo poiché è così che l'utente interagisce con la finestra di dialogo. Utilizzare la [Creazione guidata classe](mfc-class-wizard.md) per selezionare i messaggi che si desidera gestire e aggiungerà le voci della mappa messaggi e le funzioni membro del gestore messaggi appropriate alla classe. È sufficiente scrivere codice specifico dell'applicazione nelle funzioni membro del gestore.

Se si preferisce, è sempre possibile scrivere manualmente le voci della mappa messaggi e le funzioni membro.

In tutte le finestre di dialogo tranne la più semplice, aggiungere variabili membro alla classe di finestre di dialogo derivata per archiviare i dati immessi nei controlli della finestra di dialogo dall'utente o per visualizzare i dati per l'utente. È possibile utilizzare la procedura guidata Aggiungi variabile per creare variabili membro e associarle ai controlli. Allo stesso tempo, si sceglie un tipo di variabile e un intervallo di valori consentiti per ogni variabile. La creazione guidata codice aggiunge le variabili membro alla classe di finestre di dialogo derivata.

Viene generato un mapping dei dati per gestire automaticamente lo scambio di dati tra le variabili membro e i controlli della finestra di dialogo. Il mapping dei dati fornisce funzioni che inizializzano i controlli nella finestra di dialogo con i valori appropriati, recuperano i dati e convalidano i dati.

Per creare una finestra di dialogo modale, costruire un oggetto nello `DoModal` stack utilizzando il costruttore per la classe di finestre di dialogo derivata e quindi chiamare per creare la finestra di dialogo e i relativi controlli. Se si desidera creare una finestra `Create` di dialogo non modale, chiamare il costruttore della classe della finestra di dialogo.

È inoltre possibile creare un modello in memoria utilizzando una struttura di dati [DLGTEMPLATE](/windows/win32/api/winuser/ns-winuser-dlgtemplate) come descritto in Windows SDK. Dopo aver `CDialog` creato un oggetto, chiamare [CreateIndirect](#createindirect) per creare una finestra di dialogo non modale o chiamare [InitModalIndirect](#initmodalindirect) e [DoModal](#domodal) per creare una finestra di dialogo modale.

Il mapping dei dati di scambio `CWnd::DoDataExchange` e convalida viene scritto in un override di che viene aggiunto alla nuova classe di finestra di dialogo. Vedere la funzione membro `CWnd` [DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange) in per ulteriori informazioni sulle funzionalità di scambio e convalida.

Sia il programmatore `DoDataExchange` che il framework chiamano indirettamente tramite una chiamata a [CWnd::UpdateData](../../mfc/reference/cwnd-class.md#updatedata).

Il framework `UpdateData` chiama quando l'utente fa clic sul pulsante OK per chiudere una finestra di dialogo modale. I dati non vengono recuperati se si fa clic sul pulsante Annulla. L'implementazione predefinita di [OnInitDialog](#oninitdialog) chiama `UpdateData` anche per impostare i valori iniziali dei controlli. In genere `OnInitDialog` si esegue l'override per inizializzare ulteriormente i controlli. `OnInitDialog`viene chiamato dopo la creazione di tutti i controlli della finestra di dialogo e subito prima che venga visualizzata la finestra di dialogo.

È possibile `CWnd::UpdateData` chiamare in qualsiasi momento durante l'esecuzione di una finestra di dialogo modale o non modale.

Se si sviluppa una finestra di dialogo manualmente, si aggiungono le variabili membro necessarie alla classe della finestra di dialogo derivata e si aggiungono funzioni membro per impostare o ottenere questi valori.

Una finestra di dialogo modale viene chiusa automaticamente quando l'utente `EndDialog` preme i pulsanti OK o Annulla o quando il codice chiama la funzione membro.

Quando si implementa una finestra di `OnCancel` dialogo non `DestroyWindow` modale, eseguire sempre l'override della funzione membro e chiamare dall'interno di essa. Non chiamare la classe `CDialog::OnCancel`base , `EndDialog`perché chiama , che renderà invisibile la finestra di dialogo ma non la dividerà. È inoltre `PostNcDestroy` necessario eseguire l'override per le finestre di dialogo non modali per eliminare **questa**opzione, poiché le finestre di dialogo non modali vengono in genere allocate con **new**. Le finestre di dialogo modali sono `PostNcDestroy` in genere costruite sul frame e non richiedono la pulizia.

Per ulteriori `CDialog`informazioni sulle finestre di [dialogo,](../../mfc/dialog-boxes.md)vedere Finestre di dialogo .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cdialogcdialog"></a><a name="cdialog"></a>CDialog::CDialog

Per costruire una finestra di dialogo modale basata su risorse, chiamare la forma pubblica del costruttore.

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

*lpszTemplateName (nome di metodo)*<br/>
Contiene una stringa con terminazione null che è il nome di una risorsa modello della finestra di dialogo.

*NIDTemplate (modello)*<br/>
Contiene il numero ID di una risorsa modello di finestra di dialogo.

*pParentWnd (informazioni in due)*<br/>
Punta all'oggetto finestra padre o proprietario (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Osservazioni

Un form del costruttore fornisce l'accesso alla risorsa finestra di dialogo in base al nome del modello. L'altro costruttore fornisce l'accesso in base al numero ID del modello, in genere con un prefisso **di IDD_** (ad esempio, IDD_DIALOG1).

Per costruire una finestra di dialogo modale da un modello in `InitModalIndirect`memoria, richiamare innanzitutto il costruttore protetto senza parametri e quindi chiamare .

Dopo aver creato una finestra di dialogo `DoModal`modale con uno dei metodi precedenti, chiamare .

Per costruire una finestra di dialogo non `CDialog` modale, utilizzare il formato protetto del costruttore. Il costruttore è protetto perché è necessario derivare la propria classe della finestra di dialogo per implementare una finestra di dialogo non modale. La costruzione di una finestra di dialogo non modale è un processo in due fasi. Chiamare innanzitutto il costruttore; quindi chiamare `Create` la funzione membro per creare una `CreateIndirect` finestra di dialogo basata sulle risorse o chiamare per creare la finestra di dialogo da un modello in memoria.

## <a name="cdialogcreate"></a><a name="create"></a>CDialog::Creazione

Chiamare `Create` per creare una finestra di dialogo non modale utilizzando un modello di finestra di dialogo da una risorsa.

```
virtual BOOL Create(
    LPCTSTR lpszTemplateName,
    CWnd* pParentWnd = NULL);

virtual BOOL Create(
    UINT nIDTemplate,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*lpszTemplateName (nome di metodo)*<br/>
Contiene una stringa con terminazione null che è il nome di una risorsa modello della finestra di dialogo.

*pParentWnd (informazioni in due)*<br/>
Punta all'oggetto finestra padre (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

*NIDTemplate (modello)*<br/>
Contiene il numero ID di una risorsa modello di finestra di dialogo.

### <a name="return-value"></a>Valore restituito

Entrambi i form restituiscono un valore diverso da zero se la creazione e l'inizializzazione della finestra di dialogo hanno avuto esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

È possibile inserire `Create` la chiamata all'interno del costruttore o chiamarla dopo che il costruttore viene richiamato.

Vengono fornite `Create` due forme della funzione membro per l'accesso alla risorsa modello della finestra di dialogo in base al nome del modello o al numero di ID del modello (ad esempio, IDD_DIALOG1).

Per entrambi i form, passare un puntatore all'oggetto finestra padre. Se *pParentWnd* è NULL, la finestra di dialogo verrà creata con la finestra padre o proprietaria impostata sulla finestra principale dell'applicazione.

La `Create` funzione membro restituisce immediatamente dopo aver creato la finestra di dialogo.

Utilizzare lo stile WS_VISIBLE nel modello di finestra di dialogo se la finestra di dialogo deve essere visualizzata quando viene creata la finestra padre. In caso contrario, è necessario chiamare `ShowWindow`. Per ulteriori stili di finestra di dialogo e relative applicazioni, vedere la struttura [DLGTEMPLATE](/windows/win32/api/winuser/ns-winuser-dlgtemplate) in Windows SDK e [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) in Riferimenti a *MFC*.

Utilizzare `CWnd::DestroyWindow` la funzione per eliminare una `Create` finestra di dialogo creata dalla funzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#62](../../mfc/codesnippet/cpp/cdialog-class_1.cpp)]

## <a name="cdialogcreateindirect"></a><a name="createindirect"></a>CDialog::CreateIndiretto

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

*LpDialogTemplate (modello lpDialogTemplate)*<br/>
Punta alla memoria che contiene un modello di finestra di dialogo utilizzato per creare la finestra di dialogo. Questo modello è sotto forma di una struttura [DLGTEMPLATE](/windows/win32/api/winuser/ns-winuser-dlgtemplate) e informazioni sul controllo, come descritto in Windows SDK.

*pParentWnd (informazioni in due)*<br/>
Punta all'oggetto finestra padre dell'oggetto finestra della finestra della finestra della finestra della finestra di dialogo (di tipo [CWnd](../../mfc/reference/cwnd-class.md)). Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

*LpDialogInit (informazioni in lingua inlingua del dialogo)*<br/>
Punta a una risorsa DLGINIT.

*hDialogTemplate (modello)*<br/>
Contiene un handle per la memoria globale contenente un modello di finestra di dialogo. Questo modello è sotto `DLGTEMPLATE` forma di struttura e dati per ogni controllo nella finestra di dialogo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra di dialogo è stata creata e inizializzata correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La `CreateIndirect` funzione membro restituisce immediatamente dopo aver creato la finestra di dialogo.

Utilizzare lo stile WS_VISIBLE nel modello di finestra di dialogo se la finestra di dialogo deve essere visualizzata quando viene creata la finestra padre. In caso contrario, è necessario chiamare `ShowWindow` per fare in modo che venga visualizzato. Per ulteriori informazioni su come è possibile specificare altri stili della finestra di dialogo nel modello, vedere la struttura [DLGTEMPLATE](/windows/win32/api/winuser/ns-winuser-dlgtemplate) in Windows SDK.

Utilizzare `CWnd::DestroyWindow` la funzione per eliminare una `CreateIndirect` finestra di dialogo creata dalla funzione.

Le finestre di dialogo che contengono controlli ActiveX richiedono informazioni aggiuntive fornite in una risorsa DLGINIT.

## <a name="cdialogdomodal"></a><a name="domodal"></a>Finestra di dialogo::DoModal

Chiamare questa funzione membro per richiamare la finestra di dialogo modale e restituire il risultato della finestra di dialogo al termine dell'operazione.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Valore **int** che specifica il valore del parametro *nResult* passato alla funzione membro [CDialog::EndDialog](#enddialog) , utilizzata per chiudere la finestra di dialogo. Il valore restituito è -1 se la funzione non è in grado di creare la finestra di dialogo o IDABORT se si è verificato un altro errore, nel qual caso la finestra di output conterrà informazioni sull'errore da [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### <a name="remarks"></a>Osservazioni

Questa funzione membro gestisce tutte le interazioni con l'utente mentre la finestra di dialogo è attiva. Questo è ciò che rende la finestra di dialogo modale; ovvero, l'utente non può interagire con altre finestre fino a quando la finestra di dialogo non viene chiusa.

Se l'utente fa clic su uno dei pulsanti della finestra di dialogo, ad esempio OK o Annulla, viene chiamata una funzione membro del gestore messaggi, ad esempio [OnOK](#onok) o [OnCancel](#oncancel), per tentare di chiudere la finestra di dialogo. La `OnOK` funzione membro predefinita convaliderà e aggiornerà i dati della finestra di `OnCancel` dialogo e chiuderà la finestra di dialogo con il risultato IDOK e la funzione membro predefinita chiuderà la finestra di dialogo con risultato IDCANCEL senza convalidare o aggiornare i dati della finestra di dialogo. È possibile eseguire l'override di queste funzioni del gestore messaggi per modificarne il comportamento.

> [!NOTE]
> `PreTranslateMessage`è ora chiamato per l'elaborazione del messaggio di finestra di dialogo modale.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#63](../../mfc/codesnippet/cpp/cdialog-class_2.cpp)]

## <a name="cdialogenddialog"></a><a name="enddialog"></a>Finestra di dialogo::CDialog::EndDialog

Chiamare questa funzione membro per terminare una finestra di dialogo modale.

```cpp
void EndDialog(int nResult);
```

### <a name="parameters"></a>Parametri

*nRisultato*<br/>
Contiene il valore da restituire dalla finestra di `DoModal`dialogo al chiamante di .

### <a name="remarks"></a>Osservazioni

Questa funzione membro restituisce *nResult* come valore restituito di `DoModal`. È necessario `EndDialog` utilizzare la funzione per completare l'elaborazione ogni volta che viene creata una finestra di dialogo modale.

È possibile `EndDialog` chiamare in qualsiasi momento, anche in [OnInitDialog](#oninitdialog), nel qual caso è necessario chiudere la finestra di dialogo prima che venga visualizzata o prima che venga impostato lo stato attivo per l'input.

`EndDialog`non chiude immediatamente la finestra di dialogo. Al contrario, imposta un flag che indica la chiusura della finestra di dialogo non appena viene restituito il gestore di messaggi corrente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#64](../../mfc/codesnippet/cpp/cdialog-class_3.cpp)]

[!code-cpp[NVC_MFCControlLadenDialog#65](../../mfc/codesnippet/cpp/cdialog-class_4.cpp)]

## <a name="cdialoggetdefid"></a><a name="getdefid"></a>CDialog::GetDefID

Chiamare `GetDefID` la funzione membro per ottenere l'ID del controllo pulsante pushbutton predefinito per una finestra di dialogo.

```
DWORD GetDefID() const;
```

### <a name="return-value"></a>Valore restituito

Valore a 32 `DWORD`bit ( ). Se il pulsante predefinito ha un valore ID, la parola più in ordine superiore contiene DC_HASDEFID e la parola di ordine basso contiene il valore ID. Se il pulsante predefinito non ha un valore ID, il valore restituito è 0.If the default pushbutton does not have an ID value, the return value is 0.

### <a name="remarks"></a>Osservazioni

Questo è in genere un pulsante OK.

## <a name="cdialoggotodlgctrl"></a><a name="gotodlgctrl"></a>CDialog::GotoDlgCtrl

Sposta lo stato attivo sul controllo specificato nella finestra di dialogo.

```cpp
void GotoDlgCtrl(CWnd* pWndCtrl);
```

### <a name="parameters"></a>Parametri

*pWndCtrl (in modo intalo a int*<br/>
Identifica la finestra (controllo) che deve ricevere lo stato attivo.

### <a name="remarks"></a>Osservazioni

Per ottenere un puntatore al controllo (finestra figlio) da `CWnd::GetDlgItem` passare come *pWndCtrl*, chiamare la funzione membro , che restituisce un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CWnd::GetDlgItem](../../mfc/reference/cwnd-class.md#getdlgitem).

## <a name="cdialoginitmodalindirect"></a><a name="initmodalindirect"></a>CDialog::InitModalIndiretto

Chiamare questa funzione membro per inizializzare un oggetto finestra di dialogo modale utilizzando un modello di finestra di dialogo che si costruisce in memoria.

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

*LpDialogTemplate (modello lpDialogTemplate)*<br/>
Punta alla memoria che contiene un modello di finestra di dialogo utilizzato per creare la finestra di dialogo. Questo modello è sotto forma di una struttura [DLGTEMPLATE](/windows/win32/api/winuser/ns-winuser-dlgtemplate) e informazioni sul controllo, come descritto in Windows SDK.

*hDialogTemplate (modello)*<br/>
Contiene un handle per la memoria globale contenente un modello di finestra di dialogo. Questo modello è sotto `DLGTEMPLATE` forma di struttura e dati per ogni controllo nella finestra di dialogo.

*pParentWnd (informazioni in due)*<br/>
Punta all'oggetto finestra padre o proprietario (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre dell'oggetto finestra di dialogo viene impostata sulla finestra principale dell'applicazione.

*LpDialogInit (informazioni in lingua inlingua del dialogo)*<br/>
Punta a una risorsa DLGINIT.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto finestra di dialogo è stato creato e inizializzato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per creare indirettamente una finestra di dialogo modale, allocare innanzitutto un blocco globale di memoria e riempirlo con il modello di finestra di dialogo. Chiamare quindi `CDialog` il costruttore vuoto per costruire l'oggetto finestra di dialogo. Chiamare quindi `InitModalIndirect` per archiviare l'handle nel modello di finestra di dialogo in memoria. La finestra di dialogo di Windows viene creata e visualizzata in un secondo momento, quando viene chiamata la funzione membro [DoModal](#domodal) .

Le finestre di dialogo che contengono controlli ActiveX richiedono informazioni aggiuntive fornite in una risorsa DLGINIT.

## <a name="cdialogmapdialogrect"></a><a name="mapdialogrect"></a>CDialog::MapDialogRect

Chiamata per convertire le unità della finestra di dialogo di un rettangolo in unità dello schermo.

```cpp
void MapDialogRect(LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*Lprect*<br/>
Punta a un [RECT](/windows/win32/api/windef/ns-windef-rect) struttura o [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che contiene le coordinate della finestra di dialogo da convertire.

### <a name="remarks"></a>Osservazioni

Le unità della finestra di dialogo sono indicate in termini di unità di base della finestra di dialogo corrente derivata dalla larghezza media e dall'altezza dei caratteri nel tipo di carattere utilizzato per il testo della finestra di dialogo. Un'unità orizzontale è un quarto dell'unità di larghezza di base della finestra di dialogo e un'unità verticale è un ottavo dell'unità di altezza di base della finestra di dialogo.

La `GetDialogBaseUnits` funzione Windows restituisce informazioni sulle dimensioni per il tipo di carattere di sistema, ma è possibile specificare un tipo di carattere diverso per ogni finestra di dialogo se si utilizza lo stile di DS_SETFONT nel file di definizione delle risorse. La `MapDialogRect` funzione Windows utilizza il tipo di carattere appropriato per questa finestra di dialogo.

La `MapDialogRect` funzione membro sostituisce le unità della finestra di dialogo in *lpRect* con unità dello schermo (pixel) in modo che il rettangolo può essere utilizzato per creare una finestra di dialogo o posizionare un controllo all'interno di una casella.

## <a name="cdialognextdlgctrl"></a><a name="nextdlgctrl"></a>CDialog::NextDlgCtrl

Sposta lo stato attivo sul controllo successivo nella finestra di dialogo.

```cpp
void NextDlgCtrl() const;
```

### <a name="remarks"></a>Osservazioni

Se lo stato attivo si trova in corrispondenza dell'ultimo controllo nella finestra di dialogo, si sposta sul primo controllo.

## <a name="cdialogoncancel"></a><a name="oncancel"></a>CDialog::OnCancel

Il framework chiama questo metodo quando l'utente fa clic su **Annulla** o preme il tasto ESC in una finestra di dialogo modale o non modale.

```
virtual void OnCancel();
```

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per eseguire azioni (ad esempio il ripristino dei dati precedenti) quando un utente chiude la finestra di dialogo facendo clic su **Annulla** o premendo eSC. Il valore predefinito chiude una finestra di dialogo modale chiamando [EndDialog](#enddialog) e causando [DoModal](#domodal) restituire IDCANCEL.

Se si implementa il pulsante **Annulla** in una `OnCancel` finestra di dialogo non modale, è necessario eseguire l'override del metodo e chiamare [DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow) al suo interno. Non chiamare il metodo della classe `EndDialog`base, perché chiama , che renderà invisibile la finestra di dialogo ma non la dividerà.

> [!NOTE]
> Non è possibile eseguire l'override di questo metodo quando si utilizza un `CFileDialog` oggetto in un programma compilato in Windows XP. Per ulteriori `CFileDialog`informazioni su , vedere [Classe CFileDialog](../../mfc/reference/cfiledialog-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#66](../../mfc/codesnippet/cpp/cdialog-class_5.cpp)]

## <a name="cdialogoninitdialog"></a><a name="oninitdialog"></a>CDialog::OnInitDialog

Questo metodo viene chiamato `WM_INITDIALOG` in risposta al messaggio.

```
virtual BOOL OnInitDialog();
```

### <a name="return-value"></a>Valore restituito

Specifica se l'applicazione ha impostato lo stato attivo per l'input su uno dei controlli nella finestra di dialogo. Se `OnInitDialog` restituisce un valore diverso da zero, Windows imposta lo stato attivo per l'input sulla posizione predefinita, il primo controllo nella finestra di dialogo. L'applicazione può restituire 0 solo se ha impostato in modo esplicito lo stato attivo per l'input su uno dei controlli nella finestra di dialogo.

### <a name="remarks"></a>Osservazioni

Windows invia `WM_INITDIALOG` il messaggio alla finestra di dialogo durante le chiamate [Create](#create), [CreateIndirect](#createindirect)o [DoModal](#domodal) , che si verificano immediatamente prima della visualizzazione della finestra di dialogo.

Eseguire l'override di questo metodo se si desidera eseguire un'elaborazione speciale quando viene inizializzata la finestra di dialogo. Nella versione sottoposta a override, `OnInitDialog` chiamare prima la classe base ma ignorarne il valore restituito. In genere `TRUE` si tornerà dal metodo sottoposto a override.

Windows chiama `OnInitDialog` la funzione utilizzando la routine standard della finestra di dialogo globale comune a tutte le finestre di dialogo della libreria Microsoft Foundation Class. Non chiama questa funzione tramite la mappa messaggi e pertanto non è necessaria una voce della mappa messaggi per questo metodo.

> [!NOTE]
> Non è possibile eseguire l'override di questo metodo quando si utilizza un `CFileDialog` oggetto in un programma compilato in Windows Vista o sistemi operativi successivi. Per ulteriori informazioni `CFileDialog` sulle modifiche apportate a Windows Vista e versioni successive, vedere [Classe CFileDialog](../../mfc/reference/cfiledialog-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#67](../../mfc/codesnippet/cpp/cdialog-class_6.cpp)]

## <a name="cdialogonok"></a><a name="onok"></a>CDialog::OnOK

Chiamato quando l'utente fa clic sul pulsante **OK** (il pulsante con ID ID IDOK).

```
virtual void OnOK();
```

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo per eseguire azioni quando il pulsante **OK** è attivato. Se la finestra di dialogo include la convalida e lo scambio automatici dei dati, l'implementazione predefinita di questo metodo convalida i dati della finestra di dialogo e aggiorna le variabili appropriate nell'applicazione.

Se si implementa il pulsante **OK** in una `OnOK` finestra di dialogo non modale, è necessario eseguire l'override del metodo e chiamare [DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow) al suo interno. Non chiamare il metodo della classe base, perché chiama [EndDialog](#enddialog) che rende invisibile la finestra di dialogo ma non la elimina.

> [!NOTE]
> Non è possibile eseguire l'override di questo metodo quando si utilizza un `CFileDialog` oggetto in un programma compilato in Windows XP. Per ulteriori `CFileDialog`informazioni su , vedere [Classe CFileDialog](../../mfc/reference/cfiledialog-class.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#68](../../mfc/codesnippet/cpp/cdialog-class_7.cpp)]

## <a name="cdialogonsetfont"></a><a name="onsetfont"></a>CDialog::OnSetFont

Specifica il tipo di carattere che verrà utilizzato da un controllo finestra di dialogo per il disegno del testo.

```
Virtual void OnSetFont(CFont* pFont);
```

### <a name="parameters"></a>Parametri

*pCaratterE*<br/>
[in] Specifica un puntatore al tipo di carattere che verrà utilizzato come tipo di carattere predefinito per tutti i controlli in questa finestra di dialogo.

### <a name="remarks"></a>Osservazioni

La finestra di dialogo utilizzerà il tipo di carattere specificato come predefinito per tutti i relativi controlli.

L'editor finestre imposta in genere il tipo di carattere della finestra di dialogo come parte della risorsa modello della finestra di dialogo.

> [!NOTE]
> Non è possibile eseguire l'override di questo metodo quando si utilizza un `CFileDialog` oggetto in un programma compilato in Windows Vista o sistemi operativi successivi. Per ulteriori informazioni `CFileDialog` sulle modifiche apportate a Windows Vista e versioni successive, vedere [Classe CFileDialog](../../mfc/reference/cfiledialog-class.md).

## <a name="cdialogprevdlgctrl"></a><a name="prevdlgctrl"></a>CDialog::PrevDlgCtrl

Imposta lo stato attivo sul controllo precedente nella finestra di dialogo.

```cpp
void PrevDlgCtrl() const;
```

### <a name="remarks"></a>Osservazioni

Se lo stato attivo si trova sul primo controllo della finestra di dialogo, si sposta sull'ultimo controllo nella casella.

## <a name="cdialogsetdefid"></a><a name="setdefid"></a>CDialog::SetDefID

Modifica il controllo pulsante push predefinito per una finestra di dialogo.

```cpp
void SetDefID(UINT nID);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Specifica l'ID del controllo pulsante push che diventerà il valore predefinito.

## <a name="cdialogsethelpid"></a><a name="sethelpid"></a>CDialog::SetHelpID

Imposta un ID della Guida sensibile al contesto per la finestra di dialogo.

```cpp
void SetHelpID(UINT nIDR);
```

### <a name="parameters"></a>Parametri

*nIDR (informazioni in stato instato in stato*<br/>
Specifica l'ID della Guida sensibile al contesto.

## <a name="see-also"></a>Vedere anche

[Esempio MFC DLGCBR32](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC DLGTEMPL](../../overview/visual-cpp-samples.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
