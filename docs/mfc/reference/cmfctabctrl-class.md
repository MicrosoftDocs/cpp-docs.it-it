---
title: Classe CMFCTabCtrl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCTabCtrl
- AFXTABCTRL/CMFCTabCtrl
- AFXTABCTRL/CMFCTabCtrl::ActivateMDITab
- AFXTABCTRL/CMFCTabCtrl::AllowDestroyEmptyTabbedPane
- AFXTABCTRL/CMFCTabCtrl::AutoSizeWindow
- AFXTABCTRL/CMFCTabCtrl::CalcRectEdit
- AFXTABCTRL/CMFCTabCtrl::Create
- AFXTABCTRL/CMFCTabCtrl::EnableActiveTabCloseButton
- AFXTABCTRL/CMFCTabCtrl::EnableInPlaceEdit
- AFXTABCTRL/CMFCTabCtrl::EnableTabDocumentsMenu
- AFXTABCTRL/CMFCTabCtrl::EnsureVisible
- AFXTABCTRL/CMFCTabCtrl::GetDocumentIcon
- AFXTABCTRL/CMFCTabCtrl::GetFirstVisibleTabNum
- AFXTABCTRL/CMFCTabCtrl::GetResizeMode
- AFXTABCTRL/CMFCTabCtrl::GetScrollBar
- AFXTABCTRL/CMFCTabCtrl::GetTabArea
- AFXTABCTRL/CMFCTabCtrl::GetTabMaxWidth
- AFXTABCTRL/CMFCTabCtrl::GetTabsHeight
- AFXTABCTRL/CMFCTabCtrl::GetTabsRect
- AFXTABCTRL/CMFCTabCtrl::GetWndArea
- AFXTABCTRL/CMFCTabCtrl::HideActiveWindowHorzScrollBar
- AFXTABCTRL/CMFCTabCtrl::HideInactiveWindow
- AFXTABCTRL/CMFCTabCtrl::HideNoTabs
- AFXTABCTRL/CMFCTabCtrl::HideSingleTab
- AFXTABCTRL/CMFCTabCtrl::IsActiveInMDITabGroup
- AFXTABCTRL/CMFCTabCtrl::IsActiveTabBoldFont
- AFXTABCTRL/CMFCTabCtrl::IsActiveTabCloseButton
- AFXTABCTRL/CMFCTabCtrl::IsDrawFrame
- AFXTABCTRL/CMFCTabCtrl::IsFlatFrame
- AFXTABCTRL/CMFCTabCtrl::IsFlatTab
- AFXTABCTRL/CMFCTabCtrl::IsLeftRightRounded
- AFXTABCTRL/CMFCTabCtrl::IsMDITabGroup
- AFXTABCTRL/CMFCTabCtrl::IsOneNoteStyle
- AFXTABCTRL/CMFCTabCtrl::IsSharedScroll
- AFXTABCTRL/CMFCTabCtrl::IsTabDocumentsMenu
- AFXTABCTRL/CMFCTabCtrl::IsVS2005Style
- AFXTABCTRL/CMFCTabCtrl::ModifyTabStyle
- AFXTABCTRL/CMFCTabCtrl::OnDragEnter
- AFXTABCTRL/CMFCTabCtrl::OnDragOver
- AFXTABCTRL/CMFCTabCtrl::OnShowTabDocumentsMenu
- AFXTABCTRL/CMFCTabCtrl::SetActiveInMDITabGroup
- AFXTABCTRL/CMFCTabCtrl::SetActiveTab
- AFXTABCTRL/CMFCTabCtrl::SetActiveTabBoldFont
- AFXTABCTRL/CMFCTabCtrl::SetDrawFrame
- AFXTABCTRL/CMFCTabCtrl::SetFlatFrame
- AFXTABCTRL/CMFCTabCtrl::SetImageList
- AFXTABCTRL/CMFCTabCtrl::SetResizeMode
- AFXTABCTRL/CMFCTabCtrl::SetTabMaxWidth
- AFXTABCTRL/CMFCTabCtrl::StopResize
- AFXTABCTRL/CMFCTabCtrl::SynchronizeScrollBar
- AFXTABCTRL/CMFCTabCtrl::m_bEnableActivate
dev_langs:
- C++
helpviewer_keywords:
- CMFCTabCtrl [MFC], ActivateMDITab
- CMFCTabCtrl [MFC], AllowDestroyEmptyTabbedPane
- CMFCTabCtrl [MFC], AutoSizeWindow
- CMFCTabCtrl [MFC], CalcRectEdit
- CMFCTabCtrl [MFC], Create
- CMFCTabCtrl [MFC], EnableActiveTabCloseButton
- CMFCTabCtrl [MFC], EnableInPlaceEdit
- CMFCTabCtrl [MFC], EnableTabDocumentsMenu
- CMFCTabCtrl [MFC], EnsureVisible
- CMFCTabCtrl [MFC], GetDocumentIcon
- CMFCTabCtrl [MFC], GetFirstVisibleTabNum
- CMFCTabCtrl [MFC], GetResizeMode
- CMFCTabCtrl [MFC], GetScrollBar
- CMFCTabCtrl [MFC], GetTabArea
- CMFCTabCtrl [MFC], GetTabMaxWidth
- CMFCTabCtrl [MFC], GetTabsHeight
- CMFCTabCtrl [MFC], GetTabsRect
- CMFCTabCtrl [MFC], GetWndArea
- CMFCTabCtrl [MFC], HideActiveWindowHorzScrollBar
- CMFCTabCtrl [MFC], HideInactiveWindow
- CMFCTabCtrl [MFC], HideNoTabs
- CMFCTabCtrl [MFC], HideSingleTab
- CMFCTabCtrl [MFC], IsActiveInMDITabGroup
- CMFCTabCtrl [MFC], IsActiveTabBoldFont
- CMFCTabCtrl [MFC], IsActiveTabCloseButton
- CMFCTabCtrl [MFC], IsDrawFrame
- CMFCTabCtrl [MFC], IsFlatFrame
- CMFCTabCtrl [MFC], IsFlatTab
- CMFCTabCtrl [MFC], IsLeftRightRounded
- CMFCTabCtrl [MFC], IsMDITabGroup
- CMFCTabCtrl [MFC], IsOneNoteStyle
- CMFCTabCtrl [MFC], IsSharedScroll
- CMFCTabCtrl [MFC], IsTabDocumentsMenu
- CMFCTabCtrl [MFC], IsVS2005Style
- CMFCTabCtrl [MFC], ModifyTabStyle
- CMFCTabCtrl [MFC], OnDragEnter
- CMFCTabCtrl [MFC], OnDragOver
- CMFCTabCtrl [MFC], OnShowTabDocumentsMenu
- CMFCTabCtrl [MFC], SetActiveInMDITabGroup
- CMFCTabCtrl [MFC], SetActiveTab
- CMFCTabCtrl [MFC], SetActiveTabBoldFont
- CMFCTabCtrl [MFC], SetDrawFrame
- CMFCTabCtrl [MFC], SetFlatFrame
- CMFCTabCtrl [MFC], SetImageList
- CMFCTabCtrl [MFC], SetResizeMode
- CMFCTabCtrl [MFC], SetTabMaxWidth
- CMFCTabCtrl [MFC], StopResize
- CMFCTabCtrl [MFC], SynchronizeScrollBar
- CMFCTabCtrl [MFC], m_bEnableActivate
ms.assetid: d441385d-2c72-4203-96fa-deae2273da35
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: eae771aed819577708d945cb2a62997f5b45e7fd
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43199846"
---
# <a name="cmfctabctrl-class"></a>CMFCTabCtrl Class
Il `CMFCTabCtrl` classe fornisce funzionalità per un controllo struttura a schede. Il controllo scheda visualizza una finestra ancorabile con schede flat o tridimensionali nella parte superiore o inferiore. Le schede possono visualizzare testo e un'immagine e possono cambiare colore quando sono attive.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCTabCtrl : public CMFCBaseTabCtrl  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCTabCtrl::CMFCTabCtrl`|Costruttore predefinito.|  
|`CMFCTabCtrl::~CMFCTabCtrl`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCTabCtrl::ActivateMDITab](#activatemditab)|Consente di visualizzare la scheda specificata del controllo scheda corrente e imposta lo stato attivo in tale scheda.|  
|[CMFCTabCtrl::AllowDestroyEmptyTabbedPane](#allowdestroyemptytabbedpane)||  
|[CMFCTabCtrl::AutoSizeWindow](#autosizewindow)|Specifica se il framework deve ridimensionare l'area client di tutte le finestre di controllo scheda quando un elemento dell'interfaccia utente del controllo cambia scheda.|  
|[CMFCTabCtrl::CalcRectEdit](#calcrectedit)|Riduce le dimensioni dell'area della scheda specificata. Esegue l'override`CMFCBaseTabCtrl::CalcRectEdit`.|  
|[CMFCTabCtrl::Create](#create)|Crea il controllo struttura a schede e lo collega al `CMFCTabCtrl` oggetto.|  
|`CMFCTabCtrl::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|[CMFCTabCtrl::EnableActiveTabCloseButton](#enableactivetabclosebutton)|Mostra o nasconde il pulsante chiude ( **X**) nella scheda attiva.|  
|[CMFCTabCtrl::EnableInPlaceEdit](#enableinplaceedit)|Abilita o disabilita le etichette delle schede modificabile. (Esegue l'override [CMFCBaseTabCtrl::EnableInPlaceEdit](../../mfc/reference/cmfcbasetabctrl-class.md#enableinplaceedit).)|  
|[CMFCTabCtrl::EnableTabDocumentsMenu](#enabletabdocumentsmenu)|Sostituisce i due pulsanti di scorrimento le schede delle finestre con un pulsante che apre un menu di finestre a schede.|  
|[CMFCTabCtrl::EnsureVisible](#ensurevisible)|Garantisce che una scheda è visibile.|  
|[CMFCTabCtrl::GetDocumentIcon](#getdocumenticon)|Recupera il simbolo associato a una scheda in un menu di scelta rapida di finestre a schede.|  
|[CMFCTabCtrl::GetFirstVisibleTabNum](#getfirstvisibletabnum)|Recupera l'indice della prima scheda visibile nel controllo della scheda corrente.|  
|[CMFCTabCtrl::GetResizeMode](#getresizemode)|Recupera un valore che specifica come il controllo struttura a schede corrente può essere ridimensionato.|  
|[CMFCTabCtrl::GetScrollBar](#getscrollbar)|Recupera un puntatore all'oggetto barra di scorrimento che è associato il controllo struttura a schede.|  
|[CMFCTabCtrl::GetTabArea](#gettabarea)|Recupera il rettangolo di delimitazione dell'area di etichetta della scheda nella parte superiore o inferiore del controllo scheda. (Esegue l'override [CMFCBaseTabCtrl::GetTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#gettabarea).)|  
|`CMFCTabCtrl::GetTabFromPoint`|Recupera la scheda che contiene un punto specificato. (Esegue l'override [CMFCBaseTabCtrl::GetTabFromPoint](../../mfc/reference/cmfcbasetabctrl-class.md#gettabfrompoint).)|  
|[CMFCTabCtrl::GetTabMaxWidth](#gettabmaxwidth)|Recupera la larghezza massima di una scheda.|  
|[CMFCTabCtrl::GetTabsHeight](#gettabsheight)|Recupera l'altezza dell'area della scheda del controllo scheda corrente.|  
|[CMFCTabCtrl::GetTabsRect](#gettabsrect)|Recupera un rettangolo che delimita l'area della scheda del controllo scheda corrente. (Esegue l'override [CMFCBaseTabCtrl::GetTabsRect](../../mfc/reference/cmfcbasetabctrl-class.md#gettabsrect).)|  
|`CMFCTabCtrl::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCTabCtrl::GetWndArea](#getwndarea)|Recupera i limiti dell'area client del controllo scheda corrente.|  
|[CMFCTabCtrl::HideActiveWindowHorzScrollBar](#hideactivewindowhorzscrollbar)|Nasconde la barra di scorrimento orizzontale, se presente, della finestra attiva.|  
|[CMFCTabCtrl::HideInactiveWindow](#hideinactivewindow)|Specifica se il framework consiste nella visualizzazione finestre di controllo inattivo della scheda.|  
|[CMFCTabCtrl::HideNoTabs](#hidenotabs)|Abilita o disabilita l'area della scheda di disegno se nessuna scheda visibile.|  
|[CMFCTabCtrl::HideSingleTab](#hidesingletab)|Abilita o disabilita una scheda di disegno quando è presente una singola finestra a schede. (Esegue l'override [CMFCBaseTabCtrl::HideSingleTab](../../mfc/reference/cmfcbasetabctrl-class.md#hidesingletab).)|  
|[CMFCTabCtrl::IsActiveInMDITabGroup](#isactiveinmditabgroup)|Indica se la scheda corrente di un controllo struttura a schede è la scheda attiva in un gruppo di schede di interfaccia documento più.|  
|[CMFCTabCtrl::IsActiveTabBoldFont](#isactivetabboldfont)|Indica se il testo della scheda attiva viene visualizzato tramite un tipo di carattere grassetto.|  
|[CMFCTabCtrl::IsActiveTabCloseButton](#isactivetabclosebutton)|Indica se il pulsante Chiudi ( **X**) viene visualizzato in una scheda attiva o l'angolo superiore destro dell'area della scheda.|  
|[CMFCTabCtrl::IsDrawFrame](#isdrawframe)|Indica se la finestra a schede Disegna un rettangolo frame intorno a riquadri incorporati.|  
|[CMFCTabCtrl::IsFlatFrame](#isflatframe)|Indica se il frame intorno all'area della scheda è piatta o 3D.|  
|[CMFCTabCtrl::IsFlatTab](#isflattab)|Indica se l'aspetto delle schede del controllo scheda corrente è fissa o non.|  
|[CMFCTabCtrl::IsLeftRightRounded](#isleftrightrounded)|Indica se l'aspetto di sinistra e destra di una scheda del controllo corrente viene arrotondato.|  
|[CMFCTabCtrl::IsMDITabGroup](#ismditabgroup)|Indica se il controllo struttura a schede corrente è contenuto nell'area client di una finestra di interfaccia a documenti multipli.|  
|[CMFCTabCtrl::IsOneNoteStyle](#isonenotestyle)|Indica se il controllo scheda corrente viene visualizzato nello stile di Microsoft OneNote.|  
|`CMFCTabCtrl::IsPtInTabArea`|Determina se un punto si trova l'area della scheda. (Esegue l'override [CMFCBaseTabCtrl::IsPtInTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#isptintabarea).)|  
|[CMFCTabCtrl::IsSharedScroll](#issharedscroll)|Indica se il controllo struttura a schede corrente ha una barra di scorrimento che è possibile scorrere le tabulazioni come gruppo.|  
|[CMFCTabCtrl::IsTabDocumentsMenu](#istabdocumentsmenu)|Indica se il controllo struttura a schede Visualizza i pulsanti di scorrimento o un pulsante che visualizza un menu di finestre a schede.|  
|[CMFCTabCtrl::IsVS2005Style](#isvs2005style)|Indica se le schede vengono visualizzate nello stile di Visual Studio .NET 2005.|  
|[CMFCTabCtrl::ModifyTabStyle](#modifytabstyle)|Specifica l'aspetto delle schede del controllo corrente.|  
|`CMFCTabCtrl::MoveTab`|Sposta una scheda a un'altra posizione di tabulazione. (Esegue l'override [CMFCBaseTabCtrl::MoveTab](../../mfc/reference/cmfcbasetabctrl-class.md#movetab).)|  
|[CMFCTabCtrl::OnDragEnter](#ondragenter)|Chiamato dal framework quando il cursore prima di tutto viene trascinato nella finestra del controllo scheda.|  
|[CMFCTabCtrl::OnDragOver](#ondragover)|Chiamato dal framework durante un'operazione di trascinamento quando il mouse viene spostato nell'intervallo di destinazione di rilascio. (Esegue l'override [CMFCBaseTabCtrl::OnDragOver](../../mfc/reference/cmfcbasetabctrl-class.md#ondragover).)|  
|[CMFCTabCtrl::OnShowTabDocumentsMenu](#onshowtabdocumentsmenu)|Visualizza un menu di scelta rapida di finestre a schede, attende fino a quando l'utente seleziona una scheda e rende la scheda selezionata scheda attiva.|  
|`CMFCTabCtrl::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati per la [TranslateMessage](https://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](https://msdn.microsoft.com/library/windows/desktop/ms644934) funzioni di Windows. (Esegue l'override [CMFCBaseTabCtrl::PreTranslateMessage](../../mfc/reference/cmfcbasetabctrl-class.md#pretranslatemessage).)|  
|`CMFCTabCtrl::RecalcLayout`|Ricalcola il layout interno del controllo scheda. (Esegue l'override [CMFCBaseTabCtrl::RecalcLayout](../../mfc/reference/cmfcbasetabctrl-class.md#recalclayout).)|  
|[CMFCTabCtrl::SetActiveInMDITabGroup](#setactiveinmditabgroup)|Imposta la scheda corrente di un controllo struttura a schede come scheda attiva in un gruppo di schede di interfaccia documento più.|  
|[CMFCTabCtrl::SetActiveTab](#setactivetab)|Attiva una scheda. (Esegue l'override [CMFCBaseTabCtrl::SetActiveTab](../../mfc/reference/cmfcbasetabctrl-class.md#setactivetab).)|  
|[CMFCTabCtrl::SetActiveTabBoldFont](#setactivetabboldfont)|Abilita o disabilita l'uso di un tipo di carattere grassetto sulle schede attive.|  
|[CMFCTabCtrl::SetDrawFrame](#setdrawframe)|Abilita o disabilita drawinga rettangolo frame intorno a una barra incorporata.|  
|[CMFCTabCtrl::SetFlatFrame](#setflatframe)|Specifica se disegnare un semplice o un frame 3D attorno all'area della scheda.|  
|[CMFCTabCtrl::SetImageList](#setimagelist)|Specifica un elenco di immagini. (Esegue l'override [CMFCBaseTabCtrl::SetImageList](../../mfc/reference/cmfcbasetabctrl-class.md#setimagelist).)|  
|[CMFCTabCtrl::SetResizeMode](#setresizemode)|Specifica come può essere ridimensionato il controllo struttura a schede corrente e quindi visualizza nuovamente il controllo.|  
|[CMFCTabCtrl::SetTabMaxWidth](#settabmaxwidth)|Specifica la larghezza massima della scheda in una finestra a schede.|  
|[CMFCTabCtrl::StopResize](#stopresize)|Termina l'operazione di ridimensionamento corrente nel controllo struttura a schede.|  
|`CMFCTabCtrl::SwapTabs`|Inverte una coppia di schede. (Esegue l'override [CMFCBaseTabCtrl::SwapTabs](../../mfc/reference/cmfcbasetabctrl-class.md#swaptabs).)|  
|[CMFCTabCtrl::SynchronizeScrollBar](#synchronizescrollbar)|Disegna una barra di scorrimento orizzontale in un controllo struttura a schede che Visualizza schede flat.|  
  
### <a name="data-members"></a>Membri di dati  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CMFCTabCtrl::m_bEnableActivate](#m_benableactivate)|Impedisce la visualizzazione attiva che perde lo stato attivo quando viene inserita e abilitata una nuova scheda.|  
  
## <a name="remarks"></a>Note  
 Il `CMFCTabCtrl` supportate dalla classe:  
  
-   Scheda stili del controllo che includono 3D, semplice e fissa con una barra di scorrimento orizzontale condiviso.  
  
-   Che si trova nella parte superiore o inferiore della finestra di schede.  
  
-   Schede che consentono di visualizzare il testo, immagini o testo e immagini.  
  
-   Schede in cui cambiano colore quando è attiva la scheda.  
  
-   Modifiche di dimensione del bordo per le schede regolabile.  
  
-   Finestre a schede rimovibili.  
  
 Il `CMFCTabCtrl` classe può essere utilizzata con una finestra di dialogo, ma è stato concepito per le applicazioni che usano l'ancoraggio controllano barre, ad esempio Microsoft Excel e Visual Studio. Per altre informazioni, vedere [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).  
  
 Seguire questi passaggi per aggiungere un ridimensionabile, ancoraggio controllo struttura a schede nell'applicazione:  
  
1.  Creare un'istanza del [classe CTabbedPane](../../mfc/reference/ctabbedpane-class.md).  
  
2.  Chiamare [CDockablePane::Create](../../mfc/reference/cdockablepane-class.md#create).  
  
3.  Uso [cbasetabbedpane:: addTab](../../mfc/reference/cbasetabbedpane-class.md#addtab) oppure [cmfcbasetabctrl:: insertTab](../../mfc/reference/cmfcbasetabctrl-class.md#inserttab) per aggiungere nuove schede.  
  
4.  Chiamare [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#enabledocking) in modo che il controllo struttura a schede di ancoraggio corrente è possibile ancorare la finestra cornice principale.  
  
5.  Chiamare [CFrameWndEx::DockPane](../../mfc/reference/cframewndex-class.md#dockpane) per ancorare la finestra a schede nella cornice principale.  
  
 Per un esempio di come creare una finestra come una barra di controllo ancorabile a schede, vedere [classe CTabbedPane](../../mfc/reference/ctabbedpane-class.md). Per utilizzare `CMFCTabCtrl` come un controllo non ancoraggio, creare un `CMFCTabCtrl` dell'oggetto e quindi chiamare [CMFCTabCtrl::Create](#create).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)  
  
 [CMFCTabCtrl](../../mfc/reference/cmfctabctrl-class.md)  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi nella `CMFCTabCtrl` classe per configurare un `CMFCTabCtrl` oggetto. Nell'esempio viene illustrato come aggiungere una scheda, mostrare il pulsante chiude nella scheda attiva, abilitare le etichette delle schede modificabile e visualizzare un menu a comparsa di etichette di finestra a schede. In questo esempio fa parte il [campione raccolta stato](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StateCollection#1](../../mfc/reference/codesnippet/cpp/cmfctabctrl-class_1.h)]  
[!code-cpp[NVC_MFC_StateCollection#3](../../mfc/reference/codesnippet/cpp/cmfctabctrl-class_2.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtabctrl.h  
  
##  <a name="activatemditab"></a>  CMFCTabCtrl::ActivateMDITab  
 Consente di visualizzare la scheda specificata del controllo scheda corrente e imposta lo stato attivo in tale scheda.  
  
```  
void ActivateMDITab(int nTab = -1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nTab*  
 Indice a base zero di una scheda da visualizzare, oppure -1 per specificare la scheda attualmente attiva.  
  
##  <a name="allowdestroyemptytabbedpane"></a>  CMFCTabCtrl::AllowDestroyEmptyTabbedPane  
 Per altre informazioni, vedere il codice sorgente disponibile nel **VC\\atlmfc\\src\\mfc** cartella di installazione di Visual Studio.  
  
```  
virtual BOOL AllowDestroyEmptyTabbedPane() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Sempre TRUE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="autosizewindow"></a>  CMFCTabCtrl::AutoSizeWindow  
 Specifica se il framework deve ridimensionare l'area client di tutte le finestre di controllo scheda quando un elemento dell'interfaccia utente del controllo cambia scheda.  
  
```  
void AutoSizeWindow(BOOL bAutoSize = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bAutoSize*  
 TRUE per ridimensionare automaticamente le finestre di controllo scheda; in caso contrario, FALSE. Il valore predefinito è TRUE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="create"></a>  CMFCTabCtrl::Create  
 Crea il controllo struttura a schede e lo collega al `CMFCTabCtrl` oggetto.  
  
```  
BOOL Create(
    Style style,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID,  
    Location location=LOCATION_BOTTOM,  
    BOOL bCloseBtn=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *stile*  
 Stile del controllo struttura a schede. Per altre informazioni, vedere la sezione Note.  
  
 [in] *rect*  
 Un rettangolo che delimita il controllo struttura a schede.  
  
 [in] *pParentWnd*  
 Puntatore a una finestra padre. Non deve essere NULL.  
  
 [in] *nID*  
 L'ID del controllo scheda.  
  
 [in] *posizione*  
 La posizione delle schede. Il valore predefinito è LOCATION_BOTTOM. Per altre informazioni, vedere la sezione Note.  
  
 [in] *bCloseBtn*  
 TRUE per visualizzare un pulsante Chiudi nella scheda. in caso contrario, FALSE. Il valore predefinito è FALSE.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se ha esito positivo. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Nella tabella seguente vengono descritti i valori è possibile specificare per il *stile* parametro.  
  
|Stile|Descrizione|  
|-----------|-----------------|  
|STYLE_3D|Crea un controllo struttura a schede con un aspetto tridimensionale.|  
|STYLE_FLAT|Crea un controllo struttura a schede con schede flat.|  
|STYLE_FLAT_SHARED_HORZ_SCROLL|Crea un controllo struttura a schede con schede flat e una barra di scorrimento che è possibile scorrere le schede se essi vengono tagliati da una finestra padre.|  
|STYLE_3D_ONENOTE|Crea un controllo struttura a schede nello stile di Microsoft OneNote.|  
|STYLE_3D_VS2005|Crea un controllo struttura a schede nello stile di Microsoft Visual Studio 2005.|  
|STYLE_3D_ROUNDED|Crea un controllo struttura a schede con schede arrotondate nello stile di Microsoft Visual Studio 2005.|  
|STYLE_3D_ROUNDED_SCROLL|Crea un controllo struttura a schede con schede arrotondate e i pulsanti di scorrimento nello stile di Microsoft Visual Studio 2005.|  
  
 Nella tabella seguente sono elencati i valori è possibile specificare per il *posizione* parametro.  
  
|Percorso|Descrizione|  
|--------------|-----------------|  
|LOCATION_BOTTOM|Le schede si trovano nella parte inferiore del controllo scheda.|  
|LOCATION_TOP|Le schede si trovano nella parte superiore del controllo scheda.|  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra come usare il `Create` metodo nel `CMFCTabCtrl` classe. In questo esempio fa parte il [campione raccolta stato](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StateCollection#1](../../mfc/reference/codesnippet/cpp/cmfctabctrl-class_1.h)]  
[!code-cpp[NVC_MFC_StateCollection#2](../../mfc/reference/codesnippet/cpp/cmfctabctrl-class_3.cpp)]  
  
##  <a name="calcrectedit"></a>  CMFCTabCtrl::CalcRectEdit  
 Riduce le dimensioni dell'area della scheda specificata.  
  
```  
virtual void CalcRectEdit(CRect& rectEdit);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *rectEdit*  
 Rettangolo che specifica l'area di una scheda.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato quando si modifica l'etichetta di una scheda. Questo metodo riduce i lati sinistro e destro del rettangolo specificato da metà all'altezza della scheda corrente e riduzione del Balloon superiore e inferiore di un'unità.  
  
##  <a name="enableactivetabclosebutton"></a>  CMFCTabCtrl::EnableActiveTabCloseButton  
 Mostra o nasconde il pulsante chiude ( **X**) nella scheda attiva.  
  
```  
void EnableActiveTabCloseButton(BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bAttivare il*  
 TRUE per visualizzare il pulsante Chiudi nella scheda attiva; FALSE per visualizzare il pulsante di chiusura nell'angolo superiore destro dell'area della scheda. Il valore predefinito è TRUE.  
  
##  <a name="enableinplaceedit"></a>  CMFCTabCtrl::EnableInPlaceEdit  
 Abilita o disabilita le etichette delle schede modificabile.  
  
```  
virtual void EnableInPlaceEdit(BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bAttivare il*  
 TRUE per abilitare le etichette delle schede modificabile; FALSE per disattivare le etichette delle schede modificabile.  
  
### <a name="remarks"></a>Note  
  
##  <a name="enabletabdocumentsmenu"></a>  CMFCTabCtrl::EnableTabDocumentsMenu  
 Gli elementi Toggle tra un'interfaccia utente che usa due pulsanti per scorrere le schede delle finestre e un'interfaccia che consente di visualizzare un menu a comparsa di finestre a schede.  
  
```  
void EnableTabDocumentsMenu(BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bAttivare il*  
 TRUE per visualizzare un menu a comparsa di etichette di finestra a schede; FALSE per visualizzare i pulsanti di scorrimento in avanti e indietro. Il valore predefinito è TRUE.  
  
### <a name="remarks"></a>Note  
 Quando l'utente fa clic sull'etichetta di una scheda, il framework Visualizza la finestra a schede corrispondente. Se l'etichetta della scheda è visibile, la finestra a schede viene aperto senza cambiarne la posizione. Se l'utente seleziona un documento nel menu a comparsa e la finestra a schede corrispondente è fuori dallo schermo, la finestra a schede diventa la prima tabulazione.  
  
##  <a name="ensurevisible"></a>  CMFCTabCtrl::EnsureVisible  
 Garantisce che una scheda è visibile.  
  
```  
virtual BOOL EnsureVisible(int iTab);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *iTab*  
 Indice a base zero di una scheda.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se ha esito positivo; FALSE se il *iTab* indice del parametro non è valido.  
  
### <a name="remarks"></a>Note  
 Usare questo metodo per garantire che la scheda specificata è visibile. Il controllo struttura a schede scorre se necessario.  
  
##  <a name="getdocumenticon"></a>  CMFCTabCtrl::GetDocumentIcon  
 Recupera l'immagine associata a una scheda in un menu a comparsa di finestre a schede.  
  
```  
static HICON __stdcall GetDocumentIcon(UINT nCmdID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nCmdID*  
 L'ID di comando di una scheda in un menu a comparsa di finestre a schede.  
  
### <a name="return-value"></a>Valore restituito  
 L'handle di un'immagine bitmap.  
  
##  <a name="getfirstvisibletabnum"></a>  CMFCTabCtrl::GetFirstVisibleTabNum  
 Recupera l'indice della prima scheda visibile nel controllo della scheda corrente.  
  
```  
virtual int GetFirstVisibleTabNum() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Indice a base zero di una scheda del controllo tab.  
  
### <a name="remarks"></a>Note  
 Usare questo metodo solo quando il controllo struttura a schede viene visualizzato nello stile di Microsoft OneNote. Usare la [CMFCTabCtrl::IsOneNoteStyle](#isonenotestyle) metodo per determinare lo stile.  
  
##  <a name="getresizemode"></a>  CMFCTabCtrl::GetResizeMode  
 Recupera un valore che specifica come il controllo struttura a schede corrente può essere ridimensionato.  
  
```  
ResizeMode GetResizeMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Uno del `CMFCTabCtrl::ResizeMode` valori di enumerazione che specifica come può essere ridimensionato il controllo struttura a schede. Per un elenco di valori possibili, vedere la sezione Osservazioni del [CMFCTabCtrl::SetResizeMode](#setresizemode) (metodo).  
  
##  <a name="getscrollbar"></a>  CMFCTabCtrl::GetScrollBar  
 Recupera un puntatore all'oggetto barra di scorrimento che è associato il controllo struttura a schede.  
  
```  
CScrollBar* GetScrollBar();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un oggetto della barra di scorrimento o un valore NULL se il controllo struttura a schede non è stato creato usando lo stile STYLE_FLAT_SHARED_HORZ_SCROLL.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per accedere a barra di scorrimento incorporate del controllo scheda. Un oggetto della barra di scorrimento viene creato solo quando il controllo struttura a schede è lo stile STYLE_FLAT_SHARED_HORZ_SCROLL.  
  
##  <a name="gettabarea"></a>  CMFCTabCtrl::GetTabArea  
 Recupera il rettangolo di delimitazione dell'area di etichetta della scheda nella parte superiore o inferiore del controllo scheda.  
  
```  
void GetTabArea(
    CRect& rectTabAreaTop,  
    CRect& rectTabAreaBottom) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] *rectTabAreaTop*  
 Quando questo metodo termina, questo riferimento contiene un rettangolo che delimita l'area di etichetta scheda superiore. Il rettangolo è nelle coordinate del client. Questo riferimento è vuoto se è presente alcuna area della scheda etichetta nella parte superiore del controllo scheda.  
  
 [out] *rectTabAreaBottom*  
 Quando questo metodo termina, questo riferimento contiene un rettangolo che delimita l'area etichetta della scheda nella parte inferiore. Il rettangolo è nelle coordinate del client. Questo riferimento è vuoto se è presente alcuna area della scheda etichetta nella parte inferiore del controllo scheda.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per determinare le dimensioni e la posizione dell'area della scheda nella finestra a schede.  
  
##  <a name="gettabmaxwidth"></a>  CMFCTabCtrl::GetTabMaxWidth  
 Recupera la larghezza massima di una scheda.  
  
```  
int GetTabMaxWidth() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Larghezza massima di una scheda, espressa in pixel. Se il valore restituito è 0, l'ampiezza delle tabulazioni è illimitato.  
  
### <a name="remarks"></a>Note  
 Usare la [CMFCTabCtrl::SetTabMaxWidth](#settabmaxwidth) metodo per impostare la larghezza massima della scheda.  
  
##  <a name="gettabsheight"></a>  CMFCTabCtrl::GetTabsHeight  
 Recupera l'altezza dell'area della scheda del controllo scheda corrente.  
  
```  
virtual int GetTabsHeight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza dell'area della scheda se qualsiasi scheda è visibile, oppure zero se non sono visibili.  
  
##  <a name="gettabsrect"></a>  CMFCTabCtrl::GetTabsRect  
 Recupera un rettangolo che delimita l'area della scheda del controllo scheda corrente.  
  
```  
virtual void GetTabsRect(CRect& rect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] *rect*  
 Quando questo metodo termina, il *rect* parametro contiene un rettangolo che delimita l'area della scheda.  
  
##  <a name="getwndarea"></a>  CMFCTabCtrl::GetWndArea  
 Recupera i limiti dell'area client del controllo scheda corrente.  
  
```  
void GetWndArea(CRect& rect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] *rect*  
 Quando questo metodo termina, questo parametro contiene un rettangolo che delimita il controllo scheda corrente.  
  
### <a name="remarks"></a>Note  
  
##  <a name="hideactivewindowhorzscrollbar"></a>  CMFCTabCtrl::HideActiveWindowHorzScrollBar  
 Nasconde la barra di scorrimento orizzontale, se presente, nella finestra attiva.  
  
```  
void HideActiveWindowHorzScrollBar();
```  
  
### <a name="remarks"></a>Note  
 Usare questo metodo per impedire che il controllo struttura a schede lampeggia quando l'utente passa tra le pagine di controllo scheda.  
  
##  <a name="hideinactivewindow"></a>  CMFCTabCtrl::HideInactiveWindow  
 Specifica se il framework visualizza finestre di controllo inattivo della scheda.  
  
```  
void HideInactiveWindow(BOOL bHide = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bHide*  
 TRUE per non visualizzare una finestra inattiva; FALSE per visualizzare una finestra inattiva. Il valore predefinito è TRUE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="hidenotabs"></a>  CMFCTabCtrl::HideNoTabs  
 Abilita o disabilita la creazione dell'area della scheda se nessuna scheda visibile.  
  
```  
void HideNoTabs(BOOL bHide=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bHide*  
 True per abilitare il disegno dell'area della scheda. FALSE per disabilitare il disegno. Il valore predefinito è TRUE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="hidesingletab"></a>  CMFCTabCtrl::HideSingleTab  
 Abilita o disabilita il disegno scheda se è presente una singola finestra a schede.  
  
```  
virtual void HideSingleTab(BOOL bHide=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bHide*  
 TRUE per non creare una scheda per una singola finestra a schede; FALSE per disegnare una singola scheda. Il valore predefinito è TRUE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="isactiveinmditabgroup"></a>  CMFCTabCtrl::IsActiveInMDITabGroup  
 Indica se la scheda corrente di un controllo struttura a schede è la scheda attiva in un gruppo di schede di interfaccia documento più.  
  
```  
BOOL IsActiveInMDITabGroup() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la scheda corrente di un controllo struttura a schede è la scheda attiva in un gruppo di schede MDI; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 È possibile organizzare più finestre dei documenti in entrambi i gruppi di schede orizzontali o verticali e spostare facilmente i documenti da un gruppo di schede a un altro.  
  
##  <a name="isactivetabboldfont"></a>  CMFCTabCtrl::IsActiveTabBoldFont  
 Indica se il testo della scheda attiva viene visualizzato tramite un tipo di carattere grassetto.  
  
```  
BOOL IsActiveTabBoldFont() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se viene visualizzata la scheda attiva usando il tipo di carattere in grassetto; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Usare la [CMFCTabCtrl::SetActiveTabBoldFont](#setactivetabboldfont) metodo per modificare il tipo di carattere per la scheda attiva.  
  
##  <a name="isactivetabclosebutton"></a>  CMFCTabCtrl::IsActiveTabCloseButton  
 Indica se il pulsante Chiudi ( **X**) viene visualizzato in una scheda attiva o nell'angolo superiore destro dell'area della scheda.  
  
```  
virtual BOOL IsActiveTabCloseButton() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il pulsante chiude è visualizzato nella scheda attiva; FALSE se il pulsante chiude è visualizzato nell'angolo superiore destro dell'area della scheda.  
  
### <a name="remarks"></a>Note  
  
##  <a name="isdrawframe"></a>  CMFCTabCtrl::IsDrawFrame  
 Indica se la finestra a schede Disegna un rettangolo frame intorno a riquadri incorporati.  
  
```  
BOOL IsDrawFrame() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se viene disegnato un rettangolo frame; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Usare la [CMFCTabCtrl::SetDrawFrame](#setdrawframe) metodo per abilitare o disabilitare la creazione di un rettangolo di frame.  
  
##  <a name="isflatframe"></a>  CMFCTabCtrl::IsFlatFrame  
 Indica se il frame intorno all'area della scheda è piatta o 3D.  
  
```  
BOOL IsFlatFrame() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il frame intorno all'area della scheda è piatto; FALSO se il frame è tridimensionale.  
  
### <a name="remarks"></a>Note  
 Usare la [CMFCTabCtrl::SetFlatFrame](#setflatframe) metodo per modificare la modalità con cui il frame viene disegnato.  
  
##  <a name="isflattab"></a>  CMFCTabCtrl::IsFlatTab  
 Indica se l'aspetto delle schede del controllo scheda corrente è fissa o non.  
  
```  
virtual BOOL IsFlatTab() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'aspetto delle schede del controllo scheda corrente è semplice; in caso contrario, FALSE.  
  
##  <a name="isleftrightrounded"></a>  CMFCTabCtrl::IsLeftRightRounded  
 Indica se l'aspetto di sinistra e destra di una scheda del controllo corrente viene arrotondato.  
  
```  
virtual BOOL IsLeftRightRounded() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se i lati di ogni scheda viene arrotondato; in caso contrario, FALSE.  
  
##  <a name="ismditabgroup"></a>  CMFCTabCtrl::IsMDITabGroup  
 Indica se il controllo struttura a schede corrente è contenuto nell'area client di una finestra di interfaccia a documenti multipli.  
  
```  
virtual BOOL IsMDITabGroup() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il controllo struttura a schede corrente si trova in una finestra di area client MDI; in caso contrario, FALSE.  
  
##  <a name="isonenotestyle"></a>  CMFCTabCtrl::IsOneNoteStyle  
 Indica se il controllo scheda corrente viene visualizzato nello stile di Microsoft OneNote.  
  
```  
virtual BOOL IsOneNoteStyle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il controllo struttura a schede viene visualizzato nello stile di Microsoft OneNote; in caso contrario, FALSE.  
  
##  <a name="issharedscroll"></a>  CMFCTabCtrl::IsSharedScroll  
 Indica se il controllo struttura a schede corrente ha una barra di scorrimento che è possibile scorrere le tabulazioni come gruppo.  
  
```  
BOOL IsSharedScroll() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il controllo struttura a schede dispone di una barra di scorrimento condiviso. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce TRUE se il *stile* parametro delle [CMFCTabCtrl::Create](#create) metodo è STYLE_FLAT_SHARED_HORZ_SCROLL.  
  
##  <a name="istabdocumentsmenu"></a>  CMFCTabCtrl::IsTabDocumentsMenu  
 Indica se il controllo struttura a schede Visualizza i pulsanti di scorrimento o un pulsante che visualizza un menu di finestre a schede.  
  
```  
BOOL IsTabDocumentsMenu() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se vengono eseguito lo scorrimento finestre a schede usando un menu popup delle etichette di finestra a schede; FALSE se vengono eseguito lo scorrimento finestre a schede con pulsanti di scorrimento in avanti e indietro.  
  
### <a name="remarks"></a>Note  
 Usare la [CMFCTabCtrl::EnableTabDocumentsMenu](#enabletabdocumentsmenu) finestre a schede per specificare il metodo di scorrimento.  
  
##  <a name="isvs2005style"></a>  CMFCTabCtrl::IsVS2005Style  
 Indica se le schede vengono disegnate utilizzando lo stile di Visual Studio 2005.  
  
```  
virtual BOOL IsVS2005Style() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se le schede vengono disegnate utilizzando lo stile di Visual Studio 2005. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Usare la *stile* parametro delle [CMFCTabCtrl::Create](#create) metodo per specificare come vengono disegnate le schede.  
  
##  <a name="m_benableactivate"></a>  CMFCTabCtrl::m_bEnableActivate  
 Impedisce la visualizzazione attiva che perde lo stato attivo quando viene inserita e abilitata una nuova scheda.  
  
```  
static BOOL m_bEnableActivate;  
```  
  
### <a name="remarks"></a>Note  
 Lo stato attivo viene eseguito da una nuova finestra a schede in genere quando la scheda è inserita e reso attiva. Impostare il `CMFCTabCtrl::m_bEnableActivate` variabile membro su FALSE per mantenere lo stato attivo originale. Il valore predefinito è TRUE.  
  
##  <a name="modifytabstyle"></a>  CMFCTabCtrl::ModifyTabStyle  
 Specifica l'aspetto delle schede del controllo corrente.  
  
```  
BOOL ModifyTabStyle(Style style);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *stile*  
 Uno dei valori di enumerazione che specifica l'aspetto del controllo scheda. Per altre informazioni, vedere la tabella nella sezione Osservazioni.  
  
### <a name="return-value"></a>Valore restituito  
 Sempre TRUE.  
  
### <a name="remarks"></a>Note  
 Il valore della *stile* parametro può essere uno dei seguenti `CMFCTabCtrl::Style` enumerazioni.  
  
|nome|Descrizione|  
|----------|-----------------|  
|STYLE_3D|Vengono visualizzate schede tridimensionale, rettangolare con angoli arrotondati.|  
|STYLE_3D_ONENOTE|Vengono visualizzate schede tridimensionale che dispongono di uno lato verticale e il lato "uno" inclinato e che abbia gli angoli arrotondati.|  
|STYLE_3D_ROUNDED|Vengono visualizzate schede tridimensionale inclinate i lati e angoli arrotondati.|  
|STYLE_3D_ROUNDED_SCROLL|Vengono visualizzate schede tridimensionale inclinate i lati e angoli arrotondati. Se sono presenti più schede di quelle che possono essere visualizzati nello stesso momento, il framework visualizza una freccia a discesa e un menu di scelta delle schede per rendere attiva.|  
|STYLE_3D_SCROLLED|Vengono visualizzate schede tridimensionale, rettangolare. Se sono presenti più schede di quelle che possono essere visualizzati nello stesso momento, il framework visualizza una freccia a discesa e un menu di scelta delle schede per rendere attiva.|  
|STYLE_3D_VS2005|Consente di visualizzare tridimensionale, arrotondato qualora sia disponibile una inclinate e uno lato verticale.|  
|STYLE_FLAT|Vengono visualizzate schede bidimensionale che sono inclinate lati sinistro e destro.|  
|STYLE_FLAT_SHARED_HORZ_SCROLL|Vengono visualizzate schede bidimensionale. Se sono presenti più schede di quelle che possono essere visualizzati nello stesso momento, il framework Visualizza frecce di scorrimento alle estremità dell'area della scheda.|  
  
##  <a name="ondragenter"></a>  CMFCTabCtrl::OnDragEnter  
 Chiamato dal framework durante un'operazione di trascinamento e rilascio quando il cursore passa prima volta la finestra del controllo scheda corrente.  
  
```  
virtual DROPEFFECT OnDragEnter(
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pDataObject*  
 Punta a un oggetto dati che contiene i dati trascinati dall'utente.  
  
 [in] *dwKeyState*  
 Contiene lo stato dei tasti di modifica. Questo parametro è una combinazione bit per bit (OR) dei valori seguenti: MK_CONTROL MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON. Per altre informazioni, vedere la **parametri del messaggio** sezione [sull'Input del Mouse](/windows/desktop/inputdev/about-mouse-input).  
  
 [in] *punto*  
 Contiene la posizione corrente del cursore nelle coordinate del client.  
  
### <a name="return-value"></a>Valore restituito  
 Sempre DROPEFFECT_NONE, il che significa che l'obiettivo di rilascio non può accettare i dati.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per supportare un'operazione di trascinamento e rilascio. Eseguire l'override di questo metodo per implementare il comportamento personalizzato.  
  
 Per impostazione predefinita, questo metodo chiama solo `CMFCTabCtrl::OnDragOver`, che restituisce sempre DROPEFFECT_NONE.  
  
##  <a name="ondragover"></a>  CMFCTabCtrl::OnDragOver  
 Chiamato dal framework durante un'operazione di trascinamento quando il mouse viene spostato nell'intervallo di destinazione di rilascio.  
  
```  
virtual DROPEFFECT OnDragOver(
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pDataObject*  
 Puntatore a un [COleDataObject](../../mfc/reference/coledataobject-class.md) oggetto trascinato sull'obiettivo di rilascio.  
  
 [in] *dwKeyState*  
 Lo stato dei tasti di modifica, ovvero una combinazione bit per bit (OR) di MK_CONTROL MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON e MK_RBUTTON. Per altre informazioni, vedere "Parametri del messaggio" nella [sull'Input del Mouse](/windows/desktop/inputdev/about-mouse-input).  
  
 [in] *punto*  
 La posizione corrente del mouse.  
  
### <a name="return-value"></a>Valore restituito  
 Sempre DROPEFFECT_NONE.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo con l'implementazione personalizzata. Per altre informazioni, vedere la [CView::OnDragOver](../../mfc/reference/cview-class.md#ondragover) (metodo).  
  
##  <a name="onshowtabdocumentsmenu"></a>  CMFCTabCtrl::OnShowTabDocumentsMenu  
 Visualizza un menu a comparsa di finestre a schede, attende fino a quando l'utente seleziona una scheda e rende la scheda selezionata scheda attiva.  
  
```  
virtual void OnShowTabDocumentsMenu(CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *punto*  
 Le coordinate del punto in cui visualizzare il menu di scelta rapida.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setactiveinmditabgroup"></a>  CMFCTabCtrl::SetActiveInMDITabGroup  
 Imposta la scheda corrente di un controllo struttura a schede come scheda attiva in un gruppo di schede di interfaccia documento più.  
  
```  
void SetActiveInMDITabGroup(BOOL bActive);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bActive*  
 TRUE per rendere la scheda corrente la scheda attiva; FALSE per non rendere inattiva la scheda corrente.  
  
### <a name="remarks"></a>Note  
 È possibile organizzare più finestre dei documenti in entrambi i gruppi di schede orizzontali o verticali e spostare facilmente i documenti da un gruppo di schede a un altro.  
  
##  <a name="setactivetab"></a>  CMFCTabCtrl::SetActiveTab  
 Attiva una scheda.  
  
```  
virtual BOOL SetActiveTab(int iTab);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *iTab*  
 Specifica l'indice in base zero della scheda da attivare.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la scheda specificata è stato reso attiva; FALSE se l'oggetto specificato *iTab* valore del parametro non è valido.  
  
### <a name="remarks"></a>Note  
 Questo metodo non invia la notifica AFX_WM_CHANGE_ACTIVE_TAB alla finestra padre del controllo scheda.  
  
 Il `SetActiveTab` chiama automaticamente il [CMFCTabCtrl::HideActiveWindowHorzScrollBar](#hideactivewindowhorzscrollbar) metodo per impedire che la schermata lampeggia.  
  
##  <a name="setactivetabboldfont"></a>  CMFCTabCtrl::SetActiveTabBoldFont  
 Abilita o disabilita l'uso di un tipo di carattere grassetto sulle schede attive.  
  
```  
void SetActiveTabBoldFont(BOOL bIsBold=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bIsBold*  
 TRUE per utilizzare un tipo di carattere grassetto per visualizzare l'etichetta della scheda attiva; FALSE per utilizzare il tipo di carattere standard per visualizzare l'etichetta. Il valore predefinito è TRUE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setdrawframe"></a>  CMFCTabCtrl::SetDrawFrame  
 Specifica se viene disegnato un rettangolo frame intorno a una barra incorporata.  
  
```  
void SetDrawFrame(BOOL bDraw=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bDraw*  
 TRUE per visualizzare un rettangolo frame intorno a una barra incorporato. in caso contrario, FALSE. Il valore predefinito è TRUE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setflatframe"></a>  CMFCTabCtrl::SetFlatFrame  
 Specifica se disegnare un semplice o un frame 3D attorno all'area della scheda.  
  
```  
void SetFlatFrame(
    BOOL bFlat=TRUE,  
    BOOL bRepaint=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bFlat*  
 TRUE per tracciare un frame flat (2D) attorno all'area della scheda; FALSE per tracciare un frame tridimensionale (3D). Il valore predefinito è TRUE.  
  
 [in] *bRepaint*  
 TRUE per ridisegnare la finestra immediatamente. in caso contrario, FALSE. Il valore predefinito è TRUE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setimagelist"></a>  CMFCTabCtrl::SetImageList  
 Specifica un elenco di immagini.  
  
```  
virtual BOOL SetImageList(
    UINT uiID,  
    int cx=15,  
    COLORREF clrTransp=RGB(255, 0, 255));  
  
virtual BOOL SetImageList(HIMAGELIST hImageList);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *uiID*  
 L'ID di una risorsa della bitmap che contiene l'elenco di immagini.  
  
 [in] *cx*  
 La larghezza di ogni immagine, in pixel. Il valore predefinito è 15.  
  
 [in] *clrTransp*  
 Colore trasparente immagine. Le parti dell'immagine di questo oggetto color sarà trasparente. Il valore predefinito è il colore magenta, RGB(255,0,255).  
  
 [in] *hImageList*  
 Handle per un elenco di immagini precaricati.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se questo metodo ha esito positivo. FALSE se il controllo struttura a schede viene creato utilizzando uno stile flat o se il primo overload di metodo non è possibile caricare la bitmap specificata dal *uiID* parametro.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per impostare un elenco di immagini per il controllo struttura a schede. Le immagini dall'elenco immagini vengono visualizzate accanto all'etichetta della scheda. Questo metodo ricalcola l'altezza della scheda in modo che la scheda è dimensionata per contenere l'immagine e testo.  
  
 Usare la [cmfcbasetabctrl:: addTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab) metodo che viene ereditata dal controllo scheda per specificare l'indice dell'immagine da visualizzare.  
  
##  <a name="setresizemode"></a>  CMFCTabCtrl::SetResizeMode  
 Specifica come può essere ridimensionato il controllo struttura a schede corrente e quindi visualizza nuovamente il controllo.  
  
```  
void SetResizeMode(ResizeMode resizeMode);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *resizeMode*  
 Uno del `CMFCTabCtrl::ResizeMode` valori di enumerazione che specifica come può essere ridimensionato il controllo struttura a schede. Per un elenco di valori possibili, vedere la tabella nella sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 Il *resizeMode* parametro può essere uno dei seguenti `ResizeMode` valori di enumerazione.  
  
|nome|Descrizione|  
|----------|-----------------|  
|RESIZE_NO|Il controllo struttura a schede non può essere ridimensionato.|  
|RESIZE_VERT|Il controllo struttura a schede può essere ridimensionato in senso verticale, ma non in senso orizzontale.|  
|RESIZE_HORIZ|Il controllo struttura a schede può essere ridimensionato in senso orizzontale, ma non verticalmente.|  
  
##  <a name="settabmaxwidth"></a>  CMFCTabCtrl::SetTabMaxWidth  
 Specifica la larghezza massima della scheda in una finestra a schede.  
  
```  
void SetTabMaxWidth(int nTabMaxWidth);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nTabMaxWidth*  
 Larghezza massima della scheda, espressa in pixel.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per limitare la larghezza di ogni scheda in una finestra a schede. Questo metodo è utile se le schede presenti etichette molto lunghe. Il [CMFCTabCtrl](../../mfc/reference/cmfctabctrl-class.md) costruttore inizializza la larghezza massima della scheda su 0, che significa che la larghezza non è limitata.  
  
##  <a name="stopresize"></a>  CMFCTabCtrl::StopResize  
 Termina l'operazione di ridimensionamento corrente nel controllo struttura a schede.  
  
```  
void StopResize(BOOL bCancel);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bAnnulla*  
 TRUE per abbandonare l'operazione di ridimensionamento corrente. FALSE per il completamento operazione di ridimensionamento corrente. In entrambi i casi, il framework arresta disegnare il rettangolo di ridimensionamento.  
  
##  <a name="synchronizescrollbar"></a>  CMFCTabCtrl::SynchronizeScrollBar  
 Disegna una barra di scorrimento orizzontale in un controllo struttura a schede che Visualizza schede flat.  
  
```  
BOOL SynchronizeScrollBar(SCROLLINFO* pScrollInfo = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [out] *pScrollInfo*  
 Puntatore a un [SCROLLINFO](/windows/desktop/api/winuser/ns-winuser-tagscrollinfo) struttura o NULL. Quando questo metodo viene restituito, e se questo parametro non è NULL, la struttura contiene tutti i parametri della barra di scorrimento. Il valore predefinito è NULL.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il metodo ha esito positivo; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo influisce solo un controllo struttura a schede che Visualizza schede flat. La barra di scorrimento influenza tutte le schede allo stesso tempo.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)   
 [Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)   
 [Classe CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)
