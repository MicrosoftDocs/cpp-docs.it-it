---
title: Classe CMFCVisualManagerWindows | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCVisualManagerWindows
dev_langs:
- C++
helpviewer_keywords:
- CMFCVisualManagerWindows class
ms.assetid: 568b6e9e-8e67-4477-9a3d-2981cbd09861
caps.latest.revision: 46
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 7b5b6a81af56dfabf733fbd5c6b018f5355164c8
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcvisualmanagerwindows-class"></a>Classe CMFCVisualManagerWindows
`CMFCVisualManagerWindows`riproduce l'aspetto di Microsoft Windows XP o Microsoft Vista quando l'utente seleziona un tema di Vista o Windows XP.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCVisualManagerWindows : public CMFCVisualManagerOfficeXP  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCVisualManagerWindows::CMFCVisualManagerWindows`|Costruttore predefinito.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCVisualManagerWindows::AlwaysHighlight3DTabs](#alwayshighlight3dtabs)|Il framework chiama questo metodo per determinare se le schede 3D sempre dovrebbero essere evidenziate nell'applicazione. (Esegue l'override di [CMFCVisualManager::AlwaysHighlight3DTabs](../../mfc/reference/cmfcvisualmanager-class.md#alwayshighlight3dtabs).)|  
|[CMFCVisualManagerWindows::DrawComboBorderWinXP](#drawcomboborderwinxp)|Esegue l'override di `CMFCVisualManager::DrawComboBorderWinXP`.|  
|[CMFCVisualManagerWindows::DrawComboDropButtonWinXP](#drawcombodropbuttonwinxp)|(Esegue l'override di [CMFCVisualManager::DrawComboDropButtonWinXP](../../mfc/reference/cmfcvisualmanager-class.md#drawcombodropbuttonwinxp).)|  
|[CMFCVisualManagerWindows::DrawPushButtonWinXP](#drawpushbuttonwinxp)|(Esegue l'override di [CMFCVisualManager::DrawPushButtonWinXP](../../mfc/reference/cmfcvisualmanager-class.md#drawpushbuttonwinxp).)|  
|[CMFCVisualManagerWindows::GetButtonExtraBorder](#getbuttonextraborder)|Il framework chiama questo metodo quando Disegna un pulsante della barra degli strumenti. (Esegue l'override di [CMFCVisualManager::GetButtonExtraBorder](../../mfc/reference/cmfcvisualmanager-class.md#getbuttonextraborder).)|  
|[CMFCVisualManagerWindows::GetCaptionButtonExtraBorder](#getcaptionbuttonextraborder)|(Esegue l'override di [CMFCVisualManager::GetCaptionButtonExtraBorder](../../mfc/reference/cmfcvisualmanager-class.md#getcaptionbuttonextraborder).)|  
|[CMFCVisualManagerWindows::GetDockingPaneCaptionExtraHeight](#getdockingpanecaptionextraheight)|Esegue l'override di `CMFCVisualManager::GetDockingPaneCaptionExtraHeight`.|  
|[CMFCVisualManagerWindows::GetHighlightedMenuItemTextColor](#gethighlightedmenuitemtextcolor)|Esegue l'override di `CMFCVisualManagerOfficeXP::GetHighlightedMenuItemTextColor`.|  
|[CMFCVisualManagerWindows::GetPopupMenuGap](#getpopupmenugap)|Esegue l'override di `CMFCVisualManagerOfficeXP::GetPopupMenuGap`.|  
|[CMFCVisualManagerWindows::GetToolbarButtonTextColor](#gettoolbarbuttontextcolor)|Esegue l'override di `CMFCVisualManagerOfficeXP::GetToolbarButtonTextColor`.|  
|[CMFCVisualManagerWindows::IsDefaultWinXPPopupButton](#isdefaultwinxppopupbutton)|(Esegue l'override di [CMFCVisualManager::IsDefaultWinXPPopupButton](../../mfc/reference/cmfcvisualmanager-class.md#isdefaultwinxppopupbutton).)|  
|[CMFCVisualManagerWindows::IsHighlightWholeMenuItem](#ishighlightwholemenuitem)|Esegue l'override di `CMFCVisualManagerOfficeXP::IsHighlightWholeMenuItem`.|  
|[CMFCVisualManagerWindows::IsOfficeStyleMenus](#isofficestylemenus)||  
|[CMFCVisualManagerWindows::IsOfficeXPStyleMenus](#isofficexpstylemenus)|Indica se il gestore visualizzazione implementa menu stile di Office XP. (Esegue l'override di [CMFCVisualManager::IsOfficeXPStyleMenus](../../mfc/reference/cmfcvisualmanager-class.md#isofficexpstylemenus).)|  
|[CMFCVisualManagerWindows::IsWindowsThemingSupported](#iswindowsthemingsupported)|Esegue l'override di `CMFCVisualManager::IsWindowsThemingSupported`.|  
|[CMFCVisualManagerWindows::IsWinXPThemeAvailable](#iswinxpthemeavailable)|Indica se un tema di Windows è disponibile. Un tema può essere un tema di Windows XP o un [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] tema.|  
|[CMFCVisualManagerWindows::OnDrawBarGripper](#ondrawbargripper)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawBarGripper`.|  
|[CMFCVisualManagerWindows::OnDrawBrowseButton](#ondrawbrowsebutton)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawBrowseButton`.|  
|[CMFCVisualManagerWindows::OnDrawButtonBorder](#ondrawbuttonborder)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawButtonBorder`.|  
|[CMFCVisualManagerWindows::OnDrawButtonSeparator](#ondrawbuttonseparator)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawButtonSeparator`.|  
|[CMFCVisualManagerWindows::OnDrawCaptionButton](#ondrawcaptionbutton)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawCaptionButton`.|  
|[CMFCVisualManagerWindows::OnDrawCaptionButtonIcon](#ondrawcaptionbuttonicon)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawCaptionButtonIcon`.|  
|[CMFCVisualManagerWindows::OnDrawCheckBoxEx](#ondrawcheckboxex)|(Esegue l'override di [CMFCVisualManager::OnDrawCheckBoxEx](../../mfc/reference/cmfcvisualmanager-class.md#ondrawcheckboxex).)|  
|[CMFCVisualManagerWindows::OnDrawComboBorder](#ondrawcomboborder)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawComboBorder`.|  
|[CMFCVisualManagerWindows::OnDrawComboDropButton](#ondrawcombodropbutton)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawComboDropButton`.|  
|[CMFCVisualManagerWindows::OnDrawControlBorder](#ondrawcontrolborder)|(Esegue l'override di [CMFCVisualManager::OnDrawControlBorder](../../mfc/reference/cmfcvisualmanager-class.md#ondrawcontrolborder).)|  
|[CMFCVisualManagerWindows::OnDrawEditBorder](#ondraweditborder)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawEditBorder`.|  
|[CMFCVisualManagerWindows::OnDrawExpandingBox](#ondrawexpandingbox)|(Esegue l'override di [CMFCVisualManager::OnDrawExpandingBox](../../mfc/reference/cmfcvisualmanager-class.md#ondrawexpandingbox).)|  
|[CMFCVisualManagerWindows::OnDrawFloatingToolbarBorder](#ondrawfloatingtoolbarborder)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawFloatingToolbarBorder`.|  
|[CMFCVisualManagerWindows::OnDrawHeaderCtrlBorder](#ondrawheaderctrlborder)|Il framework chiama questo metodo quando disegna il bordo intorno a un'istanza di [CMFCHeaderCtrl classe](../../mfc/reference/cmfcheaderctrl-class.md). (Esegue l'override di [CMFCVisualManager::OnDrawHeaderCtrlBorder](../../mfc/reference/cmfcvisualmanager-class.md#ondrawheaderctrlborder).)|  
|[CMFCVisualManagerWindows::OnDrawHeaderCtrlSortArrow](#ondrawheaderctrlsortarrow)|Il framework chiama questa funzione quando viene disegnata la freccia di ordinamento di un controllo intestazione. (Esegue l'override di [CMFCVisualManager::OnDrawHeaderCtrlSortArrow](../../mfc/reference/cmfcvisualmanager-class.md#ondrawheaderctrlsortarrow).)|  
|[CMFCVisualManagerWindows::OnDrawMenuBorder](#ondrawmenuborder)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawMenuBorder`.|  
|[CMFCVisualManagerWindows::OnDrawMenuSystemButton](#ondrawmenusystembutton)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawMenuSystemButton`.|  
|[CMFCVisualManagerWindows::OnDrawMiniFrameBorder](#ondrawminiframeborder)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawMiniFrameBorder`.|  
|[CMFCVisualManagerWindows::OnDrawOutlookPageButtonBorder](#ondrawoutlookpagebuttonborder)|Chiamato dal framework quando disegna il bordo di un pulsante di pagina di Outlook. (Esegue l'override di [CMFCVisualManager::OnDrawOutlookPageButtonBorder](../../mfc/reference/cmfcvisualmanager-class.md#ondrawoutlookpagebuttonborder).)|  
|[CMFCVisualManagerWindows::OnDrawPaneBorder](#ondrawpaneborder)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawPaneBorder`.|  
|[CMFCVisualManagerWindows::OnDrawPaneCaption](#ondrawpanecaption)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawPaneCaption`.|  
|[CMFCVisualManagerWindows::OnDrawPopupWindowButtonBorder](#ondrawpopupwindowbuttonborder)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawPopupWindowButtonBorder`.|  
|[CMFCVisualManagerWindows::OnDrawScrollButtons](#ondrawscrollbuttons)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawScrollButtons`.|  
|[CMFCVisualManagerWindows::OnDrawSeparator](#ondrawseparator)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawSeparator`.|  
|[CMFCVisualManagerWindows::OnDrawSpinButtons](#ondrawspinbuttons)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawSpinButtons`.|  
|[CMFCVisualManagerWindows::OnDrawStatusBarPaneBorder](#ondrawstatusbarpaneborder)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawStatusBarPaneBorder`.|  
|[CMFCVisualManagerWindows::OnDrawStatusBarProgress](#ondrawstatusbarprogress)|Il framework chiama questo metodo quando viene creato l'indicatore di stato [CMFCStatusBar](../../mfc/reference/cmfcstatusbar-class.md) oggetto. (Esegue l'override di [CMFCVisualManager::OnDrawStatusBarProgress](../../mfc/reference/cmfcvisualmanager-class.md#ondrawstatusbarprogress).)|  
|[CMFCVisualManagerWindows::OnDrawStatusBarSizeBox](#ondrawstatusbarsizebox)|Il framework chiama questo metodo quando Disegna la relativa dimensione un [CMFCStatusBar](../../mfc/reference/cmfcstatusbar-class.md). (Esegue l'override di [CMFCVisualManager::OnDrawStatusBarSizeBox](../../mfc/reference/cmfcvisualmanager-class.md#ondrawstatusbarsizebox).)|  
|[CMFCVisualManagerWindows::OnDrawTab](#ondrawtab)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawTab`.|  
|[CMFCVisualManagerWindows::OnDrawTabCloseButton](#ondrawtabclosebutton)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawTabCloseButton`.|  
|[CMFCVisualManagerWindows::OnDrawTabsButtonBorder](#ondrawtabsbuttonborder)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawTabsButtonBorder`.|  
|[CMFCVisualManagerWindows::OnDrawTask](#ondrawtask)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawTask`.|  
|[CMFCVisualManagerWindows::OnDrawTasksGroupAreaBorder](#ondrawtasksgroupareaborder)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawTasksGroupAreaBorder`.|  
|[CMFCVisualManagerWindows::OnDrawTasksGroupCaption](#ondrawtasksgroupcaption)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawTasksGroupCaption`.|  
|[CMFCVisualManagerWindows::OnDrawTearOffCaption](#ondrawtearoffcaption)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnDrawTearOffCaption`.|  
|[CMFCVisualManagerWindows::OnErasePopupWindowButton](#onerasepopupwindowbutton)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnErasePopupWindowButton`.|  
|[CMFCVisualManagerWindows::OnEraseTabsArea](#onerasetabsarea)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnEraseTabsArea`.|  
|[CMFCVisualManagerWindows::OnEraseTabsButton](#onerasetabsbutton)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnEraseTabsButton`.|  
|[CMFCVisualManagerWindows::OnEraseTabsFrame](#onerasetabsframe)|Il framework chiama questo metodo quando Cancella un frame in un [CMFCBaseTabCtrl classe](../../mfc/reference/cmfcbasetabctrl-class.md). (Esegue l'override di [CMFCVisualManager::OnEraseTabsFrame](../../mfc/reference/cmfcvisualmanager-class.md#onerasetabsframe).)|  
|[CMFCVisualManagerWindows::OnFillBarBackground](#onfillbarbackground)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnFillBarBackground`.|  
|[CMFCVisualManagerWindows::OnFillButtonInterior](#onfillbuttoninterior)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnFillButtonInterior`.|  
|[CMFCVisualManagerWindows::OnFillCommandsListBackground](#onfillcommandslistbackground)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnFillCommandsListBackground`.|  
|[CMFCVisualManagerWindows::OnFillMiniFrameCaption](#onfillminiframecaption)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnFillMiniFrameCaption`.|  
|[CMFCVisualManagerWindows::OnFillOutlookPageButton](#onfilloutlookpagebutton)|Il framework chiama questo metodo quando riempie l'area interna di un pulsante di pagina di Outlook. (Esegue l'override di [CMFCVisualManager::OnFillOutlookPageButton](../../mfc/reference/cmfcvisualmanager-class.md#onfilloutlookpagebutton).)|  
|[CMFCVisualManagerWindows::OnFillTasksGroupInterior](#onfilltasksgroupinterior)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnFillTasksGroupInterior`.|  
|[CMFCVisualManagerWindows::OnFillTasksPaneBackground](#onfilltaskspanebackground)|Il framework chiama questo metodo quando riempie lo sfondo di un [CMFCTasksPane](../../mfc/reference/cmfctaskspane-class.md) controllo. (Esegue l'override di [CMFCVisualManager::OnFillTasksPaneBackground](../../mfc/reference/cmfcvisualmanager-class.md#onfilltaskspanebackground).)|  
|[CMFCVisualManagerWindows::OnHighlightMenuItem](#onhighlightmenuitem)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnHighlightMenuItem`.|  
|[CMFCVisualManagerWindows::OnHighlightRarelyUsedMenuItems](#onhighlightrarelyusedmenuitems)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnHighlightRarelyUsedMenuItems`.|  
|[CMFCVisualManagerWindows::OnUpdateSystemColors](#onupdatesystemcolors)|Esegue l'override di `CMFCVisualManagerOfficeXP::OnUpdateSystemColors`.|  
|[CMFCVisualManagerWindows::SetOfficeStyleMenus](#setofficestylemenus)||  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCVisualManagerWindows::m_b3DTabsXPTheme](#m_b3dtabsxptheme)|Specifica se il tema di Windows XP vengono visualizzate le schede 3D.|  
  
## <a name="remarks"></a>Note  
 Utilizzare il `CMFCVisualManagerWindows` (classe) per modificare l'aspetto dell'applicazione per simulare la corrente di Windows XP o [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] tema nel computer in cui viene eseguita l'applicazione.  
  
 Tuttavia, un tema di Windows potrebbe non essere disponibile se l'applicazione è in esecuzione su una versione di Windows precedenti a Windows XP o se i temi sono disabilitati perché l'utente utilizza il **classico** visualizzazione. Se non è disponibile alcun tema, l'applicazione utilizza il gestore di visualizzazione predefinito definito in [CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare `CMFCVisualManagerWindows`. Questo frammento di codice fa parte di [esempio dimostrativo avviso Desktop](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DesktopAlertDemo&#10;](../../mfc/reference/codesnippet/cpp/cmfcvisualmanagerwindows-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)  
  
 [CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)  
  
 [CMFCVisualManagerOfficeXP](../../mfc/reference/cmfcvisualmanagerofficexp-class.md)  
  
 [CMFCVisualManagerWindows](../../mfc/reference/cmfcvisualmanagerwindows-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxvisualmanagerwindows.h  
  
##  <a name="a-namealwayshighlight3dtabsa--cmfcvisualmanagerwindowsalwayshighlight3dtabs"></a><a name="alwayshighlight3dtabs"></a>CMFCVisualManagerWindows::AlwaysHighlight3DTabs  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL AlwaysHighlight3DTabs() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namecmfcvisualmanagerwindowsa--cmfcvisualmanagerwindowscmfcvisualmanagerwindows"></a><a name="cmfcvisualmanagerwindows"></a>CMFCVisualManagerWindows::CMFCVisualManagerWindows  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCVisualManagerWindows(BOOL bIsTemporary = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bIsTemporary`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namedrawcomboborderwinxpa--cmfcvisualmanagerwindowsdrawcomboborderwinxp"></a><a name="drawcomboborderwinxp"></a>CMFCVisualManagerWindows::DrawComboBorderWinXP  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DrawComboBorderWinXP(
    CDC* pDC,  
    CRect rect,  
    BOOL bDisabled,  
    BOOL bIsDropped,  
    BOOL bIsHighlighted);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `bDisabled`  
 [in] `bIsDropped`  
 [in] `bIsHighlighted`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namedrawcombodropbuttonwinxpa--cmfcvisualmanagerwindowsdrawcombodropbuttonwinxp"></a><a name="drawcombodropbuttonwinxp"></a>CMFCVisualManagerWindows::DrawComboDropButtonWinXP  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DrawComboDropButtonWinXP(
    CDC* pDC,  
    CRect rect,  
    BOOL bDisabled,  
    BOOL bIsDropped,  
    BOOL bIsHighlighted);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `bDisabled`  
 [in] `bIsDropped`  
 [in] `bIsHighlighted`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namedrawpushbuttonwinxpa--cmfcvisualmanagerwindowsdrawpushbuttonwinxp"></a><a name="drawpushbuttonwinxp"></a>CMFCVisualManagerWindows::DrawPushButtonWinXP  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DrawPushButtonWinXP(
    CDC* pDC,  
    CRect rect,  
    CMFCButton* pButton,  
    UINT uiState);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `pButton`  
 [in] `uiState`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetbuttonextrabordera--cmfcvisualmanagerwindowsgetbuttonextraborder"></a><a name="getbuttonextraborder"></a>CMFCVisualManagerWindows::GetButtonExtraBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetButtonExtraBorder() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetcaptionbuttonextrabordera--cmfcvisualmanagerwindowsgetcaptionbuttonextraborder"></a><a name="getcaptionbuttonextraborder"></a>CMFCVisualManagerWindows::GetCaptionButtonExtraBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetCaptionButtonExtraBorder() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetdockingpanecaptionextraheighta--cmfcvisualmanagerwindowsgetdockingpanecaptionextraheight"></a><a name="getdockingpanecaptionextraheight"></a>CMFCVisualManagerWindows::GetDockingPaneCaptionExtraHeight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetDockingPaneCaptionExtraHeight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegethighlightedmenuitemtextcolora--cmfcvisualmanagerwindowsgethighlightedmenuitemtextcolor"></a><a name="gethighlightedmenuitemtextcolor"></a>CMFCVisualManagerWindows::GetHighlightedMenuItemTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetHighlightedMenuItemTextColor(CMFCToolBarMenuButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetpopupmenugapa--cmfcvisualmanagerwindowsgetpopupmenugap"></a><a name="getpopupmenugap"></a>CMFCVisualManagerWindows::GetPopupMenuGap  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetPopupMenuGap() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegettoolbarbuttontextcolora--cmfcvisualmanagerwindowsgettoolbarbuttontextcolor"></a><a name="gettoolbarbuttontextcolor"></a>CMFCVisualManagerWindows::GetToolbarButtonTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetToolbarButtonTextColor(
    CMFCToolBarButton* pButton,  
    CMFCVisualManager::AFX_BUTTON_STATE state);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
 [in] `state`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisdefaultwinxppopupbuttona--cmfcvisualmanagerwindowsisdefaultwinxppopupbutton"></a><a name="isdefaultwinxppopupbutton"></a>CMFCVisualManagerWindows::IsDefaultWinXPPopupButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsDefaultWinXPPopupButton(CMFCDesktopAlertWndButton* pButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameishighlightwholemenuitema--cmfcvisualmanagerwindowsishighlightwholemenuitem"></a><a name="ishighlightwholemenuitem"></a>CMFCVisualManagerWindows::IsHighlightWholeMenuItem  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsHighlightWholeMenuItem();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisofficestylemenusa--cmfcvisualmanagerwindowsisofficestylemenus"></a><a name="isofficestylemenus"></a>CMFCVisualManagerWindows::IsOfficeStyleMenus  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsOfficeStyleMenus() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisofficexpstylemenusa--cmfcvisualmanagerwindowsisofficexpstylemenus"></a><a name="isofficexpstylemenus"></a>CMFCVisualManagerWindows::IsOfficeXPStyleMenus  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsOfficeXPStyleMenus() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameiswindowsthemingsupporteda--cmfcvisualmanagerwindowsiswindowsthemingsupported"></a><a name="iswindowsthemingsupported"></a>CMFCVisualManagerWindows::IsWindowsThemingSupported  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsWindowsThemingSupported() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameiswinxpthemeavailablea--cmfcvisualmanagerwindowsiswinxpthemeavailable"></a><a name="iswinxpthemeavailable"></a>CMFCVisualManagerWindows::IsWinXPThemeAvailable  
 Determina se Windows XP o [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] tema è disponibile.  
  
```  
static BOOL IsWinXPThemeAvailible();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se un tema è disponibile. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo è valido per entrambi Windows XP e [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] temi.  
  
 `IsWinXPThemeAvailable`è identico a `CMFCVisualManagerWindows::IsWindowsThemingAvailable` ad eccezione del fatto che `IsWinXPThemeAvailable` è un metodo statico. Pertanto, creerà un gestore visualizzazione temporaneo se non esiste.  
  
 `IsWinXPThemeAvailable`Restituisce sempre 0 per le versioni di Windows precedenti a Windows XP.  
  
##  <a name="a-namemb3dtabsxpthemea--cmfcvisualmanagerwindowsmb3dtabsxptheme"></a><a name="m_b3dtabsxptheme"></a>CMFCVisualManagerWindows::m_b3DTabsXPTheme  
 Un parametro booleano che determina se il gestore visualizzazione Visualizza schede 3D.  
  
```  
AFX_IMPORT_DATA static BOOL m_b3DTabsXPTheme;  
```  
  
##  <a name="a-nameondrawbargrippera--cmfcvisualmanagerwindowsondrawbargripper"></a><a name="ondrawbargripper"></a>CMFCVisualManagerWindows::OnDrawBarGripper  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawBarGripper(
    CDC* pDC,  
    CRect rectGripper,  
    BOOL bHorz,  
    CBasePane* pBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rectGripper`  
 [in] `bHorz`  
 [in] `pBar`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawbrowsebuttona--cmfcvisualmanagerwindowsondrawbrowsebutton"></a><a name="ondrawbrowsebutton"></a>CMFCVisualManagerWindows::OnDrawBrowseButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnDrawBrowseButton(
    CDC* pDC,  
    CRect rect,  
    CMFCEditBrowseCtrl* pEdit,  
    CMFCVisualManager::AFX_BUTTON_STATE state,  
    COLORREF& clrText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `pEdit`  
 [in] `state`  
 [in] `clrText`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawbuttonbordera--cmfcvisualmanagerwindowsondrawbuttonborder"></a><a name="ondrawbuttonborder"></a>CMFCVisualManagerWindows::OnDrawButtonBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawButtonBorder(
    CDC* pDC,  
    CMFCToolBarButton* pButton,  
    CRect rect,  
    CMFCVisualManager::AFX_BUTTON_STATE state);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
 [in] `rect`  
 [in] `state`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawbuttonseparatora--cmfcvisualmanagerwindowsondrawbuttonseparator"></a><a name="ondrawbuttonseparator"></a>CMFCVisualManagerWindows::OnDrawButtonSeparator  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawButtonSeparator(
    CDC* pDC,  
    CMFCToolBarButton* pButton,  
    CRect rect,  
    CMFCVisualManager::AFX_BUTTON_STATE state,  
    BOOL bHorz);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
 [in] `rect`  
 [in] `state`  
 [in] `bHorz`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawcaptionbuttona--cmfcvisualmanagerwindowsondrawcaptionbutton"></a><a name="ondrawcaptionbutton"></a>CMFCVisualManagerWindows::OnDrawCaptionButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawCaptionButton(
    CDC* pDC,  
    CMFCCaptionButton* pButton,  
    BOOL bActive,  
    BOOL bHorz,  
    BOOL bMaximized,  
    BOOL bDisabled,  
    int nImageID = -1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
 [in] `bActive`  
 [in] `bHorz`  
 [in] `bMaximized`  
 [in] `bDisabled`  
 [in] `nImageID`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawcaptionbuttonicona--cmfcvisualmanagerwindowsondrawcaptionbuttonicon"></a><a name="ondrawcaptionbuttonicon"></a>CMFCVisualManagerWindows::OnDrawCaptionButtonIcon  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawCaptionButtonIcon(
    CDC* pDC,  
    CMFCCaptionButton* pButton,  
    CMenuImages::IMAGES_IDS id,  
    BOOL bActive,  
    BOOL bDisabled,  
    CPoint ptImage);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
 [in] `id`  
 [in] `bActive`  
 [in] `bDisabled`  
 [in] `ptImage`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawcheckboxexa--cmfcvisualmanagerwindowsondrawcheckboxex"></a><a name="ondrawcheckboxex"></a>CMFCVisualManagerWindows::OnDrawCheckBoxEx  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawCheckBoxEx(
    CDC* pDC,  
    CRect rect,  
    int nState,  
    BOOL bHighlighted,  
    BOOL bPressed,  
    BOOL bEnabled);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `nState`  
 [in] `bHighlighted`  
 [in] `bPressed`  
 [in] `bEnabled`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawcombobordera--cmfcvisualmanagerwindowsondrawcomboborder"></a><a name="ondrawcomboborder"></a>CMFCVisualManagerWindows::OnDrawComboBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawComboBorder(
    CDC* pDC,  
    CRect rect,  
    BOOL bDisabled,  
    BOOL bIsDropped,  
    BOOL bIsHighlighted,  
    CMFCToolBarComboBoxButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `bDisabled`  
 [in] `bIsDropped`  
 [in] `bIsHighlighted`  
 [in] `pButton`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawcombodropbuttona--cmfcvisualmanagerwindowsondrawcombodropbutton"></a><a name="ondrawcombodropbutton"></a>CMFCVisualManagerWindows::OnDrawComboDropButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawComboDropButton(
    CDC* pDC,  
    CRect rect,  
    BOOL bDisabled,  
    BOOL bIsDropped,  
    BOOL bIsHighlighted,  
    CMFCToolBarComboBoxButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `bDisabled`  
 [in] `bIsDropped`  
 [in] `bIsHighlighted`  
 [in] `pButton`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawcontrolbordera--cmfcvisualmanagerwindowsondrawcontrolborder"></a><a name="ondrawcontrolborder"></a>CMFCVisualManagerWindows::OnDrawControlBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawControlBorder(CWnd* pWndCtrl);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndCtrl`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondraweditbordera--cmfcvisualmanagerwindowsondraweditborder"></a><a name="ondraweditborder"></a>CMFCVisualManagerWindows::OnDrawEditBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawEditBorder(
    CDC* pDC,  
    CRect rect,  
    BOOL bDisabled,  
    BOOL bIsHighlighted,  
    CMFCToolBarEditBoxButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `bDisabled`  
 [in] `bIsHighlighted`  
 [in] `pButton`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawexpandingboxa--cmfcvisualmanagerwindowsondrawexpandingbox"></a><a name="ondrawexpandingbox"></a>CMFCVisualManagerWindows::OnDrawExpandingBox  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawExpandingBox(
    CDC* pDC,  
    CRect rect,  
    BOOL bIsOpened,  
    COLORREF colorBox);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `bIsOpened`  
 [in] `colorBox`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawfloatingtoolbarbordera--cmfcvisualmanagerwindowsondrawfloatingtoolbarborder"></a><a name="ondrawfloatingtoolbarborder"></a>CMFCVisualManagerWindows::OnDrawFloatingToolbarBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawFloatingToolbarBorder(
    CDC* pDC,  
    CMFCBaseToolBar* pToolBar,  
    CRect rectBorder,  
    CRect rectBorderSize);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pToolBar`  
 [in] `rectBorder`  
 [in] `rectBorderSize`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawheaderctrlbordera--cmfcvisualmanagerwindowsondrawheaderctrlborder"></a><a name="ondrawheaderctrlborder"></a>CMFCVisualManagerWindows::OnDrawHeaderCtrlBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawHeaderCtrlBorder(
    CMFCHeaderCtrl* pCtrl,  
    CDC* pDC,  
    CRect& rect,  
    BOOL bIsPressed,  
    BOOL bIsHighlighted);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pCtrl`  
 [in] `pDC`  
 [in] `rect`  
 [in] `bIsPressed`  
 [in] `bIsHighlighted`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawheaderctrlsortarrowa--cmfcvisualmanagerwindowsondrawheaderctrlsortarrow"></a><a name="ondrawheaderctrlsortarrow"></a>CMFCVisualManagerWindows::OnDrawHeaderCtrlSortArrow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawHeaderCtrlSortArrow(
    CMFCHeaderCtrl* pCtrl,  
    CDC* pDC,  
    CRect& rect,  
    BOOL bIsUp);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pCtrl`  
 [in] `pDC`  
 [in] `rect`  
 [in] `bIsUp`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawmenubordera--cmfcvisualmanagerwindowsondrawmenuborder"></a><a name="ondrawmenuborder"></a>CMFCVisualManagerWindows::OnDrawMenuBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawMenuBorder(
    CDC* pDC,  
    CMFCPopu* pMenu,  
    CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pMenu`  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawmenusystembuttona--cmfcvisualmanagerwindowsondrawmenusystembutton"></a><a name="ondrawmenusystembutton"></a>CMFCVisualManagerWindows::OnDrawMenuSystemButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawMenuSystemButton(
    CDC* pDC,  
    CRect rect,  
    UINT uiSystemCommand,  
    UINT nStyle,  
    BOOL bHighlight);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `uiSystemCommand`  
 [in] `nStyle`  
 [in] `bHighlight`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawminiframebordera--cmfcvisualmanagerwindowsondrawminiframeborder"></a><a name="ondrawminiframeborder"></a>CMFCVisualManagerWindows::OnDrawMiniFrameBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawMiniFrameBorder(
    CDC* pDC,  
    CPaneFrameWnd* pFrameWnd,  
    CRect rectBorder,  
    CRect rectBorderSize);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pFrameWnd`  
 [in] `rectBorder`  
 [in] `rectBorderSize`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawoutlookpagebuttonbordera--cmfcvisualmanagerwindowsondrawoutlookpagebuttonborder"></a><a name="ondrawoutlookpagebuttonborder"></a>CMFCVisualManagerWindows::OnDrawOutlookPageButtonBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawOutlookPageButtonBorder(
    CDC* pDC,  
    CRect& rectBtn,  
    BOOL bIsHighlighted,  
    BOOL bIsPressed);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rectBtn`  
 [in] `bIsHighlighted`  
 [in] `bIsPressed`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawpanebordera--cmfcvisualmanagerwindowsondrawpaneborder"></a><a name="ondrawpaneborder"></a>CMFCVisualManagerWindows::OnDrawPaneBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawPaneBorder(
    CDC* pDC,  
    CBasePane* pBar,  
    CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pBar`  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawpanecaptiona--cmfcvisualmanagerwindowsondrawpanecaption"></a><a name="ondrawpanecaption"></a>CMFCVisualManagerWindows::OnDrawPaneCaption  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnDrawPaneCaption(
    CDC* pDC,  
    CDockablePane* pBar,  
    BOOL bActive,  
    CRect rectCaption,  
    CRect rectButtons);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pBar`  
 [in] `bActive`  
 [in] `rectCaption`  
 [in] `rectButtons`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawpopupwindowbuttonbordera--cmfcvisualmanagerwindowsondrawpopupwindowbuttonborder"></a><a name="ondrawpopupwindowbuttonborder"></a>CMFCVisualManagerWindows::OnDrawPopupWindowButtonBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawPopupWindowButtonBorder(
    CDC* pDC,  
    CRect rectClient,  
    CMFCDesktopAlertWndButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rectClient`  
 [in] `pButton`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawscrollbuttonsa--cmfcvisualmanagerwindowsondrawscrollbuttons"></a><a name="ondrawscrollbuttons"></a>CMFCVisualManagerWindows::OnDrawScrollButtons  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawScrollButtons(
    CDC* pDC,  
    const CRect& rect,  
    const int nBorderSize,  
    int iImage,  
    BOOL bHilited);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `nBorderSize`  
 [in] `iImage`  
 [in] `bHilited`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawseparatora--cmfcvisualmanagerwindowsondrawseparator"></a><a name="ondrawseparator"></a>CMFCVisualManagerWindows::OnDrawSeparator  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawSeparator(
    CDC* pDC,  
    CBasePane* pBar,  
    CRect rect,  
    BOOL bIsHoriz);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pBar`  
 [in] `rect`  
 [in] `bIsHoriz`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawspinbuttonsa--cmfcvisualmanagerwindowsondrawspinbuttons"></a><a name="ondrawspinbuttons"></a>CMFCVisualManagerWindows::OnDrawSpinButtons  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawSpinButtons(
    CDC* pDC,  
    CRect rectSpin,  
    int nState,  
    BOOL bOrientation,  
    CMFCSpinButtonCtrl* pSpinCtrl);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rectSpin`  
 [in] `nState`  
 [in] `bOrientation`  
 [in] `pSpinCtrl`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawstatusbarpanebordera--cmfcvisualmanagerwindowsondrawstatusbarpaneborder"></a><a name="ondrawstatusbarpaneborder"></a>CMFCVisualManagerWindows::OnDrawStatusBarPaneBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawStatusBarPaneBorder(
    CDC* pDC,  
    CMFCStatusBar* pBar,  
    CRect rectPane,  
    UINT uiID,  
    UINT nStyle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pBar`  
 [in] `rectPane`  
 [in] `uiID`  
 [in] `nStyle`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawstatusbarprogressa--cmfcvisualmanagerwindowsondrawstatusbarprogress"></a><a name="ondrawstatusbarprogress"></a>CMFCVisualManagerWindows::OnDrawStatusBarProgress  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawStatusBarProgress(
    CDC* pDC,  
    CMFCStatusBar* pStatusBar,  
    CRect rectProgress,  
    int nProgressTotal,  
    int nProgressCurr,  
    COLORREF clrBar,  
    COLORREF clrProgressBarDest,  
    COLORREF clrProgressText,  
    BOOL bProgressText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pStatusBar`  
 [in] `rectProgress`  
 [in] `nProgressTotal`  
 [in] `nProgressCurr`  
 [in] `clrBar`  
 [in] `clrProgressBarDest`  
 [in] `clrProgressText`  
 [in] `bProgressText`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawstatusbarsizeboxa--cmfcvisualmanagerwindowsondrawstatusbarsizebox"></a><a name="ondrawstatusbarsizebox"></a>CMFCVisualManagerWindows::OnDrawStatusBarSizeBox  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawStatusBarSizeBox(
    CDC* pDC,  
    CMFCStatusBar* pStatBar,  
    CRect rectSizeBox);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pStatBar`  
 [in] `rectSizeBox`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawtaba--cmfcvisualmanagerwindowsondrawtab"></a><a name="ondrawtab"></a>CMFCVisualManagerWindows::OnDrawTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawTab(
    CDC* pDC,  
    CRect rectTab,  
    int iTab,  
    BOOL bIsActive,  
    const CMFCBaseTabCtrl* pTabWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rectTab`  
 [in] `iTab`  
 [in] `bIsActive`  
 [in] `pTabWnd`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawtabclosebuttona--cmfcvisualmanagerwindowsondrawtabclosebutton"></a><a name="ondrawtabclosebutton"></a>CMFCVisualManagerWindows::OnDrawTabCloseButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawTabCloseButton(
    CDC* pDC,  
    CRect rect,  
    const CMFCBaseTabCtrl* pTabWnd,  
    BOOL bIsHighlighted,  
    BOOL bIsPressed,  
    BOOL bIsDisabled);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `pTabWnd`  
 [in] `bIsHighlighted`  
 [in] `bIsPressed`  
 [in] `bIsDisabled`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawtabsbuttonbordera--cmfcvisualmanagerwindowsondrawtabsbuttonborder"></a><a name="ondrawtabsbuttonborder"></a>CMFCVisualManagerWindows::OnDrawTabsButtonBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawTabsButtonBorder(
    CDC* pDC,  
    CRect& rect,  
    CMFCButton* pButton,  
    UINT uiState,  
    CMFCBaseTabCtrl* pWndTab);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `pButton`  
 [in] `uiState`  
 [in] `pWndTab`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawtaska--cmfcvisualmanagerwindowsondrawtask"></a><a name="ondrawtask"></a>CMFCVisualManagerWindows::OnDrawTask  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawTask(
    CDC* pDC,  
    CMFCTasksPaneTask* pTask,  
    CImageList* pIcons,  
    BOOL bIsHighlighted = FALSE,  
    BOOL bIsSelected = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pTask`  
 [in] `pIcons`  
 [in] `bIsHighlighted`  
 [in] `bIsSelected`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawtasksgroupareabordera--cmfcvisualmanagerwindowsondrawtasksgroupareaborder"></a><a name="ondrawtasksgroupareaborder"></a>CMFCVisualManagerWindows::OnDrawTasksGroupAreaBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawTasksGroupAreaBorder(
    CDC* pDC,  
    CRect rect,  
    BOOL bSpecial = FALSE,  
    BOOL bNoTitle = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `bSpecial`  
 [in] `bNoTitle`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawtasksgroupcaptiona--cmfcvisualmanagerwindowsondrawtasksgroupcaption"></a><a name="ondrawtasksgroupcaption"></a>CMFCVisualManagerWindows::OnDrawTasksGroupCaption  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawTasksGroupCaption(
    CDC* pDC,  
    CMFCTasksPaneTaskGroup* pGroup,  
    BOOL bIsHighlighted = FALSE,  
    BOOL bIsSelected = FALSE,  
    BOOL bCanCollapse = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pGroup`  
 [in] `bIsHighlighted`  
 [in] `bIsSelected`  
 [in] `bCanCollapse`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawtearoffcaptiona--cmfcvisualmanagerwindowsondrawtearoffcaption"></a><a name="ondrawtearoffcaption"></a>CMFCVisualManagerWindows::OnDrawTearOffCaption  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawTearOffCaption(
    CDC* pDC,  
    CRect rect,  
    BOOL bIsActive);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `bIsActive`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonerasepopupwindowbuttona--cmfcvisualmanagerwindowsonerasepopupwindowbutton"></a><a name="onerasepopupwindowbutton"></a>CMFCVisualManagerWindows::OnErasePopupWindowButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnErasePopupWindowButton(
    CDC* pDC,  
    CRect rectClient,  
    CMFCDesktopAlertWndButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rectClient`  
 [in] `pButton`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonerasetabsareaa--cmfcvisualmanagerwindowsonerasetabsarea"></a><a name="onerasetabsarea"></a>CMFCVisualManagerWindows::OnEraseTabsArea  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnEraseTabsArea(
    CDC* pDC,  
    CRect rect,  
    const CMFCBaseTabCtrl* pTabWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `pTabWnd`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonerasetabsbuttona--cmfcvisualmanagerwindowsonerasetabsbutton"></a><a name="onerasetabsbutton"></a>CMFCVisualManagerWindows::OnEraseTabsButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnEraseTabsButton(
    CDC* pDC,  
    CRect rect,  
    CMFCButton* pButton,  
    CMFCBaseTabCtrl* pWndTab);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `pButton`  
 [in] `pWndTab`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonerasetabsframea--cmfcvisualmanagerwindowsonerasetabsframe"></a><a name="onerasetabsframe"></a>CMFCVisualManagerWindows::OnEraseTabsFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnEraseTabsFrame(
    CDC* pDC,  
    CRect rect,  
    const CMFCBaseTabCtrl* pTabWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `pTabWnd`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfillbarbackgrounda--cmfcvisualmanagerwindowsonfillbarbackground"></a><a name="onfillbarbackground"></a>CMFCVisualManagerWindows::OnFillBarBackground  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnFillBarBackground(
    CDC* pDC,  
    CBasePane* pBar,  
    CRect rectClient,  
    CRect rectClip,  
    BOOL bNCArea = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pBar`  
 [in] `rectClient`  
 [in] `rectClip`  
 [in] `bNCArea`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfillbuttoninteriora--cmfcvisualmanagerwindowsonfillbuttoninterior"></a><a name="onfillbuttoninterior"></a>CMFCVisualManagerWindows::OnFillButtonInterior  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnFillButtonInterior(
    CDC* pDC,  
    CMFCToolBarButton* pButton,  
    CRect rect,  
    CMFCVisualManager::AFX_BUTTON_STATE state);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
 [in] `rect`  
 [in] `state`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfillcommandslistbackgrounda--cmfcvisualmanagerwindowsonfillcommandslistbackground"></a><a name="onfillcommandslistbackground"></a>CMFCVisualManagerWindows::OnFillCommandsListBackground  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnFillCommandsListBackground(
    CDC* pDC,  
    CRect rect,  
    BOOL bIsSelected = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `bIsSelected`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfillminiframecaptiona--cmfcvisualmanagerwindowsonfillminiframecaption"></a><a name="onfillminiframecaption"></a>CMFCVisualManagerWindows::OnFillMiniFrameCaption  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnFillMiniFrameCaption(
    CDC* pDC,  
    CRect rectCaption,  
    CPaneFrameWnd* pFrameWnd,  
    BOOL bActive);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rectCaption`  
 [in] `pFrameWnd`  
 [in] `bActive`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfilloutlookpagebuttona--cmfcvisualmanagerwindowsonfilloutlookpagebutton"></a><a name="onfilloutlookpagebutton"></a>CMFCVisualManagerWindows::OnFillOutlookPageButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnFillOutlookPageButton(
    CDC* pDC,  
    const CRect& rect,  
    BOOL bIsHighlighted,  
    BOOL bIsPressed,  
    COLORREF& clrText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `bIsHighlighted`  
 [in] `bIsPressed`  
 [in] `clrText`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfilltasksgroupinteriora--cmfcvisualmanagerwindowsonfilltasksgroupinterior"></a><a name="onfilltasksgroupinterior"></a>CMFCVisualManagerWindows::OnFillTasksGroupInterior  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnFillTasksGroupInterior(
    CDC* pDC,  
    CRect rect,  
    BOOL bSpecial = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `bSpecial`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfilltaskspanebackgrounda--cmfcvisualmanagerwindowsonfilltaskspanebackground"></a><a name="onfilltaskspanebackground"></a>CMFCVisualManagerWindows::OnFillTasksPaneBackground  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnFillTasksPaneBackground(
    CDC* pDC,  
    CRect rectWorkArea);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rectWorkArea`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonhighlightmenuitema--cmfcvisualmanagerwindowsonhighlightmenuitem"></a><a name="onhighlightmenuitem"></a>CMFCVisualManagerWindows::OnHighlightMenuItem  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnHighlightMenuItem(
    CDC* pDC,  
    CMFCToolBarMenuButton* pButton,  
    CRect rect,  
    COLORREF& clrText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
 [in] `rect`  
 [in] `clrText`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonhighlightrarelyusedmenuitemsa--cmfcvisualmanagerwindowsonhighlightrarelyusedmenuitems"></a><a name="onhighlightrarelyusedmenuitems"></a>CMFCVisualManagerWindows::OnHighlightRarelyUsedMenuItems  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnHighlightRarelyUsedMenuItems(
    CDC* pDC,  
    CRect rectRarelyUsed);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rectRarelyUsed`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonupdatesystemcolorsa--cmfcvisualmanagerwindowsonupdatesystemcolors"></a><a name="onupdatesystemcolors"></a>CMFCVisualManagerWindows::OnUpdateSystemColors  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnUpdateSystemColors();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetofficestylemenusa--cmfcvisualmanagerwindowssetofficestylemenus"></a><a name="setofficestylemenus"></a>CMFCVisualManagerWindows::SetOfficeStyleMenus  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetOfficeStyleMenus(BOOL bOn = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bOn`  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)   
 [Classe CMFCVisualManagerOfficeXP](../../mfc/reference/cmfcvisualmanagerofficexp-class.md)

