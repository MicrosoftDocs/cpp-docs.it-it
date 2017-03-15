---
title: Classe CMFCVisualManagerOffice2007 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCVisualManagerOffice2007
dev_langs:
- C++
helpviewer_keywords:
- CMFCVisualManagerOffice2007 class
ms.assetid: fb687c74-6d08-4c72-8acf-27f75dda6d6b
caps.latest.revision: 35
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
ms.openlocfilehash: 0eeb4105677590daf4e6bc101996bbf06d038764
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcvisualmanageroffice2007-class"></a>Classe CMFCVisualManagerOffice2007
`CMFCVisualManagerOffice2007`fornisce un'applicazione un aspetto di Microsoft Office 2007.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCVisualManagerOffice2007 : public CMFCVisualManagerOffice2003  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCVisualManagerOffice2007::AlwaysHighlight3DTabs](#alwayshighlight3dtabs)||  
|[CMFCVisualManagerOffice2007::CleanStyle](#cleanstyle)||  
|[CMFCVisualManagerOffice2007::GetCaptionBarTextColor](#getcaptionbartextcolor)||  
|[CMFCVisualManagerOffice2007::GetHighlightedMenuItemTextColor](#gethighlightedmenuitemtextcolor)||  
|[CMFCVisualManagerOffice2007::GetMenuItemTextColor](#getmenuitemtextcolor)||  
|[CMFCVisualManagerOffice2007::GetNcBtnSize](#getncbtnsize)||  
|[CMFCVisualManagerOffice2007::GetRibbonBar](#getribbonbar)||  
|[CMFCVisualManagerOffice2007::GetRibbonHyperlinkTextColor](#getribbonhyperlinktextcolor)||  
|[CMFCVisualManagerOffice2007::GetRibbonPopupBorderSize](#getribbonpopupbordersize)||  
|[CMFCVisualManagerOffice2007::GetRibbonQuickAccessToolBarChevronOffset](#getribbonquickaccesstoolbarchevronoffset)||  
|[CMFCVisualManagerOffice2007::GetRibbonQuickAccessToolBarRightMargin](#getribbonquickaccesstoolbarrightmargin)||  
|[CMFCVisualManagerOffice2007::GetRibbonQuickAccessToolBarTextColor](#getribbonquickaccesstoolbartextcolor)||  
|[CMFCVisualManagerOffice2007::GetRibbonStatusBarTextColor](#getribbonstatusbartextcolor)||  
|[CMFCVisualManagerOffice2007::GetShowAllMenuItemsHeight](#getshowallmenuitemsheight)||  
|[CMFCVisualManagerOffice2007::GetStatusBarPaneTextColor](#getstatusbarpanetextcolor)||  
|`CMFCVisualManagerOffice2007::GetStyle`|Restituisce la combinazione di colori corrente di `CMFCVisualManagerOffice2007` GUI che, a sua volta, riproduce l'interfaccia utente grafica di Microsoft Office 2007.|  
|[CMFCVisualManagerOffice2007::GetTabFrameColors](#gettabframecolors)||  
|[CMFCVisualManagerOffice2007::GetTabHorzMargin](#gettabhorzmargin)||  
|[CMFCVisualManagerOffice2007::GetTabTextColor](#gettabtextcolor)||  
|[CMFCVisualManagerOffice2007::GetToolbarButtonTextColor](#gettoolbarbuttontextcolor)||  
|[CMFCVisualManagerOffice2007::GetToolbarDisabledTextColor](#gettoolbardisabledtextcolor)||  
|[CMFCVisualManagerOffice2007::GetToolTipInfo](#gettooltipinfo)||  
|[CMFCVisualManagerOffice2007::IsHighlightWholeMenuItem](#ishighlightwholemenuitem)||  
|[CMFCVisualManagerOffice2007::IsLayeredRibbonKeyTip](#islayeredribbonkeytip)||  
|[CMFCVisualManagerOffice2007::IsOwnerDrawCaption](#isownerdrawcaption)||  
|[CMFCVisualManagerOffice2007::IsOwnerDrawMenuCheck](#isownerdrawmenucheck)||  
|[CMFCVisualManagerOffice2007::IsRibbonPresent](#isribbonpresent)||  
|[CMFCVisualManagerOffice2007::OnDrawBarGripper](#ondrawbargripper)||  
|[CMFCVisualManagerOffice2007::OnDrawButtonBorder](#ondrawbuttonborder)||  
|[CMFCVisualManagerOffice2007::OnDrawButtonSeparator](#ondrawbuttonseparator)||  
|[CMFCVisualManagerOffice2007::OnDrawCaptionBarInfoArea](#ondrawcaptionbarinfoarea)||  
|[CMFCVisualManagerOffice2007::OnDrawCheckBoxEx](#ondrawcheckboxex)||  
|[CMFCVisualManagerOffice2007::OnDrawComboBorder](#ondrawcomboborder)||  
|[CMFCVisualManagerOffice2007::OnDrawComboDropButton](#ondrawcombodropbutton)||  
|[CMFCVisualManagerOffice2007::OnDrawDefaultRibbonImage](#ondrawdefaultribbonimage)||  
|[CMFCVisualManagerOffice2007::OnDrawEditBorder](#ondraweditborder)||  
|[CMFCVisualManagerOffice2007::OnDrawFloatingToolbarBorder](#ondrawfloatingtoolbarborder)||  
|[CMFCVisualManagerOffice2007::OnDrawHeaderCtrlBorder](#ondrawheaderctrlborder)||  
|[CMFCVisualManagerOffice2007::OnDrawMenuBorder](#ondrawmenuborder)||  
|[CMFCVisualManagerOffice2007::OnDrawMenuCheck](#ondrawmenucheck)||  
|[CMFCVisualManagerOffice2007::OnDrawMenuItemButton](#ondrawmenuitembutton)||  
|[CMFCVisualManagerOffice2007::OnDrawMenuLabel](#ondrawmenulabel)||  
|[CMFCVisualManagerOffice2007::OnDrawMenuResizeBar](#ondrawmenuresizebar)||  
|[CMFCVisualManagerOffice2007::OnDrawMenuScrollButton](#ondrawmenuscrollbutton)||  
|[CMFCVisualManagerOffice2007::OnDrawMenuSystemButton](#ondrawmenusystembutton)||  
|[CMFCVisualManagerOffice2007::OnDrawMiniFrameBorder](#ondrawminiframeborder)||  
|[CMFCVisualManagerOffice2007::OnDrawOutlookBarSplitter](#ondrawoutlookbarsplitter)||  
|[CMFCVisualManagerOffice2007::OnDrawOutlookPageButtonBorder](#ondrawoutlookpagebuttonborder)||  
|[CMFCVisualManagerOffice2007::OnDrawPaneCaption](#ondrawpanecaption)||  
|[CMFCVisualManagerOffice2007::OnDrawPopupWindowCaption](#ondrawpopupwindowcaption)||  
|[CMFCVisualManagerOffice2007::OnDrawPropertySheetListItem](#ondrawpropertysheetlistitem)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonApplicationButton](#ondrawribbonapplicationbutton)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonButtonBorder](#ondrawribbonbuttonborder)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonButtonsGroup](#ondrawribbonbuttonsgroup)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonCaption](#ondrawribboncaption)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonCaptionButton](#ondrawribboncaptionbutton)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonCategory](#ondrawribboncategory)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonCategoryCaption](#ondrawribboncategorycaption)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonCategoryScroll](#ondrawribboncategoryscroll)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonCategoryTab](#ondrawribboncategorytab)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonCheckBoxOnList](#ondrawribboncheckboxonlist)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonDefaultPaneButton](#ondrawribbondefaultpanebutton)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonDefaultPaneButtonIndicator](#ondrawribbondefaultpanebuttonindicator)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonGalleryBorder](#ondrawribbongalleryborder)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonGalleryButton](#ondrawribbongallerybutton)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonKeyTip](#ondrawribbonkeytip)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonMainPanelButtonBorder](#ondrawribbonmainpanelbuttonborder)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonMainPanelFrame](#ondrawribbonmainpanelframe)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonMenuCheckFrame](#ondrawribbonmenucheckframe)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonPanel](#ondrawribbonpanel)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonPanelCaption](#ondrawribbonpanelcaption)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonProgressBar](#ondrawribbonprogressbar)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonRecentFilesFrame](#ondrawribbonrecentfilesframe)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonSliderChannel](#ondrawribbonsliderchannel)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonSliderThumb](#ondrawribbonsliderthumb)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonSliderZoomButton](#ondrawribbonsliderzoombutton)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonStatusBarPane](#ondrawribbonstatusbarpane)||  
|[CMFCVisualManagerOffice2007::OnDrawRibbonTabsFrame](#ondrawribbontabsframe)||  
|[CMFCVisualManagerOffice2007::OnDrawScrollButtons](#ondrawscrollbuttons)||  
|[CMFCVisualManagerOffice2007::OnDrawSeparator](#ondrawseparator)||  
|[CMFCVisualManagerOffice2007::OnDrawShowAllMenuItems](#ondrawshowallmenuitems)||  
|[CMFCVisualManagerOffice2007::OnDrawStatusBarPaneBorder](#ondrawstatusbarpaneborder)||  
|[CMFCVisualManagerOffice2007::OnDrawStatusBarSizeBox](#ondrawstatusbarsizebox)||  
|[CMFCVisualManagerOffice2007::OnDrawTab](#ondrawtab)||  
|[CMFCVisualManagerOffice2007::OnDrawTabsButtonBorder](#ondrawtabsbuttonborder)||  
|[CMFCVisualManagerOffice2007::OnDrawTask](#ondrawtask)||  
|[CMFCVisualManagerOffice2007::OnDrawTasksGroupCaption](#ondrawtasksgroupcaption)||  
|[CMFCVisualManagerOffice2007::OnDrawTearOffCaption](#ondrawtearoffcaption)||  
|[CMFCVisualManagerOffice2007::OnEraseMDIClientArea](#onerasemdiclientarea)||  
|[CMFCVisualManagerOffice2007::OnEraseTabsArea](#onerasetabsarea)||  
|[CMFCVisualManagerOffice2007::OnEraseTabsButton](#onerasetabsbutton)||  
|[CMFCVisualManagerOffice2007::OnEraseTabsFrame](#onerasetabsframe)||  
|[CMFCVisualManagerOffice2007::OnFillBarBackground](#onfillbarbackground)||  
|[CMFCVisualManagerOffice2007::OnFillButtonInterior](#onfillbuttoninterior)||  
|[CMFCVisualManagerOffice2007::OnFillCaptionBarButton](#onfillcaptionbarbutton)||  
|[CMFCVisualManagerOffice2007::OnFillHighlightedArea](#onfillhighlightedarea)||  
|[CMFCVisualManagerOffice2007::OnFillMiniFrameCaption](#onfillminiframecaption)||  
|[CMFCVisualManagerOffice2007::OnFillOutlookBarCaption](#onfilloutlookbarcaption)||  
|[CMFCVisualManagerOffice2007::OnFillOutlookPageButton](#onfilloutlookpagebutton)||  
|[CMFCVisualManagerOffice2007::OnFillPopupWindowBackground](#onfillpopupwindowbackground)||  
|[CMFCVisualManagerOffice2007::OnFillRibbonButton](#onfillribbonbutton)||  
|[CMFCVisualManagerOffice2007::OnFillRibbonEdit](#onfillribbonedit)||  
|[CMFCVisualManagerOffice2007::OnFillRibbonMainPanelButton](#onfillribbonmainpanelbutton)||  
|[CMFCVisualManagerOffice2007::OnFillRibbonMenuFrame](#onfillribbonmenuframe)||  
|[CMFCVisualManagerOffice2007::OnFillRibbonQuickAccessToolBarPopup](#onfillribbonquickaccesstoolbarpopup)||  
|[CMFCVisualManagerOffice2007::OnFillTab](#onfilltab)||  
|[CMFCVisualManagerOffice2007::OnHighlightMenuItem](#onhighlightmenuitem)||  
|[CMFCVisualManagerOffice2007::OnHighlightRarelyUsedMenuItems](#onhighlightrarelyusedmenuitems)||  
|[CMFCVisualManagerOffice2007::OnNcActivate](#onncactivate)||  
|[CMFCVisualManagerOffice2007::OnNcPaint](#onncpaint)||  
|[CMFCVisualManagerOffice2007::OnSetWindowRegion](#onsetwindowregion)||  
|[CMFCVisualManagerOffice2007::OnUpdateSystemColors](#onupdatesystemcolors)||  
|[CMFCVisualManagerOffice2007::SetResourceHandle](#setresourcehandle)||  
|`CMFCVisualManagerOffice2007::SetStyle`|Imposta la combinazione di colori di `CMFCVisualManagerOffice2007` GUI.|  
  
## <a name="remarks"></a>Note  
 Utilizzare `CMFCVisualManagerOffice2007` per modificare l'aspetto visivo dell'applicazione sono simili a quello di Microsoft Office 2007. Questo gestore visualizzazione richiede si imposta lo stile prima di utilizzarlo. Prima di passare il gestore visualizzazione a `CMFCVisualManager::SetDefaultManager`, è necessario chiamare la funzione statica `CMFCVisualManagerOffice2007::SetStyle`.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il gestore visualizzazione di Office 2007. Questo frammento di codice fa parte di [esempio dimostrativo avviso Desktop](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DesktopAlertDemo&#7;](../../mfc/reference/codesnippet/cpp/cmfcvisualmanageroffice2007-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)  
  
 [CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)  
  
 [CMFCVisualManagerOfficeXP](../../mfc/reference/cmfcvisualmanagerofficexp-class.md)  
  
 [CMFCVisualManagerOffice2003](../../mfc/reference/cmfcvisualmanageroffice2003-class.md)  
  
 [CMFCVisualManagerOffice2007](../../mfc/reference/cmfcvisualmanageroffice2007-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxvisualmanageroffice2007.h  
  
##  <a name="a-namealwayshighlight3dtabsa--cmfcvisualmanageroffice2007alwayshighlight3dtabs"></a><a name="alwayshighlight3dtabs"></a>CMFCVisualManagerOffice2007::AlwaysHighlight3DTabs  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL AlwaysHighlight3DTabs() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namecleanstylea--cmfcvisualmanageroffice2007cleanstyle"></a><a name="cleanstyle"></a>CMFCVisualManagerOffice2007::CleanStyle  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static void __stdcall CleanStyle();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetcaptionbartextcolora--cmfcvisualmanageroffice2007getcaptionbartextcolor"></a><a name="getcaptionbartextcolor"></a>CMFCVisualManagerOffice2007::GetCaptionBarTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetCaptionBarTextColor(CMFCCaptionBar* pBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegethighlightedmenuitemtextcolora--cmfcvisualmanageroffice2007gethighlightedmenuitemtextcolor"></a><a name="gethighlightedmenuitemtextcolor"></a>CMFCVisualManagerOffice2007::GetHighlightedMenuItemTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetHighlightedMenuItemTextColor(CMFCToolBarMenuButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetmenuitemtextcolora--cmfcvisualmanageroffice2007getmenuitemtextcolor"></a><a name="getmenuitemtextcolor"></a>CMFCVisualManagerOffice2007::GetMenuItemTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetMenuItemTextColor(
    CMFCToolBarMenuButton* pButton,  
    BOOL bHighlighted,  
    BOOL bDisabled);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
 [in] `bHighlighted`  
 [in] `bDisabled`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetncbtnsizea--cmfcvisualmanageroffice2007getncbtnsize"></a><a name="getncbtnsize"></a>CMFCVisualManagerOffice2007::GetNcBtnSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetNcBtnSize(BOOL bSmall) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bSmall`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetribbonbara--cmfcvisualmanageroffice2007getribbonbar"></a><a name="getribbonbar"></a>CMFCVisualManagerOffice2007::GetRibbonBar  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCRibbonBar* GetRibbonBar(CWnd* pWnd) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetribbonhyperlinktextcolora--cmfcvisualmanageroffice2007getribbonhyperlinktextcolor"></a><a name="getribbonhyperlinktextcolor"></a>CMFCVisualManagerOffice2007::GetRibbonHyperlinkTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetRibbonHyperlinkTextColor(CMFCRibbonLinkCtrl* pHyperLink);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pHyperLink`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetribbonpopupbordersizea--cmfcvisualmanageroffice2007getribbonpopupbordersize"></a><a name="getribbonpopupbordersize"></a>CMFCVisualManagerOffice2007::GetRibbonPopupBorderSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetRibbonPopupBorderSize(const CMFCRibbonPanelMenu* pPopup) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pPopup`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetribbonquickaccesstoolbarchevronoffseta--cmfcvisualmanageroffice2007getribbonquickaccesstoolbarchevronoffset"></a><a name="getribbonquickaccesstoolbarchevronoffset"></a>CMFCVisualManagerOffice2007::GetRibbonQuickAccessToolBarChevronOffset  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetRibbonQuickAccessToolBarChevronOffset();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetribbonquickaccesstoolbarrightmargina--cmfcvisualmanageroffice2007getribbonquickaccesstoolbarrightmargin"></a><a name="getribbonquickaccesstoolbarrightmargin"></a>CMFCVisualManagerOffice2007::GetRibbonQuickAccessToolBarRightMargin  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetRibbonQuickAccessToolBarRightMargin();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetribbonquickaccesstoolbartextcolora--cmfcvisualmanageroffice2007getribbonquickaccesstoolbartextcolor"></a><a name="getribbonquickaccesstoolbartextcolor"></a>CMFCVisualManagerOffice2007::GetRibbonQuickAccessToolBarTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetRibbonQuickAccessToolBarTextColor(BOOL bDisabled = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bDisabled`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetribbonstatusbartextcolora--cmfcvisualmanageroffice2007getribbonstatusbartextcolor"></a><a name="getribbonstatusbartextcolor"></a>CMFCVisualManagerOffice2007::GetRibbonStatusBarTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetRibbonStatusBarTextColor(CMFCRibbonStatusBar* pStatusBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pStatusBar`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetshowallmenuitemsheighta--cmfcvisualmanageroffice2007getshowallmenuitemsheight"></a><a name="getshowallmenuitemsheight"></a>CMFCVisualManagerOffice2007::GetShowAllMenuItemsHeight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetShowAllMenuItemsHeight(
    CDC* pDC,  
    const CSize& sizeDefault);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `sizeDefault`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetstatusbarpanetextcolora--cmfcvisualmanageroffice2007getstatusbarpanetextcolor"></a><a name="getstatusbarpanetextcolor"></a>CMFCVisualManagerOffice2007::GetStatusBarPaneTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetStatusBarPaneTextColor(
    CMFCStatusBar* pStatusBar,  
    CMFCStatusBarPaneInfo* pPane);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pStatusBar`  
 [in] `pPane`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegettabframecolorsa--cmfcvisualmanageroffice2007gettabframecolors"></a><a name="gettabframecolors"></a>CMFCVisualManagerOffice2007::GetTabFrameColors  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void GetTabFrameColors(
    const CMFCBaseTabCtrl* pTabWnd,  
    COLORREF& clrDark,  
    COLORREF& clrBlack,  
    COLORREF& clrHighlight,  
    COLORREF& clrFace,  
    COLORREF& clrDarkShadow,  
    COLORREF& clrLight,  
    CBrush*& pbrFace,  
    CBrush*& pbrBlack);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pTabWnd`  
 [in] `clrDark`  
 [in] `clrBlack`  
 [in] `clrHighlight`  
 [in] `clrFace`  
 [in] `clrDarkShadow`  
 [in] `clrLight`  
 [in] `pbrFace`  
 [in] `pbrBlack`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegettabhorzmargina--cmfcvisualmanageroffice2007gettabhorzmargin"></a><a name="gettabhorzmargin"></a>CMFCVisualManagerOffice2007::GetTabHorzMargin  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetTabHorzMargin(const CMFCBaseTabCtrl* pTabWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pTabWnd`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegettabtextcolora--cmfcvisualmanageroffice2007gettabtextcolor"></a><a name="gettabtextcolor"></a>CMFCVisualManagerOffice2007::GetTabTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetTabTextColor(
    const CMFCBaseTabCtrl* pTabWnd,  
    int iTab,  
    BOOL bIsActive);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pTabWnd`  
 [in] `iTab`  
 [in] `bIsActive`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegettoolbarbuttontextcolora--cmfcvisualmanageroffice2007gettoolbarbuttontextcolor"></a><a name="gettoolbarbuttontextcolor"></a>CMFCVisualManagerOffice2007::GetToolbarButtonTextColor  
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
  
##  <a name="a-namegettoolbardisabledtextcolora--cmfcvisualmanageroffice2007gettoolbardisabledtextcolor"></a><a name="gettoolbardisabledtextcolor"></a>CMFCVisualManagerOffice2007::GetToolbarDisabledTextColor  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF GetToolbarDisabledTextColor();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegettooltipinfoa--cmfcvisualmanageroffice2007gettooltipinfo"></a><a name="gettooltipinfo"></a>CMFCVisualManagerOffice2007::GetToolTipInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL GetToolTipInfo(
    CMFCToolTipInfo& params,  
    UINT nType = (UINT)(-1));
```  
  
### <a name="parameters"></a>Parametri  
 [in] `params`  
 [in] `nType`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameishighlightwholemenuitema--cmfcvisualmanageroffice2007ishighlightwholemenuitem"></a><a name="ishighlightwholemenuitem"></a>CMFCVisualManagerOffice2007::IsHighlightWholeMenuItem  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsHighlightWholeMenuItem();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameislayeredribbonkeytipa--cmfcvisualmanageroffice2007islayeredribbonkeytip"></a><a name="islayeredribbonkeytip"></a>CMFCVisualManagerOffice2007::IsLayeredRibbonKeyTip  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsLayeredRibbonKeyTip() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisownerdrawcaptiona--cmfcvisualmanageroffice2007isownerdrawcaption"></a><a name="isownerdrawcaption"></a>CMFCVisualManagerOffice2007::IsOwnerDrawCaption  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsOwnerDrawCaption();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisownerdrawmenuchecka--cmfcvisualmanageroffice2007isownerdrawmenucheck"></a><a name="isownerdrawmenucheck"></a>CMFCVisualManagerOffice2007::IsOwnerDrawMenuCheck  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsOwnerDrawMenuCheck();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisribbonpresenta--cmfcvisualmanageroffice2007isribbonpresent"></a><a name="isribbonpresent"></a>CMFCVisualManagerOffice2007::IsRibbonPresent  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsRibbonPresent(CWnd* pWnd) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawbargrippera--cmfcvisualmanageroffice2007ondrawbargripper"></a><a name="ondrawbargripper"></a>CMFCVisualManagerOffice2007::OnDrawBarGripper  
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
  
##  <a name="a-nameondrawbuttonbordera--cmfcvisualmanageroffice2007ondrawbuttonborder"></a><a name="ondrawbuttonborder"></a>CMFCVisualManagerOffice2007::OnDrawButtonBorder  
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
  
##  <a name="a-nameondrawbuttonseparatora--cmfcvisualmanageroffice2007ondrawbuttonseparator"></a><a name="ondrawbuttonseparator"></a>CMFCVisualManagerOffice2007::OnDrawButtonSeparator  
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
  
##  <a name="a-nameondrawcaptionbarinfoareaa--cmfcvisualmanageroffice2007ondrawcaptionbarinfoarea"></a><a name="ondrawcaptionbarinfoarea"></a>CMFCVisualManagerOffice2007::OnDrawCaptionBarInfoArea  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawCaptionBarInfoArea(
    CDC* pDC,  
    CMFCCaptionBar* pBar,  
    CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pBar`  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawcheckboxexa--cmfcvisualmanageroffice2007ondrawcheckboxex"></a><a name="ondrawcheckboxex"></a>CMFCVisualManagerOffice2007::OnDrawCheckBoxEx  
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
  
##  <a name="a-nameondrawcombobordera--cmfcvisualmanageroffice2007ondrawcomboborder"></a><a name="ondrawcomboborder"></a>CMFCVisualManagerOffice2007::OnDrawComboBorder  
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
  
##  <a name="a-nameondrawcombodropbuttona--cmfcvisualmanageroffice2007ondrawcombodropbutton"></a><a name="ondrawcombodropbutton"></a>CMFCVisualManagerOffice2007::OnDrawComboDropButton  
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
  
##  <a name="a-nameondrawdefaultribbonimagea--cmfcvisualmanageroffice2007ondrawdefaultribbonimage"></a><a name="ondrawdefaultribbonimage"></a>CMFCVisualManagerOffice2007::OnDrawDefaultRibbonImage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawDefaultRibbonImage(
    CDC* pDC,  
    CRect rectImage,  
    BOOL bIsDisabled = FALSE,  
    BOOL bIsPressed = FALSE,  
    BOOL bIsHighlighted = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rectImage`  
 [in] `bIsDisabled`  
 [in] `bIsPressed`  
 [in] `bIsHighlighted`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondraweditbordera--cmfcvisualmanageroffice2007ondraweditborder"></a><a name="ondraweditborder"></a>CMFCVisualManagerOffice2007::OnDrawEditBorder  
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
  
##  <a name="a-nameondrawfloatingtoolbarbordera--cmfcvisualmanageroffice2007ondrawfloatingtoolbarborder"></a><a name="ondrawfloatingtoolbarborder"></a>CMFCVisualManagerOffice2007::OnDrawFloatingToolbarBorder  
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
  
##  <a name="a-nameondrawheaderctrlbordera--cmfcvisualmanageroffice2007ondrawheaderctrlborder"></a><a name="ondrawheaderctrlborder"></a>CMFCVisualManagerOffice2007::OnDrawHeaderCtrlBorder  
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
  
##  <a name="a-nameondrawmenubordera--cmfcvisualmanageroffice2007ondrawmenuborder"></a><a name="ondrawmenuborder"></a>CMFCVisualManagerOffice2007::OnDrawMenuBorder  
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
  
##  <a name="a-nameondrawmenuchecka--cmfcvisualmanageroffice2007ondrawmenucheck"></a><a name="ondrawmenucheck"></a>CMFCVisualManagerOffice2007::OnDrawMenuCheck  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawMenuCheck(
    CDC* pDC,  
    CMFCToolBarMenuButton* pButton,  
    CRect rect,  
    BOOL bHighlight,  
    BOOL bIsRadio);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
 [in] `rect`  
 [in] `bHighlight`  
 [in] `bIsRadio`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawmenuitembuttona--cmfcvisualmanageroffice2007ondrawmenuitembutton"></a><a name="ondrawmenuitembutton"></a>CMFCVisualManagerOffice2007::OnDrawMenuItemButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawMenuItemButton(
    CDC* pDC,  
    CMFCToolBarMenuButton* pButton,  
    CRect rectButton,  
    BOOL bHighlight,  
    BOOL bDisabled);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
 [in] `rectButton`  
 [in] `bHighlight`  
 [in] `bDisabled`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawmenulabela--cmfcvisualmanageroffice2007ondrawmenulabel"></a><a name="ondrawmenulabel"></a>CMFCVisualManagerOffice2007::OnDrawMenuLabel  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnDrawMenuLabel(
    CDC* pDC,  
    CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawmenuresizebara--cmfcvisualmanageroffice2007ondrawmenuresizebar"></a><a name="ondrawmenuresizebar"></a>CMFCVisualManagerOffice2007::OnDrawMenuResizeBar  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawMenuResizeBar(
    CDC* pDC,  
    CRect rect,  
    int nResizeFlags);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `nResizeFlags`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawmenuscrollbuttona--cmfcvisualmanageroffice2007ondrawmenuscrollbutton"></a><a name="ondrawmenuscrollbutton"></a>CMFCVisualManagerOffice2007::OnDrawMenuScrollButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawMenuScrollButton(
    CDC* pDC,  
    CRect rect,  
    BOOL bIsScrollDown,  
    BOOL bIsHighlited,  
    BOOL bIsPressed,  
    BOOL bIsDisabled);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `bIsScrollDown`  
 [in] `bIsHighlited`  
 [in] `bIsPressed`  
 [in] `bIsDisabled`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawmenusystembuttona--cmfcvisualmanageroffice2007ondrawmenusystembutton"></a><a name="ondrawmenusystembutton"></a>CMFCVisualManagerOffice2007::OnDrawMenuSystemButton  
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
  
##  <a name="a-nameondrawminiframebordera--cmfcvisualmanageroffice2007ondrawminiframeborder"></a><a name="ondrawminiframeborder"></a>CMFCVisualManagerOffice2007::OnDrawMiniFrameBorder  
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
  
##  <a name="a-nameondrawoutlookbarsplittera--cmfcvisualmanageroffice2007ondrawoutlookbarsplitter"></a><a name="ondrawoutlookbarsplitter"></a>CMFCVisualManagerOffice2007::OnDrawOutlookBarSplitter  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawOutlookBarSplitter(
    CDC* pDC,  
    CRect rectSplitter);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rectSplitter`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawoutlookpagebuttonbordera--cmfcvisualmanageroffice2007ondrawoutlookpagebuttonborder"></a><a name="ondrawoutlookpagebuttonborder"></a>CMFCVisualManagerOffice2007::OnDrawOutlookPageButtonBorder  
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
  
##  <a name="a-nameondrawpanecaptiona--cmfcvisualmanageroffice2007ondrawpanecaption"></a><a name="ondrawpanecaption"></a>CMFCVisualManagerOffice2007::OnDrawPaneCaption  
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
  
##  <a name="a-nameondrawpopupwindowcaptiona--cmfcvisualmanageroffice2007ondrawpopupwindowcaption"></a><a name="ondrawpopupwindowcaption"></a>CMFCVisualManagerOffice2007::OnDrawPopupWindowCaption  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnDrawPopupWindowCaption(
    CDC* pDC,  
    CRect rectCaption,  
    CMFCDesktopAlertWnd* pPopupWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rectCaption`  
 [in] `pPopupWnd`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawpropertysheetlistitema--cmfcvisualmanageroffice2007ondrawpropertysheetlistitem"></a><a name="ondrawpropertysheetlistitem"></a>CMFCVisualManagerOffice2007::OnDrawPropertySheetListItem  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnDrawPropertySheetListItem(
    CDC* pDC,  
    CMFCPropertySheet* pParent,  
    CRect rect,  
    BOOL bIsHighlihted,  
    BOOL bIsSelected);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pParent`  
 [in] `rect`  
 [in] `bIsHighlihted`  
 [in] `bIsSelected`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbonapplicationbuttona--cmfcvisualmanageroffice2007ondrawribbonapplicationbutton"></a><a name="ondrawribbonapplicationbutton"></a>CMFCVisualManagerOffice2007::OnDrawRibbonApplicationButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonApplicationButton(
    CDC* pDC,  
    CMFCRibbonButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbonbuttonbordera--cmfcvisualmanageroffice2007ondrawribbonbuttonborder"></a><a name="ondrawribbonbuttonborder"></a>CMFCVisualManagerOffice2007::OnDrawRibbonButtonBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonButtonBorder(
    CDC* pDC,  
    CMFCRibbonButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbonbuttonsgroupa--cmfcvisualmanageroffice2007ondrawribbonbuttonsgroup"></a><a name="ondrawribbonbuttonsgroup"></a>CMFCVisualManagerOffice2007::OnDrawRibbonButtonsGroup  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnDrawRibbonButtonsGroup(
    CDC* pDC,  
    CMFCRibbonButtonsGroup* pGroup,  
    CRect rectGroup);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pGroup`  
 [in] `rectGroup`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribboncaptiona--cmfcvisualmanageroffice2007ondrawribboncaption"></a><a name="ondrawribboncaption"></a>CMFCVisualManagerOffice2007::OnDrawRibbonCaption  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonCaption(
    CDC* pDC,  
    CMFCRibbonBar* pBar,  
    CRect rectCaption,  
    CRect rectText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pBar`  
 [in] `rectCaption`  
 [in] `rectText`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribboncaptionbuttona--cmfcvisualmanageroffice2007ondrawribboncaptionbutton"></a><a name="ondrawribboncaptionbutton"></a>CMFCVisualManagerOffice2007::OnDrawRibbonCaptionButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonCaptionButton(
    CDC* pDC,  
    CMFCRibbonCaptionButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribboncategorya--cmfcvisualmanageroffice2007ondrawribboncategory"></a><a name="ondrawribboncategory"></a>CMFCVisualManagerOffice2007::OnDrawRibbonCategory  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonCategory(
    CDC* pDC,  
    CMFCRibbonCategory* pCategory,  
    CRect rectCategory);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pCategory`  
 [in] `rectCategory`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribboncategorycaptiona--cmfcvisualmanageroffice2007ondrawribboncategorycaption"></a><a name="ondrawribboncategorycaption"></a>CMFCVisualManagerOffice2007::OnDrawRibbonCategoryCaption  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnDrawRibbonCategoryCaption(
    CDC* pDC,  
    CMFCRibbonContextCaption* pContextCaption);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pContextCaption`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribboncategoryscrolla--cmfcvisualmanageroffice2007ondrawribboncategoryscroll"></a><a name="ondrawribboncategoryscroll"></a>CMFCVisualManagerOffice2007::OnDrawRibbonCategoryScroll  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonCategoryScroll(
    CDC* pDC,  
    CRibbonCategoryScroll* pScroll);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pScroll`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribboncategorytaba--cmfcvisualmanageroffice2007ondrawribboncategorytab"></a><a name="ondrawribboncategorytab"></a>CMFCVisualManagerOffice2007::OnDrawRibbonCategoryTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnDrawRibbonCategoryTab(
    CDC* pDC,  
    CMFCRibbonTab* pTab,  
    BOOL bIsActive);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pTab`  
 [in] `bIsActive`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribboncheckboxonlista--cmfcvisualmanageroffice2007ondrawribboncheckboxonlist"></a><a name="ondrawribboncheckboxonlist"></a>CMFCVisualManagerOffice2007::OnDrawRibbonCheckBoxOnList  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonCheckBoxOnList(
    CDC* pDC,  
    CMFCRibbonCheckBox* pCheckBox,  
    CRect rect,  
    BOOL bIsSelected,  
    BOOL bHighlighted);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pCheckBox`  
 [in] `rect`  
 [in] `bIsSelected`  
 [in] `bHighlighted`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbondefaultpanebuttona--cmfcvisualmanageroffice2007ondrawribbondefaultpanebutton"></a><a name="ondrawribbondefaultpanebutton"></a>CMFCVisualManagerOffice2007::OnDrawRibbonDefaultPaneButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonDefaultPaneButton(
    CDC* pDC,  
    CMFCRibbonButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbondefaultpanebuttonindicatora--cmfcvisualmanageroffice2007ondrawribbondefaultpanebuttonindicator"></a><a name="ondrawribbondefaultpanebuttonindicator"></a>CMFCVisualManagerOffice2007::OnDrawRibbonDefaultPaneButtonIndicator  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonDefaultPaneButtonIndicator(
    CDC* pDC,  
    CMFCRibbonButton* pButton,  
    CRect rect,  
    BOOL bIsSelected,  
    BOOL bHighlighted);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
 [in] `rect`  
 [in] `bIsSelected`  
 [in] `bHighlighted`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbongallerybordera--cmfcvisualmanageroffice2007ondrawribbongalleryborder"></a><a name="ondrawribbongalleryborder"></a>CMFCVisualManagerOffice2007::OnDrawRibbonGalleryBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonGalleryBorder(
    CDC* pDC,  
    CMFCRibbonGallery* pButton,  
    CRect rectBorder);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
 [in] `rectBorder`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbongallerybuttona--cmfcvisualmanageroffice2007ondrawribbongallerybutton"></a><a name="ondrawribbongallerybutton"></a>CMFCVisualManagerOffice2007::OnDrawRibbonGalleryButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonGalleryButton(
    CDC* pDC,  
    CMFCRibbonGalleryIcon* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbonkeytipa--cmfcvisualmanageroffice2007ondrawribbonkeytip"></a><a name="ondrawribbonkeytip"></a>CMFCVisualManagerOffice2007::OnDrawRibbonKeyTip  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonKeyTip(
    CDC* pDC,  
    CMFCRibbonBaseElement* pElement,  
    CRect rect,  
    CString str);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pElement`  
 [in] `rect`  
 [in] `str`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbonmainpanelbuttonbordera--cmfcvisualmanageroffice2007ondrawribbonmainpanelbuttonborder"></a><a name="ondrawribbonmainpanelbuttonborder"></a>CMFCVisualManagerOffice2007::OnDrawRibbonMainPanelButtonBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonMainPanelButtonBorder(
    CDC* pDC,  
    CMFCRibbonButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbonmainpanelframea--cmfcvisualmanageroffice2007ondrawribbonmainpanelframe"></a><a name="ondrawribbonmainpanelframe"></a>CMFCVisualManagerOffice2007::OnDrawRibbonMainPanelFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonMainPanelFrame(
    CDC* pDC,  
    CMFCRibbonMainPanel* pPanel,  
    CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pPanel`  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbonmenucheckframea--cmfcvisualmanageroffice2007ondrawribbonmenucheckframe"></a><a name="ondrawribbonmenucheckframe"></a>CMFCVisualManagerOffice2007::OnDrawRibbonMenuCheckFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonMenuCheckFrame(
    CDC* pDC,  
    CMFCRibbonButton* pButton,  
    CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbonpanela--cmfcvisualmanageroffice2007ondrawribbonpanel"></a><a name="ondrawribbonpanel"></a>CMFCVisualManagerOffice2007::OnDrawRibbonPanel  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnDrawRibbonPanel(
    CDC* pDC,  
    CMFCRibbonPanel* pPanel,  
    CRect rectPanel,  
    CRect rectCaption);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pPanel`  
 [in] `rectPanel`  
 [in] `rectCaption`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbonpanelcaptiona--cmfcvisualmanageroffice2007ondrawribbonpanelcaption"></a><a name="ondrawribbonpanelcaption"></a>CMFCVisualManagerOffice2007::OnDrawRibbonPanelCaption  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonPanelCaption(
    CDC* pDC,  
    CMFCRibbonPanel* pPanel,  
    CRect rectCaption);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pPanel`  
 [in] `rectCaption`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbonprogressbara--cmfcvisualmanageroffice2007ondrawribbonprogressbar"></a><a name="ondrawribbonprogressbar"></a>CMFCVisualManagerOffice2007::OnDrawRibbonProgressBar  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonProgressBar(
    CDC* pDC,  
    CMFCRibbonProgressBar* pProgress,  
    CRect rectProgress,  
    CRect rectChunk,  
    BOOL bInfiniteMode);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pProgress`  
 [in] `rectProgress`  
 [in] `rectChunk`  
 [in] `bInfiniteMode`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbonrecentfilesframea--cmfcvisualmanageroffice2007ondrawribbonrecentfilesframe"></a><a name="ondrawribbonrecentfilesframe"></a>CMFCVisualManagerOffice2007::OnDrawRibbonRecentFilesFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonRecentFilesFrame(
    CDC* pDC,  
    CMFCRibbonMainPanel* pPanel,  
    CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pPanel`  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbonsliderchannela--cmfcvisualmanageroffice2007ondrawribbonsliderchannel"></a><a name="ondrawribbonsliderchannel"></a>CMFCVisualManagerOffice2007::OnDrawRibbonSliderChannel  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonSliderChannel(
    CDC* pDC,  
    CMFCRibbonSlider* pSlider,  
    CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pSlider`  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbonsliderthumba--cmfcvisualmanageroffice2007ondrawribbonsliderthumb"></a><a name="ondrawribbonsliderthumb"></a>CMFCVisualManagerOffice2007::OnDrawRibbonSliderThumb  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonSliderThumb(
    CDC* pDC,  
    CMFCRibbonSlider* pSlider,  
    CRect rect,  
    BOOL bIsHighlighted,  
    BOOL bIsPressed,  
    BOOL bIsDisabled);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pSlider`  
 [in] `rect`  
 [in] `bIsHighlighted`  
 [in] `bIsPressed`  
 [in] `bIsDisabled`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbonsliderzoombuttona--cmfcvisualmanageroffice2007ondrawribbonsliderzoombutton"></a><a name="ondrawribbonsliderzoombutton"></a>CMFCVisualManagerOffice2007::OnDrawRibbonSliderZoomButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawRibbonSliderZoomButton(
    CDC* pDC,  
    CMFCRibbonSlider* pSlider,  
    CRect rect,  
    BOOL bIsZoomOut,  
    BOOL bIsHighlighted,  
    BOOL bIsPressed,  
    BOOL bIsDisabled);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pSlider`  
 [in] `rect`  
 [in] `bIsZoomOut`  
 [in] `bIsHighlighted`  
 [in] `bIsPressed`  
 [in] `bIsDisabled`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbonstatusbarpanea--cmfcvisualmanageroffice2007ondrawribbonstatusbarpane"></a><a name="ondrawribbonstatusbarpane"></a>CMFCVisualManagerOffice2007::OnDrawRibbonStatusBarPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnDrawRibbonStatusBarPane(
    CDC* pDC,  
    CMFCRibbonStatusBar* pBar,  
    CMFCRibbonStatusBarPane* pPane);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pBar`  
 [in] `pPane`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawribbontabsframea--cmfcvisualmanageroffice2007ondrawribbontabsframe"></a><a name="ondrawribbontabsframe"></a>CMFCVisualManagerOffice2007::OnDrawRibbonTabsFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnDrawRibbonTabsFrame(
    CDC* pDC,  
    CMFCRibbonBar* pWndRibbonBar,  
    CRect rectTab);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pWndRibbonBar`  
 [in] `rectTab`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawscrollbuttonsa--cmfcvisualmanageroffice2007ondrawscrollbuttons"></a><a name="ondrawscrollbuttons"></a>CMFCVisualManagerOffice2007::OnDrawScrollButtons  
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
  
##  <a name="a-nameondrawseparatora--cmfcvisualmanageroffice2007ondrawseparator"></a><a name="ondrawseparator"></a>CMFCVisualManagerOffice2007::OnDrawSeparator  
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
  
##  <a name="a-nameondrawshowallmenuitemsa--cmfcvisualmanageroffice2007ondrawshowallmenuitems"></a><a name="ondrawshowallmenuitems"></a>CMFCVisualManagerOffice2007::OnDrawShowAllMenuItems  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawShowAllMenuItems(
    CDC* pDC,  
    CRect rect,  
    CMFCVisualManager::AFX_BUTTON_STATE state);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `state`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawstatusbarpanebordera--cmfcvisualmanageroffice2007ondrawstatusbarpaneborder"></a><a name="ondrawstatusbarpaneborder"></a>CMFCVisualManagerOffice2007::OnDrawStatusBarPaneBorder  
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
  
##  <a name="a-nameondrawstatusbarsizeboxa--cmfcvisualmanageroffice2007ondrawstatusbarsizebox"></a><a name="ondrawstatusbarsizebox"></a>CMFCVisualManagerOffice2007::OnDrawStatusBarSizeBox  
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
  
##  <a name="a-nameondrawtaba--cmfcvisualmanageroffice2007ondrawtab"></a><a name="ondrawtab"></a>CMFCVisualManagerOffice2007::OnDrawTab  
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
  
##  <a name="a-nameondrawtabsbuttonbordera--cmfcvisualmanageroffice2007ondrawtabsbuttonborder"></a><a name="ondrawtabsbuttonborder"></a>CMFCVisualManagerOffice2007::OnDrawTabsButtonBorder  
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
  
##  <a name="a-nameondrawtaska--cmfcvisualmanageroffice2007ondrawtask"></a><a name="ondrawtask"></a>CMFCVisualManagerOffice2007::OnDrawTask  
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
  
##  <a name="a-nameondrawtasksgroupcaptiona--cmfcvisualmanageroffice2007ondrawtasksgroupcaption"></a><a name="ondrawtasksgroupcaption"></a>CMFCVisualManagerOffice2007::OnDrawTasksGroupCaption  
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
  
##  <a name="a-nameondrawtearoffcaptiona--cmfcvisualmanageroffice2007ondrawtearoffcaption"></a><a name="ondrawtearoffcaption"></a>CMFCVisualManagerOffice2007::OnDrawTearOffCaption  
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
  
##  <a name="a-nameonerasemdiclientareaa--cmfcvisualmanageroffice2007onerasemdiclientarea"></a><a name="onerasemdiclientarea"></a>CMFCVisualManagerOffice2007::OnEraseMDIClientArea  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnEraseMDIClientArea(
    CDC* pDC,  
    CRect rectClient);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rectClient`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonerasetabsareaa--cmfcvisualmanageroffice2007onerasetabsarea"></a><a name="onerasetabsarea"></a>CMFCVisualManagerOffice2007::OnEraseTabsArea  
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
  
##  <a name="a-nameonerasetabsbuttona--cmfcvisualmanageroffice2007onerasetabsbutton"></a><a name="onerasetabsbutton"></a>CMFCVisualManagerOffice2007::OnEraseTabsButton  
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
  
##  <a name="a-nameonerasetabsframea--cmfcvisualmanageroffice2007onerasetabsframe"></a><a name="onerasetabsframe"></a>CMFCVisualManagerOffice2007::OnEraseTabsFrame  
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
  
##  <a name="a-nameonfillbarbackgrounda--cmfcvisualmanageroffice2007onfillbarbackground"></a><a name="onfillbarbackground"></a>CMFCVisualManagerOffice2007::OnFillBarBackground  
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
  
##  <a name="a-nameonfillbuttoninteriora--cmfcvisualmanageroffice2007onfillbuttoninterior"></a><a name="onfillbuttoninterior"></a>CMFCVisualManagerOffice2007::OnFillButtonInterior  
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
  
##  <a name="a-nameonfillcaptionbarbuttona--cmfcvisualmanageroffice2007onfillcaptionbarbutton"></a><a name="onfillcaptionbarbutton"></a>CMFCVisualManagerOffice2007::OnFillCaptionBarButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnFillCaptionBarButton(
    CDC* pDC,  
    CMFCCaptionBar* pBar,  
    CRect rect,  
    BOOL bIsPressed,  
    BOOL bIsHighlighted,  
    BOOL bIsDisabled,  
    BOOL bHasDropDownArrow,  
    BOOL bIsSysButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pBar`  
 [in] `rect`  
 [in] `bIsPressed`  
 [in] `bIsHighlighted`  
 [in] `bIsDisabled`  
 [in] `bHasDropDownArrow`  
 [in] `bIsSysButton`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfillhighlightedareaa--cmfcvisualmanageroffice2007onfillhighlightedarea"></a><a name="onfillhighlightedarea"></a>CMFCVisualManagerOffice2007::OnFillHighlightedArea  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnFillHighlightedArea(
    CDC* pDC,  
    CRect rect,  
    CBrush* pBrush,  
    CMFCToolBarButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
 [in] `pBrush`  
 [in] `pButton`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfillminiframecaptiona--cmfcvisualmanageroffice2007onfillminiframecaption"></a><a name="onfillminiframecaption"></a>CMFCVisualManagerOffice2007::OnFillMiniFrameCaption  
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
  
##  <a name="a-nameonfilloutlookbarcaptiona--cmfcvisualmanageroffice2007onfilloutlookbarcaption"></a><a name="onfilloutlookbarcaption"></a>CMFCVisualManagerOffice2007::OnFillOutlookBarCaption  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnFillOutlookBarCaption(
    CDC* pDC,  
    CRect rectCaption,  
    COLORREF& clrText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rectCaption`  
 [in] `clrText`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfilloutlookpagebuttona--cmfcvisualmanageroffice2007onfilloutlookpagebutton"></a><a name="onfilloutlookpagebutton"></a>CMFCVisualManagerOffice2007::OnFillOutlookPageButton  
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
  
##  <a name="a-nameonfillpopupwindowbackgrounda--cmfcvisualmanageroffice2007onfillpopupwindowbackground"></a><a name="onfillpopupwindowbackground"></a>CMFCVisualManagerOffice2007::OnFillPopupWindowBackground  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnFillPopupWindowBackground(
    CDC* pDC,  
    CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfillribbonbuttona--cmfcvisualmanageroffice2007onfillribbonbutton"></a><a name="onfillribbonbutton"></a>CMFCVisualManagerOffice2007::OnFillRibbonButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnFillRibbonButton(
    CDC* pDC,  
    CMFCRibbonButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfillribbonedita--cmfcvisualmanageroffice2007onfillribbonedit"></a><a name="onfillribbonedit"></a>CMFCVisualManagerOffice2007::OnFillRibbonEdit  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnFillRibbonEdit(
    CDC* pDC,  
    CMFCRibbonRichEditCtrl* pEdit,  
    CRect rect,  
    BOOL bIsHighlighted,  
    BOOL bIsPaneHighlighted,  
    BOOL bIsDisabled,  
    COLORREF& clrText,  
    COLORREF& clrSelBackground,  
    COLORREF& clrSelText);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pEdit`  
 [in] `rect`  
 [in] `bIsHighlighted`  
 [in] `bIsPaneHighlighted`  
 [in] `bIsDisabled`  
 [in] `clrText`  
 [in] `clrSelBackground`  
 [in] `clrSelText`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfillribbonmainpanelbuttona--cmfcvisualmanageroffice2007onfillribbonmainpanelbutton"></a><a name="onfillribbonmainpanelbutton"></a>CMFCVisualManagerOffice2007::OnFillRibbonMainPanelButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnFillRibbonMainPanelButton(
    CDC* pDC,  
    CMFCRibbonButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pButton`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfillribbonmenuframea--cmfcvisualmanageroffice2007onfillribbonmenuframe"></a><a name="onfillribbonmenuframe"></a>CMFCVisualManagerOffice2007::OnFillRibbonMenuFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnFillRibbonMenuFrame(
    CDC* pDC,  
    CMFCRibbonMainPanel* pPanel,  
    CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pPanel`  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfillribbonquickaccesstoolbarpopupa--cmfcvisualmanageroffice2007onfillribbonquickaccesstoolbarpopup"></a><a name="onfillribbonquickaccesstoolbarpopup"></a>CMFCVisualManagerOffice2007::OnFillRibbonQuickAccessToolBarPopup  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnFillRibbonQuickAccessToolBarPopup(
    CDC* pDC,  
    CMFCRibbonPanelMenuBar* pMenuBar,  
    CRect rect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `pMenuBar`  
 [in] `rect`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfilltaba--cmfcvisualmanageroffice2007onfilltab"></a><a name="onfilltab"></a>CMFCVisualManagerOffice2007::OnFillTab  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnFillTab(
    CDC* pDC,  
    CRect rectFill,  
    CBrush* pbrFill,  
    int iTab,  
    BOOL bIsActive,  
    const CMFCBaseTabCtrl* pTabWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 [in] `rectFill`  
 [in] `pbrFill`  
 [in] `iTab`  
 [in] `bIsActive`  
 [in] `pTabWnd`  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonhighlightmenuitema--cmfcvisualmanageroffice2007onhighlightmenuitem"></a><a name="onhighlightmenuitem"></a>CMFCVisualManagerOffice2007::OnHighlightMenuItem  
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
  
##  <a name="a-nameonhighlightrarelyusedmenuitemsa--cmfcvisualmanageroffice2007onhighlightrarelyusedmenuitems"></a><a name="onhighlightrarelyusedmenuitems"></a>CMFCVisualManagerOffice2007::OnHighlightRarelyUsedMenuItems  
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
  
##  <a name="a-nameonncactivatea--cmfcvisualmanageroffice2007onncactivate"></a><a name="onncactivate"></a>CMFCVisualManagerOffice2007::OnNcActivate  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnNcActivate(
    CWnd* pWnd,  
    BOOL bActive);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 [in] `bActive`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonncpainta--cmfcvisualmanageroffice2007onncpaint"></a><a name="onncpaint"></a>CMFCVisualManagerOffice2007::OnNcPaint  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnNcPaint(
    CWnd* pWnd,  
    const CObList& lstSysButtons,  
    CRect rectRedraw);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 [in] `lstSysButtons`  
 [in] `rectRedraw`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonsetwindowregiona--cmfcvisualmanageroffice2007onsetwindowregion"></a><a name="onsetwindowregion"></a>CMFCVisualManagerOffice2007::OnSetWindowRegion  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnSetWindowRegion(
    CWnd* pWnd,  
    CSize sizeWindow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 [in] `sizeWindow`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonupdatesystemcolorsa--cmfcvisualmanageroffice2007onupdatesystemcolors"></a><a name="onupdatesystemcolors"></a>CMFCVisualManagerOffice2007::OnUpdateSystemColors  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnUpdateSystemColors();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetresourcehandlea--cmfcvisualmanageroffice2007setresourcehandle"></a><a name="setresourcehandle"></a>CMFCVisualManagerOffice2007::SetResourceHandle  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static void __stdcall SetResourceHandle(HINSTANCE hinstRes);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hinstRes`  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)   
 [Classe CMFCVisualManagerOfficeXP](../../mfc/reference/cmfcvisualmanagerofficexp-class.md)   
 [Classe CMFCVisualManagerWindows](../../mfc/reference/cmfcvisualmanagerwindows-class.md)

