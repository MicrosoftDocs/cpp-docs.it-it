---
title: Classe CStatusBar
ms.date: 11/04/2016
f1_keywords:
- CStatusBar
- AFXEXT/CStatusBar
- AFXEXT/CStatusBar::CStatusBar
- AFXEXT/CStatusBar::CommandToIndex
- AFXEXT/CStatusBar::Create
- AFXEXT/CStatusBar::CreateEx
- AFXEXT/CStatusBar::DrawItem
- AFXEXT/CStatusBar::GetItemID
- AFXEXT/CStatusBar::GetItemRect
- AFXEXT/CStatusBar::GetPaneInfo
- AFXEXT/CStatusBar::GetPaneStyle
- AFXEXT/CStatusBar::GetPaneText
- AFXEXT/CStatusBar::GetStatusBarCtrl
- AFXEXT/CStatusBar::SetIndicators
- AFXEXT/CStatusBar::SetPaneInfo
- AFXEXT/CStatusBar::SetPaneStyle
- AFXEXT/CStatusBar::SetPaneText
helpviewer_keywords:
- CStatusBar [MFC], CStatusBar
- CStatusBar [MFC], CommandToIndex
- CStatusBar [MFC], Create
- CStatusBar [MFC], CreateEx
- CStatusBar [MFC], DrawItem
- CStatusBar [MFC], GetItemID
- CStatusBar [MFC], GetItemRect
- CStatusBar [MFC], GetPaneInfo
- CStatusBar [MFC], GetPaneStyle
- CStatusBar [MFC], GetPaneText
- CStatusBar [MFC], GetStatusBarCtrl
- CStatusBar [MFC], SetIndicators
- CStatusBar [MFC], SetPaneInfo
- CStatusBar [MFC], SetPaneStyle
- CStatusBar [MFC], SetPaneText
ms.assetid: a3bde3db-e71c-4881-a3ca-1d5481c345ba
ms.openlocfilehash: d714159aa9fd52df682b1e5f3dbf3957bbef1b91
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58777337"
---
# <a name="cstatusbar-class"></a>Classe CStatusBar

Barra di controllo con una riga di riquadri di output di testo o "indicatori".

## <a name="syntax"></a>Sintassi

