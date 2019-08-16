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
ms.openlocfilehash: 48de31d95814ce5fc1fb015e69cf38d73337cb79
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69502329"
---
# <a name="cstatusbar-class"></a>Classe CStatusBar

Barra di controllo con una riga di riquadri di output di testo o "indicatori".

## <a name="syntax"></a>Sintassi

```
class CStatusBar : public CControlBar
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CStatusBar:: CStatusBar](#cstatusbar)|Costruisce un oggetto `CStatusBar`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStatusBar::CommandToIndex](#commandtoindex)|Ottiene l'indice per un ID indicatore specificato.|
|[CStatusBar:: create](#create)|Crea la barra di stato, la collega all' `CStatusBar` oggetto e imposta l'altezza iniziale del tipo di carattere e della barra.|
|[CStatusBar::CreateEx](#createex)|Crea un `CStatusBar` oggetto con stili aggiuntivi per l'oggetto `CStatusBarCtrl` incorporato.|
|[CStatusBar::D rawItem](#drawitem)|Viene chiamato quando viene modificato un aspetto visivo di un controllo della barra di stato del disegnatore del proprietario.|
|[CStatusBar::GetItemID](#getitemid)|Ottiene l'ID indicatore per un indice specificato.|
|[CStatusBar::GetItemRect](#getitemrect)|Ottiene il rettangolo di visualizzazione per un indice specificato.|
|[CStatusBar::GetPaneInfo](#getpaneinfo)|Ottiene l'ID, lo stile e la larghezza dell'indicatore per un indice specificato.|
|[CStatusBar:: GetPaneStyle](#getpanestyle)|Ottiene lo stile dell'indicatore per un indice specificato.|
|[CStatusBar::GetPaneText](#getpanetext)|Ottiene il testo dell'indicatore per un indice specificato.|
|[CStatusBar::GetStatusBarCtrl](#getstatusbarctrl)|Consente l'accesso diretto al controllo comune sottostante.|
|[CStatusBar:: sespies](#setindicators)|Imposta gli ID indicatore.|
|[CStatusBar::SetPaneInfo](#setpaneinfo)|Imposta l'ID indicatore, lo stile e la larghezza per un indice specificato.|
|[CStatusBar::SetPaneStyle](#setpanestyle)|Imposta lo stile dell'indicatore per un indice specificato.|
|[CStatusBar::SetPaneText](#setpanetext)|Imposta il testo dell'indicatore per un indice specificato.|

## <a name="remarks"></a>Note

I riquadri di output vengono in genere utilizzati come righe di messaggio e come indicatori di stato. Gli esempi includono la guida del menu-righe di messaggio che illustrano brevemente il comando di menu selezionato e gli indicatori che mostrano lo stato del blocco di scorrimento, il blocco BLOC NUM e altri tasti.

[CStatusBar:: GetStatusBarCtrl](#getstatusbarctrl), una funzione membro nuova per MFC 4,0, consente di sfruttare i vantaggi del supporto del controllo comune di Windows per la personalizzazione della barra di stato e la funzionalità aggiuntiva. `CStatusBar`le funzioni membro forniscono la maggior parte delle funzionalità dei controlli comuni di Windows; Tuttavia, quando si chiama `GetStatusBarCtrl`, è possibile assegnare alle barre di stato ancora più le caratteristiche di una barra di stato di Windows 95/98. Quando si chiama `GetStatusBarCtrl`, viene restituito un riferimento a un `CStatusBarCtrl` oggetto. Per ulteriori informazioni sulla progettazione delle barre degli strumenti utilizzando i controlli comuni di Windows, vedere [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) . Per informazioni più generali sui controlli comuni, vedere [controlli comuni](/windows/win32/Controls/common-controls-intro) nell'Windows SDK.

Il Framework archivia le informazioni sugli indicatori in una matrice con l'indicatore più a sinistra nella posizione 0. Quando si crea una barra di stato, si usa una matrice di ID di stringa che il framework associa ai corrispondenti indicatori. È quindi possibile usare un ID stringa o un indice per accedere a un indicatore.

Per impostazione predefinita, il primo indicatore è "elastico": occupa la lunghezza della barra di stato non utilizzata dagli altri riquadri indicatori, in modo che gli altri riquadri siano allineati a destra.

Per creare una barra di stato, attenersi alla seguente procedura:

1. Costruire l'oggetto `CStatusBar`.

1. Chiamare la funzione [create](#create) (o [CreateEx](#createex)) per creare la finestra della barra di stato e collegarla all' `CStatusBar` oggetto.

1. Chiamare gli [indicatori](#setindicators) per associare un ID stringa a ogni indicatore.

È possibile aggiornare il testo in un riquadro della barra di stato in tre modi:

1. Chiamare [CWnd:: SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext) per aggiornare il testo solo nel riquadro 0.

1. Chiamare [CCmdUI:: SetText](../../mfc/reference/ccmdui-class.md#settext) nel gestore ON_UPDATE_COMMAND_UI della barra di stato.

1. Chiamare [SetPaneText](#setpanetext) per aggiornare il testo di ogni riquadro.

Chiamare [SetPaneStyle](#setpanestyle) per aggiornare lo stile di un riquadro della barra di stato.

Per ulteriori informazioni sull'utilizzo `CStatusBar`di, vedere l'articolo relativo all' [implementazione della barra di stato in MFC](../../mfc/status-bar-implementation-in-mfc.md) e [alla nota tecnica 31: Barre](../../mfc/tn031-control-bars.md)di controllo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CControlBar](../../mfc/reference/ccontrolbar-class.md)

`CStatusBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

