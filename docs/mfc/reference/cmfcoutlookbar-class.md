---
title: CMFCOutlookBar (classe)
ms.date: 06/25/2018
f1_keywords:
- CMFCOutlookBar
- AFXOUTLOOKBAR/CMFCOutlookBar
- AFXOUTLOOKBAR/CMFCOutlookBar::AllowDestroyEmptyTabbedPane
- AFXOUTLOOKBAR/CMFCOutlookBar::CanAcceptPane
- AFXOUTLOOKBAR/CMFCOutlookBar::CanSetCaptionTextToTabName
- AFXOUTLOOKBAR/CMFCOutlookBar::Create
- AFXOUTLOOKBAR/CMFCOutlookBar::CreateCustomPage
- AFXOUTLOOKBAR/CMFCOutlookBar::DoesAllowDynInsertBefore
- AFXOUTLOOKBAR/CMFCOutlookBar::FloatTab
- AFXOUTLOOKBAR/CMFCOutlookBar::GetButtonsFont
- AFXOUTLOOKBAR/CMFCOutlookBar::GetTabArea
- AFXOUTLOOKBAR/CMFCOutlookBar::IsMode2003
- AFXOUTLOOKBAR/CMFCOutlookBar::OnAfterAnimation
- AFXOUTLOOKBAR/CMFCOutlookBar::OnBeforeAnimation
- AFXOUTLOOKBAR/CMFCOutlookBar::OnScroll
- AFXOUTLOOKBAR/CMFCOutlookBar::RemoveCustomPage
- AFXOUTLOOKBAR/CMFCOutlookBar::SetButtonsFont
- AFXOUTLOOKBAR/CMFCOutlookBar::SetMode2003
helpviewer_keywords:
- CMFCOutlookBar [MFC], AllowDestroyEmptyTabbedPane
- CMFCOutlookBar [MFC], CanAcceptPane
- CMFCOutlookBar [MFC], CanSetCaptionTextToTabName
- CMFCOutlookBar [MFC], Create
- CMFCOutlookBar [MFC], CreateCustomPage
- CMFCOutlookBar [MFC], DoesAllowDynInsertBefore
- CMFCOutlookBar [MFC], FloatTab
- CMFCOutlookBar [MFC], GetButtonsFont
- CMFCOutlookBar [MFC], GetTabArea
- CMFCOutlookBar [MFC], IsMode2003
- CMFCOutlookBar [MFC], OnAfterAnimation
- CMFCOutlookBar [MFC], OnBeforeAnimation
- CMFCOutlookBar [MFC], OnScroll
- CMFCOutlookBar [MFC], RemoveCustomPage
- CMFCOutlookBar [MFC], SetButtonsFont
- CMFCOutlookBar [MFC], SetMode2003
ms.assetid: 2b335f71-ce99-4efd-b103-e65ba43ffc36
ms.openlocfilehash: fe328cb0d857ff9154624d218b1b56362890ce81
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369658"
---
# <a name="cmfcoutlookbar-class"></a>CMFCOutlookBar (classe)

Riquadro a schede che presenta l'aspetto visivo del **Riquadro di navigazione** di Microsoft Outlook 2000 o Outlook 2003. L'oggetto `CMFCOutlookBar` contiene un [CMFCOutlookBarTabCtrl oggetto di classe](../../mfc/reference/cmfcoutlookbartabctrl-class.md) e una serie di schede. Le schede possono essere [CMFCOutlookBarPane Class](../../mfc/reference/cmfcoutlookbarpane-class.md) oggetti o `CWnd`-derived objects. All'utente la barra di Outlook viene visualizzata come una serie di pulsanti e un'area di visualizzazione. Quando l'utente fa clic su un pulsante, viene visualizzato il controllo o il riquadro del pulsante corrispondente.

## <a name="syntax"></a>Sintassi

