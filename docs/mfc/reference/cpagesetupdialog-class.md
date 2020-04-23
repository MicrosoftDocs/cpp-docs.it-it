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
ms.openlocfilehash: 3664149ef0d7476b460ef06cddaf2b8145ade701
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81753694"
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
|[CPageSetupDialog::DoModal](#domodal)|Visualizza la finestra di dialogo e consente all'utente di effettuare una selezione.|
|[CPageSetupDialog::GetDeviceName](#getdevicename)|Restituisce il nome del dispositivo della stampante.|
|[CPageSetupDialog::GetDevMode](#getdevmode)|Restituisce il DEVMODE corrente della stampante.|
|[CPageSetupDialog::NomeDriver](#getdrivername)|Restituisce il driver utilizzato dalla stampante.|
|[CPageSetupDialog::GetMargins](#getmargins)|Restituisce le impostazioni dei margini correnti della stampante.|
|[CPageSetupDialog::GetPaperSize](#getpapersize)|Restituisce il formato carta della stampante.|
|[CPageSetupDialog::NomePorta](#getportname)|Restituisce il nome della porta di output.|
|[CPageSetupDialog::OnDrawPage](#ondrawpage)|Chiamato dal framework per eseguire il rendering di un'immagine dello schermo di una pagina stampata.|
|[CPageSetupDialog::PreDrawPage](#predrawpage)|Chiamato dal framework prima di eseguire il rendering di un'immagine dello schermo di una pagina stampata.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPageSetupDialog::m_psd](#m_psd)|Struttura utilizzata per `CPageSetupDialog` personalizzare un oggetto.|

## <a name="remarks"></a>Osservazioni

Questa classe è progettata per passare alla finestra di dialogo Impostazioni di stampa.

Per utilizzare `CPageSetupDialog` un oggetto, creare `CPageSetupDialog` innanzitutto l'oggetto utilizzando il costruttore . Una volta costruita la finestra di dialogo, `m_psd` è possibile impostare o modificare i valori nel membro dati per inizializzare i valori dei controlli della finestra di dialogo. La [struttura m_psd](#m_psd) è di tipo PAGESETUPDLG.

Dopo l'inizializzazione dei controlli `DoModal` della finestra di dialogo, chiamare la funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare le opzioni di stampa. `DoModal`indica se l'utente ha selezionato il pulsante OK (IDOK) o Annulla (IDCANCEL).

Se `DoModal` restituisce IDOK, è `CPageSetupDialog`possibile utilizzare diverse funzioni `m_psd` membro di 'o accedere al membro dati, per recuperare le informazioni immesse dall'utente.

> [!NOTE]
> Dopo la finestra di dialogo Imposta pagina OLE comune viene chiusa, tutte le modifiche apportate dall'utente non verranno salvate dal framework. Spetta all'applicazione stessa salvare i valori da questa finestra di dialogo in un percorso permanente, ad esempio membro del documento o della classe dell'applicazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CPageSetupDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs.h

## <a name="cpagesetupdialogcpagesetupdialog"></a><a name="cpagesetupdialog"></a>CPageSetupDialog::CPageSetupDialog

Chiamare questa funzione `CPageSetupDialog` per costruire un oggetto.

```
CPageSetupDialog(
    DWORD dwFlags = PSD_MARGINS | PSD_INWININIINTLMEASURE,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Uno o più flag che è possibile utilizzare per personalizzare le impostazioni della finestra di dialogo. I valori possono essere combinati utilizzando l'operatore OR bit per bit. I valori hanno il significato seguente:

- PSD_DEFAULTMINMARGINS Imposta le larghezze minime consentite per i margini minimi della pagina in modo che siano le stesse dei minimi della stampante. Questo flag viene ignorato se vengono specificati anche i flag PSD_MARGINS e PSD_MINMARGINS.

- PSD_INWININIINTLMEASURE Non implementato.

- PSD_MINMARGINS Fa sì che il sistema `rtMinMargin` utilizzi i valori specificati nel membro come larghezze minime consentite per i margini sinistro, superiore, destro e inferiore. Il sistema impedisce all'utente di immettere una larghezza inferiore al minimo specificato. Se non si specifica PSD_MINMARGINS, il sistema imposta le larghezze minime consentite su quelle consentite dalla stampante.

- PSD_MARGINS Attiva l'area di controllo dei margini.

- PSD_INTHOUSANDTHSOFINCHES Fa sì che le unità della finestra di dialogo vengano misurate in 1/1000 di pollice.

- PSD_INHUNDREDTHSOFMILLIMETERS Fa sì che le unità della finestra di dialogo vengano misurate in 1/100 di millimetro.

- PSD_DISABLEMARGINS Disabilita i controlli della finestra di dialogo dei margini.

- PSD_DISABLEPRINTER il pulsante Stampante è disattivato.

- PSD_NOWARNING Impedisce la visualizzazione del messaggio di avviso quando non è presente alcuna stampante predefinita.

- PSD_DISABLEORIENTATION Disabilita il controllo della finestra di dialogo di orientamento della pagina.

- PSD_RETURNDEFAULT `CPageSetupDialog` Fa sì che restituisca le strutture [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) e [DEVNAMES](/windows/win32/api/commdlg/ns-commdlg-devnames) inizializzate per la stampante predefinita del sistema senza visualizzare una finestra di dialogo. Si presuppone che `hDevNames` `hDevMode` entrambi e siano NULL; in caso contrario, la funzione restituisce un errore. Se la stampante predefinita del sistema è supportata da un driver `hDevNames` della stampante precedente a Windows versione 3.0, viene restituito solo; `hDevMode` è NULL.

- PSD_DISABLEPAPER Disabilita il controllo di selezione della carta.

- PSD_SHOWHELP Fa sì che la finestra di dialogo mostri il pulsante ?. Il `hwndOwner` membro non deve essere NULL se questo flag è specificato.

- PSD_ENABLEPAGESETUPHOOK Attiva la funzione `lpfnSetupHook`hook specificata in .

- PSD_ENABLEPAGESETUPTEMPLATE Fa in modo che il sistema operativo crei `hInstance` `lpSetupTemplateName`la finestra di dialogo utilizzando la finestra di dialogo identificata da e .

- PSD_ENABLEPAGESETUPTEMPLATEHANDLE Indica `hInstance` che identifica un blocco di dati che contiene un modello di finestra di dialogo precaricato. Il sistema `lpSetupTemplateName` ignora se questo flag è specificato.

- PSD_ENABLEPAGEPAINTHOOK Abilita la funzione `lpfnPagePaintHook`hook specificata in .

- PSD_DISABLEPAGEPAINTING Disabilita l'area di disegno della finestra di dialogo.

*pParentWnd (informazioni in due)*<br/>
Puntatore all'elemento padre o al proprietario della finestra di dialogo.

### <a name="remarks"></a>Osservazioni

Utilizzare la funzione [DoModal](../../mfc/reference/cdialog-class.md#domodal) per visualizzare la finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#94](../../mfc/codesnippet/cpp/cpagesetupdialog-class_1.cpp)]

## <a name="cpagesetupdialogcreateprinterdc"></a><a name="createprinterdc"></a>CPageSetupDialog::CreatePrinterDC

Crea un contesto di periferica della stampante dalle strutture [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) e [DEVNAMES.](/windows/win32/api/commdlg/ns-commdlg-devnames)

```
HDC CreatePrinterDC();
```

### <a name="return-value"></a>Valore restituito

Gestire il contesto di periferica (DC) della stampante appena creato.

## <a name="cpagesetupdialogdomodal"></a><a name="domodal"></a>CPageSetupDialog::DoModal

Chiamare questa funzione per visualizzare la finestra di dialogo Imposta pagina OLE comune di Windows e consentire all'utente di selezionare varie opzioni di impostazione di stampa, ad esempio i margini di stampa, le dimensioni e l'orientamento della carta e la stampante di destinazione.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

IDOK o IDCANCEL. Se viene restituito IDCANCEL, chiamare la funzione [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) di Windows per determinare se si è verificato un errore.

IDOK e IDCANCEL sono costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.

### <a name="remarks"></a>Osservazioni

Inoltre, l'utente può accedere alle opzioni di impostazione della stampante, ad esempio il percorso di rete e le proprietà specifiche della stampante selezionata.

Se si desidera inizializzare le varie opzioni della `m_psd` finestra di dialogo `DoModal`Imposta pagina impostando i membri della struttura, è necessario farlo prima di chiamare e dopo la costruzione dell'oggetto finestra di dialogo. Dopo `DoModal`aver chiamato , chiamare altre funzioni membro per recuperare le impostazioni o le informazioni immesse dall'utente nella finestra di dialogo.

Se si desidera propagare le impostazioni correnti immesse dall'utente, effettuare una chiamata a [CWinApp::SelectPrinter](../../mfc/reference/cwinapp-class.md#selectprinter). Questa funzione prende le `CPageSetupDialog` informazioni dall'oggetto e inizializza e seleziona un nuovo controller di dominio della stampante con gli attributi appropriati.

[!code-cpp[NVC_MFCDocView#95](../../mfc/codesnippet/cpp/cpagesetupdialog-class_2.cpp)]

### <a name="example"></a>Esempio

  Vedere l'esempio per [CPageSetupDialog::CPageSetupDialog](#cpagesetupdialog).

## <a name="cpagesetupdialoggetdevicename"></a><a name="getdevicename"></a>CPageSetupDialog::GetDeviceName

Chiamare questa `DoModal` funzione dopo per recuperare il nome della stampante attualmente selezionata.

```
CString GetDeviceName() const;
```

### <a name="return-value"></a>Valore restituito

Nome del dispositivo `CPageSetupDialog` utilizzato dall'oggetto.

## <a name="cpagesetupdialoggetdevmode"></a><a name="getdevmode"></a>CPageSetupDialog::GetDevMode

Chiamare questa funzione `DoModal` dopo la chiamata per recuperare `CPageSetupDialog` informazioni sul contesto di periferica della stampante dell'oggetto.

```
LPDEVMODE GetDevMode() const;
```

### <a name="return-value"></a>Valore restituito

Struttura di dati [DEVMODE,](/windows/win32/api/wingdi/ns-wingdi-devmodea) che contiene informazioni sull'inizializzazione del dispositivo e sull'ambiente di un driver di stampa. È necessario sbloccare la memoria acquisita da questa struttura con la funzione [Windows GlobalUnlock,](/windows/win32/api/winbase/nf-winbase-globalunlock) descritta in Windows SDK.

## <a name="cpagesetupdialoggetdrivername"></a><a name="getdrivername"></a>CPageSetupDialog::NomeDriver

Chiamare questa funzione dopo aver chiamato [DoModal](../../mfc/reference/cprintdialog-class.md#domodal) per recuperare il nome del driver di periferica della stampante definito dal sistema.

```
CString GetDriverName() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che specifica il nome del driver definito dal sistema.

### <a name="remarks"></a>Osservazioni

Utilizzare un puntatore `CString` all'oggetto restituito da `GetDriverName` come valore di `lpszDriverName` in una chiamata a [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).

## <a name="cpagesetupdialoggetmargins"></a><a name="getmargins"></a>CPageSetupDialog::GetMargins

Chiamare questa funzione dopo `DoModal` una chiamata a per recuperare i margini del driver di periferica della stampante.

```cpp
void GetMargins(
    LPRECT lpRectMargins,
    LPRECT lpRectMinMargins) const;
```

### <a name="parameters"></a>Parametri

*lpRectMargins*<br/>
Puntatore a una struttura [RECT](/windows/win32/api/windef/ns-windef-rect) o a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) che descrive (in 1/1000 pollici o 1/100 mm) i margini di stampa per la stampante attualmente selezionata. Passare NULL per questo parametro, se non si è interessati a questo rettangolo.

*lpRectMinMargini*<br/>
Puntatore `RECT` a `CRect` una struttura o a un oggetto che descrive (in 1/1000 pollici o 1/100 mm) i margini minimi di stampa per la stampante attualmente selezionata. Passare NULL per questo parametro, se non si è interessati a questo rettangolo.

## <a name="cpagesetupdialoggetpapersize"></a><a name="getpapersize"></a>CPageSetupDialog::GetPaperSize

Chiamare questa funzione per recuperare il formato della carta selezionata per la stampa.

```
CSize GetPaperSize() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) contenente le dimensioni della carta (in 1/1000 pollici o 1/100 mm) selezionato per la stampa.

## <a name="cpagesetupdialoggetportname"></a><a name="getportname"></a>CPageSetupDialog::NomePorta

Chiamare questa funzione `DoModal` dopo aver chiamato per recuperare il nome della porta della stampante attualmente selezionata.

```
CString GetPortName() const;
```

### <a name="return-value"></a>Valore restituito

Il nome della porta stampante attualmente selezionata.

## <a name="cpagesetupdialogm_psd"></a><a name="m_psd"></a>CPageSetupDialog::m_psd

Struttura di tipo PAGESETUPDLG, i cui membri memorizzano le caratteristiche dell'oggetto finestra di dialogo.

```
PAGESETUPDLG m_psd;
```

### <a name="remarks"></a>Osservazioni

Dopo aver `CPageSetupDialog` creato un oggetto, è possibile utilizzare `m_psd` per impostare `DoModal` vari aspetti della finestra di dialogo prima di chiamare la funzione membro.

Se si `m_psd` modifica direttamente il membro dati, si eseguirà l'override di qualsiasi comportamento predefinito.

Per ulteriori informazioni sulla struttura [PAGESETUPDLG,](/windows/win32/api/commdlg/ns-commdlg-pagesetupdlgw) vedere Windows SDK.

Vedere l'esempio per [CPageSetupDialog::CPageSetupDialog](#cpagesetupdialog).

## <a name="cpagesetupdialogondrawpage"></a><a name="ondrawpage"></a>CPageSetupDialog::OnDrawPage

Chiamato dal framework per disegnare un'immagine dello schermo di una pagina stampata.

```
virtual UINT OnDrawPage(
    CDC* pDC,
    UINT nMessage,
    LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore al contesto di periferica della stampante.

*nMessaggio*<br/>
Specifica un messaggio che indica l'area della pagina attualmente disegnata. Può essere uno dei valori seguenti:

- WM_PSD_FULLPAGERECT L'intera area della pagina.

- WM_PSD_MINMARGINRECT Margini minimi correnti.

- WM_PSD_MARGINRECT Margini correnti.

- WM_PSD_GREEKTEXTRECT Contenuto della pagina.

- WM_PSD_ENVSTAMPRECT Area riservata a una rappresentazione del francobollo.

- WM_PSD_YAFULLPAGERECT area per una rappresentazione dell'indirizzo del mittente. Quest'area si estende fino ai bordi dell'area della pagina di esempio.

*Lprect*<br/>
Puntatore a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) o [RECT](/windows/win32/api/windef/ns-windef-rect) contenente le coordinate dell'area di disegno.

### <a name="return-value"></a>Valore restituito

Valore diverso da zero se gestito; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa immagine viene quindi visualizzata come parte della finestra di dialogo Comune Impostazione pagina OLE. L'implementazione predefinita disegna un'immagine di una pagina di testo.

Eseguire l'override di questa funzione per personalizzare il disegno di un'area specifica dell'immagine o dell'intera immagine. A tale scopo, è possibile utilizzare un'istruzione **switch** con istruzioni **case** che controllano il valore di *nMessage*. Ad esempio, per personalizzare il rendering del contenuto dell'immagine della pagina, è possibile utilizzare il codice di esempio seguente:

[!code-cpp[NVC_MFCDocView#96](../../mfc/codesnippet/cpp/cpagesetupdialog-class_3.cpp)]

Si noti che non è necessario gestire tutti i casi di *nMessage*. È possibile scegliere di gestire un componente dell'immagine, diversi componenti dell'immagine o l'intera area.

## <a name="cpagesetupdialogpredrawpage"></a><a name="predrawpage"></a>CPageSetupDialog::PreDrawPage

Chiamato dal framework prima di disegnare l'immagine dello schermo di una pagina stampata.

```
virtual UINT PreDrawPage(
    WORD wPaper,
    WORD wFlags,
    LPPAGESETUPDLG pPSD);
```

### <a name="parameters"></a>Parametri

*wPaper*<br/>
Specifica un valore che indica il formato carta. Questo valore può essere uno dei **DMPAPER_** valori elencati nella descrizione della struttura [DEVMODE.](/windows/win32/api/wingdi/ns-wingdi-devmodea)

*Wflags*<br/>
Indica l'orientamento della carta o della busta e se la stampante è una matrice di punti o un dispositivo HPPCL (Hewlett Packard Printer Control Language). Per il parametro è possibile specificare uno dei valori riportati di seguito:

- 0x001 Carta in modalità orizzontale (matrice di punti)

- 0x003 Carta in modalità orizzontale (HPPCL)

- 0x005 Carta in modalità verticale (matrice di punti)

- 0x007 Carta in modalità verticale (HPPCL)

- 0x00b Busta in modalità orizzontale (HPPCL)

- 0x00d Busta in modalità verticale (matrice di punti)

- 0x019 Busta in modalità orizzontale (matrice di punti)

- 0x01f Busta in modalità verticale (matrice di punti)

*pPSD (in stato di inademp*<br/>
Puntatore a una struttura `PAGESETUPDLG`. Per ulteriori informazioni su [PAGESETUPDLG](/windows/win32/api/commdlg/ns-commdlg-pagesetupdlgw), vedere Windows SDK.

### <a name="return-value"></a>Valore restituito

Valore diverso da zero se gestito; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per personalizzare il disegno dell'immagine. Se si esegue l'override di questa funzione e restituisce TRUE, è necessario disegnare l'intera immagine. Se si esegue l'override di questa funzione e restituire FALSE, l'intera immagine predefinita viene disegnata dal framework.

## <a name="see-also"></a>Vedere anche

[WordPAD di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
