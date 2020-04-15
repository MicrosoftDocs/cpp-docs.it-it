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
ms.openlocfilehash: 0549ee10faa15b80b18a0bee2f115425002e1479
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376252"
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
|[CStatusBar::CommandToIndex](#commandtoindex)|Ottiene l'indice per un ID indicatore specificato.|
|[CStatusBar::Create](#create)|Crea la barra di stato, `CStatusBar` la associa all'oggetto e imposta il tipo di carattere iniziale e l'altezza della barra.|
|[CStatusBar::CreateEx](#createex)|Crea `CStatusBar` un oggetto con stili `CStatusBarCtrl` aggiuntivi per l'oggetto incorporato.|
|[CStatusBar::DrawItem](#drawitem)|Chiamato quando un aspetto visivo di un controllo barra di stato disegnato dal proprietario viene modificato.|
|[CStatusBar::GetItemID](#getitemid)|Ottiene l'ID indicatore per un indice specificato.|
|[CStatusBar::GetItemRect](#getitemrect)|Ottiene il rettangolo di visualizzazione per un indice specificato.|
|[CStatusBar::GetPaneInfo](#getpaneinfo)|Ottiene l'ID indicatore, lo stile e la larghezza per un indice specificato.|
|[CStatusBar::GetPaneStyle](#getpanestyle)|Ottiene lo stile dell'indicatore per un indice specificato.|
|[CStatusBar::GetPaneText](#getpanetext)|Ottiene il testo dell'indicatore per un indice specificato.|
|[CStatusBar::GetStatusBarCtrl](#getstatusbarctrl)|Consente l'accesso diretto al controllo comune sottostante.|
|[CStatusBar::SetIndicators](#setindicators)|Imposta gli ID indicatore.|
|[CStatusBar::SetPaneInfo](#setpaneinfo)|Imposta l'ID indicatore, lo stile e la larghezza per un determinato indice.|
|[CStatusBar::SetPaneStyle](#setpanestyle)|Imposta lo stile dell'indicatore per un determinato indice.|
|[CStatusBar::SetPaneText](#setpanetext)|Imposta il testo dell'indicatore per un determinato indice.|

## <a name="remarks"></a>Osservazioni

I riquadri di output vengono in genere utilizzati come righe di messaggio e come indicatori di stato. Gli esempi includono le righe del messaggio di aiuto del menu che spiegano brevemente il comando di menu selezionato e gli indicatori che mostrano lo stato del BLOC SCORR, BLOC NUM e altri tasti.

[CStatusBar::GetStatusBarCtrl](#getstatusbarctrl), una funzione membro nuova di MFC 4.0, consente di sfruttare il supporto del controllo comune di Windows per la personalizzazione della barra di stato e funzionalità aggiuntive. `CStatusBar`Le funzioni membro offrono la maggior parte delle funzionalità dei controlli comuni di Windows; tuttavia, quando `GetStatusBarCtrl`si chiama , è possibile fornire le barre di stato ancora di più delle caratteristiche di una barra di stato di Windows 95/98. Quando si `GetStatusBarCtrl`chiama , verrà restituito `CStatusBarCtrl` un riferimento a un oggetto. Vedere CStatusBarCtrl per ulteriori informazioni sulla progettazione di barre degli strumenti utilizzando i controlli comuni di Windows.See [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) for more information about designing toolbars using Windows common controls. Per ulteriori informazioni generali sui controlli comuni, vedere [controlli comuni](/windows/win32/Controls/common-controls-intro) in Windows SDK.

Il framework archivia le informazioni sull'indicatore in una matrice con l'indicatore più a sinistra nella posizione 0.The framework stores indicator information in an array with the leftmost indicator at position 0. Quando si crea una barra di stato, si utilizza una matrice di ID stringa che il framework associa agli indicatori corrispondenti. È quindi possibile utilizzare un ID stringa o un indice per accedere a un indicatore.

Per impostazione predefinita, il primo indicatore è "elastico": occupa la lunghezza della barra di stato non utilizzata dagli altri riquadri dell'indicatore, in modo che gli altri riquadri siano allineati a destra.

Per creare una barra di stato, attenersi alla seguente procedura:

1. Costruire l'oggetto `CStatusBar`.

1. Chiamare la funzione [Create](#create) (o [CreateEx](#createex)) per creare la `CStatusBar` finestra della barra di stato e associarla all'oggetto.

1. Chiamare [SetIndicators](#setindicators) per associare un ID stringa a ogni indicatore.

Esistono tre modi per aggiornare il testo in un riquadro della barra di stato:There are three ways to update the text in a status-bar pane:

1. Chiamare CWnd::SetWindowText per aggiornare il testo solo nel riquadro [0.Call CWnd::SetWindowText](../../mfc/reference/cwnd-class.md#setwindowtext) to update the text in pane 0 only.

1. Chiamare [CCmdUI::SetText](../../mfc/reference/ccmdui-class.md#settext) nel gestore di ON_UPDATE_COMMAND_UI della barra di stato.

1. Chiamare [SetPaneText](#setpanetext) per aggiornare il testo per qualsiasi riquadro.

Chiamare [SetPaneStyle](#setpanestyle) per aggiornare lo stile di un riquadro della barra di stato.

Per ulteriori informazioni `CStatusBar`sull'utilizzo di , vedere l'articolo [Implementazione](../../mfc/status-bar-implementation-in-mfc.md) della barra di stato in MFC e [Nota tecnica 31 : barre di controllo](../../mfc/tn031-control-bars.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[Ccontrolbar](../../mfc/reference/ccontrolbar-class.md)

`CStatusBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxext.h

## <a name="cstatusbarcommandtoindex"></a><a name="commandtoindex"></a>CStatusBar::CommandToIndex

Ottiene l'indice dell'indice per un ID specificato.

```
int CommandToIndex(UINT nIDFind) const;
```

### <a name="parameters"></a>Parametri

*nIDTrova*<br/>
ID stringa dell'indicatore il cui indice deve essere recuperato.

### <a name="return-value"></a>Valore restituito

L'indice dell'indicatore in caso di esito positivo; -1 se non ha esito positivo.

### <a name="remarks"></a>Osservazioni

L'indice del primo indicatore è 0.

## <a name="cstatusbarcreate"></a><a name="create"></a>CStatusBar::Create

Crea una barra di stato (una finestra `CStatusBar` figlio) e la associa all'oggetto.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,
    UINT nID = AFX_IDW_STATUS_BAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
Puntatore all'oggetto [CWnd](../../mfc/reference/cwnd-class.md) la cui finestra di Windows è l'elemento padre della barra di stato.

*DwStyle (in stile dwStyle)*<br/>
Stile della barra di stato. Oltre agli [stili](../../mfc/reference/styles-used-by-mfc.md#window-styles)standard di Windows, questi stili sono supportati.

- CBRS_TOP barra di controllo si trova nella parte superiore della finestra cornice.

- CBRS_BOTTOM barra di controllo si trova nella parte inferiore della finestra cornice.

- CBRS_NOALIGN barra di controllo non viene riposizionata quando l'elemento padre viene ridimensionato.

*nID*<br/>
ID della finestra figlio della barra degli strumenti.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Imposta inoltre il carattere iniziale e imposta l'altezza della barra di stato su un valore predefinito.

## <a name="cstatusbarcreateex"></a><a name="createex"></a>CStatusBar::CreateEx

Chiamare questa funzione per creare una barra di stato `CStatusBar` (una finestra figlio) e associarla all'oggetto.

```
virtual BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = 0,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_BOTTOM,
    UINT nID = AFX_IDW_STATUS_BAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
Puntatore all'oggetto [CWnd](../../mfc/reference/cwnd-class.md) la cui finestra di Windows è l'elemento padre della barra di stato.

*dwCtrlStyle*<br/>
Stili aggiuntivi per la creazione dell'oggetto incorporato [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) oggetto. Il valore predefinito specifica una barra di stato senza un grip di ridimensionamento o il supporto della descrizione comando. Gli stili della barra di stato supportati sono:

- SBARS_SIZEGRIP Il controllo barra di stato include un grip di ridimensionamento all'estremità destra della barra di stato. Un grip di ridimensionamento è simile a un bordo di ridimensionamento; è un'area rettangolare su cui l'utente può fare clic e trascinare per ridimensionare la finestra padre.

- SBT_TOOLTIPS La barra di stato supporta le descrizioni comandi.

Per informazioni dettagliate su questi stili, vedere [Impostazioni per il CStatusBarCtrl](../../mfc/settings-for-the-cstatusbarctrl.md).

*DwStyle (in stile dwStyle)*<br/>
Stile della barra di stato. Il valore predefinito specifica che deve essere creata una barra di stato visibile nella parte inferiore della finestra cornice. Applicare qualsiasi combinazione di stili di controllo della barra di stato elencati in [Stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles) e [CDialogBar::Create](../../mfc/reference/cdialogbar-class.md#create). Tuttavia, questo parametro deve sempre includere gli stili WS_CHILD e WS_VISIBLE.

*nID*<br/>
ID della finestra figlio della barra di stato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione imposta anche il carattere iniziale e imposta l'altezza della barra di stato su un valore predefinito.

Utilizzare `CreateEx`, anziché [Create](#create), quando determinati stili devono essere presenti durante la creazione del controllo barra di stato incorporato. Ad esempio, impostare *dwCtrlStyle* su SBT_TOOLTIPS per visualizzare le descrizioni comandi in un oggetto barra di stato.

## <a name="cstatusbarcstatusbar"></a><a name="cstatusbar"></a>CStatusBar::CStatusBar

Costruisce un `CStatusBar` oggetto, crea un tipo di carattere predefinito della barra di stato, se necessario, e imposta le caratteristiche del carattere sui valori predefiniti.

```
CStatusBar();
```

## <a name="cstatusbardrawitem"></a><a name="drawitem"></a>CStatusBar::DrawItem

Questa funzione membro viene chiamata dal framework quando viene modificato un aspetto visivo di una barra di stato disegnata dal proprietario.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### <a name="parameters"></a>Parametri

*LpDrawItemStruct (informazioni in base a lpDrawItemStruct)*<br/>
Puntatore a una struttura [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) che contiene informazioni sul tipo di disegno richiesto.

### <a name="remarks"></a>Osservazioni

Il `itemAction` membro `DRAWITEMSTRUCT` della struttura definisce l'azione di disegno da eseguire. Eseguire l'override di questa funzione `CStatusBar` membro per implementare il disegno per un oggetto di disegno del proprietario. L'applicazione deve ripristinare tutti gli oggetti Graphics Device Interface (GDI) selezionati per il contesto di visualizzazione fornito in *lpDrawItemStruct* prima della chiusura di questa funzione membro.

## <a name="cstatusbargetitemid"></a><a name="getitemid"></a>CStatusBar::GetItemID

Restituisce l'ID dell'indicatore specificato da *nIndex*.

```
UINT GetItemID(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'indicatore di cui deve essere recuperato l'ID.

### <a name="return-value"></a>Valore restituito

ID dell'indicatore specificato da *nIndex*.

## <a name="cstatusbargetitemrect"></a><a name="getitemrect"></a>CStatusBar::GetItemRect

Copia le coordinate dell'indicatore specificato da *nIndex* nella struttura a cui punta *lpRect*.

```
void GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'indicatore di cui devono essere recuperate le coordinate del rettangolo.

*Lprect*<br/>
Punta a una struttura [RECT](/previous-versions/dd162897\(v=vs.85\)) o a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) che riceverà le coordinate dell'indicatore specificato da *nIndex*.

### <a name="remarks"></a>Osservazioni

Le coordinate sono in pixel rispetto all'angolo superiore sinistro della barra di stato.

## <a name="cstatusbargetpaneinfo"></a><a name="getpaneinfo"></a>CStatusBar::GetPaneInfo

Imposta *nID*, *nStyle*e *cxWidth* sull'ID, lo stile e la larghezza del riquadro dell'indicatore nella posizione specificata da *nIndex*.

```
void GetPaneInfo(
    int nIndex,
    UINT& nID,
    UINT& nStyle,
    int& cxWidth) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro di cui devono essere recuperate le informazioni.

*nID*<br/>
Riferimento a un UINT impostato sull'ID del riquadro.

*nStyle*<br/>
Riferimento a un UINT impostato sullo stile del riquadro.

*CxWidth (larghezza incx)*<br/>
Riferimento a un numero intero impostato sulla larghezza del riquadro.

## <a name="cstatusbargetpanestyle"></a><a name="getpanestyle"></a>CStatusBar::GetPaneStyle

Chiamare questa funzione membro per recuperare lo stile del riquadro di una barra di stato.

```
UINT GetPaneStyle(int nIndex) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro il cui stile deve essere recuperato.

### <a name="return-value"></a>Valore restituito

Stile del riquadro della barra di stato specificato da *nIndex*.

### <a name="remarks"></a>Osservazioni

Lo stile di un riquadro determina la modalità di visualizzazione del riquadro.

Per un elenco degli stili disponibili per le barre di stato, vedere [Creazione.](#create)

## <a name="cstatusbargetpanetext"></a><a name="getpanetext"></a>CStatusBar::GetPaneText

Chiamare questa funzione membro per recuperare il testo visualizzato in un riquadro della barra di stato.

```
CString GetPaneText(int nIndex) const;  void GetPaneText(int nIndex, CString& rString) const;
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro di cui deve essere recuperato il testo.

*rStringa*<br/>
Riferimento a un [oggetto CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene il testo da recuperare.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` contenente il testo del riquadro.

### <a name="remarks"></a>Osservazioni

Il secondo form di questa `CString` funzione membro riempie un oggetto con il testo della stringa.

## <a name="cstatusbargetstatusbarctrl"></a><a name="getstatusbarctrl"></a>CStatusBar::GetStatusBarCtrl

Questa funzione membro consente l'accesso diretto al controllo comune sottostante.

```
CStatusBarCtrl& GetStatusBarCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Contiene un riferimento a un oggetto [CStatusBarCtrl.](../../mfc/reference/cstatusbarctrl-class.md)

### <a name="remarks"></a>Osservazioni

Utilizzare `GetStatusBarCtrl` per sfruttare la funzionalità del controllo comune barra di stato di Windows e per sfruttare il supporto [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) fornisce per la personalizzazione della barra di stato. Ad esempio, utilizzando il controllo comune, è possibile specificare uno stile che include un riquadro di ridimensionamento sulla barra di stato oppure è possibile specificare uno stile in cui la barra di stato venga visualizzata nella parte superiore dell'area client della finestra padre.

Per ulteriori informazioni generali sui controlli comuni, vedere [controlli comuni](/windows/win32/Controls/common-controls-intro) in Windows SDK.

## <a name="cstatusbarsetindicators"></a><a name="setindicators"></a>CStatusBar::SetIndicators

Imposta l'ID di ogni indicatore sul valore specificato dall'elemento corrispondente della matrice *lpIDArray*, carica la risorsa stringa specificata da ogni ID e imposta il testo dell'indicatore sulla stringa.

```
BOOL SetIndicators(
    const UINT* lpIDArray,
    int nIDCount);
```

### <a name="parameters"></a>Parametri

*lpIDArray (matrice di oggetti di lavoro)*<br/>
Puntatore a una matrice di ID.

*nIDCount*<br/>
Numero di elementi nella matrice a cui punta *lpIDArray*.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

## <a name="cstatusbarsetpaneinfo"></a><a name="setpaneinfo"></a>CStatusBar::SetPaneInfo

Imposta il riquadro dell'indicatore specificato su un nuovo ID, stile e larghezza.

```
void SetPaneInfo(
    int nIndex,
    UINT nID,
    UINT nStyle,
    int cxWidth);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro dell'indicatore il cui stile deve essere impostato.

*nID*<br/>
Nuovo ID per il riquadro dell'indicatore.

*nStyle*<br/>
Nuovo stile per il riquadro dell'indicatore.

*CxWidth (larghezza incx)*<br/>
Nuova larghezza per il riquadro dell'indicatore.

### <a name="remarks"></a>Osservazioni

Sono supportati i seguenti stili di indicatore:

- SBPS_NOBORDERS Nessun bordo 3D intorno al riquadro.

- SBPS_POPOUT Bordo inverso in modo che il testo "si apre".

- SBPS_DISABLED Non disegnare testo.

- SBPS_STRETCH riquadro Allunga per riempire lo spazio inutilizzato. Solo un riquadro per barra di stato può avere questo stile.

- SBPS_NORMAL Nessun tratto, bordi o popup.

## <a name="cstatusbarsetpanestyle"></a><a name="setpanestyle"></a>CStatusBar::SetPaneStyle

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
Stile del riquadro il cui stile deve essere impostato.

### <a name="remarks"></a>Osservazioni

Lo stile di un riquadro determina la modalità di visualizzazione del riquadro.

Per un elenco degli stili disponibili per le barre di stato, vedere [SetPaneInfo](#setpaneinfo).

## <a name="cstatusbarsetpanetext"></a><a name="setpanetext"></a>CStatusBar::SetPaneText

Chiamare questa funzione membro per impostare il testo del riquadro sulla stringa a cui punta *l'oggetto lpszNewText*.

```
BOOL SetPaneText(
    int nIndex,
    LPCTSTR lpszNewText,
    BOOL bUpdate = TRUE);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice del riquadro di cui deve essere impostato il testo.

*lpszNewText (testo)*<br/>
Puntatore al nuovo testo del riquadro.

*Bupdate*<br/>
Se TRUE, il riquadro viene invalidato dopo l'impostazione del testo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Dopo aver `SetPaneText`chiamato , è necessario aggiungere un gestore di aggiornamento dell'interfaccia utente per visualizzare il nuovo testo nella barra di stato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#176](../../mfc/codesnippet/cpp/cstatusbar-class_1.cpp)]

[!code-cpp[NVC_MFCDocView#177](../../mfc/codesnippet/cpp/cstatusbar-class_2.cpp)]

[!code-cpp[NVC_MFCDocView#178](../../mfc/codesnippet/cpp/cstatusbar-class_3.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC CTRLBARS](../../overview/visual-cpp-samples.md)<br/>
[Esempio MFC DLGCBR32](../../overview/visual-cpp-samples.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)
