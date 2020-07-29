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
ms.openlocfilehash: 280d75c3bcacd673107fd32ecaa39953b06a77c8
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214074"
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
|[CPageSetupDialog:: CPageSetupDialog](#cpagesetupdialog)|Costruisce un oggetto `CPageSetupDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPageSetupDialog:: CreatePrinterDC](#createprinterdc)|Crea un contesto di dispositivo per la stampa.|
|[CPageSetupDialog::D oModal](#domodal)|Visualizza la finestra di dialogo e consente all'utente di effettuare una selezione.|
|[CPageSetupDialog:: GetDeviceName](#getdevicename)|Restituisce il nome del dispositivo della stampante.|
|[CPageSetupDialog:: getdevmode](#getdevmode)|Restituisce l'oggetto DEVMODE corrente della stampante.|
|[CPageSetupDialog:: getDriverName](#getdrivername)|Restituisce il driver utilizzato dalla stampante.|
|[CPageSetupDialog:: GetMargins](#getmargins)|Restituisce le impostazioni correnti dei margini della stampante.|
|[CPageSetupDialog:: GetPaperSize](#getpapersize)|Restituisce il formato della carta della stampante.|
|[CPageSetupDialog:: getportaname](#getportname)|Restituisce il nome della porta di output.|
|[CPageSetupDialog:: OnDrawPage](#ondrawpage)|Chiamata eseguita dal Framework per eseguire il rendering di un'immagine della schermata di una pagina stampata.|
|[CPageSetupDialog::P reDrawPage](#predrawpage)|Chiamato dal Framework prima di eseguire il rendering di un'immagine della schermata di una pagina stampata.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPageSetupDialog:: m_psd](#m_psd)|Struttura utilizzata per personalizzare un `CPageSetupDialog` oggetto.|

## <a name="remarks"></a>Osservazioni

Questa classe è progettata per essere sostituita dalla finestra di dialogo Imposta stampa.

Per utilizzare un `CPageSetupDialog` oggetto, creare innanzitutto l'oggetto utilizzando il `CPageSetupDialog` costruttore. Una volta creata la finestra di dialogo, è possibile impostare o modificare i valori `m_psd` del membro dati per inizializzare i valori dei controlli della finestra di dialogo. La struttura [m_psd](#m_psd) è di tipo PAGESETUPDLG.

Dopo l'inizializzazione dei controlli della finestra di dialogo, chiamare la `DoModal` funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare le opzioni di stampa. `DoModal`Restituisce un valore che indica se l'utente ha selezionato il pulsante OK (IDOK) o Annulla (IDCANCEL).

Se `DoModal` restituisce IDOK, è possibile usare diverse `CPageSetupDialog` funzioni membro di, o accedere al `m_psd` membro dati, per recuperare l'input di informazioni da parte dell'utente.

> [!NOTE]
> Dopo che la finestra di dialogo Imposta pagina OLE comune viene rilasciata, le modifiche apportate dall'utente non verranno salvate dal Framework. Spetta all'applicazione stessa salvare tutti i valori da questa finestra di dialogo in una posizione permanente, ad esempio un membro del documento dell'applicazione o della classe dell'applicazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CPageSetupDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs. h

## <a name="cpagesetupdialogcpagesetupdialog"></a><a name="cpagesetupdialog"></a>CPageSetupDialog:: CPageSetupDialog

Chiamare questa funzione per costruire un `CPageSetupDialog` oggetto.

```
CPageSetupDialog(
    DWORD dwFlags = PSD_MARGINS | PSD_INWININIINTLMEASURE,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Uno o più flag che è possibile utilizzare per personalizzare le impostazioni della finestra di dialogo. I valori possono essere combinati utilizzando l'operatore OR bit per bit. I valori hanno il significato seguente:

- PSD_DEFAULTMINMARGINS imposta le larghezze minime consentite per i margini della pagina in modo che corrispondano ai valori minimi della stampante. Questo flag viene ignorato se vengono specificati anche i flag PSD_MARGINS e PSD_MINMARGINS.

- PSD_INWININIINTLMEASURE non implementata.

- PSD_MINMARGINS fa in modo che il sistema usi i valori specificati nel `rtMinMargin` membro come larghezze minime consentite per i margini sinistro, superiore, destro e inferiore. Il sistema impedisce all'utente di immettere una larghezza minore del valore minimo specificato. Se PSD_MINMARGINS non viene specificato, il sistema imposta le larghezze minime consentite a quelle consentite dalla stampante.

- PSD_MARGINS attiva l'area di controllo dei margini.

- PSD_INTHOUSANDTHSOFINCHES fa sì che le unità della finestra di dialogo vengano misurate in 1/1000 di pollice.

- PSD_INHUNDREDTHSOFMILLIMETERS fa sì che le unità della finestra di dialogo vengano misurate in 1/100 di un millimetro.

- PSD_DISABLEMARGINS disabilita i controlli della finestra di dialogo margine.

- PSD_DISABLEPRINTER Disabilita il pulsante stampante.

- PSD_NOWARNING impedisce la visualizzazione del messaggio di avviso quando non è disponibile una stampante predefinita.

- PSD_DISABLEORIENTATION Disabilita il controllo della finestra di dialogo orientamento pagina.

- PSD_RETURNDEFAULT fa `CPageSetupDialog` in modo che restituisca strutture [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) e [DEVNAMES](/windows/win32/api/commdlg/ns-commdlg-devnames) inizializzate per la stampante predefinita del sistema senza visualizzare una finestra di dialogo. Si presuppone che sia che `hDevNames` `hDevMode` siano null; in caso contrario, la funzione restituisce un errore. Se la stampante predefinita di sistema è supportata da un driver della stampante precedente (precedente a Windows versione 3,0), viene restituito solo il valore `hDevNames` `hDevMode` . è null.

- PSD_DISABLEPAPER Disabilita il controllo di selezione della carta.

- PSD_SHOWHELP fa in modo che la finestra di dialogo visualizzi il pulsante della guida. `hwndOwner`Se questo flag è specificato, il membro non deve essere null.

- PSD_ENABLEPAGESETUPHOOK abilita la funzione hook specificata in `lpfnSetupHook` .

- PSD_ENABLEPAGESETUPTEMPLATE fa in modo che il sistema operativo crei la finestra di dialogo utilizzando la finestra di dialogo modello identificata da `hInstance` e `lpSetupTemplateName` .

- PSD_ENABLEPAGESETUPTEMPLATEHANDLE indica che `hInstance` identifica un blocco di dati che contiene un modello di finestra di dialogo precaricato. Il sistema ignora `lpSetupTemplateName` se questo flag è specificato.

- PSD_ENABLEPAGEPAINTHOOK Abilita la funzione hook specificata in `lpfnPagePaintHook` .

- PSD_DISABLEPAGEPAINTING Disabilita l'area di estrazione della finestra di dialogo.

*pParentWnd*<br/>
Puntatore al padre o al proprietario della finestra di dialogo.

### <a name="remarks"></a>Osservazioni

Utilizzare la funzione [DoModal](../../mfc/reference/cdialog-class.md#domodal) per visualizzare la finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#94](../../mfc/codesnippet/cpp/cpagesetupdialog-class_1.cpp)]

## <a name="cpagesetupdialogcreateprinterdc"></a><a name="createprinterdc"></a>CPageSetupDialog:: CreatePrinterDC

Crea un contesto di dispositivo stampante dalle strutture [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) e [DEVNAMES](/windows/win32/api/commdlg/ns-commdlg-devnames) .

```
HDC CreatePrinterDC();
```

### <a name="return-value"></a>Valore restituito

Handle per il contesto di dispositivo della stampante appena creato (DC).

## <a name="cpagesetupdialogdomodal"></a><a name="domodal"></a>CPageSetupDialog::D oModal

Chiamare questa funzione per visualizzare la finestra di dialogo Imposta pagina OLE comune di Windows e consentire all'utente di selezionare varie opzioni di installazione di stampa, ad esempio i margini di stampa, le dimensioni e l'orientamento della carta e la stampante di destinazione.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

IDOK o IDCANCEL. Se viene restituito IDCANCEL, chiamare la funzione [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) di Windows per determinare se si è verificato un errore.

IDOK e IDCANCEL sono costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.

### <a name="remarks"></a>Osservazioni

Inoltre, l'utente può accedere alle opzioni di configurazione della stampante, ad esempio il percorso di rete e le proprietà specifiche della stampante selezionata.

Se si desidera inizializzare le varie opzioni della finestra di dialogo Imposta pagina impostando i membri della `m_psd` struttura, è necessario eseguire questa operazione prima di chiamare `DoModal` e dopo che l'oggetto finestra di dialogo è stato costruito. Dopo la chiamata `DoModal` a, chiamare altre funzioni membro per recuperare le impostazioni o l'input di informazioni da parte dell'utente nella finestra di dialogo.

Se si desidera propagare le impostazioni correnti immesse dall'utente, effettuare una chiamata a [CWinApp:: SelectPrinter](../../mfc/reference/cwinapp-class.md#selectprinter). Questa funzione acquisisce le informazioni dall' `CPageSetupDialog` oggetto e Inizializza e seleziona un nuovo controller di dominio di stampa con gli attributi appropriati.

[!code-cpp[NVC_MFCDocView#95](../../mfc/codesnippet/cpp/cpagesetupdialog-class_2.cpp)]

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPageSetupDialog:: CPageSetupDialog](#cpagesetupdialog).

## <a name="cpagesetupdialoggetdevicename"></a><a name="getdevicename"></a>CPageSetupDialog:: GetDeviceName

Chiamare questa funzione dopo `DoModal` per recuperare il nome della stampante attualmente selezionata.

```
CString GetDeviceName() const;
```

### <a name="return-value"></a>Valore restituito

Nome del dispositivo usato dall' `CPageSetupDialog` oggetto.

## <a name="cpagesetupdialoggetdevmode"></a><a name="getdevmode"></a>CPageSetupDialog:: getdevmode

Chiamare questa funzione dopo `DoModal` la chiamata a per recuperare informazioni sul contesto di dispositivo della stampante dell' `CPageSetupDialog` oggetto.

```
LPDEVMODE GetDevMode() const;
```

### <a name="return-value"></a>Valore restituito

Struttura dei dati [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) , che contiene informazioni sull'inizializzazione del dispositivo e sull'ambiente di un driver di stampa. È necessario sbloccare la memoria utilizzata da questa struttura con la funzione [funzione GlobalUnlock](/windows/win32/api/winbase/nf-winbase-globalunlock) di Windows, descritta nella Windows SDK.

## <a name="cpagesetupdialoggetdrivername"></a><a name="getdrivername"></a>CPageSetupDialog:: getDriverName

Chiamare questa funzione dopo la chiamata a [DoModal](../../mfc/reference/cprintdialog-class.md#domodal) per recuperare il nome del driver di dispositivo della stampante definito dal sistema.

```
CString GetDriverName() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto che `CString` specifica il nome del driver definito dal sistema.

### <a name="remarks"></a>Osservazioni

Utilizzare un puntatore all' `CString` oggetto restituito da `GetDriverName` come valore di `lpszDriverName` in una chiamata a [CDC:: CreateDC](../../mfc/reference/cdc-class.md#createdc).

## <a name="cpagesetupdialoggetmargins"></a><a name="getmargins"></a>CPageSetupDialog:: GetMargins

Chiamare questa funzione dopo una chiamata a `DoModal` per recuperare i margini del driver del dispositivo stampante.

```cpp
void GetMargins(
    LPRECT lpRectMargins,
    LPRECT lpRectMinMargins) const;
```

### <a name="parameters"></a>Parametri

*lpRectMargins*<br/>
Puntatore a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) o a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) che descrive (in 1/1000 centimetri o 1/100 mm) i margini di stampa per la stampante attualmente selezionata. Passare NULL per questo parametro, se non si è interessati a questo rettangolo.

*lpRectMinMargins*<br/>
Puntatore a una `RECT` struttura o a un `CRect` oggetto che descrive (in 1/1000 centimetri o 1/100 mm) i margini di stampa minimi per la stampante attualmente selezionata. Passare NULL per questo parametro, se non si è interessati a questo rettangolo.

## <a name="cpagesetupdialoggetpapersize"></a><a name="getpapersize"></a>CPageSetupDialog:: GetPaperSize

Chiamare questa funzione per recuperare le dimensioni del foglio selezionato per la stampa.

```
CSize GetPaperSize() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) che contiene le dimensioni della carta (in 1/1000 centimetri o 1/100 mm) selezionate per la stampa.

## <a name="cpagesetupdialoggetportname"></a><a name="getportname"></a>CPageSetupDialog:: getportaname

Chiamare questa funzione dopo `DoModal` la chiamata a per recuperare il nome della porta stampante attualmente selezionata.

```
CString GetPortName() const;
```

### <a name="return-value"></a>Valore restituito

Nome della porta stampante attualmente selezionata.

## <a name="cpagesetupdialogm_psd"></a><a name="m_psd"></a>CPageSetupDialog:: m_psd

Struttura di tipo PAGESETUPDLG, i cui membri archiviano le caratteristiche dell'oggetto finestra di dialogo.

```
PAGESETUPDLG m_psd;
```

### <a name="remarks"></a>Osservazioni

Dopo la costruzione di un `CPageSetupDialog` oggetto, è possibile utilizzare `m_psd` per impostare vari aspetti della finestra di dialogo prima di chiamare la `DoModal` funzione membro.

Se si modifica `m_psd` direttamente il membro dati, si eseguirà l'override di qualsiasi comportamento predefinito.

Per ulteriori informazioni sulla struttura [PAGESETUPDLG](/windows/win32/api/commdlg/ns-commdlg-pagesetupdlgw) , vedere la Windows SDK.

Vedere l'esempio per [CPageSetupDialog:: CPageSetupDialog](#cpagesetupdialog).

## <a name="cpagesetupdialogondrawpage"></a><a name="ondrawpage"></a>CPageSetupDialog:: OnDrawPage

Chiamata eseguita dal Framework per creare un'immagine della schermata di una pagina stampata.

```
virtual UINT OnDrawPage(
    CDC* pDC,
    UINT nMessage,
    LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto del dispositivo stampante.

*nMessaggio*<br/>
Specifica un messaggio che indica l'area della pagina attualmente disegnata. Può essere uno dei valori seguenti:

- WM_PSD_FULLPAGERECT l'intera area della pagina.

- WM_PSD_MINMARGINRECT margini minimi correnti.

- WM_PSD_MARGINRECT margini correnti.

- WM_PSD_GREEKTEXTRECT contenuto della pagina.

- Area WM_PSD_ENVSTAMPRECT riservata per la rappresentazione di un timbro.

- Area WM_PSD_YAFULLPAGERECT per una rappresentazione dell'indirizzo di restituzione. Questa area si estende ai bordi dell'area della pagina di esempio.

*lpRect*<br/>
Puntatore a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o [Rect](/windows/win32/api/windef/ns-windef-rect) contenente le coordinate dell'area di disegno.

### <a name="return-value"></a>Valore restituito

Valore diverso da zero se gestito; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Questa immagine viene quindi visualizzata come parte della finestra di dialogo Imposta pagina OLE comune. L'implementazione predefinita disegna un'immagine di una pagina di testo.

Eseguire l'override di questa funzione per personalizzare il disegno di un'area specifica dell'immagine o dell'intera immagine. A tale scopo, è possibile utilizzare un' **`switch`** istruzione con **`case`** istruzioni che controllano il valore di *nMessaggio*. Ad esempio, per personalizzare il rendering del contenuto dell'immagine della pagina, è possibile usare il codice di esempio seguente:

[!code-cpp[NVC_MFCDocView#96](../../mfc/codesnippet/cpp/cpagesetupdialog-class_3.cpp)]

Si noti che non è necessario gestire ogni caso di *nMessaggio*. È possibile scegliere di gestire un componente dell'immagine, diversi componenti dell'immagine o l'intera area.

## <a name="cpagesetupdialogpredrawpage"></a><a name="predrawpage"></a>CPageSetupDialog::P reDrawPage

Chiamato dal Framework prima di disegnare l'immagine della schermata di una pagina stampata.

```
virtual UINT PreDrawPage(
    WORD wPaper,
    WORD wFlags,
    LPPAGESETUPDLG pPSD);
```

### <a name="parameters"></a>Parametri

*wPaper*<br/>
Specifica un valore che indica il formato della carta. Questo valore può essere uno dei valori **DMPAPER_** elencati nella descrizione della struttura [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) .

*wFlags*<br/>
Indica l'orientamento della carta o della busta e indica se la stampante è un dispositivo a matrice di punti o HPPCL (Hewlett Packard Printer Control Language). Per il parametro è possibile specificare uno dei valori riportati di seguito:

- 0x001 paper in modalità orizzontale (matrice di punti)

- Documento 0x003 in modalità orizzontale (HPPCL)

- Documento 0x005 in modalità verticale (matrice a punti)

- Documento 0x007 in modalità verticale (HPPCL)

- Busta 0x00b in modalità orizzontale (HPPCL)

- Busta 0x00d in modalità verticale (matrice di punti)

- Busta 0x019 in modalità orizzontale (matrice di punti)

- Busta 0x01f in modalità verticale (matrice di punti)

*pPSD*<br/>
Puntatore a una struttura `PAGESETUPDLG`. Per ulteriori informazioni su [PAGESETUPDLG](/windows/win32/api/commdlg/ns-commdlg-pagesetupdlgw), vedere la Windows SDK.

### <a name="return-value"></a>Valore restituito

Valore diverso da zero se gestito; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per personalizzare il disegno dell'immagine. Se si esegue l'override di questa funzione e si restituisce TRUE, è necessario creare l'intera immagine. Se si esegue l'override di questa funzione e si restituisce FALSE, l'intera immagine predefinita viene disegnata dal Framework.

## <a name="see-also"></a>Vedere anche

[WORDPAD di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