```
class CStatusBar : public CControlBar
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStatusBar::CStatusBar](#cstatusbar)|Costruisce un oggetto `CStatusBar`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStatusBar::CommandToIndex](#commandtoindex)|Ottiene l'indice per un ID di indicatore specificato.|
|[CStatusBar::Create](#create)|Crea la barra di stato, lo collega al `CStatusBar` dell'oggetto e imposta l'altezza del tipo di carattere e barra iniziale.|
|[CStatusBar::CreateEx](#createex)|Crea una `CStatusBar` oggetto con gli stili aggiuntivi per l'oggetto incorporato `CStatusBarCtrl` oggetto.|
|[CStatusBar::DrawItem](#drawitem)|Chiamato quando un aspetto visivo di un disegno barra controllo di stato.|
|[CStatusBar::GetItemID](#getitemid)|Ottiene l'ID di indicatore per un determinato indice.|
|[CStatusBar::GetItemRect](#getitemrect)|Ottiene visualizzare rettangolo per un determinato indice.|
|[CStatusBar::GetPaneInfo](#getpaneinfo)|Ottiene l'ID di indicatori, stile e spessore per un determinato indice.|
|[CStatusBar::GetPaneStyle](#getpanestyle)|Ottiene lo stile indicatore per un determinato indice.|
|[CStatusBar::GetPaneText](#getpanetext)|Ottiene il testo di indicatore per un determinato indice.|
|[CStatusBar::GetStatusBarCtrl](#getstatusbarctrl)|Consente l'accesso diretto al controllo sottostante comune.|
|[CStatusBar::SetIndicators](#setindicators)|Imposta gli ID di indicatore.|
|[CStatusBar::SetPaneInfo](#setpaneinfo)|Imposta l'ID di indicatori, stile e spessore per un determinato indice.|
|[CStatusBar::SetPaneStyle](#setpanestyle)|Imposta stile dell'indicatore per un determinato indice.|
|[CStatusBar::SetPaneText](#setpanetext)|Imposta il testo di indicatore per un determinato indice.|

## <a name="remarks"></a>Note

I riquadri di output vengono comunemente utilizzati come righe di messaggio e come indicatori di stato. Ad esempio le righe di messaggio della Guida dal menu che illustrano brevemente il comando di menu selezionata e gli indicatori che mostrano lo stato del tasto BLOC SCORR, BLOC NUM e altri codici.

[CStatusBar:: GetStatusBarCtrl](#getstatusbarctrl), una funzione membro nuovo alla versione 4.0 di MFC, consente di sfruttare i vantaggi del supporto del controllo comune di Windows per lo stato di personalizzazione e funzionalità aggiuntive delle barre. `CStatusBar` funzioni membro offrono la maggior parte delle funzionalità dei controlli comuni di Windows; Tuttavia, quando si chiama `GetStatusBarCtrl`, è possibile assegnare le barre di stato ancora più delle caratteristiche di una barra di stato Windows 95 o 98. Quando si chiama `GetStatusBarCtrl`, verrà restituito un riferimento a un `CStatusBarCtrl` oggetto. Visualizzare [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) per altre informazioni sulla progettazione di controlli comuni di Windows usando le barre degli strumenti. Per informazioni più generali sui controlli comuni, vedere [Common Controls](/windows/desktop/Controls/common-controls-intro) nel SDK di Windows.

Il framework archivia le informazioni sugli indicatori in una matrice con l'indicatore di più a sinistra nella posizione 0. Quando si crea una barra di stato, si usa una matrice di ID che associa il framework con gli indicatori corrispondenti di stringa. È quindi possibile utilizzare un ID di stringa o un indice per accedere a un indicatore.

Per impostazione predefinita, il primo indicatore è "flessibile": occupa della lunghezza della barra di stato non utilizzata da altri riquadri indicatore, in modo che altri riquadri siano allineati a destra.

Per creare una barra di stato, seguire questa procedura:

1. Costruire l'oggetto `CStatusBar`.

1. Chiamare il [Create](#create) (o [CreateEx](#createex)) (funzione) per creare la finestra della barra di stato e collegarla al `CStatusBar` oggetto.

1. Chiamare [SetIndicators](#setindicators) per associare un ID stringa con ogni indicatore.

Esistono tre modi per aggiornare il testo in un riquadro barra di stato:

1. Chiamare [CWnd::SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext) per aggiornare il testo nel riquadro solo 0.

1. Chiamare [CCmdUI::SetText](../../mfc/reference/ccmdui-class.md#settext) nel gestore ON_UPDATE_COMMAND_UI della barra di stato.

1. Chiamare [SetPaneText](#setpanetext) per aggiornare il testo per un riquadro qualsiasi.

Chiamare [SetPaneStyle](#setpanestyle) per aggiornare lo stile di un riquadro barra di stato.

Per altre informazioni sull'uso `CStatusBar`, vedere l'articolo [implementazione della barra di stato in MFC](../../mfc/status-bar-implementation-in-mfc.md) e [Nota tecnica 31: Le barre di controllo](../../mfc/tn031-control-bars.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CControlBar](../../mfc/reference/ccontrolbar-class.md)

`CStatusBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

##  <a name="commandtoindex"></a>  CStatusBar::CommandToIndex

Ottiene l'indice di indicatore per un ID specifico.

```
int CommandToIndex(UINT nIDFind) const;
```

### <a name="parameters"></a>Parametri

*nIDFind*<br/>
ID di stringa dell'indicatore il cui indice è da recuperare.

### <a name="return-value"></a>Valore restituito