```cpp
class CMFCOutlookBar : public CBaseTabbedPane
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCOutlookBar::CMFCOutlookBar`|Costruttore predefinito.|
|`CMFCOutlookBar::~CMFCOutlookBar`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCOutlookBar::AllowDestroyEmptyTabbedPane](#allowdestroyemptytabbedpane)|Specifica se un riquadro a schede vuoto può essere eliminato. (Overrides [CBaseTabbedPane::AllowDestroyEmptyTabbedPane](../../mfc/reference/cbasetabbedpane-class.md#allowdestroyemptytabbedpane).)|
|[CMFCOutlookBar::CanAcceptPane](#canacceptpane)|Determina se un altro riquadro può essere ancorato al riquadro della barra di Outlook. (Overrides CDockablePane::CanAcceptPane.)|
|[CMFCOutlookBar::CanSetCaptionTextToTabName](#cansetcaptiontexttotabname)|Determina se la didascalia per il riquadro a schede visualizza lo stesso testo della scheda attiva (Overrides [CBaseTabbedPane::CanSetCaptionTextToTabName](../../mfc/reference/cbasetabbedpane-class.md#cansetcaptiontexttotabname).)|
|[CMFCOutlookBar:Creare](#create)|Crea il controllo barra di Outlook.|
|[CMFCOutlookBar::CreateCustomPage](#createcustompage)|Crea una scheda della barra di Outlook personalizzata.|
|`CMFCOutlookBar::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCOutlookBar::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|Determina se un utente può ancorare una barra di controllo sul bordo esterno della barra di Outlook.|
|[CMFCOutlookBar::FloatTab](#floattab)|Sposta un riquadro, ma solo se il riquadro si trova attualmente in una scheda rimovibile. (Overrides [CBaseTabbedPane::FloatTab](../../mfc/reference/cbasetabbedpane-class.md#floattab).)|
|[CMFCOutlookBar::GetButtonsFont](#getbuttonsfont)|Restituisce il tipo di carattere del testo sui pulsanti della barra di Outlook.|
|[CMFCOutlookBar::GetTabArea](#gettabarea)|Restituisce le dimensioni e la posizione delle aree della scheda sulla barra di Outlook. (Overrides [CBaseTabbedPane::GetTabArea](../../mfc/reference/cbasetabbedpane-class.md#gettabarea).)|
|`CMFCOutlookBar::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCOutlookBar::IsMode2003](#ismode2003)|Determina se il comportamento della barra di Outlook è quello di Microsoft Office Outlook 2003 (vedere Osservazioni).|
|[CMFCOutlookBar::OnAfterAnimation](#onafteranimation)|Chiamato da [CMFCOutlookBarTabCtrl::SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) dopo che la scheda attiva è stata impostata utilizzando l'animazione.|
|[CMFCOutlookBar::OnBeforeAnimation](#onbeforeanimation)|Chiamato da [CMFCOutlookBarTabCtrl::SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) prima che una scheda venga impostata come scheda attiva utilizzando l'animazione.|
|[CMFCOutlookBar::OnScroll](#onscroll)|Chiamato dal framework se la barra di Outlook scorre verso l'alto o verso il basso.|
|[CMFCOutlookBar::RemoveCustomPage](#removecustompage)|Rimuove una scheda della barra di Outlook personalizzata.|
|[CMFCOutlookBar::SetButtonsFont](#setbuttonsfont)|Imposta il tipo di carattere del testo sui pulsanti della barra di Outlook.|
|[CMFCOutlookBar::SetMode2003](#setmode2003)|Specifica se il comportamento della barra di Outlook prevede la modifica di quello di Outlook 2003 (vedere Osservazioni).|

## <a name="remarks"></a>Osservazioni

Per un esempio di barra di Outlook, vedere [OutlookDemo Sample: MFC OutlookDemo Application](../../overview/visual-cpp-samples.md).

## <a name="implementing-the-outlook-bar"></a>Implementazione della barra di Outlook

Per usare i controlli `CMFCOutlookBar` nell'applicazione, attenersi alla procedura seguente:

1. Importare un oggetto `CMFCOutlookBar` nella classe della finestra cornice principale.

    ```cpp
    class CMainFrame : public CMDIFrameWnd
    {
        // ...
        CMFCOutlookBar m_wndOutlookBar;
        CMFCOutlookBarPane m_wndOutlookPane;
        // ...
    };
    ```

1. Durante l'elaborazione del messaggio WM_CREATE nel frame principale, chiamare il [CMFCOutlookBar::Create](#create) metodo per creare il controllo struttura a schede barra di Outlook.

    ```cpp
    m_wndOutlookBar.Create (_T("Shortcuts"),
        this,
        CRect (0, 0, 100, 100),
        ID_VIEW_OUTLOOKBAR,
        WS_CHILD | WS_VISIBLE | CBRS_LEFT);
    ```

1. Ottenere un puntatore `CMFCOutlookBarTabCtrl` al sottostante utilizzando [CBaseTabbedPane::GetUnderlyingWindow](../../mfc/reference/cbasetabbedpane-class.md#getunderlyingwindow).

    ```cpp
    CMFCOutlookBarTabCtrl* pOutlookBar = (CMFCOutlookBarTabCtrl*) m_wndOutlookBar.GetUnderlyingWindow ();
    ```

1. Creare un [CMFCOutlookBarPane oggetto classe](../../mfc/reference/cmfcoutlookbarpane-class.md) per ogni scheda che contiene i pulsanti.

    ```cpp
    m_wndOutlookPane.Create(&m_wndOutlookBar,
        AFX_DEFAULT_TOOLBAR_STYLE,
        ID_OUTLOOK_PANE_GENERAL,
        AFX_CBRS_FLOAT | AFX_CBRS_RESIZE);

    // make the Outlook pane detachable (enable docking)
    m_wndOutlookPane.EnableDocking(CBRS_ALIGN_ANY);

    // add buttons
    m_wndOutlookPane.AddButton(theApp.LoadIcon (IDR_MAINFRAME),
        "About",
        ID_APP_ABOUT);

    m_wndOutlookPane.AddButton (theApp.LoadIcon (IDR_CUSTOM_OPEN_ICON),
        "Open",
        ID_FILE_OPEN);
    ```

1. Chiamare [CMFCOutlookBarTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) per aggiungere ogni nuova scheda. Impostare il *bDetachable* parametro FALSE per rendere una pagina non rimovibile. In alternativa, utilizzare [CMFCOutlookBarTabCtrl::AddControl](../../mfc/reference/cmfcoutlookbartabctrl-class.md#addcontrol) per aggiungere pagine rimovibili.

    ```cpp
    pOutlookBar->AddTab (&m_wndOutlookPane, "General", (UINT) -1, TRUE);
    ```

1. Per aggiungere `CWnd`un controllo derivato (ad esempio, [CMFCShellTreeCtrl )](../../mfc/reference/cmfcshelltreectrl-class.md)come scheda, creare il controllo e chiamare [CMFCOutlookBarTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) per aggiungerlo alla barra di Outlook.

> [!NOTE]
> È necessario utilizzare ID di controllo univoci per ogni [CMFCOutlookBarPane classe](../../mfc/reference/cmfcoutlookbarpane-class.md) oggetto e per ogni `CWnd`oggetto derivato.

Per aggiungere o eliminare dinamicamente nuove pagine in fase di esecuzione, utilizzare [CMFCOutlookBar::CreateCustomPage](#createcustompage) e [CMFCOutlookBar::RemoveCustomPage](#removecustompage).

## <a name="outlook-2003-mode"></a>Modalità Outlook 2003

In modalità Outlook 2003, i pulsanti della scheda sono posizionati nella parte inferiore del riquadro della barra di Outlook. Quando lo spazio disponibile non è sufficiente per visualizzare i pulsanti, questi vengono visualizzati come icone in un'area simile a una barra degli strumenti nella parte inferiore del riquadro.

Utilizzare [CMFCOutlookBar::SetMode2003](#setmode2003) per attivare la modalità Outlook 2003. Utilizzare [CMFCOutlookBarTabCtrl::SetToolbarImageList](../../mfc/reference/cmfcoutlookbartabctrl-class.md#settoolbarimagelist) per impostare la bitmap che contiene le icone visualizzate nella parte inferiore della barra di Outlook. Le icone nella bitmap devono essere ordinate in base all'indice di tabulazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CBasePane](../../mfc/reference/cbasepane-class.md)

[CPane](../../mfc/reference/cpane-class.md)

[CDockablePane](../../mfc/reference/cdockablepane-class.md)

[CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)

[CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxoutlookbar.h

## <a name="cmfcoutlookbarallowdestroyemptytabbedpane"></a><a name="allowdestroyemptytabbedpane"></a>CMFCOutlookBar::AllowDestroyEmptyTabbedPane

Specifica se un riquadro a schede vuoto può essere eliminato.

```cpp
virtual BOOL AllowDestroyEmptyTabbedPane() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe un riquadro a schede vuoto può essere eliminato. in caso contrario, FALSE. L'implementazione predefinita restituisce sempre TRUE.

### <a name="remarks"></a>Osservazioni

Se un riquadro a schede vuoto non può essere eliminato, il framework lo nasconde invece.

## <a name="cmfcoutlookbarcanacceptpane"></a><a name="canacceptpane"></a>CMFCOutlookBar::CanAcceptPane

Determina se un altro riquadro può essere ancorato al riquadro della barra di Outlook.

```cpp
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;
```

### <a name="parameters"></a>Parametri

*pBar (Barra)*<br/>
[in] Puntatore a un altro riquadro ancorato a questo riquadro.

### <a name="return-value"></a>Valore restituito

TRUESe un altro riquadro può essere ancorato al riquadro della barra di Outlook. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se la barra di Outlook è in modalità Outlook 2003, l'ancoraggio non è supportato, pertanto il valore restituito è FALSO.

Se il *pBar* parametro è NULL, questo metodo restituisce FALSE.

In caso contrario, questo metodo si comporta come il metodo di base [CBasePane::CanAcceptPane](../../mfc/reference/cbasepane-class.md#canacceptpane), con la differenza che anche se l'ancoraggio non è abilitato, una barra di Outlook può comunque abilitare un'altra barra di Outlook per essere ancorata su di esso.

## <a name="cmfcoutlookbarcansetcaptiontexttotabname"></a><a name="cansetcaptiontexttotabname"></a>CMFCOutlookBar::CanSetCaptionTextToTabName

Determina se la didascalia per il riquadro a schede visualizza lo stesso testo della scheda attiva.

```cpp
virtual BOOL CanSetCaptionTextToTabName() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la didascalia della finestra della barra di Outlook viene impostata automaticamente sul testo della scheda attiva; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Utilizzare [CBaseTabbedPane::EnableSetCaptionTextToTabName](../../mfc/reference/cbasetabbedpane-class.md#enablesetcaptiontexttotabname) per abilitare o disabilitare questa funzionalità.

In modalità Outlook 2003, questa impostazione è sempre abilitata.

## <a name="cmfcoutlookbarcreate"></a><a name="create"></a>CMFCOutlookBar:Creare

Crea il controllo barra di Outlook.

```cpp
virtual BOOL Create(
    LPCTSTR lpszCaption,
    CWnd* pParentWnd,
    const RECT& rect,
    UINT nID,
    DWORD dwStyle,
    DWORD dwControlBarStyle=AFX_CBRS_RESIZE,
    CCreateContext* pContext=NULL);
```

### <a name="parameters"></a>Parametri

*didascalia di lpsz*<br/>
[in] Specifica la didascalia della finestra.

*pParentWnd (informazioni in due)*<br/>
[in] Specifica un puntatore a una finestra padre. Non deve essere NULL.

*Rect*<br/>
[in] Specifica le dimensioni e la posizione della barra di Outlook in pixel.

*nID*<br/>
[in] Specifica l'ID del controllo. Deve essere distinto da altri ID di controllo utilizzati nell'applicazione.

*DwStyle (in stile dwStyle)*<br/>
[in] Specifica lo stile della barra di controllo desiderato. Per i valori possibili, consultate [Stili finestra.](../../mfc/reference/styles-used-by-mfc.md#window-styles)

*dwControlBarStyle (stile dwControlBarStyle)*<br/>
[in] Specifica gli stili speciali definiti dalla libreria.

*pContext*<br/>
[in] Creare il contesto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Costruire un `CMFCOutlookBar` oggetto in due passaggi. Chiamare innanzitutto il costruttore , quindi chiamare `Create`, che crea `CMFCOutlookBar` il controllo barra di Outlook e lo associa all'oggetto .

Vedere [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex) per l'elenco degli stili definiti dalla libreria disponibili che devono essere specificati da *dwControlBarStyle*.

### <a name="example"></a>Esempio

Nell'esempio riportato di `Create` seguito `CMFCOutlookBar` viene illustrato come utilizzare il metodo della classe . Questo frammento di codice fa parte [dell'esempio Outlook Multi Views](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_OutlookMultiViews#1](../../mfc/reference/codesnippet/cpp/cmfcoutlookbar-class_1.h)]
[!code-cpp[NVC_MFC_OutlookMultiViews#2](../../mfc/reference/codesnippet/cpp/cmfcoutlookbar-class_2.cpp)]

## <a name="cmfcoutlookbarcreatecustompage"></a><a name="createcustompage"></a>CMFCOutlookBar::CreateCustomPage

Crea una scheda della barra di Outlook personalizzata.

```cpp
CMFCOutlookBarPane* CreateCustomPage(
    LPCTSTR lpszPageName,
    BOOL bActivatePage=TRUE,
    DWORD dwEnabledDocking=CBRS_ALIGN_ANY,
    BOOL bEnableTextLabels=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszPageName (nome di pagina di lpszPage)*<br/>
[in] Etichetta della pagina.

*bActivatePagina*<br/>
[in] Se VERO, la pagina diventa attiva al momento della creazione.

*dwEnabledDocking*<br/>
[in] Combinazione di flag di CBRS_ALIGN_ che specifica i lati di ancoraggio abilitati quando la pagina viene scollegata.

*bEnableTextEtichette*<br/>
[in] Se TRUE, le etichette di testo sono abilitate per i pulsanti che si trovano nella pagina.

### <a name="return-value"></a>Valore restituito

Puntatore alla pagina appena creata oppure NULL se la creazione non è riuscita.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per consentire agli utenti di creare pagine delle barre di Outlook personalizzate. È possibile creare fino a 100 pagine per applicazione. Gli ID di controllo della pagina iniziano da 0xF000. La creazione non riesce se il numero totale di pagine delle barre di Outlook personalizzate supera 100.

Utilizzare [CMFCOutlookBar::RemoveCustomPage](#removecustompage) per eliminare le pagine personalizzate.

## <a name="cmfcoutlookbardoesallowdyninsertbefore"></a><a name="doesallowdyninsertbefore"></a>CMFCOutlookBar::DoesAllowDynInsertBefore

Specifica se un utente può ancorare un riquadro al bordo esterno della barra di Outlook.

```
DECLARE_MESSAGE_MAP virtual BOOL DoesAllowDynInsertBefore() const;
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce FALSE.

### <a name="remarks"></a>Osservazioni

Il framework `DoesAllowDynInsertBefore` chiama il metodo quando cerca una posizione per ancorare un riquadro dinamico. Se la funzione restituisce FALSE, il framework non consente l'ancoraggio di qualsiasi riquadro dinamico ai bordi esterni del riquadro.

In genere, si crea una barra di Outlook come un controllo statico non mobile. È possibile eseguire l'override di questa funzione in una classe derivata e restituire TRUE per modificare questo comportamento.

> [!NOTE]
> Poiché i riquadri dinamici controllano lo stato dei riquadri statici ancorati durante l'ancoraggio, è consigliabile ancorare i riquadri dinamici dopo i riquadri statici quando possibile.

## <a name="cmfcoutlookbarfloattab"></a><a name="floattab"></a>CMFCOutlookBar::FloatTab

Sposta un riquadro.

```cpp
virtual BOOL FloatTab(
    CWnd* pBar,
    int nTabID,
    AFX_DOCK_METHOD dockMethod,
    BOOL bHide);
```

### <a name="parameters"></a>Parametri

*pBar (Barra)*<br/>
[in] Puntatore al riquadro da rendere mobile.

*nTabID (informazioni in stato in cui è stato*<br/>
[in] Indice in base zero della scheda da rendere mobile.

*dockMethod*<br/>
[in] Specifica il metodo da utilizzare per rendere mobile il riquadro.  Per ulteriori informazioni, vedere [CBaseTabbedPane::FloatTab](../../mfc/reference/cbasetabbedpane-class.md#floattab).

*bHide*<br/>
[in] TRUE per nascondere il riquadro prima di fluttuare; in caso contrario, FALSE. A differenza della versione della classe base di questo metodo, questo parametro non ha un valore predefinito.

### <a name="return-value"></a>Valore restituito

TRUESe il riquadro mobile; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo è simile a [CBaseTabbedPane::FloatTab](../../mfc/reference/cbasetabbedpane-class.md#floattab) ad eccezione del fatto che non consente l'ultima scheda rimanente in un controllo barra di Outlook a float.

## <a name="cmfcoutlookbargetbuttonsfont"></a><a name="getbuttonsfont"></a>CMFCOutlookBar::GetButtonsFont

Restituisce il tipo di carattere del testo nelle schede dei pulsanti della pagina della barra di Outlook.

```cpp
CFont* GetButtonsFont() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto tipo di carattere utilizzato per visualizzare il testo nelle schede dei pulsanti della pagina della barra di Outlook.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per recuperare il tipo di carattere utilizzato per visualizzare il testo nelle schede dei pulsanti della pagina di Outlook. È possibile impostare il tipo di carattere chiamando [CMFCOutlookBar::SetButtonsFont](#setbuttonsfont).

## <a name="cmfcoutlookbargettabarea"></a><a name="gettabarea"></a>CMFCOutlookBar::GetTabArea

Determina le dimensioni e la posizione delle aree della scheda sulla barra di Outlook.

```cpp
virtual void GetTabArea(
    CRect& rectTabAreaTop,
    CRect& rectTabAreaBottom) const;
```

### <a name="parameters"></a>Parametri

*rectTabAreaTop*<br/>
[fuori] Contiene le dimensioni e la posizione (nelle coordinate client) dell'area della scheda superiore quando la funzione viene restituita.

*rectTabAreaBottom*<br/>
[fuori] Contiene le dimensioni e la posizione (nelle coordinate client) dell'area della scheda inferiore quando la funzione viene restituita.

### <a name="remarks"></a>Osservazioni

Il framework chiama questo metodo per determinare il tipo di ancoraggio al riquadro di destinazione. Quando il framework determina che l'utente trascina il riquadro per essere ancorato sull'area della scheda del riquadro di destinazione, tenta di aggiungere il primo riquadro come nuova scheda del riquadro di destinazione. In caso contrario, tenta di ancorare il primo riquadro in un lato appropriato del riquadro di destinazione. Il framework crea un nuovo contenitore con un dispositivo di scorrimento per contenere il riquadro ancorato aggiuntivo.

L'implementazione `GetTabArea` predefinita di restituisce l'intera area client della barra di Outlook se la barra di Outlook è statica; ovvero, se la barra di Outlook non può fluttuare. In caso contrario, restituisce l'area che i pulsanti di pagina occupano nella parte superiore e inferiore del controllo barra di Outlook.

Eseguire l'override di `CMFCOutlookBar` questo metodo nella classe derivata da per modificare questo comportamento.

## <a name="cmfcoutlookbarismode2003"></a><a name="ismode2003"></a>CMFCOutlookBar::IsMode2003

Specifica se il comportamento della barra di Outlook è quello di Microsoft Office Outlook 2003.

```cpp
BOOL IsMode2003() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la barra di Outlook è in esecuzione in modalità Microsoft Office 2003; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

È possibile attivare questa modalità utilizzando [CMFCOutlookBar::SetMode2003](#setmode2003).

## <a name="cmfcoutlookbaronafteranimation"></a><a name="onafteranimation"></a>CMFCOutlookBar::OnAfterAnimation

Chiamato da [CMFCOutlookBarTabCtrl::SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) dopo che la scheda attiva è stata impostata utilizzando l'animazione.

```cpp
virtual void OnAfterAnimation(int nPage);
```

### <a name="parameters"></a>Parametri

*nPagina*<br/>
[in] Indice in base zero della scheda resa attiva.

### <a name="remarks"></a>Osservazioni

L'effetto visivo dell'impostazione della scheda attiva dipende dall'abilitazione o meno dell'animazione. Per ulteriori informazioni, vedere [CMFCOutlookBarTabCtrl::EnableAnimation](../../mfc/reference/cmfcoutlookbartabctrl-class.md#enableanimation).

## <a name="cmfcoutlookbaronbeforeanimation"></a><a name="onbeforeanimation"></a>CMFCOutlookBar::OnBeforeAnimation

Chiamato da [CMFCOutlookBarTabCtrl::SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) prima che una scheda venga impostata come scheda attiva utilizzando l'animazione.

```cpp
virtual BOOL OnBeforeAnimation(int nPage);
```

### <a name="parameters"></a>Parametri

*nPagina*<br/>
[in] Indice in base zero della scheda che sta per essere impostata come attiva.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'animazione deve essere utilizzata per impostare la nuova scheda attiva o FALSE se l'animazione deve essere disabilitata.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcoutlookbaronscroll"></a><a name="onscroll"></a>CMFCOutlookBar::SuScroll

Chiamato dal framework se la barra di Outlook scorre verso l'alto o verso il basso.

```cpp
virtual void OnScroll(BOOL bDown);
```

### <a name="parameters"></a>Parametri

*bGiù*<br/>
[in] TRUESe la barra di Outlook scorre verso il basso o FALSE se scorre verso l'alto.

### <a name="remarks"></a>Osservazioni

## <a name="cmfcoutlookbarremovecustompage"></a><a name="removecustompage"></a>CMFCOutlookBar::RemoveCustomPage

Rimuove una scheda della barra di Outlook personalizzata.

```cpp
BOOL RemoveCustomPage(
    UINT uiPage,
    CMFCOutlookBarTabCtrl* pTargetWnd);
```

### <a name="parameters"></a>Parametri

*Pagina uiPage*<br/>
[in] Indice in base zero della pagina nella finestra di Outlook padre.

*pTargetWnd (informazioni in stato indue)*<br/>
[in] Puntatore alla finestra padre di Outlook.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la pagina personalizzata è stata rimossa correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per eliminare le pagine personalizzate. Quando la pagina viene rimossa, il relativo ID di controllo viene restituito al pool di ID disponibili.

È necessario fornire un puntatore [all'oggetto classe CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md) in cui si trova attualmente la pagina da rimuovere. Si noti che un utente può spostare pagine rimovibili tra diverse barre di Outlook, ma le informazioni su una pagina personalizzata si trovano nell'oggetto barra di Outlook per cui si è chiamato [CMFCOutlookBar::CreateCustomPage](#createcustompage).

Utilizzare [CBaseTabbedPane::GetUnderlyingWindow](../../mfc/reference/cbasetabbedpane-class.md#getunderlyingwindow) per ottenere un puntatore alla finestra di Outlook.

## <a name="cmfcoutlookbarsetbuttonsfont"></a><a name="setbuttonsfont"></a>CMFCOutlookBar::SetButtonsFont

Imposta il tipo di carattere del testo sui pulsanti della barra di Outlook.

```cpp
void SetButtonsFont(
    CFont* pFont,
    BOOL bRedraw=TRUE);
```

### <a name="parameters"></a>Parametri

*pCaratterE*<br/>
[in] Specifica il nuovo tipo di carattere.

*bRedraw*<br/>
[in] Se TRUE, la barra di Outlook verrà ridisegnata.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per impostare un tipo di carattere per il testo visualizzato sui pulsanti della scheda Outlook.

## <a name="cmfcoutlookbarsetmode2003"></a><a name="setmode2003"></a>CMFCOutlookBar::SetMode2003

Specifica se il comportamento della barra di Outlook è quello di Outlook 2003.

```cpp
void SetMode2003(BOOL bMode2003=TRUE);
```

### <a name="parameters"></a>Parametri

*bMode2003 (informazioni in comutente) (informazioni in comutente) (informazioni*<br/>
[in] Se TRUE, la modalità Office 2003 è abilitata.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per abilitare o disabilitare la modalità Office 2003. In questa modalità, la barra di Outlook dispone di una barra degli strumenti aggiuntiva con un pulsante di personalizzazione. Il comportamento della barra di Outlook è conforme al comportamento della barra di Outlook in Microsoft Office 2003.

Per impostazione predefinita, questa modalità è disabilitata.

> [!NOTE]
> Questa funzione deve essere chiamata prima di [CMFCOutlookBar::Create](#create).

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)<br/>
[Classe CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md)<br/>
[CMFCOutlookBarPane (classe)](../../mfc/reference/cmfcoutlookbarpane-class.md)
