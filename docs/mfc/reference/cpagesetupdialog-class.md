---
title: Classe CPageSetupDialog
ms.date: 11/04/2016
f1_keywords:
- CPageSetupDialog
- AFXDLGS/CPageSetupDialog
- AFXDLGS/CPageSetupDialog::CPageSetupDialog
- AFXDLGS/CPageSetupDialog::CreatePrinterDC
- AFXDLGS/CPageSetupDialog::DoModal
- AFXDLGS/CPageSetupDialog::GetDeviceName
- AFXDLGS/CPageSetupDialog::GetDevMode
- AFXDLGS/CPageSetupDialog::GetDriverName
- AFXDLGS/CPageSetupDialog::GetMargins
- AFXDLGS/CPageSetupDialog::GetPaperSize
- AFXDLGS/CPageSetupDialog::GetPortName
- AFXDLGS/CPageSetupDialog::OnDrawPage
- AFXDLGS/CPageSetupDialog::PreDrawPage
- AFXDLGS/CPageSetupDialog::m_psd
helpviewer_keywords:
- CPageSetupDialog [MFC], CPageSetupDialog
- CPageSetupDialog [MFC], CreatePrinterDC
- CPageSetupDialog [MFC], DoModal
- CPageSetupDialog [MFC], GetDeviceName
- CPageSetupDialog [MFC], GetDevMode
- CPageSetupDialog [MFC], GetDriverName
- CPageSetupDialog [MFC], GetMargins
- CPageSetupDialog [MFC], GetPaperSize
- CPageSetupDialog [MFC], GetPortName
- CPageSetupDialog [MFC], OnDrawPage
- CPageSetupDialog [MFC], PreDrawPage
- CPageSetupDialog [MFC], m_psd
ms.assetid: 049c0ac8-f254-4854-9414-7a8271d1447a
ms.openlocfilehash: d3fdcfa664de93f62b8b4dbcbc6184d08fdf591c
ms.sourcegitcommit: 975098222db3e8b297607cecaa1f504570a11799
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2018
ms.locfileid: "53178082"
---
# <a name="cpagesetupdialog-class"></a>Classe CPageSetupDialog

Incapsula i servizi forniti dalla finestra di dialogo di impostazione pagina OLE comune di Windows con supporto aggiuntivo per l'impostazione e la modifica dei margini di stampa.

## <a name="syntax"></a>Sintassi

