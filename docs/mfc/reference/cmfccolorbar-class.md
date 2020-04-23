---
title: Classe CMFCColorBar
ms.date: 11/04/2016
f1_keywords:
- CMFCColorBar
- AFXCOLORBAR/CMFCColorBar
- AFXCOLORBAR/CMFCColorBar::CMFCColorBar
- AFXCOLORBAR/CMFCColorBar::ContextToSize
- AFXCOLORBAR/CMFCColorBar::CreateControl
- AFXCOLORBAR/CMFCColorBar::Create
- AFXCOLORBAR/CMFCColorBar::EnableAutomaticButton
- AFXCOLORBAR/CMFCColorBar::EnableOtherButton
- AFXCOLORBAR/CMFCColorBar::GetColor
- AFXCOLORBAR/CMFCColorBar::GetCommandID
- AFXCOLORBAR/CMFCColorBar::GetHighlightedColor
- AFXCOLORBAR/CMFCColorBar::GetHorzMargin
- AFXCOLORBAR/CMFCColorBar::GetVertMargin
- AFXCOLORBAR/CMFCColorBar::IsTearOff
- AFXCOLORBAR/CMFCColorBar::SetColor
- AFXCOLORBAR/CMFCColorBar::SetColorName
- AFXCOLORBAR/CMFCColorBar::SetCommandID
- AFXCOLORBAR/CMFCColorBar::SetDocumentColors
- AFXCOLORBAR/CMFCColorBar::SetHorzMargin
- AFXCOLORBAR/CMFCColorBar::SetVertMargin
- AFXCOLORBAR/CMFCColorBar::AdjustLocations
- AFXCOLORBAR/CMFCColorBar::AllowChangeTextLabels
- AFXCOLORBAR/CMFCColorBar::AllowShowOnList
- AFXCOLORBAR/CMFCColorBar::CalcSize
- AFXCOLORBAR/CMFCColorBar::CreatePalette
- AFXCOLORBAR/CMFCColorBar::GetColorGridSize
- AFXCOLORBAR/CMFCColorBar::GetExtraHeight
- AFXCOLORBAR/CMFCColorBar::InitColors
- AFXCOLORBAR/CMFCColorBar::OnKey
- AFXCOLORBAR/CMFCColorBar::OnSendCommand
- AFXCOLORBAR/CMFCColorBar::OnUpdateCmdUI
- AFXCOLORBAR/CMFCColorBar::OpenColorDialog
- AFXCOLORBAR/CMFCColorBar::Rebuild
- AFXCOLORBAR/CMFCColorBar::SelectPalette
- AFXCOLORBAR/CMFCColorBar::SetPropList
- AFXCOLORBAR/CMFCColorBar::ShowCommandMessageString
helpviewer_keywords:
- CMFCColorBar [MFC], CMFCColorBar
- CMFCColorBar [MFC], ContextToSize
- CMFCColorBar [MFC], CreateControl
- CMFCColorBar [MFC], Create
- CMFCColorBar [MFC], EnableAutomaticButton
- CMFCColorBar [MFC], EnableOtherButton
- CMFCColorBar [MFC], GetColor
- CMFCColorBar [MFC], GetCommandID
- CMFCColorBar [MFC], GetHighlightedColor
- CMFCColorBar [MFC], GetHorzMargin
- CMFCColorBar [MFC], GetVertMargin
- CMFCColorBar [MFC], IsTearOff
- CMFCColorBar [MFC], SetColor
- CMFCColorBar [MFC], SetColorName
- CMFCColorBar [MFC], SetCommandID
- CMFCColorBar [MFC], SetDocumentColors
- CMFCColorBar [MFC], SetHorzMargin
- CMFCColorBar [MFC], SetVertMargin
- CMFCColorBar [MFC], AdjustLocations
- CMFCColorBar [MFC], AllowChangeTextLabels
- CMFCColorBar [MFC], AllowShowOnList
- CMFCColorBar [MFC], CalcSize
- CMFCColorBar [MFC], CreatePalette
- CMFCColorBar [MFC], GetColorGridSize
- CMFCColorBar [MFC], GetExtraHeight
- CMFCColorBar [MFC], InitColors
- CMFCColorBar [MFC], OnKey
- CMFCColorBar [MFC], OnSendCommand
- CMFCColorBar [MFC], OnUpdateCmdUI
- CMFCColorBar [MFC], OpenColorDialog
- CMFCColorBar [MFC], Rebuild
- CMFCColorBar [MFC], SelectPalette
- CMFCColorBar [MFC], SetPropList
- CMFCColorBar [MFC], ShowCommandMessageString
ms.assetid: 4756ee40-25a5-4cee-af7f-acab7993d1c7
ms.openlocfilehash: 58fddeef9cb0afe930af84b05e6a87871f729da4
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752566"
---
# <a name="cmfccolorbar-class"></a>Classe CMFCColorBar

La `CMFCColorBar` classe rappresenta una barra di controllo di ancoraggio che può selezionare colori in un documento o in un'applicazione.

## <a name="syntax"></a>Sintassi

```
class CMFCColorBar : public CMFCPopupMenuBar
```