L'indice dell'indicatore se ha esito positivo. -1 se l'operazione non riesce.

### <a name="remarks"></a>Note

L'indice del primo indicatore è 0.

##  <a name="create"></a>  CStatusBar::Create

Crea una barra (una finestra figlio) di stato e la associa il `CStatusBar` oggetto.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,
    UINT nID = AFX_IDW_STATUS_BAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore per il [CWnd](../../mfc/reference/cwnd-class.md) oggetto la cui finestra di Windows è l'elemento padre della barra di stato.

*dwStyle*<br/>
Lo stile della barra di stato. Oltre a di Windows standard [stili](../../mfc/reference/styles-used-by-mfc.md#window-styles), questi stili sono supportati.

- Barra di controllo CBRS_TOP è nella parte superiore della finestra cornice.

- Barra di controllo CBRS_BOTTOM è nella parte inferiore della finestra cornice.

- Barra di controllo CBRS_NOALIGN non viene riposizionata quando l'elemento padre viene ridimensionato.

*nID*<br/>
ID finestra figlio della barra degli strumenti

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Inoltre, imposta il tipo di carattere iniziale e imposta lo stato dell'altezza della barra a un valore predefinito.

##  <a name="createex"></a>  CStatusBar::CreateEx

Chiamare questa funzione per creare una barra (una finestra figlio) di stato che verrà associato il `CStatusBar` oggetto.

```
virtual BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = 0,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,
    UINT nID = AFX_IDW_STATUS_BAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore per il [CWnd](../../mfc/reference/cwnd-class.md) oggetto la cui finestra di Windows è l'elemento padre della barra di stato.

*dwCtrlStyle*<br/>
Gli stili aggiuntivi per la creazione di incorporato [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) oggetto. Il valore predefinito specifica una barra di stato senza un riquadro di ridimensionamento o una descrizione comando supportano. Stili barra di stati supportati sono:

- SBARS_SIZEGRIP il controllo barra di stato include un riquadro di ridimensionamento all'estremità destra della barra di stato. Un riquadro di ridimensionamento è simile a un bordo di ridimensionamento. è un'area rettangolare che l'utente può fare clic e trascinare per ridimensionare la finestra padre.

- La barra di stato SBT_TOOLTIPS supporta le descrizioni comandi.

Per informazioni dettagliate su questi stili, vedere [le impostazioni per CStatusBarCtrl](../../mfc/settings-for-the-cstatusbarctrl.md).

*dwStyle*<br/>
Lo stile della barra di stato. Il valore predefinito specifica che è possibile creare una barra di stato visibile nella parte inferiore della finestra cornice. Applicare qualsiasi combinazione di stato della barra degli stili del controllo indicato nel [stili Window](../../mfc/reference/styles-used-by-mfc.md#window-styles) e [CDialogBar::Create](../../mfc/reference/cdialogbar-class.md#create). Tuttavia, questo parametro deve sempre includere gli stili WS_CHILD e WS_VISIBLE.

*nID*<br/>
ID finestra della barra di stato figlio.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Anche questa funzione imposta il tipo di carattere iniziale e imposta lo stato dell'altezza della barra a un valore predefinito.

Uso `CreateEx`, anziché [Create](#create), quando alcuni stili devono essere presenti durante la creazione del controllo indicatore di stato incorporato. Ad esempio, impostare *dwCtrlStyle* a SBT_TOOLTIPS per visualizzare le descrizioni comandi in un oggetto della barra di stato.

##  <a name="cstatusbar"></a>  CStatusBar::CStatusBar

Costruisce un `CStatusBar` oggetto, crea un tipo di carattere della barra di stato predefinito se necessario e imposta le caratteristiche del carattere per i valori predefiniti.

```
CStatusBar();
```

##  <a name="drawitem"></a>  CStatusBar::DrawItem

Questa funzione membro viene chiamata dal framework quando un aspetto visivo di un proprietario barra di stato.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Un puntatore a un [DRAWITEMSTRUCT](/windows/desktop/api/winuser/ns-winuser-tagdrawitemstruct) struttura che contiene informazioni sul tipo di disegno necessaria.

### <a name="remarks"></a>Note

Il `itemAction` membro del `DRAWITEMSTRUCT` struttura definisce l'azione di disegno che deve essere eseguita. Eseguire l'override di questa funzione membro per implementare disegno di un disegno `CStatusBar` oggetto. L'applicazione è necessario ripristinare tutti grafica device interface (GDI) gli oggetti selezionati per il contesto di visualizzazione fornito *lpDrawItemStruct* prima della chiusura di questa funzione membro.

##  <a name="getitemid"></a>  CStatusBar::GetItemID

Restituisce l'ID dell'indicatore specificato da *nIndex*.

```
UINT GetItemID(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'indicatore il cui ID sia da recuperare.

### <a name="return-value"></a>Valore restituito

L'ID dell'indicatore specificato da *nIndex*.

##  <a name="getitemrect"></a>  CStatusBar::GetItemRect

Copia le coordinate dell'indicatore specificato da *nIndex* nella struttura a cui punta *lpRect*.

```
void GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'indicatore devono essere recuperate le cui coordinate del rettangolo.

*lpRect*<br/>
Punta a un [RECT](/previous-versions/dd162897\(v=vs.85\)) struttura o un' [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che riceverà le coordinate dell'indicatore specificato dal *nIndex*.

### <a name="remarks"></a>Note

Le coordinate sono espresse in pixel rispetto all'angolo superiore sinistro della barra di stato.

##  <a name="getpaneinfo"></a>  CStatusBar::GetPaneInfo

Set *nID*, *nStyle*, e *cxWidth* per l'ID, stile e la larghezza del riquadro indicatore nella posizione specificata da *nIndex*.

```
void GetPaneInfo(
    int nIndex,
    UINT& nID,
    UINT& nStyle,
    int& cxWidth) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro cui informazioni sono da recuperare.

*nID*<br/>
Riferimento a un UINT impostato per l'ID del riquadro.

*nStyle*<br/>
Riferimento a un UINT impostato lo stile del riquadro.

*cxWidth*<br/>
Riferimento a un intero che viene impostato la larghezza del riquadro.

##  <a name="getpanestyle"></a>  CStatusBar::GetPaneStyle

Chiamare questa funzione membro per recuperare lo stile del riquadro della barra di stato.

```
UINT GetPaneStyle(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro è il cui stile deve essere recuperato.

### <a name="return-value"></a>Valore restituito

Lo stile del riquadro barra di stato specificato da *nIndex*.

### <a name="remarks"></a>Note

Stile del riquadro determina come viene visualizzato il riquadro.

Per un elenco di stili disponibili per le barre di stato, vedere [Create](#create).

##  <a name="getpanetext"></a>  CStatusBar::GetPaneText

Chiamare questa funzione membro per recuperare il testo visualizzato in un riquadro barra di stato.

```
CString GetPaneText(int nIndex) const;  void GetPaneText(int nIndex, CString& rString) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro cui testo è da recuperare.

*rString*<br/>
Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto che contiene il testo da recuperare.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` oggetto contenente il testo del riquadro.

### <a name="remarks"></a>Note

La seconda forma di questo membro funzione riempie un `CString` oggetto con il testo della stringa.

##  <a name="getstatusbarctrl"></a>  CStatusBar::GetStatusBarCtrl

Questa funzione membro consente l'accesso diretto al controllo sottostante comune.

```
CStatusBarCtrl& GetStatusBarCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Contiene un riferimento a un [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) oggetto.

### <a name="remarks"></a>Note

Uso `GetStatusBarCtrl` possa sfruttare i vantaggi delle funzionalità del controllo barra di stato Windows comune e per sfruttare i vantaggi del supporto [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) offre per la personalizzazione della barra di stato. Ad esempio, usando il controllo comune, è possibile specificare uno stile che include un riquadro di ridimensionamento sulla barra di stato, oppure è possibile specificare uno stile per visualizzare la barra di stato nella parte superiore dell'area client della finestra padre.

Per informazioni più generali sui controlli comuni, vedere [Common Controls](/windows/desktop/Controls/common-controls-intro) nel SDK di Windows.

##  <a name="setindicators"></a>  CStatusBar:: SetIndicators

Imposta ID ogni dell'indicatore al valore specificato dall'elemento corrispondente della matrice *lpIDArray*, carica la risorsa di stringa specificata da ogni ID e imposta il testo dell'indicatore di stringa.

```
BOOL SetIndicators(
    const UINT* lpIDArray,
    int nIDCount);
```

### <a name="parameters"></a>Parametri

*lpIDArray*<br/>
Puntatore a una matrice di ID.

*nIDCount*<br/>
Numero di elementi nella matrice a cui punta *lpIDArray*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

##  <a name="setpaneinfo"></a>  CStatusBar::SetPaneInfo

Imposta il riquadro di indicatore specificato a un nuovo ID, stile e spessore.

```
void SetPaneInfo(
    int nIndex,
    UINT nID,
    UINT nStyle,
    int cxWidth);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro indicatore il cui tipo è necessario impostare.

*nID*<br/>
Nuovo ID per il riquadro indicatore.

*nStyle*<br/>
Nuovo stile per il riquadro indicatore.

*cxWidth*<br/>
Nuova larghezza del riquadro indicatore.

### <a name="remarks"></a>Note

Sono supportati i seguenti stili dell'indicatore:

- No SBPS_NOBORDERS 3D bordo del riquadro.

- Invertire SBPS_POPOUT bordo, in modo che il testo "POP".

- SBPS_DISABLED non evidenziare il testo.

- Riquadro SBPS_STRETCH Stretch per riempire lo spazio inutilizzato. Un solo riquadro per ogni barra di stato può avere questo stile.

- Stretch SBPS_NORMAL No, i bordi o pop-out.

##  <a name="setpanestyle"></a>  CStatusBar::SetPaneStyle

Chiamare questa funzione membro per impostare lo stile del riquadro della barra di stato.

```
void SetPaneStyle(
    int nIndex,
    UINT nStyle);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro di cui lo stile è necessario impostare.

*nStyle*<br/>
Stile del riquadro di cui lo stile è necessario impostare.

### <a name="remarks"></a>Note

Stile del riquadro determina come viene visualizzato il riquadro.

Per un elenco di stili disponibili per le barre di stato, vedere [SetPaneInfo](#setpaneinfo).

##  <a name="setpanetext"></a>  CStatusBar::SetPaneText

Chiamare questa funzione membro per impostare il testo del riquadro per la stringa a cui punta *lpszNewText*.

```
BOOL SetPaneText(
    int nIndex,
    LPCTSTR lpszNewText,
    BOOL bUpdate = TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro cui testo è da impostare.

*lpszNewText*<br/>
Puntatore per il nuovo testo del riquadro.

*bUpdate*<br/>
Se TRUE, il riquadro viene invalidato dopo il testo viene impostato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Dopo aver chiamato `SetPaneText`, è necessario aggiungere un gestore di aggiornamento dell'interfaccia utente per visualizzare il nuovo testo nella barra di stato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#176](../../mfc/codesnippet/cpp/cstatusbar-class_1.cpp)]

[!code-cpp[NVC_MFCDocView#177](../../mfc/codesnippet/cpp/cstatusbar-class_2.cpp)]

[!code-cpp[NVC_MFCDocView#178](../../mfc/codesnippet/cpp/cstatusbar-class_3.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC viene](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample DLGCBR32](../../overview/visual-cpp-samples.md)<br/>
[Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md)<br/>
[Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)