```
class CPageSetupDialog : public CCommonDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPageSetupDialog::CPageSetupDialog](#cpagesetupdialog)|Costruisce un oggetto `CPageSetupDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPageSetupDialog::CreatePrinterDC](#createprinterdc)|Crea un contesto di dispositivo per la stampa.|
|[CPageSetupDialog::DoModal](#domodal)|Consente di visualizzare la finestra di dialogo e l'utente, assicurarsi una selezione.|
|[CPageSetupDialog::GetDeviceName](#getdevicename)|Restituisce il nome del dispositivo della stampante.|
|[CPageSetupDialog::GetDevMode](#getdevmode)|Restituisce il DEVMODE corrente della stampante.|
|[CPageSetupDialog::GetDriverName](#getdrivername)|Restituisce il driver usato dalla stampante.|
|[CPageSetupDialog::GetMargins](#getmargins)|Restituisce le impostazioni correnti della stampante.|
|[CPageSetupDialog::GetPaperSize](#getpapersize)|Restituisce il formato della carta della stampante.|
|[CPageSetupDialog::GetPortName](#getportname)|Restituisce il nome di porta di output.|
|[CPageSetupDialog::OnDrawPage](#ondrawpage)|Chiamato dal framework per eseguire il rendering di un'immagine della schermata di una pagina stampata.|
|[CPageSetupDialog::PreDrawPage](#predrawpage)|Chiamato dal framework prima del rendering di un'immagine della schermata di una pagina stampata.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPageSetupDialog::m_psd](#m_psd)|Una struttura utilizzata per personalizzare un `CPageSetupDialog` oggetto.|

## <a name="remarks"></a>Note

Questa classe è progettata per l'implementazione della finestra di dialogo Impostazioni di stampa.

Usare un `CPageSetupDialog` dell'oggetto, creare prima l'oggetto usando il `CPageSetupDialog` costruttore. Una volta la finestra di dialogo è stata costruita, è possibile impostare o modificare i valori di `m_psd` membro dati per inizializzare i valori dei controlli della finestra di dialogo. Il [m_psd](#m_psd) struttura è di tipo PAGESETUPDLG.

Dopo l'inizializzazione i controlli di finestra di dialogo, chiamare il `DoModal` funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare le opzioni di stampa. `DoModal` Restituisce se l'utente ha selezionato il pulsante OK (IDOK) o annullare (IDCANCEL).

Se `DoModal` restituisce IDOK, è possibile usare diversi `CPageSetupDialog`di funzioni membro o l'accesso di `m_psd` membro dati, per recuperare le informazioni input dall'utente.

> [!NOTE]
>  Dopo che è stata chiusa la finestra di dialogo di impostazione pagina OLE comune, tutte le modifiche apportate dall'utente non verranno salvate dal framework. È compito dell'applicazione per salvare tutti i valori da questa finestra di dialogo in una posizione permanente, ad esempio membro del documento dell'applicazione o classe dell'applicazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CPageSetupDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs. h

##  <a name="cpagesetupdialog"></a>  CPageSetupDialog::CPageSetupDialog

Chiamare questa funzione per costruire un `CPageSetupDialog` oggetto.

```
CPageSetupDialog(
    DWORD dwFlags = PSD_MARGINS | PSD_INWININIINTLMEASURE,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Uno o più flag che è possibile usare per personalizzare le impostazioni della finestra di dialogo. I valori possono essere combinati utilizzando l'operatore OR bit per bit. Questi valori hanno i significati seguenti:

- PSD_DEFAULTMINMARGINS imposta larghezze minime consentite per i margini di pagina su coincidere con il pagamento della stampante. Questo flag viene ignorato se vengono specificati anche i flag PSD_MARGINS e PSD_MINMARGINS.

- PSD_INWININIINTLMEASURE non implementato.

- PSD_MINMARGINS fa sì che il sistema userà i valori specificati nel `rtMinMargin` membro come larghezze minime consentite per la sinistra, superiore, destro e margini inferiore. Il sistema impedisce all'utente di immettere una larghezza inferiore a quello minimo specificato. Se PSD_MINMARGINS non viene specificato, il sistema imposta larghezze minime consentite a quelle consentite dalla stampante.

- PSD_MARGINS attiva l'area di controllo dei margini.

- PSD_INTHOUSANDTHSOFINCHES fa in modo che le unità della finestra di dialogo essere misurati in 1/1000 di pollice.

- PSD_INHUNDREDTHSOFMILLIMETERS fa in modo che le unità della finestra di dialogo essere misurati in 1/100 di millimetro.

- PSD_DISABLEMARGINS disabilita i controlli di finestre di dialogo margini.

- PSD_DISABLEPRINTER disabilita il pulsante stampante.

- Il messaggio di avviso PSD_NOWARNING impedisce la visualizzazione quando è presente alcuna stampante predefinita.

- PSD_DISABLEORIENTATION disabilita il controllo di finestra di dialogo di orientamento della pagina.

- Fa sì che PSD_RETURNDEFAULT `CPageSetupDialog` per restituire [DEVMODE](/windows/desktop/api/wingdi/ns-wingdi-_devicemodea) e [DEVNAMES](/windows/desktop/api/commdlg/ns-commdlg-tagdevnames) strutture che vengono inizializzate per la stampante predefinita di sistema senza visualizzare una finestra di dialogo. Si presuppone che entrambe `hDevNames` e `hDevMode` sono NULL; in caso contrario, la funzione restituisce un errore. Se la stampante predefinita di sistema è supportata da un vecchio driver della stampante (precedenti a Windows versione 3.0), solo `hDevNames` verrà restituito. `hDevMode` è NULL.

- PSD_DISABLEPAPER disabilita il controllo di selezione documento.

- PSD_SHOWHELP fa sì che la finestra di dialogo visualizzare il pulsante?. Il `hwndOwner` membro non deve essere NULL se questo flag è specificato.

- PSD_ENABLEPAGESETUPHOOK consente la funzione hook specificata in `lpfnSetupHook`.

- PSD_ENABLEPAGESETUPTEMPLATE fa sì che il sistema operativo creare la finestra di dialogo con la finestra di dialogo modello identificata da `hInstance` e `lpSetupTemplateName`.

- PSD_ENABLEPAGESETUPTEMPLATEHANDLE indica che `hInstance` identifica un blocco di dati che contiene un modello di finestra di dialogo precaricati. Il sistema ignora `lpSetupTemplateName` se questo flag è specificato.

- PSD_ENABLEPAGEPAINTHOOK consente la funzione hook specificata in `lpfnPagePaintHook`.

- PSD_DISABLEPAGEPAINTING disabilita l'area di disegno della finestra di dialogo.

*pParentWnd*<br/>
Puntatore all'elemento padre o il proprietario della finestra di dialogo.

### <a name="remarks"></a>Note

Usare la [DoModal](../../mfc/reference/cdialog-class.md#domodal) funzione per visualizzare la finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#94](../../mfc/codesnippet/cpp/cpagesetupdialog-class_1.cpp)]

##  <a name="createprinterdc"></a>  CPageSetupDialog::CreatePrinterDC

Crea un contesto di dispositivo stampante dal [DEVMODE](/windows/desktop/api/wingdi/ns-wingdi-_devicemodea) e [DEVNAMES](/windows/desktop/api/commdlg/ns-commdlg-tagdevnames) strutture.

```
HDC CreatePrinterDC();
```

### <a name="return-value"></a>Valore restituito

Handle per il contesto di dispositivo stampante appena creato (DC).

##  <a name="domodal"></a>  CPageSetupDialog::DoModal

Chiamare questa funzione per visualizzare la finestra di dialogo Impostazione pagina OLE comune Windows e consentire all'utente di selezionare varie opzioni di stampa, ad esempio i margini di stampa, dimensioni e orientamento del documento e stampante di destinazione.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

IDOK o IDCANCEL. Se viene restituito IDCANCEL, chiamare il Windows [CommDlgExtendedError](/windows/desktop/api/commdlg/nf-commdlg-commdlgextendederror) funzione per determinare se si è verificato un errore.

IDOK e IDCANCEL sono le costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.

### <a name="remarks"></a>Note

Inoltre, l'utente può accedere le opzioni di installazione della stampante come percorso di rete e le proprietà specifiche per la stampante selezionata.

Se si desidera inizializzare le varie opzioni di finestra di dialogo Imposta pagina impostando i membri del `m_psd` struttura, è consigliabile farlo prima di chiamare `DoModal`, e dopo che viene costruito l'oggetto finestra di dialogo. Dopo aver chiamato `DoModal`, chiamare le funzioni per recuperare le impostazioni o input di informazioni dall'utente nella finestra di dialogo altro membro.

Se si desidera propagare le impostazioni correnti immesse dall'utente, effettuare una chiamata a [CWinApp::SelectPrinter](../../mfc/reference/cwinapp-class.md#selectprinter). Questa funzione accetta le informazioni dal `CPageSetupDialog` dell'oggetto e inizializza e consente di selezionare una stampante nuovo controller di dominio con gli attributi appropriati.

[!code-cpp[NVC_MFCDocView#95](../../mfc/codesnippet/cpp/cpagesetupdialog-class_2.cpp)]

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CPageSetupDialog::CPageSetupDialog](#cpagesetupdialog).

##  <a name="getdevicename"></a>  CPageSetupDialog::GetDeviceName

Chiamare questa funzione dopo `DoModal` per recuperare il nome della stampante attualmente selezionata.

```
CString GetDeviceName() const;
```

### <a name="return-value"></a>Valore restituito

Il nome del dispositivo usato per il `CPageSetupDialog` oggetto.

##  <a name="getdevmode"></a>  CPageSetupDialog::GetDevMode

Chiamare questa funzione dopo la chiamata `DoModal` per recuperare le informazioni relative al contesto di dispositivo stampante del `CPageSetupDialog` oggetto.

```
LPDEVMODE GetDevMode() const;
```

### <a name="return-value"></a>Valore restituito

Il [DEVMODE](/windows/desktop/api/wingdi/ns-wingdi-_devicemodea) struttura dei dati, che contiene informazioni sull'inizializzazione di dispositivi e l'ambiente di un driver di stampa. È necessario sbloccare la memoria utilizzata da questa struttura con il Windows [GlobalUnlock](/windows/desktop/api/winbase/nf-winbase-globalunlock) funzione, che è descritti nel SDK di Windows.

##  <a name="getdrivername"></a>  CPageSetupDialog::GetDriverName

Chiamare questa funzione dopo la chiamata [DoModal](../../mfc/reference/cprintdialog-class.md#domodal) per recuperare il nome del driver di dispositivo stampante definito dal sistema.

```
CString GetDriverName() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` specificando il nome del driver definiti dal sistema.

### <a name="remarks"></a>Note

Usare un puntatore per il `CString` oggetto restituito da `GetDriverName` come valore di `lpszDriverName` in una chiamata a [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).

##  <a name="getmargins"></a>  CPageSetupDialog::GetMargins

Chiamare questa funzione dopo una chiamata a `DoModal` per recuperare i margini del driver di dispositivo stampante.

```
void GetMargins(
    LPRECT lpRectMargins,
    LPRECT lpRectMinMargins) const;
```

### <a name="parameters"></a>Parametri

*lpRectMargins*<br/>
Puntatore a un [RECT](/windows/desktop/api/windef/ns-windef-tagrect) struttura oppure [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che fornisce una descrizione (1/1000 pollici o mm 1/100) i margini di stampa per la stampante attualmente selezionata. Passare NULL per questo parametro, se non si è interessati a questo rettangolo.

*lpRectMinMargins*<br/>
Puntatore a un `RECT` struttura o `CRect` oggetto che fornisce una descrizione (1/1000 pollici o mm 1/100) i margini di stampa minimi per la stampante attualmente selezionata. Passare NULL per questo parametro, se non si è interessati a questo rettangolo.

##  <a name="getpapersize"></a>  CPageSetupDialog::GetPaperSize

Chiamare questa funzione per recuperare la dimensione della carta selezionata per la stampa.

```
CSize GetPaperSize() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che contiene il formato della carta (in pollici 1/1000 o mm 1/100) selezionato per la stampa.

##  <a name="getportname"></a>  CPageSetupDialog::GetPortName

Chiamare questa funzione dopo la chiamata `DoModal` per recuperare il nome della porta stampante attualmente selezionata.

```
CString GetPortName() const;
```

### <a name="return-value"></a>Valore restituito

Il nome della porta stampante attualmente selezionata.

##  <a name="m_psd"></a>  CPageSetupDialog::m_psd

Una struttura di tipo PAGESETUPDLG, i cui membri memorizzare le caratteristiche dell'oggetto finestra di dialogo.

```
PAGESETUPDLG m_psd;
```

### <a name="remarks"></a>Note

Dopo la costruzione di un `CPageSetupDialog` dell'oggetto, è possibile usare `m_psd` per impostare i vari aspetti della finestra di dialogo prima di chiamare il `DoModal` funzione membro.

Se si modifica il `m_psd` membro dati direttamente, si eseguirà l'override di qualsiasi comportamento predefinito.

Per altre informazioni sul [PAGESETUPDLG](/windows/desktop/api/commdlg/ns-commdlg-tagpsda) struttura, vedere il SDK di Windows.

Vedere l'esempio relativo [CPageSetupDialog::CPageSetupDialog](#cpagesetupdialog).

##  <a name="ondrawpage"></a>  CPageSetupDialog::OnDrawPage

Chiamata eseguita dal framework per disegnare un'immagine della schermata di una pagina stampata.

```
virtual UINT OnDrawPage(
    CDC* pDC,
    UINT nMessage,
    LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto di dispositivo stampante.

*nmessaggio*<br/>
Specifica un messaggio, che indica l'area della pagina da disegnare. Può essere uno dei seguenti:

- WM_PSD_FULLPAGERECT area della pagina intera.

- Margini minimi WM_PSD_MINMARGINRECT corrente.

- Margini WM_PSD_MARGINRECT corrente.

- WM_PSD_GREEKTEXTRECT contenuto della pagina.

- Area WM_PSD_ENVSTAMPRECT riservato per una rappresentazione di indicatore spese postali è ragionevole.

- Area WM_PSD_YAFULLPAGERECT per una rappresentazione in forma di indirizzo del mittente. Quest'area si estende ai bordi dell'area della pagina di esempio.

*lpRect*<br/>
Puntatore a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oppure [RECT](/windows/desktop/api/windef/ns-windef-tagrect) oggetto contenente le coordinate dell'area di disegno.

### <a name="return-value"></a>Valore restituito

Valore diverso da zero se è gestito; in caso contrario 0.

### <a name="remarks"></a>Note

Questa immagine viene quindi visualizzata come parte della finestra di dialogo di impostazione pagina OLE comune. L'implementazione predefinita consente di disegnare un'immagine di una pagina di testo.

Eseguire l'override di questa funzione per personalizzare la creazione di un'area specifica di immagine o l'intera immagine. È possibile farlo usando un **commutatore** dell'istruzione **case** istruzioni controllando il valore della *nmessaggio*. Per personalizzare il rendering del contenuto dell'immagine della pagina, ad esempio, si potrebbe usare il codice di esempio seguente:

[!code-cpp[NVC_MFCDocView#96](../../mfc/codesnippet/cpp/cpagesetupdialog-class_3.cpp)]

Si noti che non è necessaria gestire ogni caso di *nmessaggio*. È possibile scegliere di gestire un componente dell'immagine, diversi componenti per l'immagine o l'intera area.

##  <a name="predrawpage"></a>  CPageSetupDialog::PreDrawPage

Chiamato dal framework prima di disegnare l'immagine della schermata di una pagina stampata.

```
virtual UINT PreDrawPage(
    WORD wPaper,
    WORD wFlags,
    LPPAGESETUPDLG pPSD);
```

### <a name="parameters"></a>Parametri

*wPaper*<br/>
Specifica un valore che indica il formato della carta. Questo valore può essere uno dei **DMPAPER_** i valori elencati nella descrizione del [DEVMODE](/windows/desktop/api/wingdi/ns-wingdi-_devicemodea) struttura.

*wFlags*<br/>
Indica l'orientamento della carta o di busta, e se la stampante è una matrice di punti o dispositivo di HPPCL Caricamento (Hewlett Packard stampante Control Language). Per il parametro è possibile specificare uno dei valori riportati di seguito:

- 0x001 carta in modalità orizzontale (ad aghi)

- 0x003 carta in modalità orizzontale (HPPCL caricamento)

- 0x005 carta in modalità verticale (ad aghi)

- 0x007 carta in modalità verticale (HPPCL caricamento)

- 0x00b busta in modalità orizzontale (HPPCL caricamento)

- 0x00d busta in modalità verticale (ad aghi)

- 0x019 busta in modalità orizzontale (ad aghi)

- 0x01f busta in modalità verticale (ad aghi)

*pPSD*<br/>
Puntatore a una struttura `PAGESETUPDLG`. Per ulteriori informazioni sul [PAGESETUPDLG](/windows/desktop/api/commdlg/ns-commdlg-tagpsda), vedi il Windows SDK.

### <a name="return-value"></a>Valore restituito

Valore diverso da zero se è gestito; in caso contrario 0.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per personalizzare il disegno dell'immagine. Se si esegue l'override di questa funzione e restituisce TRUE, è necessario disegnare l'intera immagine. Se si esegue l'override di questa funzione e restituiscono FALSE, verrà disegnata l'immagine predefinita intero dal framework.

## <a name="see-also"></a>Vedere anche

[Esempio MFC WORDPAD](../../visual-cpp-samples.md)<br/>
[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)