## <a name="members"></a>Membri

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorBar::CMFCColorBar](#cmfccolorbar)|Costruisce un oggetto `CMFCColorBar`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorBar::ContextToSize](#contexttosize)|Calcola i margini verticali e orizzontali necessari per contenere i pulsanti del controllo barra dei colori e quindi regola la posizione di tali pulsanti.|
|[CMFCColorBar::CreateControl](#createcontrol)|Crea una finestra di controllo della barra `CMFCColorBar` dei colori, la associa all'oggetto e ridimensiona il controllo per contenere la tavolozza di colori specificata.|
|[CMFCColorBar::Create](#create)|Crea una finestra di controllo della barra `CMFCColorBar` dei colori e la associa all'oggetto.|
|[CMFCColorBar::EnableAutomaticButton](#enableautomaticbutton)|Mostra o nasconde il pulsante automatico.|
|[CMFCColorBar::EnableOtherButton](#enableotherbutton)|Attiva o disattiva la visualizzazione di una finestra di dialogo che consente all'utente di selezionare più colori.|
|[CMFCColorBar::GetColor](#getcolor)|Recupera il colore attualmente selezionato.|
|[CMFCColorBar::GetCommandID](#getcommandid)|Recupera l'ID di comando del controllo barra dei colori corrente.|
|[CMFCColorBar::GetHighlightedColor](#gethighlightedcolor)|Recupera il colore che indica che un pulsante di colore ha lo stato attivo; vale a dire, il pulsante è *caldo*.|
|[CMFCColorBar::GetHorzMargin](#gethorzmargin)|Recupera il margine orizzontale, ovvero lo spazio tra la cella di colore sinistro o destro e il limite dell'area client.|
|[CMFCColorBar::GetVertMargin](#getvertmargin)|Recupera il margine verticale, ovvero il spazio tra la cella di colore superiore o inferiore e il limite dell'area client.|
|[CMFCColorBar::IsTearOff](#istearoff)|Indica se la barra dei colori corrente è ancorabile.|
|[CMFCColorBar::SetColor](#setcolor)|Imposta il colore attualmente selezionato.|
|[CMFCColorBar::SetColorName](#setcolorname)|Imposta un nuovo nome per un colore specificato.|
|[CMFCColorBar::SetCommandID](#setcommandid)|Imposta un nuovo ID di comando per un controllo barra dei colori.|
|[CMFCColorBar::SetDocumentColors](#setdocumentcolors)|Imposta l'elenco dei colori utilizzati nel documento corrente.|
|[CMFCColorBar::SetHorzMargin](#sethorzmargin)|Imposta il margine orizzontale, ovvero lo spazio tra la cella di colore sinistro o destro e il limite dell'area client.|
|[CMFCColorBar::SetVertMargin](#setvertmargin)|Imposta il margine verticale, ovvero il spazio tra la cella di colore superiore o inferiore e il limite dell'area client.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMFCColorBar::AdjustLocations](#adjustlocations)|Regola le posizioni dei pulsanti di colore sul controllo barra dei colori.|
|[CMFCColorBar::AllowChangeTextLabels](#allowchangetextlabels)|Indica se l'etichetta di testo dei pulsanti di colore può cambiare.|
|[CMFCColorBar::AllowShowOnList](#allowshowonlist)|Indica se l'oggetto controllo barra dei colori può essere visualizzato in un elenco della barra degli strumenti durante il processo di personalizzazione.|
|[CMFCColorBar::CalcSize](#calcsize)|Chiamato dal framework come parte del processo di calcolo del layout.|
|[CMFCColorBar::CreatePalette](#createpalette)|Inizializza una tavolozza con i colori in una matrice di colori specificata.|
|[CMFCColorBar::GetColorGridSize](#getcolorgridsize)|Calcola il numero di righe e colonne nella griglia di un controllo barra dei colori.|
|[CMFCColorBar::GetExtraHeight](#getextraheight)|Calcola l'altezza aggiuntiva necessaria per visualizzare vari elementi dell'interfaccia utente, ad esempio il pulsante **Altro,** i colori del documento e così via.|
|[CMFCColorBar::InitColors](#initcolors)|Inizializza una matrice di colori con i colori in una tavolozza specificata o la tavolozza predefinita del sistema.|
|[CMFCColorBar::OnKey](#onkey)|Chiamato dal framework quando un utente preme un pulsante della tastiera.|
|[CMFCColorBar::OnSendCommand](#onsendcommand)|Chiamato dal framework per chiudere una gerarchia di controlli popup.|
|[CMFCColorBar::OnUpdateCmdUI](#onupdatecmdui)|Chiamato dal framework per abilitare o disabilitare un elemento dell'interfaccia utente di un controllo barra dei colori prima che venga visualizzato l'elemento.|
|[CMFCColorBar::OpenColorDialog](#opencolordialog)|Apre una finestra di dialogo a colori.|
|[CMFCColorBar::Ricompilare](#rebuild)|Ridisegna completamente il controllo della barra dei colori.|
|[CMFCColorBar::SelectPalette](#selectpalette)|Imposta la tavolozza logica del contesto di periferica specificato sulla tavolozza del pulsante padre del controllo barra dei colori corrente.|
|[CMFCColorBar::SetPropList](#setproplist)|Imposta `m_pWndPropList` il membro dati protetto sul puntatore specificato a un controllo griglia delle proprietà.|
|[CMFCColorBar::ShowCommandMessageString](#showcommandmessagestring)|Richiede la finestra cornice proprietaria del controllo barra dei colori per aggiornare la riga del messaggio nella barra di stato.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|`m_bInternal`|Campo booleano che determina se gli eventi del mouse vengono elaborati. In genere, gli eventi del mouse vengono elaborati quando questo campo è TRUE e la modalità di personalizzazione è FALSE.|
|`m_bIsEnabled`|Valore booleano che indica se un controllo è abilitato.|
|`m_bIsTearOff`|Valore booleano che indica se il controllo barra dei colori supporta l'ancoraggio.|
|`m_BoxSize`|Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che specifica le dimensioni di una cella in una griglia della barra dei colori.|
|`m_bShowDocColorsWhenDocked`|Valore booleano che indica se visualizzare i colori del documento quando la barra dei colori è ancorata. Per ulteriori informazioni, vedere [CMFCColorBar::SetDocumentColors](#setdocumentcolors).|
|`m_bStdColorDlg`|Valore booleano che indica se visualizzare la finestra di dialogo del colore di sistema standard o la finestra di dialogo [CMFCColorDialog.](../../mfc/reference/cmfccolordialog-class.md) Per ulteriori informazioni, vedere [CMFCColorBar::EnableOtherButton](#enableotherbutton).|
|`m_ColorAutomatic`|Oggetto [COLORREF](/windows/win32/gdi/colorref) che memorizza il colore automatico corrente. Per ulteriori informazioni, vedere [CMFCColorBar::EnableOtherButton](#enableotherbutton).|
|`m_ColorNames`|Oggetto [CMap](../../mfc/reference/cmap-class.md) che associa un set di colori RGB ai relativi nomi.|
|`m_colors`|Oggetto [CArray](../../mfc/reference/carray-class.md) di [COLORREF](/windows/win32/gdi/colorref) valori che contiene i colori visualizzati nel controllo barra dei colori.|
|`m_ColorSelected`|Valore [COLORREF](/windows/win32/gdi/colorref) che indica il colore attualmente selezionato dall'utente dal controllo barra dei colori.|
|`m_lstDocColors`|Oggetto [CList](../../mfc/reference/clist-class.md) di valori [COLORREF](/windows/win32/gdi/colorref) che contiene i colori attualmente utilizzati in un documento.|
|`m_nCommandID`|Intero senza segno che è l'ID di comando di un pulsante di colore.|
|`m_nHorzMargin`|Intero che è il margine orizzontale tra i pulsanti di colore in una griglia di colori.|
|`m_nHorzOffset`|Intero che è l'offset orizzontale al centro del pulsante di colore. Questo valore è significativo se il pulsante visualizza testo o un'immagine oltre a un colore.|
|`m_nNumColumns`|Un numero intero che indica il numero di colonne in una griglia di controllo della barra dei colori.|
|`m_nNumColumnsVert`|Un numero intero che indica il numero di colonne in una griglia di colori orientata verticalmente.|
|`m_nNumRowsHorz`|Numero intero che indica il numero di colonne in una griglia di colori orientata orizzontalmente.|
|`m_nRowHeight`|Intero che indica l'altezza di una riga di pulsanti di colore in una griglia di colori.|
|`m_nVertMargin`|Intero che è il margine verticale tra i pulsanti di colore in una griglia di colori.|
|`m_nVertOffset`|Intero che è l'offset verticale al centro del pulsante di colore. Questo valore è significativo se il pulsante visualizza testo o un'immagine oltre a un colore.|
|`m_Palette`|Oggetto [CPalette](../../mfc/reference/cpalette-class.md) dei colori utilizzati nel controllo barra dei colori.|
|`m_pParentBtn`|Puntatore a un [CMFCColorButton](../../mfc/reference/cmfccolorbutton-class.md) oggetto che è l'elemento padre del pulsante corrente. Questo valore è significativo se il pulsante di colore si trova in una gerarchia di controlli della barra degli strumenti o in un controllo griglia delle proprietà del colore.|
|`m_pParentRibbonBtn`|Puntatore a un [CMFCRibbonColorButton](../../mfc/reference/cmfcribboncolorbutton-class.md) oggetto che si trova sulla barra multifunzione ed è il pulsante padre del pulsante corrente. Questo valore è significativo se il pulsante di colore si trova in una gerarchia di controlli della barra degli strumenti o in un controllo griglia delle proprietà del colore.|
|`m_pWndPropList`|Puntatore a un [CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md) oggetto.|
|`m_strAutoColor`|Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che è il testo visualizzato sul pulsante **automatico.** Per ulteriori informazioni, vedere [CMFCColorBar::EnableAutomaticButton](#enableautomaticbutton).|
|`m_strDocColors`|Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che è il testo visualizzato sul pulsante colori del documento. Per ulteriori informazioni, vedere [CMFCColorBar::SetDocumentColors](#setdocumentcolors).|
|`m_strOtherColor`|Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che è il testo visualizzato *sull'altro* pulsante. Per ulteriori informazioni, vedere [CMFCColorBar::EnableOtherButton](#enableotherbutton).|

## <a name="remarks"></a>Osservazioni

In genere, non `CMFCColorBar` si crea direttamente un oggetto. Al contrario, il [CMFCColorMenuButton classe](../../mfc/reference/cmfccolormenubutton-class.md) (utilizzata nei menu e barre `CMFCColorBar` degli strumenti) o il [CMFCColorButton classe](../../mfc/reference/cmfccolorbutton-class.md) crea l'oggetto.

La `CMFCColorBar` classe fornisce le seguenti funzionalità:

- Regola automaticamente l'elenco dei colori del documento.

- Salva e ripristina il proprio stato, insieme allo stato del documento.

- Gestisce il pulsante "automatico".

- Utilizza il [CMFCColorPickerCtrl](../../mfc/reference/cmfccolorpickerctrl-class.md) controllo della classe per selezionare un colore personalizzato.

- Supporta uno stato "tear-off" (se viene creato utilizzando la [classe CMFCColorMenuButton](../../mfc/reference/cmfccolormenubutton-class.md)).

Per incorporare la `CMFCColorBar` funzionalità nell'applicazione:

1. Creare un pulsante di menu normale e assegnargli un ID, ad esempio ID_CHAR_COLOR.

1. Nella classe della finestra cornice eseguire l'override del metodo [CFrameWndEx::OnShowPopupMenu](../../mfc/reference/cframewndex-class.md#onshowpopupmenu) e sostituire il pulsante di menu normale con un oggetto [classe CMFCColorMenuButton](../../mfc/reference/cmfccolormenubutton-class.md) (chiamando [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)).

1. Impostare tutti gli stili e abilitare o disabilitare le funzionalità dell'oggetto durante la `CMFCColorBar` creazione della classe [CMFCColorMenuButton.](../../mfc/reference/cmfccolormenubutton-class.md) L'oggetto `CMFCColorMenuButton` crea `CMFCColorBar` dinamicamente l'oggetto dopo che il framework chiama il `CreatePopupMenu` metodo.

Quando l'utente fa clic su un pulsante di controllo della barra dei colori, il framework utilizza la `ON_COMMAND` macro per notificare l'elemento padre del controllo barra dei colori. Nella macro, il parametro ID comando è il valore assegnato al pulsante di controllo della barra dei colori nel passaggio 1 (ID_CHAR_COLOR in questo esempio). Per ulteriori informazioni, vedere la [classe CMFCColorMenuButton](../../mfc/reference/cmfccolormenubutton-class.md), la [classe CMFCColorButton](../../mfc/reference/cmfccolorbutton-class.md), la [classe CMFCColorPickerCtrl (classe](../../mfc/reference/cmfccolorpickerctrl-class.md)), [classe CFrameWndEx](../../mfc/reference/cframewndex-class.md)e le classi [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) .

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come configurare una `CMFCColorBar` barra dei colori utilizzando vari metodi nella classe . I metodi impostano i margini orizzontale e verticale, attivano l'altro pulsante, creano una finestra di controllo della barra dei colori e impostano il colore attualmente selezionato. Questo esempio fa parte [dell'esempio New Controls](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#1](../../mfc/reference/codesnippet/cpp/cmfccolorbar-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#2](../../mfc/reference/codesnippet/cpp/cmfccolorbar-class_2.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)

[CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)

[CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md)

[CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcolorbar.h

## <a name="cmfccolorbaradjustlocations"></a><a name="adjustlocations"></a>CMFCColorBar::AdjustLocations

Regola le posizioni dei pulsanti di colore sul controllo barra dei colori.

```
virtual void AdjustLocations();
```

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal framework durante l'elaborazione di WM_SIZE messaggi.

## <a name="cmfccolorbarallowchangetextlabels"></a><a name="allowchangetextlabels"></a>CMFCColorBar::AllowChangeTextLabels

Indica se l'etichetta di testo dei pulsanti di colore può cambiare.

```
virtual BOOL AllowChangeTextLabels() const;
```

### <a name="return-value"></a>Valore restituito

Sempre FALSE.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo metodo restituisce sempre FALSE, il che significa che le etichette di testo non possono essere modificate. Eseguire l'override di questo metodo per abilitare la modifica delle etichette di testo.

## <a name="cmfccolorbarallowshowonlist"></a><a name="allowshowonlist"></a>CMFCColorBar::AllowShowOnList

Indica se l'oggetto controllo barra dei colori può essere visualizzato in un elenco della barra degli strumenti durante il processo di personalizzazione.

```
virtual BOOL AllowShowOnList() const;
```

### <a name="return-value"></a>Valore restituito

Sempre TRUE.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo metodo restituisce sempre TRUE, il che significa che il framework può visualizzare il controllo barra dei colori durante il processo di personalizzazione. Eseguire l'override di questo metodo per implementare un comportamento diverso.

## <a name="cmfccolorbarcalcsize"></a><a name="calcsize"></a>CMFCColorBar::CalcSize

Chiamato dal framework come parte del processo di calcolo del layout.

```
virtual CSize CalcSize(BOOL bVertDock);
```

### <a name="parameters"></a>Parametri

*bAncoratteri*<br/>
[in] TRUE per specificare che il controllo barra dei colori è ancorato verticalmente; FALSE per specificare che il controllo barra dei colori è ancorato orizzontalmente.

### <a name="return-value"></a>Valore restituito

Dimensioni della matrice di pulsanti di colore in un controllo barra dei colori.

## <a name="cmfccolorbarcmfccolorbar"></a><a name="cmfccolorbar"></a>CMFCColorBar::CMFCColorBar

Costruisce un oggetto `CMFCColorBar`.

```
CMFCColorBar(
    const CArray<COLORREF,COLORREF>& colors,
    COLORREF color,
    LPCTSTR lpszAutoColor,
    LPCTSTR lpszOtherColor,
    LPCTSTR lpszDocColors,
    CList<COLORREF,COLORREF>& lstDocColors,
    int nColumns,
    int nRowsDockHorz,
    int nColDockVert,
    COLORREF colorAutomatic,
    UINT nCommandID,
    CMFCColorButton* pParentBtn);

CMFCColorBar(
    const CArray<COLORREF,COLORREF>& colors,
    COLORREF color,
    LPCTSTR lpszAutoColor,
    LPCTSTR lpszOtherColor,
    LPCTSTR lpszDocColors,
    CList<COLORREF,COLORREF>& lstDocColors,
    int nColumns,
    COLORREF colorAutomatic,
    UINT nCommandID,
    CMFCRibbonColorButton* pParentRibbonBtn);

CMFCColorBar(
    CMFCColorBar& src,
    UINT uiCommandID);
```

### <a name="parameters"></a>Parametri

*Colori*<br/>
[in] Matrice di colori visualizzati dal framework nel controllo barra dei colori.

*Colore*<br/>
[in] Colore selezionato inizialmente.

*lpszAutoColor (colore di lpszAuto*<br/>
[in] Etichetta di testo *del* pulsante automatico (predefinito) del colore o NULL.

L'etichetta standard per il pulsante automatico è **Automatico**.

*lpszOtherColor (colore)*<br/>
[in] Etichetta di testo *dell'altro* pulsante, che visualizza più scelte di colore, o NULL.

L'etichetta standard per l'altro pulsante è **Altri colori...**.

*lpszDocColori*<br/>
[in] Etichetta di testo del pulsante Colori del documento. La tavolozza dei colori del documento elenca tutti i colori attualmente utilizzati dal documento.

*LstDocColori*<br/>
[in] Elenco di colori attualmente utilizzati dal documento.

*nColumns*<br/>
[in] Il numero di colonne della matrice di colori.

*nRowsDockHorz*<br/>
[in] Il numero di righe che la barra dei colori ha quando è ancorata orizzontalmente.

*nColDockVert*<br/>
[in] Il numero di colonne che la barra dei colori ha quando è ancorata verticalmente.

*colorAutomatic*<br/>
[in] Colore predefinito applicato dal framework quando si fa clic sul pulsante automatico.

*nCommandID (IDComando)*<br/>
[in] ID comando di controllo barra dei colori.

*pParentBtn (instile)*<br/>
[in] Puntatore a un pulsante padre.

*src*<br/>
[in] Oggetto `CMFCColorBar` esistente da copiare `CMFCColorBar` nel nuovo oggetto.

*uiCommandID (idComando)*<br/>
[in] ID del comando.

## <a name="cmfccolorbarcontexttosize"></a><a name="contexttosize"></a>CMFCColorBar::ContextToSize

Calcola i margini verticali e orizzontali necessari per contenere i pulsanti del controllo barra dei colori e regola la posizione di tali pulsanti.

```cpp
void ContextToSize(
    BOOL bSquareButtons = TRUE,
    BOOL bCenterButtons = TRUE);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*bSquareButtons (pulsantiiniiii*|[in] TRUE per specificare che la forma dei pulsanti in un controllo barra dei colori è quadrata. in caso contrario, FALSE. Il valore predefinito è TRUE.|
|*bCenterButtons (Pulsanti)*|[in] TRUE per specificare che il contenuto sulla faccia di un pulsante di controllo della barra dei colori è centrato; in caso contrario, FALSE. Il valore predefinito è TRUE.|

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorbarcreate"></a><a name="create"></a>CMFCColorBar::Create

Crea una finestra di controllo della barra `CMFCColorBar` dei colori e la associa all'oggetto.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle,
    UINT nID,
    CPalette* pPalette=NULL,
    int nColumns=0,
    int nRowsDockHorz=0,
    int nColDockVert=0);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
[in] Puntatore alla finestra padre.

*DwStyle (in stile dwStyle)*<br/>
[in] Combinazione bit per bit (OR) di stili di [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).

*nID*<br/>
[in] ID del comando.

*pTavolozza*<br/>
[in] Puntatore a una tavolozza di colori. Il valore predefinito è NULL.

*nColumns*<br/>
[in] Il numero di colonne nel controllo barra dei colori. Il valore predefinito è 0.

*nRowsDockHorz*<br/>
[in] Il numero di righe nel controllo barra dei colori quando è ancorato orizzontalmente. Il valore predefinito è 0.

*nColDockVert*<br/>
[in] Il numero di colonne nel controllo barra dei colori quando è ancorato verticalmente. Il valore predefinito è 0.

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Per costruire `CMFCColorBar` un oggetto, chiamare il costruttore della classe quindi questo metodo. Il `Create` metodo crea il controllo Windows e inizializza un elenco di colori.

## <a name="cmfccolorbarcreatecontrol"></a><a name="createcontrol"></a>CMFCColorBar::CreateControl

Crea una finestra di controllo della barra `CMFCColorBar` dei colori, la associa all'oggetto e ridimensiona la finestra di controllo per contenere la tavolozza di colori specificata.

```
virtual BOOL CreateControl(
    CWnd* pParentWnd,
    const CRect& rect,
    UINT nID,
    int nColumns=-1,
    CPalette* pPalette=NULL);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
[in] Puntatore alla finestra padre. Non può essere NULL.

*Rect*<br/>
[in] Rettangolo di delimitazione che specifica dove disegnare il controllo barra dei colori.

*nID*<br/>
[in] ID del controllo.

*nColumns*<br/>
[in] Il numero ideale di colonne nel controllo barra dei colori. Questo metodo modifica tale numero per adattarlo alla tavolozza di colori specificata. Il valore predefinito è -1, che indica che questo parametro non è specificato.

*pTavolozza*<br/>
[in] Puntatore a una tavolozza di colori o NULL. Se questo parametro è NULL, questo metodo calcola la dimensione del controllo barra dei colori come se fossero stati specificati 20 colori. Il valore predefinito è NULL.

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo utilizza i parametri *rect*, *nColumns*e *pPalette* per calcolare il numero o le righe e le colonne appropriate nel controllo barra dei colori, quindi chiama il metodo [CMFCColorBar::Create](#create) .

## <a name="cmfccolorbarcreatepalette"></a><a name="createpalette"></a>CMFCColorBar::CreatePalette

Inizializza una tavolozza con i colori in una matrice di colori specificata.

```
static BOOL CreatePalette(
    const CArray<COLORREF, COLORREF>& arColors,
    CPalette& palette);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*arColors*|[in] Matrice di colori.|
|*tavolozza*|[in] Una tavolozza di colori.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

## <a name="cmfccolorbarenableautomaticbutton"></a><a name="enableautomaticbutton"></a>CMFCColorBar::EnableAutomaticButton

Mostra o nasconde il pulsante automatico.

```cpp
void EnableAutomaticButton(
    LPCTSTR lpszLabel,
    COLORREF colorAutomatic,
    BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel (etichetta di un'etichetta di base)*<br/>
[in] Etichetta di testo *del* pulsante automatico (predefinito) del colore o NULL.

L'etichetta standard per il pulsante automatico è **Automatico**.

*colorAutomatic*<br/>
[in] Colore predefinito applicato dal framework quando si fa clic sul pulsante automatico.

*bEnable*<br/>
[in] TRUE per abilitare il pulsante automatico; FALSE per disattivare il pulsante automatico. Il valore predefinito è TRUE.

### <a name="remarks"></a>Osservazioni

L'etichetta di testo del pulsante automatico viene eliminata se il *lpszLabel* parametro è NULL o il *bEnable* parametro è FALSE.

## <a name="cmfccolorbarenableotherbutton"></a><a name="enableotherbutton"></a>CMFCColorBar::EnableOtherButton

Attiva o disattiva la visualizzazione di una finestra di dialogo che consente all'utente di selezionare più colori.

```cpp
void EnableOtherButton(
    LPCTSTR lpszLabel,
    BOOL bAltColorDlg=TRUE,
    BOOL bEnable=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszLabel (etichetta di un'etichetta di base)*<br/>
[in] Etichetta di testo *dell'altro* pulsante, che visualizza più scelte di colore, o NULL.

L'etichetta standard per questo pulsante è **Altri colori...**.

*bAltColorDlg*<br/>
[in] TRUE per visualizzare il [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) la finestra di dialogo; FALSE per visualizzare la finestra di dialogo [standard CColorDialog](../../mfc/reference/ccolordialog-class.md) . Il valore predefinito è TRUE.

*bEnable*<br/>
[in] TRUE per abilitare il pulsante; FALSE per disabilitare il pulsante. Il valore predefinito è TRUE.

## <a name="cmfccolorbargetcolor"></a><a name="getcolor"></a>CMFCColorBar::GetColor

Recupera il colore attualmente selezionato.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Colore attualmente selezionato.

## <a name="cmfccolorbargetcolorgridsize"></a><a name="getcolorgridsize"></a>CMFCColorBar::GetColorGridSize

Calcola il numero di righe e colonne nella griglia di un controllo barra dei colori.

```
CSize GetColorGridSize(BOOL bVertDock) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*bAncoratteri*|[in] TRUE per eseguire il calcolo per un controllo barra dei colori ancorato verticalmente; in caso contrario, eseguire il calcolo per un controllo ancorato orizzontalmente.|

### <a name="return-value"></a>Valore restituito

Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) `cx` il cui componente contiene `cy` il numero di colonne e il cui componente contiene il numero di righe.

## <a name="cmfccolorbargetcommandid"></a><a name="getcommandid"></a>CMFCColorBar::GetCommandID

Recupera l'ID di comando del controllo barra dei colori corrente.

```
UINT GetCommandID() const;
```

### <a name="return-value"></a>Valore restituito

Un ID di comando.

### <a name="remarks"></a>Osservazioni

Quando l'utente seleziona un nuovo colore, il framework invia l'ID `CMFCColorBar` di comando in un messaggio di WM_COMMAND per notificare l'elemento padre dell'oggetto.

## <a name="cmfccolorbargetextraheight"></a><a name="getextraheight"></a>CMFCColorBar::GetExtraHeight

Calcola l'altezza aggiuntiva necessaria per visualizzare vari elementi dell'interfaccia utente, ad esempio il pulsante **Altro** o i colori del documento.

```
int GetExtraHeight(int nNumColumns) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*nNumColumns*|[in] Se il controllo barra dei colori contiene i colori del documento, il numero di colonne da visualizzare nella griglia dei colori del documento. In caso contrario, questo valore non viene utilizzato.|

### <a name="return-value"></a>Valore restituito

Altezza aggiuntiva calcolata necessaria.

## <a name="cmfccolorbargethighlightedcolor"></a><a name="gethighlightedcolor"></a>CMFCColorBar::GetHighlightedColor

Recupera il colore che indica che un pulsante di colore ha lo stato attivo; vale a dire, il pulsante è *caldo*.

```
COLORREF GetHighlightedColor() const;
```

### <a name="return-value"></a>Valore restituito

Un valore RGB.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorbargethorzmargin"></a><a name="gethorzmargin"></a>CMFCColorBar::GetHorzMargin

Recupera il margine orizzontale, ovvero lo spazio tra la cella di colore sinistro o destro e il limite dell'area client.

```
int GetHorzMargin();
```

### <a name="return-value"></a>Valore restituito

Margine orizzontale.

## <a name="cmfccolorbargetvertmargin"></a><a name="getvertmargin"></a>CMFCColorBar::GetVertMargin

Recupera il margine verticale, ovvero il spazio tra la cella di colore superiore o inferiore e il limite dell'area client.

```
int GetVertMargin() const;
```

### <a name="return-value"></a>Valore restituito

Margine verticale.

## <a name="cmfccolorbarinitcolors"></a><a name="initcolors"></a>CMFCColorBar::InitColors

Inizializza una matrice di colori con i colori in una tavolozza specificata o con la tavolozza predefinita del sistema.

```
static int InitColors(
    CPalette* pPalette,
    CArray<COLORREF, COLORREF>& arColors);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pTavolozza*|[in] Puntatore a un oggetto tavolozza o NULL. Se questo parametro è NULL, questo metodo utilizza la tavolozza predefinita del sistema operativo.|
|*arColors*|[in] Matrice di colori.|

### <a name="return-value"></a>Valore restituito

Numero di elementi nella matrice di colori.

## <a name="cmfccolorbaristearoff"></a><a name="istearoff"></a>CMFCColorBar::IsTearOff

Indica se la barra dei colori corrente è ancorabile.

```
BOOL IsTearOff() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il controllo barra dei colori corrente è ancorabile. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se il controllo barra dei colori è ancorabile, può essere strappato da una barra di controllo e ancorato in un'altra posizione.

## <a name="cmfccolorbaronkey"></a><a name="onkey"></a>CMFCColorBar::OnKey

Chiamato dal framework quando un utente preme un pulsante della tastiera.

```
virtual BOOL OnKey(UINT nChar);
```

### <a name="parameters"></a>Parametri

*Nchar*<br/>
[in] Codice tasto virtuale per il tasto premuto dall'utente.

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo elabora la chiave specificata. in caso contrario, FALSE.

## <a name="cmfccolorbaronsendcommand"></a><a name="onsendcommand"></a>CMFCColorBar::OnSendCommand

Chiamato dal framework per chiudere una gerarchia di controlli popup.

```
virtual BOOL OnSendCommand(const CMFCToolBarButton* pButton);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pButton (Pulsante)*|[in] Puntatore a un controllo che si trova su una barra degli strumenti.|

### <a name="return-value"></a>Valore restituito

TRUESe questo metodo ha esito positivo. in caso contrario, FALSE.

## <a name="cmfccolorbaronupdatecmdui"></a><a name="onupdatecmdui"></a>CMFCColorBar::OnUpdateCmdUI

Chiamato dal framework per abilitare o disabilitare un elemento dell'interfaccia utente di un controllo barra dei colori prima che venga visualizzato l'elemento.

```
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,
    BOOL bDisableIfNoHndler);
```

### <a name="parameters"></a>Parametri

*pTarget (Destinazione)*<br/>
[in] Puntatore a una finestra che contiene un elemento dell'interfaccia utente da aggiornare.

*bDisableIfNoHndler*<br/>
[in] TRUE per disabilitare l'elemento dell'interfaccia utente se non è definito alcun gestore in una mappa messaggi. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Quando un utente dell'applicazione fa clic su un elemento dell'interfaccia utente, l'elemento deve sapere se deve essere visualizzato come abilitato o disabilitato. La destinazione del messaggio di comando fornisce queste informazioni implementando un ON_UPDATE_COMMAND_UI gestore di comandi. Utilizzare questo metodo per facilitare l'elaborazione del comando. Per ulteriori informazioni, vedere [Classe CCmdUI](../../mfc/reference/ccmdui-class.md).

## <a name="cmfccolorbaropencolordialog"></a><a name="opencolordialog"></a>CMFCColorBar::OpenColorDialog

Apre una finestra di dialogo a colori.

```
virtual BOOL OpenColorDialog(
    const COLORREF colorDefault,
    COLORREF& colorRes);
```

### <a name="parameters"></a>Parametri

*colorPredefinito*<br/>
[in] Colore selezionato per impostazione predefinita all'apertura della finestra di dialogo dei colori.

*colorRes*<br/>
[fuori] Colore selezionato da un utente.

### <a name="return-value"></a>Valore restituito

TRUESe l'utente ha selezionato un colore. FALSE se l'utente ha annullato la finestra di dialogo dei colori.

### <a name="remarks"></a>Osservazioni

## <a name="cmfccolorbarrebuild"></a><a name="rebuild"></a>CMFCColorBar::Ricompilare

Ridisegna completamente il controllo della barra dei colori.

```
virtual void Rebuild();
```

## <a name="cmfccolorbarselectpalette"></a><a name="selectpalette"></a>CMFCColorBar::SelectPalette

Imposta la tavolozza logica del contesto di periferica specificato sulla tavolozza del pulsante padre del controllo barra dei colori corrente.

```
CPalette* SelectPalette(CDC* pDC);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pDC*|[in] Puntatore al contesto di periferica del pulsante padre del controllo barra dei colori corrente.|

### <a name="return-value"></a>Valore restituito

Puntatore alla tavolozza sostituita dalla tavolozza del pulsante padre del controllo barra dei colori corrente.

## <a name="cmfccolorbarsetcolor"></a><a name="setcolor"></a>CMFCColorBar::SetColor

Imposta il colore attualmente selezionato.

```cpp
void SetColor(COLORREF color);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
[in] Valore di colore RGB.

## <a name="cmfccolorbarsetcolorname"></a><a name="setcolorname"></a>CMFCColorBar::SetColorName

Imposta un nuovo nome per un colore specificato.

```
static void SetColorName(
    COLORREF color,
    const CString& strName);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
[in] Valore RGB di un colore.

*strName*<br/>
[in] Nuovo nome per il colore specificato.

### <a name="remarks"></a>Osservazioni

Questo metodo modifica il nome del `CMFCColorBar` colore specificato in tutti gli oggetti dell'applicazione.

## <a name="cmfccolorbarsetcommandid"></a><a name="setcommandid"></a>CMFCColorBar::SetCommandID

Imposta un nuovo ID di comando per un controllo barra dei colori.

```cpp
void SetCommandID(UINT nCommandID);
```

### <a name="parameters"></a>Parametri

*nCommandID (IDComando)*<br/>
[in] Un ID di comando.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per modificare l'ID di comando di un controllo barra dei colori e per notificare alla finestra padre del controllo che l'ID è stato modificato.

## <a name="cmfccolorbarsetdocumentcolors"></a><a name="setdocumentcolors"></a>CMFCColorBar::SetDocumentColors

Imposta l'elenco dei colori utilizzati nel documento corrente.

```cpp
void SetDocumentColors(
    LPCTSTR lpszCaption,
    CList<COLORREF,COLORREF>& lstDocColors,
    BOOL bShowWhenDocked=FALSE);
```

### <a name="parameters"></a>Parametri

*didascalia di lpsz*<br/>
[in] Didascalia visualizzata quando il controllo barra dei colori non è ancorato.

*LstDocColori*<br/>
[in] Elenco di colori che sostituisce i colori correnti del documento.

*bMostraWhenancorato*<br/>
[in] TRUE per visualizzare i colori del documento quando il controllo barra dei colori è ancorato; in caso contrario, FALSE. Il valore predefinito è FALSE.

### <a name="remarks"></a>Osservazioni

*I colori* del documento sono i colori attualmente utilizzati in un documento. Il framework gestisce automaticamente un elenco di colori del documento, ma è possibile utilizzare questo metodo per modificare l'elenco.

## <a name="cmfccolorbarsethorzmargin"></a><a name="sethorzmargin"></a>CMFCColorBar::SetHorzMargin

Imposta il margine orizzontale, ovvero lo spazio tra la cella di colore sinistro o destro e il contorno dell'area client.

```cpp
void SetHorzMargin(int nHorzMargin);
```

### <a name="parameters"></a>Parametri

*nHorzMargin (margine)*<br/>
[in] Margine orizzontale, in pixel.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, il [CMFCColorBar::CMFCColorBar](#cmfccolorbar) costruttore imposta il margine orizzontale a 4 pixel.

## <a name="cmfccolorbarsetproplist"></a><a name="setproplist"></a>CMFCColorBar::SetPropList

Imposta `m_pWndPropList` il membro dati protetto sul puntatore specificato a un controllo griglia delle proprietà.

```cpp
void SetPropList(CMFCPropertyGridCtrl* pWndList);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*pWndList (in questo elenco)*|[in] Puntatore all'oggetto controllo griglia delle proprietà.|

## <a name="cmfccolorbarsetvertmargin"></a><a name="setvertmargin"></a>CMFCColorBar::SetVertMargin

Imposta il margine verticale, ovvero il spazio tra la cella di colore superiore o inferiore e il limite dell'area client.

```cpp
void SetVertMargin(int nVertMargin);
```

### <a name="parameters"></a>Parametri

*nMargine*<br/>
[in] Margine verticale, in pixel.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, il [CMFCColorBar::CMFCColorBar](#cmfccolorbar) costruttore imposta il margine verticale a 4 pixel.

## <a name="cmfccolorbarshowcommandmessagestring"></a><a name="showcommandmessagestring"></a>CMFCColorBar::ShowCommandMessageString

Richiede la finestra cornice proprietaria del controllo barra dei colori per aggiornare la riga del messaggio nella barra di stato.

```
virtual void ShowCommandMessageString(UINT uiCmdId);
```

### <a name="parameters"></a>Parametri

*uiCmdId (informazioni in questo base elementi)*<br/>
[in] Un ID di comando. (Questo parametro viene ignorato.)

### <a name="remarks"></a>Osservazioni

Questo metodo invia il messaggio di WM_SETMESSAGESTRING al proprietario del controllo barra dei colori.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