##  <a name="commandtoindex"></a>CStatusBar:: CommandToIndex

Ottiene l'indice dell'indicatore per un ID specificato.

```
int CommandToIndex(UINT nIDFind) const;
```

### <a name="parameters"></a>Parametri

*nIDFind*<br/>
ID di stringa dell'indicatore di cui è necessario recuperare l'indice.

### <a name="return-value"></a>Valore restituito

Indice dell'indicatore in caso di esito positivo; -1 in caso di esito negativo.

### <a name="remarks"></a>Note

L'indice del primo indicatore è 0.

##  <a name="create"></a>CStatusBar:: create

Crea una barra di stato (una finestra figlio) e la `CStatusBar` associa all'oggetto.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,
    UINT nID = AFX_IDW_STATUS_BAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore all'oggetto [CWnd](../../mfc/reference/cwnd-class.md) la cui finestra di Windows è l'elemento padre della barra di stato.

*dwStyle*<br/>
Stile della barra di stato. Oltre agli [stili](../../mfc/reference/styles-used-by-mfc.md#window-styles)standard di Windows, questi stili sono supportati.

- La barra di controllo CBRS_TOP si trova nella parte superiore della finestra cornice.

- La barra di controllo di CBRS_BOTTOM è nella parte inferiore della finestra cornice.

- La barra di controllo di CBRS_NOALIGN non viene riposizionata quando l'elemento padre viene ridimensionato.

*nID*<br/>
ID della finestra figlio della barra degli strumenti.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Imposta anche il tipo di carattere iniziale e imposta l'altezza della barra di stato su un valore predefinito.

##  <a name="createex"></a>CStatusBar:: CreateEx

Chiamare questa funzione per creare una barra di stato (finestra figlio) e associarla `CStatusBar` all'oggetto.

```
virtual BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = 0,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,
    UINT nID = AFX_IDW_STATUS_BAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore all'oggetto [CWnd](../../mfc/reference/cwnd-class.md) la cui finestra di Windows è l'elemento padre della barra di stato.

*dwCtrlStyle*<br/>
Stili aggiuntivi per la creazione dell'oggetto [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) incorporato. Il valore predefinito specifica una barra di stato senza un riquadro di ridimensionamento o un supporto per la descrizione comando. Gli stili della barra di stato supportati sono:

- SBARS_SIZEGRIP il controllo barra di stato include un riquadro di ridimensionamento all'estremità destra della barra di stato. Un riquadro di ridimensionamento è simile al bordo di ridimensionamento. si tratta di un'area rettangolare su cui l'utente può fare clic e trascinare per ridimensionare la finestra padre.

- SBT_TOOLTIPS la barra di stato supporta le descrizioni comandi.

Per informazioni dettagliate su questi stili, vedere [impostazioni per CStatusBarCtrl](../../mfc/settings-for-the-cstatusbarctrl.md).

*dwStyle*<br/>
Stile della barra di stato. Per impostazione predefinita viene specificata la creazione di una barra di stato visibile nella parte inferiore della finestra cornice. Applicare qualsiasi combinazione di stili di controllo barra di stato elencati in [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) e [CDialogBar:: create](../../mfc/reference/cdialogbar-class.md#create). Tuttavia, questo parametro deve sempre includere gli stili WS_CHILD e WS_VISIBLE.

*nID*<br/>
ID della finestra figlio della barra di stato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione imposta anche il tipo di carattere iniziale e imposta l'altezza della barra di stato su un valore predefinito.

Utilizzare `CreateEx`, anziché [create](#create), quando è necessario che determinati stili siano presenti durante la creazione del controllo barra di stato incorporato. Ad esempio, impostare *dwCtrlStyle* su SBT_TOOLTIPS per visualizzare le descrizioni comandi in un oggetto della barra di stato.

##  <a name="cstatusbar"></a>CStatusBar:: CStatusBar

Costruisce un `CStatusBar` oggetto, crea un tipo di carattere della barra di stato predefinito, se necessario, e imposta le caratteristiche dei tipi di carattere sui valori predefiniti.

```
CStatusBar();
```

##  <a name="drawitem"></a>CStatusBar::D rawItem

Questa funzione membro viene chiamata dal framework quando viene modificato un aspetto visivo di una barra di stato creata dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*lpDrawItemStruct*<br/>
Puntatore a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) che contiene informazioni sul tipo di disegno necessario.

### <a name="remarks"></a>Note

Il `itemAction` membro`DRAWITEMSTRUCT` della struttura definisce l'azione di disegno da eseguire. Eseguire l'override di questa funzione membro per implementare il disegno per `CStatusBar` un oggetto disegnato dal proprietario. L'applicazione deve ripristinare tutti gli oggetti GDI (Graphics Device Interface) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct* prima della chiusura di questa funzione membro.

##  <a name="getitemid"></a>CStatusBar:: GetItemID

Restituisce l'ID dell'indicatore specificato da *nIndex*.

```
UINT GetItemID(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'indicatore il cui ID deve essere recuperato.

### <a name="return-value"></a>Valore restituito

ID dell'indicatore specificato da *nIndex*.

##  <a name="getitemrect"></a>CStatusBar:: GetItemRect

Copia le coordinate dell'indicatore specificato da *nIndex* nella struttura a cui punta *lpRect*.

```
void GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'indicatore di cui devono essere recuperate le coordinate del rettangolo.

*lpRect*<br/>
Punta a una struttura [Rect](/previous-versions/dd162897\(v=vs.85\)) o a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) che riceverà le coordinate dell'indicatore specificato da *nIndex*.

### <a name="remarks"></a>Note

Le coordinate sono espresse in pixel rispetto all'angolo superiore sinistro della barra di stato.

##  <a name="getpaneinfo"></a>CStatusBar:: GetPaneInfo

Imposta *NID*, *nStyle*e *cxWidth* sull'ID, lo stile e la larghezza del riquadro indicatore nella posizione specificata da *nIndex*.

```
void GetPaneInfo(
    int nIndex,
    UINT& nID,
    UINT& nStyle,
    int& cxWidth) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro di cui è necessario recuperare le informazioni.

*nID*<br/>
Riferimento a UINT impostato sull'ID del riquadro.

*nStyle*<br/>
Riferimento a UINT impostato sullo stile del riquadro.

*cxWidth*<br/>
Riferimento a un intero impostato sulla larghezza del riquadro.

##  <a name="getpanestyle"></a>CStatusBar:: GetPaneStyle

Chiamare questa funzione membro per recuperare lo stile del riquadro della barra di stato.

```
UINT GetPaneStyle(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro di cui è necessario recuperare lo stile.

### <a name="return-value"></a>Valore restituito

Stile del riquadro della barra di stato specificato da *nIndex*.

### <a name="remarks"></a>Note

Lo stile di un riquadro determina il modo in cui viene visualizzato il riquadro.

Per un elenco degli stili disponibili per le barre di stato, vedere [create](#create).

##  <a name="getpanetext"></a>  CStatusBar::GetPaneText

Chiamare questa funzione membro per recuperare il testo visualizzato in un riquadro della barra di stato.

```
CString GetPaneText(int nIndex) const;  void GetPaneText(int nIndex, CString& rString) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro di cui è necessario recuperare il testo.

*rString*<br/>
Riferimento a un oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene il testo da recuperare.

### <a name="return-value"></a>Valore restituito

`CString` Oggetto contenente il testo del riquadro.

### <a name="remarks"></a>Note

Il secondo formato di questa funzione membro compila un `CString` oggetto con il testo della stringa.

##  <a name="getstatusbarctrl"></a>CStatusBar:: GetStatusBarCtrl

Questa funzione membro consente l'accesso diretto al controllo comune sottostante.

```
CStatusBarCtrl& GetStatusBarCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Contiene un riferimento a un oggetto [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) .

### <a name="remarks"></a>Note

Usare `GetStatusBarCtrl` per sfruttare le funzionalità del controllo comune della barra di stato di Windows e per sfruttare i vantaggi offerti dal supporto [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) per la personalizzazione della barra di stato. Utilizzando il controllo comune, ad esempio, è possibile specificare uno stile che includa un riquadro di ridimensionamento sulla barra di stato oppure è possibile specificare uno stile per visualizzare la barra di stato nella parte superiore dell'area client della finestra padre.

Per informazioni più generali sui controlli comuni, vedere [controlli comuni](/windows/win32/Controls/common-controls-intro) nell'Windows SDK.

##  <a name="setindicators"></a>CStatusBar:: sespies

Imposta l'ID di ogni indicatore sul valore specificato dall'elemento corrispondente della matrice *lpIDArray*, carica la risorsa di stringa specificata da ogni ID e imposta il testo dell'indicatore sulla stringa.

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

##  <a name="setpaneinfo"></a>CStatusBar:: SetPaneInfo

Imposta il riquadro indicatore specificato su un nuovo ID, uno stile e una larghezza.

```
void SetPaneInfo(
    int nIndex,
    UINT nID,
    UINT nStyle,
    int cxWidth);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro indicatore il cui stile deve essere impostato.

*nID*<br/>
Nuovo ID per il riquadro indicatore.

*nStyle*<br/>
Nuovo stile per il riquadro indicatore.

*cxWidth*<br/>
Nuova larghezza per il riquadro indicatore.

### <a name="remarks"></a>Note

Sono supportati gli stili indicatore seguenti:

- SBPS_NOBORDERS non è presente alcun bordo 3D intorno al riquadro.

- SBPS_POPOUT il bordo inverso in modo che il testo "fuoriesca".

- SBPS_DISABLED non elaborano testo.

- Riquadro SBPS_STRETCH stretch per riempire lo spazio inutilizzato. Questo stile può essere presente solo in un riquadro per barra di stato.

- SBPS_NORMAL senza estensione, bordi o popup.

##  <a name="setpanestyle"></a>CStatusBar:: SetPaneStyle

Chiamare questa funzione membro per impostare lo stile del riquadro di una barra di stato.

```
void SetPaneStyle(
    int nIndex,
    UINT nStyle);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro il cui stile deve essere impostato.

*nStyle*<br/>
Stile del riquadro di cui è necessario impostare lo stile.

### <a name="remarks"></a>Note

Lo stile di un riquadro determina il modo in cui viene visualizzato il riquadro.

Per un elenco degli stili disponibili per le barre di stato, vedere [SetPaneInfo](#setpaneinfo).

##  <a name="setpanetext"></a>  CStatusBar::SetPaneText

Chiamare questa funzione membro per impostare il testo del riquadro sulla stringa a cui punta *lpszNewText*.

```
BOOL SetPaneText(
    int nIndex,
    LPCTSTR lpszNewText,
    BOOL bUpdate = TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro di cui è necessario impostare il testo.

*lpszNewText*<br/>
Puntatore al testo del nuovo riquadro.

*bUpdate*<br/>
Se TRUE, il riquadro viene invalidato dopo l'impostazione del testo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Dopo aver chiamato `SetPaneText`, è necessario aggiungere un gestore di aggiornamento dell'interfaccia utente per visualizzare il nuovo testo nella barra di stato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#176](../../mfc/codesnippet/cpp/cstatusbar-class_1.cpp)]

[!code-cpp[NVC_MFCDocView#177](../../mfc/codesnippet/cpp/cstatusbar-class_2.cpp)]

[!code-cpp[NVC_MFCDocView#178](../../mfc/codesnippet/cpp/cstatusbar-class_3.cpp)]

## <a name="see-also"></a>Vedere anche

[CTRLBARS di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[DLGCBR32 di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md)<br/>
[Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)
