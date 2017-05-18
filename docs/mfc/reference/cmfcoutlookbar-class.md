---
title: Classe CMFCOutlookBar | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CMFCOutlookBar class
ms.assetid: 2b335f71-ce99-4efd-b103-e65ba43ffc36
caps.latest.revision: 34
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: ff58cf786e4979d64aa2b5d7ad4d1a32b96bec3d
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcoutlookbar-class"></a>Classe CMFCOutlookBar
Riquadro a schede che presenta l'aspetto visivo del **Riquadro di navigazione** di Microsoft Outlook 2000 o Outlook 2003. Il `CMFCOutlookBar` oggetto contiene un [CMFCOutlookBarTabCtrl classe](../../mfc/reference/cmfcoutlookbartabctrl-class.md) oggetto e una serie di schede. Le schede possono essere [CMFCOutlookBarPane classe](../../mfc/reference/cmfcoutlookbarpane-class.md) oggetti o `CWnd`-oggetti derivati. All'utente la barra di Outlook viene visualizzata come una serie di pulsanti e un'area di visualizzazione. Quando l'utente fa clic su un pulsante, viene visualizzato il controllo o il riquadro del pulsante corrispondente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
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
|[CMFCOutlookBar::AllowDestroyEmptyTabbedPane](#allowdestroyemptytabbedpane)|Specifica se un riquadro a schede vuoto può essere eliminato. (Esegue l'override di [CBaseTabbedPane::AllowDestroyEmptyTabbedPane](../../mfc/reference/cbasetabbedpane-class.md#allowdestroyemptytabbedpane).)|  
|[CMFCOutlookBar::CanAcceptPane](#canacceptpane)|Determina se un altro riquadro può essere ancorato al riquadro della barra di Outlook. (Esegue l'override di CDockablePane::CanAcceptPane).|  
|[CMFCOutlookBar::CanSetCaptionTextToTabName](#cansetcaptiontexttotabname)|Determina se la didascalia per il riquadro a schede viene visualizzato lo stesso testo come la scheda attiva. (Esegue l'override di [CBaseTabbedPane::CanSetCaptionTextToTabName](../../mfc/reference/cbasetabbedpane-class.md#cansetcaptiontexttotabname).)|  
|[CMFCOutlookBar::Create](#create)|Crea il controllo barra di Outlook.|  
|[CMFCOutlookBar::CreateCustomPage](#createcustompage)|Crea una scheda della barra di Outlook personalizzata.|  
|`CMFCOutlookBar::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|[CMFCOutlookBar::DoesAllowDynInsertBefore](#doesallowdyninsertbefore)|Determina se un utente è possibile ancorare una barra di controllo all'esterno della barra di Outlook.|  
|[CMFCOutlookBar::FloatTab](#floattab)|Separa un riquadro, ma solo se il riquadro si trova in una scheda rimovibile. (Esegue l'override di [CBaseTabbedPane::FloatTab](../../mfc/reference/cbasetabbedpane-class.md#floattab).)|  
|[CMFCOutlookBar::GetButtonsFont](#getbuttonsfont)|Restituisce il tipo di carattere del testo dei pulsanti della barra di Outlook.|  
|[CMFCOutlookBar::GetTabArea](#gettabarea)|Restituisce le dimensioni e posizione delle aree scheda sulla barra di Outlook. (Esegue l'override di [CBaseTabbedPane::GetTabArea](../../mfc/reference/cbasetabbedpane-class.md#gettabarea).)|  
|`CMFCOutlookBar::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCOutlookBar::IsMode2003](#ismode2003)|Determina se il comportamento della barra di Outlook riproduce che di Microsoft Office Outlook 2003 (vedere la sezione Osservazioni).|  
|[CMFCOutlookBar::OnAfterAnimation](#onafteranimation)|Chiamato da [CMFCOutlookBarTabCtrl::SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) dopo aver impostata la scheda attiva tramite l'animazione.|  
|[CMFCOutlookBar::OnBeforeAnimation](#onbeforeanimation)|Chiamato da [CMFCOutlookBarTabCtrl::SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) prima di una scheda che verrà impostata come la scheda attiva tramite l'animazione.|  
|[CMFCOutlookBar::OnScroll](#onscroll)|Chiamato dal framework se la barra di Outlook è lo scorrimento verso l'alto o verso il basso.|  
|[CMFCOutlookBar::RemoveCustomPage](#removecustompage)|Rimuove una scheda della barra di Outlook personalizzata.|  
|[CMFCOutlookBar::SetButtonsFont](#setbuttonsfont)|Imposta il tipo di carattere del testo dei pulsanti della barra di Outlook.|  
|[CMFCOutlookBar::SetMode2003](#setmode2003)|Specifica se il comportamento della barra di Outlook riproduce che di Outlook 2003 (vedere la sezione Osservazioni).|  
  
## <a name="remarks"></a>Note  
 Per un esempio di una barra di Outlook, vedere il [esempio OutlookDemo: applicazione di OutlookDemo MFC](../../visual-cpp-samples.md).  
  
## <a name="implementing-the-outlook-bar"></a>Implementazione di barra di Outlook  
 Per usare i controlli `CMFCOutlookBar` nell'applicazione, attenersi alla procedura seguente:  
  
1.  Importare un oggetto `CMFCOutlookBar` nella classe della finestra cornice principale.  
  
 ```  
    class CMainFrame : public CMDIFrameWnd  
 { ...  
    CMFCOutlookBar m_wndOutlookBar;  
    CMFCOutlookBarPane m_wndOutlookPane;  
 ... };  
 ```  
2.  Durante l'elaborazione di `WM_CREATE` messaggio nel frame principale, chiamata di [CMFCOutlookBar::Create](#create) metodo per creare il controllo scheda della barra di Outlook.  
  
 ```  
    m_wndOutlookBar.Create (_T("Shortcuts"),
    this,
    CRect (0,
    0,
    100,
    100),
    ID_VIEW_OUTLOOKBAR,
    WS_CHILD | WS_VISIBLE | CBRS_LEFT);

 ```  
3.  Ottenere un puntatore all'oggetto sottostante `CMFCOutlookBarTabCtrl` utilizzando [CBaseTabbedPane::GetUnderlyingWindow](../../mfc/reference/cbasetabbedpane-class.md#getunderlyingwindow).  
  
 ```  
    CMFCOutlookBarTabCtrl* pOutlookBar = (CMFCOutlookBarTabCtrl*) m_wndOutlookBar.GetUnderlyingWindow ();

 ```  
4.  Creare un [CMFCOutlookBarPane classe](../../mfc/reference/cmfcoutlookbarpane-class.md) oggetto per ogni scheda che contiene i pulsanti.  
  
 ```  
    m_wndOutlookPane.Create (&m_wndOutlookBar,
    AFX_DEFAULT_TOOLBAR_STYLE,
    ID_OUTLOOK_PANE_GENERAL,
    AFX_CBRS_FLOAT | AFX_CBRS_RESIZE);
*// make the Outlook pane detachable (enable docking)  
    m_wndOutlookPane.EnableDocking (CBRS_ALIGN_ANY);
*// add buttons  
    m_wndOutlookPane.AddButton (theApp.LoadIcon (IDR_MAINFRAME), "About",
    ID_APP_ABOUT);

    m_wndOutlookPane.AddButton (theApp.LoadIcon (IDR_CUSTOM_OPEN_ICON), "Open",
    ID_FILE_OPEN);

 ```  
5.  Chiamare [CMFCOutlookBarTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) aggiungere ogni nuova scheda. Impostare il `bDetachable` parametro `FALSE` per creare una pagina non rimovibile. In alternativa, utilizzare [CMFCOutlookBarTabCtrl::AddControl](../../mfc/reference/cmfcoutlookbartabctrl-class.md#addcontrol) per aggiungere pagine scollegabile.  
  
 ```  
    pOutlookBar->AddTab (&m_wndOutlookPane, "General", (UINT) -1,
    TRUE);

 ```  
6.  Per aggiungere un `CWnd`-controllo derivato (ad esempio, [CMFCShellTreeCtrl classe](../../mfc/reference/cmfcshelltreectrl-class.md)) come una scheda, creare il controllo e la chiamata [CMFCOutlookBarTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) per aggiungerlo alla barra di Outlook.  
  
> [!NOTE]
>  È consigliabile utilizzare ID di controllo univoco per ogni [CMFCOutlookBarPane classe](../../mfc/reference/cmfcoutlookbarpane-class.md) oggetto e per ogni `CWnd`-oggetto derivato.  
  
 Per aggiungere o eliminare le nuove pagine in fase di esecuzione, utilizzare [CMFCOutlookBar::CreateCustomPage](#createcustompage) e [CMFCOutlookBar::RemoveCustomPage](#removecustompage).  
  
## <a name="outlook-2003-mode"></a>Modalità di Outlook 2003  
 In modalità di Outlook 2003, i pulsanti della scheda sono posizionati nella parte inferiore del riquadro barra di Outlook. Quando non vi sia spazio sufficiente per visualizzare i pulsanti, vengono visualizzati come icone in un'area simile a barra degli strumenti nella parte inferiore del riquadro.  
  
 Utilizzare [CMFCOutlookBar::SetMode2003](#setmode2003) per abilitare la modalità di Outlook 2003. Utilizzare [CMFCOutlookBarTabCtrl::SetToolbarImageList](../../mfc/reference/cmfcoutlookbartabctrl-class.md#settoolbarimagelist) per impostare la mappa di bit che contiene le icone visualizzate nella parte inferiore della barra di Outlook. Le icone nella mappa di bit devono essere ordinate in base all'indice della scheda.  
  
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
  
##  <a name="allowdestroyemptytabbedpane"></a>CMFCOutlookBar::AllowDestroyEmptyTabbedPane  
 Specifica se un riquadro a schede vuoto può essere eliminato.  
  
```  
virtual BOOL AllowDestroyEmptyTabbedPane() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se un riquadro a schede vuoto può essere eliminato; in caso contrario, `FALSE`. L'implementazione predefinita restituisce sempre `TRUE`.  
  
### <a name="remarks"></a>Note  
 Se un riquadro a schede vuoto non può essere eliminato, il framework nasconde invece.  
  
##  <a name="canacceptpane"></a>CMFCOutlookBar::CanAcceptPane  
 Determina se un altro riquadro può essere ancorato al riquadro della barra di Outlook.  
  
```  
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 Un puntatore a un altro riquadro ancorata in questo riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se un altro riquadro può essere ancorato al riquadro della barra di Outlook; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Se la barra di Outlook è in modalità di Outlook 2003, ancoraggio non è supportata, pertanto il valore restituito è `FALSE`.  
  
 Se il `pBar` parametro `NULL`, questo metodo restituisce `FALSE`.  
  
 In caso contrario, questo metodo si comporta come il metodo di base [CBasePane::CanAcceptPane](../../mfc/reference/cbasepane-class.md#canacceptpane), ad eccezione del fatto che anche se non è abilitata l'ancoraggio, una barra di Outlook comunque possibile attivare un'altra barra di Outlook per essere ancorato su di esso.  
  
##  <a name="cansetcaptiontexttotabname"></a>CMFCOutlookBar::CanSetCaptionTextToTabName  
 Determina se la didascalia per il riquadro a schede viene visualizzato lo stesso testo come la scheda attiva.  
  
```  
virtual BOOL CanSetCaptionTextToTabName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se Outlook barra didascalia della finestra viene impostata automaticamente per il testo della scheda attiva; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Utilizzare [CBaseTabbedPane::EnableSetCaptionTextToTabName](../../mfc/reference/cbasetabbedpane-class.md#enablesetcaptiontexttotabname) per abilitare o disabilitare questa funzionalità.  
  
 In modalità di Outlook 2003, questa impostazione è sempre abilitata.  
  
##  <a name="create"></a>CMFCOutlookBar::Create  
 Crea il controllo barra di Outlook.  
  
```  
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
 [in] `lpszCaption`  
 Specifica la didascalia della finestra.  
  
 [in] `pParentWnd`  
 Specifica un puntatore a una finestra padre. Non deve essere NULL.  
  
 [in] `rect`  
 Specifica le dimensioni e posizione in pixel della barra di outlook.  
  
 [in] `nID`  
 Specifica l'ID di controllo. Deve essere diverso da altri ID utilizzato nell'applicazione di controllo.  
  
 [in] `dwStyle`  
 Specifica lo stile della barra di controllo desiderato. Per i valori possibili, vedere [stili finestra](../../mfc/reference/window-styles.md).  
  
 [in] `dwControlBarStyle`  
 Specifica gli stili definiti libreria speciale.  
  
 [in] `pContext`  
 Creare il contesto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Costruire un `CMFCOutlookBar` oggetto in due passaggi. Prima di chiamare il costruttore e quindi chiamare `Create`, che crea il controllo barra di outlook e lo collega a di `CMFCOutlookBar` oggetto.  
  
 Vedere [CBasePane::CreateEx](../../mfc/reference/cbasepane-class.md#createex) per l'elenco degli stili definiti libreria disponibili per essere specificato da `dwControlBarStyle`.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `Create` metodo la `CMFCOutlookBar` classe. Questo frammento di codice fa parte di [Outlook più visualizzazioni](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_OutlookMultiViews n.&1;](../../mfc/reference/codesnippet/cpp/cmfcoutlookbar-class_1.h)]  
[!code-cpp[NVC_MFC_OutlookMultiViews n.&2;](../../mfc/reference/codesnippet/cpp/cmfcoutlookbar-class_2.cpp)]  
  
##  <a name="createcustompage"></a>CMFCOutlookBar::CreateCustomPage  
 Crea una scheda della barra di Outlook personalizzata.  
  
```  
CMFCOutlookBarPane* CreateCustomPage(
    LPCTSTR lpszPageName,  
    BOOL bActivatePage=TRUE,  
    DWORD dwEnabledDocking=CBRS_ALIGN_ANY,  
    BOOL bEnableTextLabels=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszPageName`  
 L'etichetta della pagina.  
  
 [in] `bActivatePage`  
 Se `TRUE`, la pagina diventa attiva al momento della creazione.  
  
 [in] `dwEnabledDocking`  
 Una combinazione di flag CBRS_ALIGN_ che specifica i lati di ancoraggio abilitati quando la pagina viene scollegata.  
  
 [in] `bEnableTextLabels`  
 Se `TRUE`, le etichette di testo sono abilitate per i pulsanti che si trovano nella pagina.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla pagina appena creato, o `NULL` se non è riuscita la creazione.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per consentire agli utenti di creare pagine personalizzate barra di Outlook. È possibile creare fino a 100 pagine per ogni applicazione. Il controllo della pagina ID avviare da 0xF000. La creazione non riesce se il numero totale di pagine personalizzate barra di Outlook è superiore a 100.  
  
 Utilizzare [CMFCOutlookBar::RemoveCustomPage](#removecustompage) eliminare pagine personalizzate.  
  
##  <a name="doesallowdyninsertbefore"></a>CMFCOutlookBar::DoesAllowDynInsertBefore  
 Specifica se un utente è possibile ancorare un riquadro all'esterno della barra di Outlook.  
  
```  
DECLARE_MESSAGE_MAP virtual BOOL DoesAllowDynInsertBefore() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'implementazione predefinita restituisce `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il framework chiama la `DoesAllowDynInsertBefore` metodo per la ricerca di un percorso ancorare un riquadro dinamico. Se la funzione restituisce `FALSE`, il framework non consente l'ancoraggio di qualsiasi riquadro dinamico ai bordi esterni del riquadro.  
  
 In genere, si crea una barra di Outlook come un controllo statico non a virgola mobile. È possibile eseguire l'override di questa funzione in una classe derivata e restituire `TRUE` per modificare questo comportamento.  
  
> [!NOTE]
>  Poiché riquadri dinamici verificare lo stato dei riquadri statici ancorati quando ancoraggio, si dovrebbero riquadri di ancoraggio dinamici dopo riquadri statici laddove possibile.  
  
##  <a name="floattab"></a>CMFCOutlookBar::FloatTab  
 Scorre un riquadro.  
  
```  
virtual BOOL FloatTab(
    CWnd* pBar,  
    int nTabID,  
    AFX_DOCK_METHOD dockMethod,  
    BOOL bHide);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 Puntatore al riquadro e float.  
  
 [in] `nTabID`  
 Indice in base zero della scheda da float.  
  
 [in] `dockMethod`  
 Specifica il metodo da utilizzare per spostare il riquadro.  Per ulteriori informazioni, vedere [CBaseTabbedPane::FloatTab](../../mfc/reference/cbasetabbedpane-class.md#floattab).  
  
 [in] `bHide`  
 `TRUE`Per nascondere il riquadro prima mobile. in caso contrario, `FALSE`. A differenza di quella classe di base di questo metodo, questo parametro non ha un valore predefinito.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro mobile; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo è simile [CBaseTabbedPane::FloatTab](../../mfc/reference/cbasetabbedpane-class.md#floattab) ad eccezione del fatto che non consente l'ultima scheda rimanente su un controllo barra di Outlook Mobile.  
  
##  <a name="getbuttonsfont"></a>CMFCOutlookBar::GetButtonsFont  
 Restituisce il tipo di carattere del testo nella pagina schede pulsante della barra di Outlook.  
  
```  
CFont* GetButtonsFont() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto tipo di carattere utilizzato per visualizzare il testo in Outlook barra schede pulsante della pagina.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per recuperare il tipo di carattere utilizzato per visualizzare il testo nelle schede pulsante pagina di Outlook. È possibile impostare il tipo di carattere chiamando su [CMFCOutlookBar::SetButtonsFont](#setbuttonsfont).  
  
##  <a name="gettabarea"></a>CMFCOutlookBar::GetTabArea  
 Determina le dimensioni e posizione delle aree scheda sulla barra di Outlook.  
  
```  
virtual void GetTabArea(
    CRect& rectTabAreaTop,  
    CRect& rectTabAreaBottom) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `rectTabAreaTop`  
 Quando la funzione restituisce, contiene le dimensioni e posizione (espressa in coordinate client) dell'area della scheda principale.  
  
 [out] `rectTabAreaBottom`  
 Quando la funzione restituisce, contiene le dimensioni e posizione (espressa in coordinate client) dell'area della scheda nella parte inferiore.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo per determinare il tipo di ancoraggio nel riquadro di destinazione. Quando il framework determina che l'utente trascina il riquadro ancorato sull'area della scheda del Pannello di destinazione, tenta di aggiungere il primo riquadro come una nuova scheda del Pannello di destinazione. In caso contrario, tenta di ancoraggio del riquadro prima un'appropriata sul lato del riquadro di destinazione. Il framework crea un nuovo contenitore con un dispositivo di scorrimento per contenere il riquadro ancorato aggiuntivo.  
  
 L'implementazione predefinita di `GetTabArea` restituisce l'area client intero della barra di Outlook se la barra di Outlook è statica; ovvero, se la barra di Outlook non è float. In caso contrario, restituisce l'area che accettano i pulsanti pagina nella parte superiore e inferiore del controllo barra di Outlook.  
  
 L'override del metodo nella classe derivata da `CMFCOutlookBar` per modificare questo comportamento.  
  
##  <a name="ismode2003"></a>CMFCOutlookBar::IsMode2003  
 Specifica se il comportamento della barra di Outlook riproduce che di Microsoft Office Outlook 2003.  
  
```  
BOOL IsMode2003() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la barra di Outlook è in esecuzione in modalità di Microsoft Office 2003. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È possibile attivare questa modalità utilizzando [CMFCOutlookBar::SetMode2003](#setmode2003).  
  
##  <a name="onafteranimation"></a>CMFCOutlookBar::OnAfterAnimation  
 Chiamato da [CMFCOutlookBarTabCtrl::SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) dopo aver impostata la scheda attiva tramite l'animazione.  
  
```  
virtual void OnAfterAnimation(int nPage);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nPage`  
 Indice in base zero della scheda che è stata attivata.  
  
### <a name="remarks"></a>Note  
 L'effetto visivo di impostazione nella scheda attiva dipende se è stata attivata l'animazione. Per ulteriori informazioni, vedere [CMFCOutlookBarTabCtrl::EnableAnimation](../../mfc/reference/cmfcoutlookbartabctrl-class.md#enableanimation).  
  
##  <a name="onbeforeanimation"></a>CMFCOutlookBar::OnBeforeAnimation  
 Chiamato da [CMFCOutlookBarTabCtrl::SetActiveTab](../../mfc/reference/cmfcoutlookbartabctrl-class.md#setactivetab) prima di una scheda che verrà impostata come la scheda attiva tramite l'animazione.  
  
```  
virtual BOOL OnBeforeAnimation(int nPage);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nPage`  
 Indice in base zero della scheda che sta per essere impostata come attiva.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se l'animazione deve essere utilizzato in impostando la nuova scheda attiva o `FALSE` se l'animazione deve essere disabilitato.  
  
### <a name="remarks"></a>Note  
  
##  <a name="onscroll"></a>CMFCOutlookBar::OnScroll  
 Chiamato dal framework se la barra di Outlook è lo scorrimento verso l'alto o verso il basso.  
  
```  
virtual void OnScroll(BOOL bDown);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bDown`  
 `TRUE`Se la barra di Outlook è scorrendo verso il basso, o `FALSE` se scorre backup.  
  
### <a name="remarks"></a>Note  
  
##  <a name="removecustompage"></a>CMFCOutlookBar::RemoveCustomPage  
 Rimuove una pagina della scheda barra Outlook personalizzata.  
  
```  
BOOL RemoveCustomPage(
    UINT uiPage,  
    CMFCOutlookBarTabCtrl* pTargetWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiPage`  
 Indice in base zero della pagina nella finestra di Outlook padre.  
  
 [in] `pTargetWnd`  
 Pointerto la finestra di Outlook padre.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la pagina personalizzata è stato rimosso correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per eliminare pagine personalizzate. Quando la pagina viene rimossa l'ID di controllo viene restituito al pool di ID disponibili.  
  
 È necessario fornire un puntatore a [CMFCOutlookBarTabCtrl classe](../../mfc/reference/cmfcoutlookbartabctrl-class.md) dell'oggetto nel quale risiede la pagina deve essere rimosso attualmente. Si noti che un utente può spostare pagine amovibili tra diverse barre di Outlook, ma le informazioni relative a una pagina personalizzata si trovano nell'oggetto barra di Outlook per il quale è stato chiamato [CMFCOutlookBar::CreateCustomPage](#createcustompage).  
  
 Utilizzare [CBaseTabbedPane::GetUnderlyingWindow](../../mfc/reference/cbasetabbedpane-class.md#getunderlyingwindow) per ottenere un puntatore alla finestra di Outlook.  
  
##  <a name="setbuttonsfont"></a>CMFCOutlookBar::SetButtonsFont  
 Imposta il tipo di carattere del testo dei pulsanti della barra di Outlook.  
  
```  
void SetButtonsFont(
    CFont* pFont,  
    BOOL bRedraw=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pFont`  
 Specifica il nuovo tipo di carattere.  
  
 [in] `bRedraw`  
 Se `TRUE`, la barra di Outlook verrà ridisegnata.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per impostare un tipo di carattere del testo da visualizzare sui pulsanti di pagina della scheda di outlook.  
  
##  <a name="setmode2003"></a>CMFCOutlookBar::SetMode2003  
 Specifica se il comportamento della barra di Outlook riproduce quella di Outlook 2003.  
  
```  
void SetMode2003(BOOL bMode2003=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bMode2003`  
 Se TRUE, è abilitata la modalità di Office 2003.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per abilitare o disabilitare la modalità di Office 2003. In questa modalità, la barra di Outlook è una barra degli strumenti aggiuntivo con un pulsante di personalizzazione. Il comportamento della barra di Outlook è conforme al comportamento della barra di Outlook in Microsoft Office 2003.  
  
 Per impostazione predefinita, questa modalità è disabilitata.  
  
> [!NOTE]
>  Questa funzione deve essere chiamata prima [CMFCOutlookBar::Create](#create).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CBaseTabbedPane](../../mfc/reference/cbasetabbedpane-class.md)   
 [Classe CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md)   
 [Classe CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md)

