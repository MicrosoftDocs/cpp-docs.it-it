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
ms.openlocfilehash: fc1281db0271393ec0538e26c2a2d2af09c99f7a
ms.sourcegitcommit: 39debf8c525c3951af6913ee5e514617658f8859
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/10/2019
ms.locfileid: "58775257"
---
# <a name="cmfcoutlookbar-class"></a>CMFCOutlookBar (classe)

Riquadro a schede che presenta l'aspetto visivo del **Riquadro di navigazione** di Microsoft Outlook 2000 o Outlook 2003. Il `CMFCOutlookBar` oggetto contiene una [classe CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md) oggetto e una serie di schede. Le schede possono essere [classe CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md) oggetti o `CWnd`-oggetti derivati. All'utente la barra di Outlook viene visualizzata come una serie di pulsanti e un'area di visualizzazione. Quando l'utente fa clic su un pulsante, viene visualizzato il controllo o il riquadro del pulsante corrispondente.

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
|[CMFCOutlookBar::AllowDestroyEmptyTabbedPane](#allowdestroyemptytabbedpane)|Specifica se un riquadro a schede vuoto può essere eliminato definitivamente. (Esegue l'override [CBaseTabbedPane::AllowDestroyEmptyTabbedPane](../../mfc/reference/cbasetabbedpane-class.md#allowdestroyemptytabbedpane).)|
|[CMFCOutlookBar::CanAcceptPane](#canacceptpane)|Determina se un altro riquadro può essere ancorato al riquadro della barra di Outlook. (Esegue l'override di CDockablePane::CanAcceptPane).|
|[CMFCOutlookBar::CanSetCaptionTextToTabName](#cansetcaptiontexttotabname)|Determina se la didascalia per il riquadro a schede Visualizza lo stesso testo come scheda attiva. (Esegue l'override [CBaseTabbedPane::CanSetCaptionTextToTabName](../../mfc/reference/cbasetabbedpane-class.md#cansetcaptiontexttotabname).)|
|[CMFCOutlookBar::Create](#create)|Crea il controllo barra di Outlook.|
|[CMFCOutlookBar::CreateCustomPage](#createcustompage)|Crea una scheda sulla barra di Outlook personalizzata.|
|`CMFCOutlookBar::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|[CMFCOutlookBar::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|Determina se un utente può essere ancorata una barra di controllo del bordo esterno della barra di Outlook.|
|[CMFCOutlookBar::FloatTab](#floattab)|Separa un riquadro, ma solo se il riquadro si trova in una scheda rimovibile. (Esegue l'override [cbasetabbedpane:: Floattab](../../mfc/reference/cbasetabbedpane-class.md#floattab).)|
|[CMFCOutlookBar::GetButtonsFont](#getbuttonsfont)|Restituisce il tipo di carattere del testo sui pulsanti della barra di Outlook.|
|[CMFCOutlookBar::GetTabArea](#gettabarea)|Restituisce le dimensioni e posizione delle aree di scheda nella barra di Outlook. (Esegue l'override [CBaseTabbedPane::GetTabArea](../../mfc/reference/cbasetabbedpane-class.md#gettabarea).)|
|`CMFCOutlookBar::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|
|[CMFCOutlookBar::IsMode2003](#ismode2003)|Determina se il comportamento della barra di Outlook simula quello di Microsoft Office Outlook 2003 (vedere la sezione Osservazioni).|
|[CMFCOutlookBar::OnAfterAnimation](#onafteranimation)|Chiamata eseguita dal [CMFCOutlookBarTabCtrl::SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) dopo aver impostata la scheda attiva tramite l'animazione.|
|[CMFCOutlookBar::OnBeforeAnimation](#onbeforeanimation)|Chiamata eseguita dal [CMFCOutlookBarTabCtrl::SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) prima di una scheda che verrà impostata come scheda attiva tramite l'animazione.|
|[CMFCOutlookBar::OnScroll](#onscroll)|Chiamato dal framework se la barra di Outlook viene effettuato uno scorrimento verso l'alto o verso il basso.|
|[CMFCOutlookBar::RemoveCustomPage](#removecustompage)|Rimuove una scheda sulla barra di Outlook personalizzata.|
|[CMFCOutlookBar::SetButtonsFont](#setbuttonsfont)|Imposta il tipo di carattere del testo sui pulsanti della barra di Outlook.|
|[CMFCOutlookBar::SetMode2003](#setmode2003)|Specifica se il comportamento della barra di Outlook simula quello di Outlook 2003 (vedere la sezione Osservazioni).|

## <a name="remarks"></a>Note

Per un esempio di una barra di Outlook, vedere il [esempio OutlookDemo: Applicazione MFC OutlookDemo](../../overview/visual-cpp-samples.md).

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

1. Quando si elabora il messaggio di notifica WM_CREATE nella cornice principale, chiama il [CMFCOutlookBar::Create](#create) metodo per creare il Outlook della barra di controllo struttura a schede.

    ```cpp
    m_wndOutlookBar.Create (_T("Shortcuts"),
        this,
        CRect (0, 0, 100, 100),
        ID_VIEW_OUTLOOKBAR,
        WS_CHILD | WS_VISIBLE | CBRS_LEFT);
    ```

1. Ottenere un puntatore sottostante `CMFCOutlookBarTabCtrl` usando [CBaseTabbedPane::GetUnderlyingWindow](../../mfc/reference/cbasetabbedpane-class.md#getunderlyingwindow).

    ```cpp
    CMFCOutlookBarTabCtrl* pOutlookBar = (CMFCOutlookBarTabCtrl*) m_wndOutlookBar.GetUnderlyingWindow ();
    ```

1. Creare un [classe CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md) oggetto per ogni scheda che contiene i pulsanti.

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

1. Chiamare [CMFCOutlookBarTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) per aggiungere ogni nuova scheda. Impostare il *bDetachable* parametro su FALSE per far sì che una pagina non rimovibili. In alternativa, usare [CMFCOutlookBarTabCtrl::AddControl](../../mfc/reference/cmfcoutlookbartabctrl-class.md#addcontrol) per aggiungere pagine rimovibili.

    ```cpp
    pOutlookBar->AddTab (&m_wndOutlookPane, "General", (UINT) -1, TRUE);
    ```

1. Per aggiungere un `CWnd`-controllo derivato (ad esempio [classe CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md)) sotto forma di scheda, creare il controllo e chiamare [CMFCOutlookBarTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) per aggiungerlo alla barra di Outlook.

> [!NOTE]
>  È consigliabile usare ID di controllo univoco per ognuno [classe CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md) oggetto e per ogni `CWnd`-oggetto derivato.

Per in modo dinamico, aggiungere o eliminare le nuove pagine in fase di esecuzione, usare [CMFCOutlookBar::CreateCustomPage](#createcustompage) e [CMFCOutlookBar::RemoveCustomPage](#removecustompage).

## <a name="outlook-2003-mode"></a>Modalità di Outlook 2003

In modalità di Outlook 2003, i pulsanti della scheda sono posizionati nella parte inferiore del riquadro barra di Outlook. Quando non c'è spazio sufficiente per visualizzare i pulsanti, vengono visualizzati come icone in un'area della barra degli strumenti like lungo il bordo inferiore del riquadro.

Uso [CMFCOutlookBar::SetMode2003](#setmode2003) per abilitare la modalità di Outlook 2003. Uso [CMFCOutlookBarTabCtrl::SetToolbarImageList](../../mfc/reference/cmfcoutlookbartabctrl-class.md#settoolbarimagelist) per impostare la mappa di bit che contiene le icone visualizzate nella parte inferiore della barra di Outlook. Le icone nella mappa di bit devono essere ordinate in base all'indice della scheda.

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

##  <a name="allowdestroyemptytabbedpane"></a>  CMFCOutlookBar::AllowDestroyEmptyTabbedPane

Specifica se un riquadro a schede vuoto può essere eliminato definitivamente.

```cpp
virtual BOOL AllowDestroyEmptyTabbedPane() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se un riquadro a schede vuoto può essere eliminato; in caso contrario, FALSE. L'implementazione predefinita restituisce sempre TRUE.

### <a name="remarks"></a>Note

Se un riquadro a schede vuoto non può essere eliminato, il framework nasconde invece.

##  <a name="canacceptpane"></a>  CMFCOutlookBar::CanAcceptPane

Determina se un altro riquadro può essere ancorato al riquadro della barra di Outlook.

```cpp
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
[in] Puntatore a un altro riquadro in cui è ancorato in questo riquadro.

### <a name="return-value"></a>Valore restituito

TRUE se un altro riquadro può essere ancorato a riquadro barra di Outlook; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Se la barra è in modalità di Outlook 2003, ancoraggio di Outlook non è supportato, pertanto il valore restituito è FALSE.

Se il *pBar* parametro è NULL, questo metodo restituisce FALSE.

In caso contrario, questo metodo si comporta come il metodo di base [cbasepane:: Canacceptpane](../../mfc/reference/cbasepane-class.md#canacceptpane), ad eccezione del fatto che anche se di ancoraggio non è abilitata, una barra di Outlook comunque possibile attivare un'altra barra di Outlook per essere ancorato su di esso.

##  <a name="cansetcaptiontexttotabname"></a>  CMFCOutlookBar::CanSetCaptionTextToTabName

Determina se la didascalia per il riquadro a schede Visualizza lo stesso testo come scheda attiva.

```cpp
virtual BOOL CanSetCaptionTextToTabName() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la barra didascalia della finestra di Outlook viene impostata automaticamente per il testo della scheda attiva; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Uso [CBaseTabbedPane::EnableSetCaptionTextToTabName](../../mfc/reference/cbasetabbedpane-class.md#enablesetcaptiontexttotabname) per abilitare o disabilitare questa funzionalità.

In modalità di Outlook 2003, questa impostazione è sempre abilitata.

##  <a name="create"></a>  CMFCOutlookBar::Create

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
[in] Specifica la didascalia della finestra.

*pParentWnd*<br/>
[in] Specifica un puntatore a una finestra padre. Non deve essere NULL.

*rect*<br/>
[in] Specifica la dimensione e posizione in pixel della barra di outlook.

*nID*<br/>
[in] Specifica l'ID del controllo. Deve essere diverso da altri ID utilizzato nell'applicazione di controllo.

*dwStyle*<br/>
[in] Specifica lo stile della barra di controllo desiderato. Per i valori possibili, vedere [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).

*dwControlBarStyle*<br/>
[in] Specifica gli stili definiti libreria speciali.

*pContext*<br/>
[in] Creare il contesto.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il metodo ha esito positivo. in caso contrario 0.

### <a name="remarks"></a>Note

Si costruisce un `CMFCOutlookBar` oggetto in due passaggi. Prima di chiamare il costruttore e quindi chiamare `Create`, che crea il controllo barra di outlook e lo collega al `CMFCOutlookBar` oggetto.

Visualizzare [cbasepane:: CreateEx](../../mfc/reference/cbasepane-class.md#createex) per l'elenco degli stili definiti libreria disponibili per essere specificato da *dwControlBarStyle*.

### <a name="example"></a>Esempio

L'esempio seguente illustra come usare il `Create` metodo del `CMFCOutlookBar` classe. Questo frammento di codice fa parte il [esempio di Outlook con più visualizzazioni](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_OutlookMultiViews#1](../../mfc/reference/codesnippet/cpp/cmfcoutlookbar-class_1.h)]
[!code-cpp[NVC_MFC_OutlookMultiViews#2](../../mfc/reference/codesnippet/cpp/cmfcoutlookbar-class_2.cpp)]

##  <a name="createcustompage"></a>  CMFCOutlookBar::CreateCustomPage

Crea una scheda sulla barra di Outlook personalizzata.

```cpp
CMFCOutlookBarPane* CreateCustomPage(
    LPCTSTR lpszPageName,
    BOOL bActivatePage=TRUE,
    DWORD dwEnabledDocking=CBRS_ALIGN_ANY,
    BOOL bEnableTextLabels=TRUE);
```

### <a name="parameters"></a>Parametri

*lpszPageName*<br/>
[in] L'etichetta della pagina.

*bActivatePage*<br/>
[in] Se TRUE, la pagina diventa attiva al momento della creazione.

*dwEnabledDocking*<br/>
[in] Una combinazione di flag CBRS_ALIGN_ che specifica i lati di ancoraggio abilitati quando la pagina viene scollegata.

*bEnableTextLabels*<br/>
[in] Se TRUE, le etichette di testo sono abilitate per i pulsanti che si trovano nella pagina.

### <a name="return-value"></a>Valore restituito

Puntatore a una pagina appena creata o NULL se non è riuscita la creazione.

### <a name="remarks"></a>Note

Usare questo metodo per consentire agli utenti di creare pagine personalizzate sulla barra di Outlook. È possibile creare fino a 100 pagine per ogni applicazione. Il controllo pagina ID avviare da 0xF000. La creazione ha esito negativo se il numero totale di pagine personalizzate della barra Outlook supera 100.

Uso [CMFCOutlookBar::RemoveCustomPage](#removecustompage) eliminare pagine personalizzate.

##  <a name="doesallowdyninsertbefore"></a>  CMFCOutlookBar::DoesAllowDynInsertBefore

Specifica se un utente può essere ancorata a un riquadro del bordo esterno della barra di Outlook.

```
DECLARE_MESSAGE_MAP virtual BOOL DoesAllowDynInsertBefore() const;
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce FALSE.

### <a name="remarks"></a>Note

Il framework chiama il `DoesAllowDynInsertBefore` metodo quando si cerca un percorso ancorare un riquadro dinamico. Se la funzione restituisce FALSE, il framework non supporta l'ancoraggio di un riquadro qualsiasi dinamico ai bordi esterni del riquadro.

In genere, si crea una barra di Outlook come un controllo statico non mobile. È possibile eseguire l'override di questa funzione in una classe derivata e restituisce TRUE per modificare questo comportamento.

> [!NOTE]
>  Poiché riquadri dinamici controllare lo stato ancorato riquadri statico durante l'ancoraggio, si dovrebbero riquadri di ancoraggio dinamici dopo riquadri statici laddove possibile.

##  <a name="floattab"></a>  CMFCOutlookBar::FloatTab

Separa un riquadro.

```cpp
virtual BOOL FloatTab(
    CWnd* pBar,
    int nTabID,
    AFX_DOCK_METHOD dockMethod,
    BOOL bHide);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
[in] Puntatore al riquadro e float.

*nTabID*<br/>
[in] Indice a base zero della scheda a float.

*dockMethod*<br/>
[in] Specifica il metodo da usare per spostare il riquadro.  Per altre informazioni, vedere [cbasetabbedpane:: Floattab](../../mfc/reference/cbasetabbedpane-class.md#floattab).

*bHide*<br/>
[in] TRUE per nascondere il riquadro prima mobile. in caso contrario, FALSE. A differenza della versione della classe di base di questo metodo, questo parametro non è un valore predefinito.

### <a name="return-value"></a>Valore restituito

TRUE se il riquadro resa; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo è simile [cbasetabbedpane:: Floattab](../../mfc/reference/cbasetabbedpane-class.md#floattab) ad eccezione del fatto che non abilita l'ultima scheda rimanente su un controllo barra di Outlook Mobile.

##  <a name="getbuttonsfont"></a>  CMFCOutlookBar::GetButtonsFont

Restituisce il tipo di carattere del testo nella pagina schede pulsante della barra di Outlook.

```cpp
CFont* GetButtonsFont() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore all'oggetto del tipo di carattere utilizzato per visualizzare il testo della barra di schede della pagina del pulsante in Outlook.

### <a name="remarks"></a>Note

Utilizzare questa funzione per recuperare il tipo di carattere utilizzato per visualizzare il testo nelle schede pulsante pagina Outlook. È possibile impostare il tipo di carattere chiamando sul [CMFCOutlookBar::SetButtonsFont](#setbuttonsfont).

##  <a name="gettabarea"></a>  CMFCOutlookBar::GetTabArea

Determina le dimensioni e posizione delle aree di scheda nella barra di Outlook.

```cpp
virtual void GetTabArea(
    CRect& rectTabAreaTop,
    CRect& rectTabAreaBottom) const;
```

### <a name="parameters"></a>Parametri

*rectTabAreaTop*<br/>
[out] Quando la funzione viene restituito, contiene le dimensioni e posizione (in coordinate client) dell'area della scheda superiore.

*rectTabAreaBottom*<br/>
[out] Quando la funzione restituisce, contiene le dimensioni e posizione (nelle coordinate client) dell'area della scheda nella parte inferiore.

### <a name="remarks"></a>Note

Il framework chiama questo metodo per determinare il tipo di ancoraggio nel riquadro di destinazione. Quando il framework determina che l'utente trascina il riquadro per essere ancorato sull'area della scheda del riquadro di destinazione, prova ad aggiungere il primo riquadro come nuova scheda del riquadro di destinazione. In caso contrario, tenta di ancoraggio del riquadro prima un'appropriata sul lato del riquadro di destinazione. Il framework crea un nuovo contenitore con un dispositivo di scorrimento per adattare il riquadro ancorato aggiuntivo.

L'implementazione predefinita di `GetTabArea` restituisce l'intera area client della barra di Outlook se la barra di Outlook è statica; ovvero, se la barra di Outlook non è float. In caso contrario, restituisce l'area che accettano i pulsanti di pagina nella parte superiore e inferiore del controllo barra di Outlook.

L'override del metodo nella classe derivata da `CMFCOutlookBar` per modificare questo comportamento.

##  <a name="ismode2003"></a>  CMFCOutlookBar::IsMode2003

Specifica se il comportamento della barra di Outlook simula quello di Microsoft Office Outlook 2003.

```cpp
BOOL IsMode2003() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la barra di Outlook è in esecuzione in modalità di Microsoft Office 2003. in caso contrario 0.

### <a name="remarks"></a>Note

È possibile abilitare questa modalità usando [CMFCOutlookBar::SetMode2003](#setmode2003).

##  <a name="onafteranimation"></a>  CMFCOutlookBar::OnAfterAnimation

Chiamata eseguita dal [CMFCOutlookBarTabCtrl::SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) dopo aver impostata la scheda attiva tramite l'animazione.

```cpp
virtual void OnAfterAnimation(int nPage);
```

### <a name="parameters"></a>Parametri

*nPage*<br/>
[in] Indice a base zero della scheda che è diventata attiva.

### <a name="remarks"></a>Note

L'effetto dell'impostazione nella scheda attiva dipende dal fatto che è stata abilitata l'animazione. Per altre informazioni, vedere [CMFCOutlookBarTabCtrl::EnableAnimation](../../mfc/reference/cmfcoutlookbartabctrl-class.md#enableanimation).

##  <a name="onbeforeanimation"></a>  CMFCOutlookBar::OnBeforeAnimation

Chiamata eseguita dal [CMFCOutlookBarTabCtrl::SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) prima di una scheda che verrà impostata come scheda attiva tramite l'animazione.

```cpp
virtual BOOL OnBeforeAnimation(int nPage);
```

### <a name="parameters"></a>Parametri

*nPage*<br/>
[in] Indice a base zero della scheda che sta per essere impostata come attiva.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'animazione deve essere usata in impostando la nuova scheda attiva oppure FALSE se l'animazione deve essere disabilitata.

### <a name="remarks"></a>Note

##  <a name="onscroll"></a>  CMFCOutlookBar::OnScroll

Chiamato dal framework se la barra di Outlook viene effettuato uno scorrimento verso l'alto o verso il basso.

```cpp
virtual void OnScroll(BOOL bDown);
```

### <a name="parameters"></a>Parametri

*bDown*<br/>
[in] TRUE se la barra di Outlook è scorrimento verso il basso oppure FALSE se lo scorrimento backup.

### <a name="remarks"></a>Note

##  <a name="removecustompage"></a>  CMFCOutlookBar::RemoveCustomPage

Rimuove una pagina personalizzata della scheda barra Outlook.

```cpp
BOOL RemoveCustomPage(
    UINT uiPage,
    CMFCOutlookBarTabCtrl* pTargetWnd);
```

### <a name="parameters"></a>Parametri

*uiPage*<br/>
[in] Indice in base zero della pagina della finestra di Outlook padre.

*pTargetWnd*<br/>
[in] Pointerto la finestra di Outlook padre.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la pagina personalizzata è stata rimossa correttamente; in caso contrario 0.

### <a name="remarks"></a>Note

Chiamare questa funzione per eliminare le pagine personalizzate. Quando la pagina viene rimosso il relativo ID di controllo viene restituito al pool di ID disponibile.

È necessario fornire un puntatore a [classe CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md) dell'oggetto in cui risiede la pagina deve essere rimossa attualmente. Si noti che un utente può spostare pagine rimovibili tra diverse barre di Outlook, ma le informazioni su una pagina personalizzata risiedono nell'oggetto barra di Outlook per il quale è stato chiamato [CMFCOutlookBar::CreateCustomPage](#createcustompage).

Uso [CBaseTabbedPane::GetUnderlyingWindow](../../mfc/reference/cbasetabbedpane-class.md#getunderlyingwindow) per ottenere un puntatore alla finestra di Outlook.

##  <a name="setbuttonsfont"></a>  CMFCOutlookBar::SetButtonsFont

Imposta il tipo di carattere del testo sui pulsanti della barra di Outlook.

```cpp
void SetButtonsFont(
    CFont* pFont,
    BOOL bRedraw=TRUE);
```

### <a name="parameters"></a>Parametri

*pFont*<br/>
[in] Specifica il nuovo tipo di carattere.

*bRedraw*<br/>
[in] Se TRUE, la barra di Outlook viene ridisegnata.

### <a name="remarks"></a>Note

Utilizzare questo metodo per impostare un tipo di carattere per il testo visualizzato sui pulsanti di pagina della scheda di outlook.

##  <a name="setmode2003"></a>  CMFCOutlookBar::SetMode2003

Specifica se il comportamento della barra di Outlook simula quello di Outlook 2003.

```cpp
void SetMode2003(BOOL bMode2003=TRUE);
```

### <a name="parameters"></a>Parametri

*bMode2003*<br/>
[in] Se TRUE, è abilitata la modalità di Office 2003.

### <a name="remarks"></a>Note

Utilizzare questa funzione per abilitare o disabilitare la modalità di Office 2003. In questa modalità, la barra di Outlook con una barra degli strumenti aggiuntivo con un pulsante di personalizzazione. Il comportamento della barra di Outlook è conforme al comportamento della barra di Outlook in Microsoft Office 2003.

Per impostazione predefinita, questa modalità è disabilitata.

> [!NOTE]
>  Questa funzione deve essere chiamata prima [CMFCOutlookBar::Create](#create).

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CBaseTabbedPane (classe)](../../mfc/reference/cbasetabbedpane-class.md)<br/>
[CMFCOutlookBarTabCtrl Class](../../mfc/reference/cmfcoutlookbartabctrl-class.md)<br/>
[Classe CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md)
