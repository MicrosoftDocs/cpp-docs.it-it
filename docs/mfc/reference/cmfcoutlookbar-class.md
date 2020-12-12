---
description: 'Altre informazioni su: Classe CMFCOutlookBar'
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
ms.openlocfilehash: e54e44e702aaf8d6883ada6be9c127f63ecee97d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97265038"
---
# <a name="cmfcoutlookbar-class"></a>CMFCOutlookBar (classe)

Riquadro a schede che presenta l'aspetto visivo del **Riquadro di navigazione** di Microsoft Outlook 2000 o Outlook 2003. L' `CMFCOutlookBar` oggetto contiene un oggetto della [classe CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md) e una serie di schede. Le schede possono essere oggetti della [classe CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md) o `CWnd` oggetti derivati da. All'utente la barra di Outlook viene visualizzata come una serie di pulsanti e un'area di visualizzazione. Quando l'utente fa clic su un pulsante, viene visualizzato il controllo o il riquadro del pulsante corrispondente.

## <a name="syntax"></a>Sintassi

```cpp
class CMFCOutlookBar : public CBaseTabbedPane
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCOutlookBar::CMFCOutlookBar`|Costruttore predefinito.|
|`CMFCOutlookBar::~CMFCOutlookBar`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCOutlookBar::AllowDestroyEmptyTabbedPane](#allowdestroyemptytabbedpane)|Specifica se è possibile eliminare definitivamente un riquadro a schede vuoto. Esegue l'override di [CBaseTabbedPane:: AllowDestroyEmptyTabbedPane](../../mfc/reference/cbasetabbedpane-class.md#allowdestroyemptytabbedpane).|
|[CMFCOutlookBar:: CanAcceptPane](#canacceptpane)|Determina se un altro riquadro può essere ancorato al riquadro della barra di Outlook. Esegue l'override di CDockablePane:: CanAcceptPane.|
|[CMFCOutlookBar:: CanSetCaptionTextToTabName](#cansetcaptiontexttotabname)|Determina se la didascalia del riquadro a schede Visualizza lo stesso testo della scheda attiva. esegue l'override di [CBaseTabbedPane:: CanSetCaptionTextToTabName](../../mfc/reference/cbasetabbedpane-class.md#cansetcaptiontexttotabname).|
|[CMFCOutlookBar:: create](#create)|Crea il controllo barra di Outlook.|
|[CMFCOutlookBar:: CreateCustomPage](#createcustompage)|Crea una scheda personalizzata della barra di Outlook.|
|`CMFCOutlookBar::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCOutlookBar::D oesAllowDynInsertBefore](#doesallowdyninsertbefore)|Determina se un utente può ancorare una barra di controllo sul bordo esterno della barra di Outlook.|
|[CMFCOutlookBar:: FloatTab](#floattab)|Esegue il Floating di un riquadro, ma solo se il riquadro attualmente si trova in una scheda scollegabile. esegue l'override di [CBaseTabbedPane:: FloatTab](../../mfc/reference/cbasetabbedpane-class.md#floattab).|
|[CMFCOutlookBar:: GetButtonsFont](#getbuttonsfont)|Restituisce il tipo di carattere del testo sui pulsanti della barra di Outlook.|
|[CMFCOutlookBar:: GetTabArea](#gettabarea)|Restituisce le dimensioni e la posizione dell'area della scheda sulla barra di Outlook. Esegue l'override di [CBaseTabbedPane:: GetTabArea](../../mfc/reference/cbasetabbedpane-class.md#gettabarea).|
|`CMFCOutlookBar::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCOutlookBar:: IsMode2003](#ismode2003)|Determina se il comportamento della barra di Outlook simula quello di Microsoft Office Outlook 2003 (vedere la sezione Osservazioni).|
|[CMFCOutlookBar::OnAfterAnimation](#onafteranimation)|Chiamata eseguita da [CMFCOutlookBarTabCtrl:: SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) dopo che è stata impostata la scheda attiva utilizzando l'animazione.|
|[CMFCOutlookBar::OnBeforeAnimation](#onbeforeanimation)|Chiamata eseguita da [CMFCOutlookBarTabCtrl:: SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) prima che una scheda venga impostata come scheda attiva utilizzando l'animazione.|
|[CMFCOutlookBar::OnScroll](#onscroll)|Chiamata eseguita dal Framework se la barra di Outlook scorre verso l'alto o verso il basso.|
|[CMFCOutlookBar:: RemoveCustomPage](#removecustompage)|Rimuove una scheda personalizzata della barra di Outlook.|
|[CMFCOutlookBar:: SetButtonsFont](#setbuttonsfont)|Imposta il tipo di carattere del testo sui pulsanti della barra di Outlook.|
|[CMFCOutlookBar:: SetMode2003](#setmode2003)|Specifica se il comportamento della barra di Outlook simula quello di Outlook 2003 (vedere la sezione Osservazioni).|

## <a name="remarks"></a>Commenti

Per un esempio di una barra di Outlook, vedere l' [esempio OutlookDemo: applicazione OUTLOOKDEMO MFC](../../overview/visual-cpp-samples.md).

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

1. Quando si elabora il messaggio WM_CREATE nel frame principale, chiamare il metodo [CMFCOutlookBar:: create](#create) per creare il controllo tab della barra di Outlook.

    ```cpp
    m_wndOutlookBar.Create (_T("Shortcuts"),
        this,
        CRect (0, 0, 100, 100),
        ID_VIEW_OUTLOOKBAR,
        WS_CHILD | WS_VISIBLE | CBRS_LEFT);
    ```

1. Ottenere un puntatore all'oggetto sottostante `CMFCOutlookBarTabCtrl` usando [CBaseTabbedPane:: GetUnderlyingWindow](../../mfc/reference/cbasetabbedpane-class.md#getunderlyingwindow).

    ```cpp
    CMFCOutlookBarTabCtrl* pOutlookBar = (CMFCOutlookBarTabCtrl*) m_wndOutlookBar.GetUnderlyingWindow ();
    ```

1. Creare un oggetto della [classe CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md) per ogni scheda che contiene i pulsanti.

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

1. Chiamare [CMFCOutlookBarTabCtrl:: AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) per aggiungere ogni nuova scheda. Impostare il parametro *bDetachable* su false per rendere una pagina non rimovibile. In alternativa, utilizzare [CMFCOutlookBarTabCtrl:: AddControl](../../mfc/reference/cmfcoutlookbartabctrl-class.md#addcontrol) per aggiungere pagine scollegabili.

    ```cpp
    pOutlookBar->AddTab (&m_wndOutlookPane, "General", (UINT) -1, TRUE);
    ```

1. Per aggiungere un `CWnd` controllo derivato da (ad esempio, [CMFCShellTreeCtrl Class](../../mfc/reference/cmfcshelltreectrl-class.md)) come scheda, creare il controllo e chiamare [CMFCOutlookBarTabCtrl:: AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) per aggiungerlo alla barra di Outlook.

> [!NOTE]
> È consigliabile utilizzare ID di controllo univoci per ogni oggetto della [classe CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md) e per ogni `CWnd` oggetto derivato da.

Per aggiungere o eliminare in modo dinamico nuove pagine in fase di esecuzione, utilizzare [CMFCOutlookBar:: CreateCustomPage](#createcustompage) e [CMFCOutlookBar:: RemoveCustomPage](#removecustompage).

## <a name="outlook-2003-mode"></a>Modalità Outlook 2003

In modalità Outlook 2003, i pulsanti di tabulazione sono posizionati nella parte inferiore del riquadro della barra di Outlook. Quando non è disponibile spazio sufficiente per visualizzare i pulsanti, questi vengono visualizzati come icone in un'area simile alla barra degli strumenti lungo la parte inferiore del riquadro.

Usare [CMFCOutlookBar:: SetMode2003](#setmode2003) per abilitare la modalità Outlook 2003. Usare [CMFCOutlookBarTabCtrl:: SetToolbarImageList](../../mfc/reference/cmfcoutlookbartabctrl-class.md#settoolbarimagelist) per impostare la bitmap che contiene le icone visualizzate nella parte inferiore della barra di Outlook. Le icone nella bitmap devono essere ordinate in base all'indice di tabulazione.

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

**Intestazione:** afxoutlookbar. h

## <a name="cmfcoutlookbarallowdestroyemptytabbedpane"></a><a name="allowdestroyemptytabbedpane"></a> CMFCOutlookBar:: AllowDestroyEmptyTabbedPane

Specifica se è possibile eliminare definitivamente un riquadro a schede vuoto.

```cpp
virtual BOOL AllowDestroyEmptyTabbedPane() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se è possibile eliminare definitivamente un riquadro a schede vuoto; in caso contrario, FALSE. L'implementazione predefinita restituisce sempre TRUE.

### <a name="remarks"></a>Commenti

Se non è possibile eliminare definitivamente un riquadro a schede vuoto, il Framework lo nasconde.

## <a name="cmfcoutlookbarcanacceptpane"></a><a name="canacceptpane"></a> CMFCOutlookBar:: CanAcceptPane

Determina se un altro riquadro può essere ancorato al riquadro della barra di Outlook.

```cpp
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
in Puntatore a un altro riquadro ancorato a questo riquadro.

### <a name="return-value"></a>Valore restituito

TRUE se un altro riquadro può essere ancorato al riquadro della barra di Outlook; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Se la barra di Outlook è in modalità Outlook 2003, l'ancoraggio non è supportato, pertanto il valore restituito è FALSE.

Se il parametro *pBar* è null, questo metodo restituisce false.

In caso contrario, questo metodo si comporta come il metodo di base [CBasePane:: CanAcceptPane](../../mfc/reference/cbasepane-class.md#canacceptpane), con la differenza che anche se l'ancoraggio non è abilitato, una barra di Outlook può comunque consentire l'ancoraggio di un'altra barra di Outlook.

## <a name="cmfcoutlookbarcansetcaptiontexttotabname"></a><a name="cansetcaptiontexttotabname"></a> CMFCOutlookBar:: CanSetCaptionTextToTabName

Determina se la didascalia del riquadro a schede Visualizza lo stesso testo della scheda attiva.

```cpp
virtual BOOL CanSetCaptionTextToTabName() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la didascalia della finestra della barra di Outlook viene impostata automaticamente sul testo della scheda attiva; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Usare [CBaseTabbedPane:: EnableSetCaptionTextToTabName](../../mfc/reference/cbasetabbedpane-class.md#enablesetcaptiontexttotabname) per abilitare o disabilitare questa funzionalità.

In modalità Outlook 2003 questa impostazione è sempre abilitata.

## <a name="cmfcoutlookbarcreate"></a><a name="create"></a> CMFCOutlookBar:: create

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

*lpszCaption*<br/>
in Specifica la didascalia della finestra.

*pParentWnd*<br/>
in Specifica un puntatore a una finestra padre. Non deve essere NULL.

*Rect*<br/>
in Specifica le dimensioni e la posizione della barra di Outlook in pixel.

*nID*<br/>
in Specifica l'ID del controllo. Deve essere diverso dagli altri ID di controllo usati nell'applicazione.

*dwStyle*<br/>
in Specifica lo stile della barra di controllo desiderato. Per i valori possibili, vedere [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).

*dwControlBarStyle*<br/>
in Specifica gli stili speciali definiti dalla libreria.

*pContext*<br/>
in Creare il contesto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Si costruisce un `CMFCOutlookBar` oggetto in due passaggi. Chiamare prima il costruttore, quindi chiamare `Create` , che crea il controllo barra di Outlook e lo collega all' `CMFCOutlookBar` oggetto.

Vedere [CBasePane:: CreateEx](../../mfc/reference/cbasepane-class.md#createex) per l'elenco degli stili disponibili definiti dalla libreria da specificare con *dwControlBarStyle*.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare il `Create` metodo della `CMFCOutlookBar` classe. Questo frammento di codice fa parte dell' [esempio Outlook MultiViews](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_OutlookMultiViews#1](../../mfc/reference/codesnippet/cpp/cmfcoutlookbar-class_1.h)]
[!code-cpp[NVC_MFC_OutlookMultiViews#2](../../mfc/reference/codesnippet/cpp/cmfcoutlookbar-class_2.cpp)]

## <a name="cmfcoutlookbarcreatecustompage"></a><a name="createcustompage"></a> CMFCOutlookBar:: CreateCustomPage

Crea una scheda personalizzata della barra di Outlook.

```cpp
CMFCOutlookBarPane* CreateCustomPage(
    LPCTSTR lpszPageName,
    BOOL bActivatePage=TRUE,
    DWORD dwEnabledDocking=CBRS_ALIGN_ANY,
    BOOL bEnableTextLabels=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszPageName*<br/>
in Etichetta della pagina.

*bActivatePage*<br/>
in Se TRUE, la pagina diventa attiva al momento della creazione.

*dwEnabledDocking*<br/>
in Combinazione di flag di CBRS_ALIGN_ che specifica i lati di ancoraggio abilitati quando la pagina viene scollegata.

*bEnableTextLabels*<br/>
in Se TRUE, le etichette di testo sono abilitate per i pulsanti che si trovano nella pagina.

### <a name="return-value"></a>Valore restituito

Puntatore alla pagina appena creata o NULL se la creazione non è riuscita.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per consentire agli utenti di creare pagine personalizzate della barra di Outlook. È possibile creare fino a 100 pagine per applicazione. Gli ID del controllo pagina iniziano da 0xF000. La creazione ha esito negativo se il numero totale di pagine personalizzate della barra di Outlook supera 100.

Usare [CMFCOutlookBar:: RemoveCustomPage](#removecustompage) per eliminare pagine personalizzate.

## <a name="cmfcoutlookbardoesallowdyninsertbefore"></a><a name="doesallowdyninsertbefore"></a> CMFCOutlookBar::D oesAllowDynInsertBefore

Specifica se un utente può ancorare un riquadro al bordo esterno della barra di Outlook.

```
DECLARE_MESSAGE_MAP virtual BOOL DoesAllowDynInsertBefore() const;
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce FALSE.

### <a name="remarks"></a>Commenti

Il Framework chiama il `DoesAllowDynInsertBefore` metodo quando cerca un percorso per ancorare un riquadro dinamico. Se la funzione restituisce FALSE, il Framework non consente l'ancoraggio di alcun riquadro dinamico ai bordi esterni del riquadro.

In genere, si crea una barra di Outlook come controllo statico non a virgola mobile. È possibile eseguire l'override di questa funzione in una classe derivata e restituire TRUE per modificare questo comportamento.

> [!NOTE]
> Poiché i riquadri dinamici controllano lo stato dei riquadri statici ancorati durante l'ancoraggio, è necessario ancorare i riquadri dinamici dopo i riquadri statici quando possibile.

## <a name="cmfcoutlookbarfloattab"></a><a name="floattab"></a> CMFCOutlookBar:: FloatTab

Fluttua un riquadro.

```cpp
virtual BOOL FloatTab(
    CWnd* pBar,
    int nTabID,
    AFX_DOCK_METHOD dockMethod,
    BOOL bHide);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
in Puntatore al riquadro da float.

*nTabID*<br/>
in Indice in base zero della scheda da float.

*dockMethod*<br/>
in Specifica il metodo da utilizzare per rendere float il riquadro.  Per ulteriori informazioni, vedere [CBaseTabbedPane:: FloatTab](../../mfc/reference/cbasetabbedpane-class.md#floattab).

*bHide*<br/>
in TRUE per nascondere il riquadro prima del valore mobile; in caso contrario, FALSE. A differenza della versione della classe base di questo metodo, questo parametro non ha un valore predefinito.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro è fluttuato; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Questo metodo è simile a [CBaseTabbedPane:: FloatTab](../../mfc/reference/cbasetabbedpane-class.md#floattab) , ad eccezione del fatto che non Abilita la modalità float per l'ultima scheda rimanente in un controllo barra di Outlook.

## <a name="cmfcoutlookbargetbuttonsfont"></a><a name="getbuttonsfont"></a> CMFCOutlookBar:: GetButtonsFont

Restituisce il tipo di carattere del testo sulle schede dei pulsanti della pagina della barra di Outlook.

```cpp
CFont* GetButtonsFont() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto del tipo di carattere utilizzato per visualizzare il testo sulle schede dei pulsanti della pagina della barra di Outlook.

### <a name="remarks"></a>Commenti

Utilizzare questa funzione per recuperare il tipo di carattere utilizzato per visualizzare il testo sulle schede dei pulsanti della pagina di Outlook. È possibile impostare il tipo di carattere chiamando su [CMFCOutlookBar:: SetButtonsFont](#setbuttonsfont).

## <a name="cmfcoutlookbargettabarea"></a><a name="gettabarea"></a> CMFCOutlookBar:: GetTabArea

Determina le dimensioni e la posizione dell'area della scheda sulla barra di Outlook.

```cpp
virtual void GetTabArea(
    CRect& rectTabAreaTop,
    CRect& rectTabAreaBottom) const;
```

### <a name="parameters"></a>Parametri

*rectTabAreaTop*<br/>
out Contiene le dimensioni e la posizione (nelle coordinate client) dell'area della scheda superiore quando la funzione restituisce.

*rectTabAreaBottom*<br/>
out Contiene le dimensioni e la posizione (nelle coordinate client) dell'area della scheda in basso quando la funzione restituisce.

### <a name="remarks"></a>Commenti

Il Framework chiama questo metodo per determinare il tipo di ancoraggio al riquadro di destinazione. Quando il Framework determina che l'utente trascina il riquadro in modo da essere ancorato sull'area della scheda del riquadro di destinazione, tenta di aggiungere il primo riquadro come una nuova scheda del riquadro di destinazione. In caso contrario, tenta di ancorare il primo riquadro sul lato appropriato del riquadro di destinazione. Il Framework crea un nuovo contenitore con un dispositivo di scorrimento per contenere il riquadro ancorato aggiuntivo.

L'implementazione predefinita di `GetTabArea` restituisce l'intera area client della barra di Outlook se la barra di Outlook è statica, ovvero se la barra di Outlook non può fluttuare. In caso contrario, restituisce l'area in cui si trova il pulsante di pagina nella parte superiore e inferiore del controllo della barra di Outlook.

Eseguire l'override di questo metodo nella classe derivata da `CMFCOutlookBar` per modificare questo comportamento.

## <a name="cmfcoutlookbarismode2003"></a><a name="ismode2003"></a> CMFCOutlookBar:: IsMode2003

Specifica se il comportamento della barra di Outlook simula quello di Microsoft Office Outlook 2003.

```cpp
BOOL IsMode2003() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la barra di Outlook viene eseguita in modalità Microsoft Office 2003; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Per abilitare questa modalità, è possibile usare [CMFCOutlookBar:: SetMode2003](#setmode2003).

## <a name="cmfcoutlookbaronafteranimation"></a><a name="onafteranimation"></a> CMFCOutlookBar:: OnAfterAnimation

Chiamata eseguita da [CMFCOutlookBarTabCtrl:: SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) dopo che è stata impostata la scheda attiva utilizzando l'animazione.

```cpp
virtual void OnAfterAnimation(int nPage);
```

### <a name="parameters"></a>Parametri

*nPage*<br/>
in Indice in base zero della pagina di tabulazione che è stata resa attiva.

### <a name="remarks"></a>Commenti

L'effetto visivo dell'impostazione della scheda attiva dipende dal fatto che sia stata abilitata l'animazione. Per ulteriori informazioni, vedere [CMFCOutlookBarTabCtrl:: EnableAnimation](../../mfc/reference/cmfcoutlookbartabctrl-class.md#enableanimation).

## <a name="cmfcoutlookbaronbeforeanimation"></a><a name="onbeforeanimation"></a> CMFCOutlookBar:: OnBeforeAnimation

Chiamata eseguita da [CMFCOutlookBarTabCtrl:: SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) prima che una scheda venga impostata come scheda attiva utilizzando l'animazione.

```cpp
virtual BOOL OnBeforeAnimation(int nPage);
```

### <a name="parameters"></a>Parametri

*nPage*<br/>
in Indice in base zero della scheda che sta per essere impostato come attivo.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'animazione deve essere utilizzata nell'impostazione della nuova scheda attiva o FALSE se l'animazione deve essere disabilitata.

### <a name="remarks"></a>Commenti

## <a name="cmfcoutlookbaronscroll"></a><a name="onscroll"></a> CMFCOutlookBar:: OnScroll

Chiamata eseguita dal Framework se la barra di Outlook scorre verso l'alto o verso il basso.

```cpp
virtual void OnScroll(BOOL bDown);
```

### <a name="parameters"></a>Parametri

*bDown*<br/>
in TRUE se la barra di Outlook viene spostata verso il basso oppure FALSE se lo scorrimento viene eseguito.

### <a name="remarks"></a>Commenti

## <a name="cmfcoutlookbarremovecustompage"></a><a name="removecustompage"></a> CMFCOutlookBar:: RemoveCustomPage

Rimuove una scheda personalizzata della barra di Outlook.

```cpp
BOOL RemoveCustomPage(
    UINT uiPage,
    CMFCOutlookBarTabCtrl* pTargetWnd);
```

### <a name="parameters"></a>Parametri

*uiPage*<br/>
in Indice in base zero della pagina nella finestra di Outlook padre.

*pTargetWnd*<br/>
in Pointerto la finestra di Outlook padre.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la pagina personalizzata è stata rimossa correttamente. in caso contrario, 0.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per eliminare pagine personalizzate. Quando la pagina viene rimossa, il relativo ID di controllo viene restituito al pool di ID disponibili.

È necessario specificare un puntatore all'oggetto della [classe CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md) in cui si trova attualmente la pagina da rimuovere. Si noti che un utente può spostare le pagine scollegabili tra diverse barre di Outlook, ma le informazioni su una pagina personalizzata si trovano nell'oggetto della barra di Outlook per il quale è stato chiamato [CMFCOutlookBar:: CreateCustomPage](#createcustompage).

Usare [CBaseTabbedPane:: GetUnderlyingWindow](../../mfc/reference/cbasetabbedpane-class.md#getunderlyingwindow) per ottenere un puntatore alla finestra di Outlook.

## <a name="cmfcoutlookbarsetbuttonsfont"></a><a name="setbuttonsfont"></a> CMFCOutlookBar:: SetButtonsFont

Imposta il tipo di carattere del testo sui pulsanti della barra di Outlook.

```cpp
void SetButtonsFont(
    CFont* pFont,
    BOOL bRedraw=TRUE);
```

### <a name="parameters"></a>Parametri

*pFont*<br/>
in Specifica il nuovo tipo di carattere.

*bRedraw*<br/>
in Se TRUE, la barra di Outlook verrà ridisegnato.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per impostare un tipo di carattere per il testo visualizzato nei pulsanti della pagina della scheda di Outlook.

## <a name="cmfcoutlookbarsetmode2003"></a><a name="setmode2003"></a> CMFCOutlookBar:: SetMode2003

Specifica se il comportamento della barra di Outlook simula quello di Outlook 2003.

```cpp
void SetMode2003(BOOL bMode2003=TRUE);
```

### <a name="parameters"></a>Parametri

*bMode2003*<br/>
in Se TRUE, la modalità Office 2003 è abilitata.

### <a name="remarks"></a>Commenti

Usare questa funzione per abilitare o disabilitare la modalità Office 2003. In questa modalità la barra di Outlook ha una barra degli strumenti aggiuntiva con un pulsante di personalizzazione. Il comportamento della barra di Outlook è conforme al comportamento della barra di Outlook in Microsoft Office 2003.

Per impostazione predefinita, questa modalità è disabilitata.

> [!NOTE]
> Questa funzione deve essere chiamata prima di [CMFCOutlookBar:: create](#create).

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)<br/>
[Classe CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md)<br/>
[Classe CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md)
