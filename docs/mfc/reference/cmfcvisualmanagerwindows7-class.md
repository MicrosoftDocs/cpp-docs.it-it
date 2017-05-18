---
title: Classe CMFCVisualManagerWindows7 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCVisualManagerWindows7
- AFXVISUALMANAGERWINDOWS7/CMFCVisualManagerWindows7
- AFXVISUALMANAGERWINDOWS7/CMFCVisualManagerWindows7::CMFCVisualManagerWindows7
- AFXVISUALMANAGERWINDOWS7/CMFCVisualManagerWindows7::GetRibbonEditBackgroundColor
- AFXVISUALMANAGERWINDOWS7/CMFCVisualManagerWindows7::OnFillMenuImageRect
dev_langs:
- C++
helpviewer_keywords:
- CMFCVisualManagerWindows7 class
ms.assetid: e8d87df1-0c09-4b58-8ade-4e911f796e42
caps.latest.revision: 21
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 236223fe371973fb4e009d2fcb242f2ed6e90963
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcvisualmanagerwindows7-class"></a>Classe CMFCVisualManagerWindows7
Il `CMFCVisualManagerWindows7` fornisce un'applicazione l'aspetto di un [!INCLUDE[win7](../../build/includes/win7_md.md)] dell'applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCVisualManagerWindows7 : public CMFCVisualManagerWindows;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCVisualManagerWindows7::CMFCVisualManagerWindows7](#cmfcvisualmanagerwindows7)|Costruttore predefinito.|  
|[CMFCVisualManagerWindows7:: ~ CMFCVisualManagerWindows7](#cmfcvisualmanagerwindows7__~cmfcvisualmanagerwindows7)|Distruttore predefinito.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCVisualManagerWindows7::CleanStyle`|Cancella lo stile di visualizzazione corrente e reimposta lo stile di visualizzazione predefinito.|  
|`CMFCVisualManagerWindows7::CleanUp`|Cancella tutti gli oggetti nell'interfaccia utente e reimposta i menu.|  
|`CMFCVisualManagerWindows7::DrawNcBtn`|Disegna un pulsante nell'area non client nel frame. Utilizza il framework questo metodo per ridurre al minimo, ottimizzare, chiudere e ripristinare i pulsanti nell'angolo superiore destro della cornice della finestra. Questo metodo non viene chiamato quando il programma utilizza un tema non Aero.|  
|`CMFCVisualManagerWindows7::DrawNcText`|Disegna un testo nell'area non client nel frame. Il framework utilizza questo metodo per disegnare il titolo dell'applicazione nella barra del titolo nella parte superiore della finestra cornice.|  
|`CMFCVisualManagerWindows7::DrawSeparator`|Disegna un separatore [CMFCToolBar classe](../../mfc/reference/cmfctoolbar-class.md).|  
|`CMFCVisualManagerWindows7::GetRibbonBar`|Recupera il [classe CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md) associato all'interfaccia utente.|  
|[CMFCVisualManagerWindows7::GetRibbonEditBackgroundColor](#getribboneditbackgroundcolor)|Ottiene un colore di sfondo della barra multifunzione Modifica finestra.|  
|`CMFCVisualManagerWindows7::GetRibbonPopupBorderSize`|Esegue l'override di [CMFCVisualManager::GetRibbonPopupBorderSize](../../mfc/reference/cmfcvisualmanager-class.md#getribbonpopupbordersize)|  
|`CMFCVisualManagerWindows7::GetRibbonQuickAccessToolBarChevronOffset`|Esegue l'override di [CMFCVisualManager::GetRibbonQuickAccessToolBarChevronOffset](../../mfc/reference/cmfcvisualmanager-class.md#getribbonquickaccesstoolbarchevronoffset)|  
|`CMFCVisualManagerWindows7::GetRibbonQuickAccessToolBarRightMargin`|Esegue l'override di [CMFCVisualManager::GetRibbonQuickAccessToolBarRightMargin](../../mfc/reference/cmfcvisualmanager-class.md#getribbonquickaccesstoolbarrightmargin)|  
|`CMFCVisualManagerWindows7::IsHighlightWholeMenuItem`|Esegue l'override di [CMFCVisualManagerWindows::IsHighlightWholeMenuItem](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ishighlightwholemenuitem)|  
|`CMFCVisualManagerWindows7::IsOwnerDrawMenuCheck`|Esegue l'override di [CMFCVisualManager::IsOwnerDrawMenuCheck](../../mfc/reference/cmfcvisualmanager-class.md#isownerdrawmenucheck)|  
|`CMFCVisualManagerWindows7::IsRibbonPresent`|Determina se un `CMFCRibbonBar` sia disponibile e visibile.|  
|`CMFCVisualManagerWindows7::OnDrawButtonBorder`|Esegue l'override di [CMFCVisualManagerWindows::OnDrawButtonBorder](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ondrawbuttonborder)|  
|`CMFCVisualManagerWindows7::OnDrawCheckBoxEx`|Esegue l'override di [CMFCVisualManagerWindows::OnDrawCheckBoxEx](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ondrawcheckboxex)|  
|`CMFCVisualManagerWindows7::OnDrawComboDropButton`|Esegue l'override di [CMFCVisualManagerWindows::OnDrawComboDropButton](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ondrawcombodropbutton)|  
|`CMFCVisualManagerWindows7::OnDrawDefaultRibbonImage`|Esegue l'override di [CMFCVisualManager::OnDrawDefaultRibbonImage](../../mfc/reference/cmfcvisualmanager-class.md#ondrawdefaultribbonimage)|  
|`CMFCVisualManagerWindows7::OnDrawMenuBorder`|Esegue l'override di [CMFCVisualManagerWindows::OnDrawMenuBorder](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ondrawmenuborder)|  
|`CMFCVisualManagerWindows7::OnDrawMenuCheck`|Esegue l'override di [CMFCVisualManager::OnDrawMenuCheck](../../mfc/reference/cmfcvisualmanager-class.md#ondrawmenucheck)|  
|`CMFCVisualManagerWindows7::OnDrawMenuLabel`|Esegue l'override di [CMFCVisualManager::OnDrawMenuLabel](../../mfc/reference/cmfcvisualmanager-class.md#ondrawmenulabel)|  
|`CMFCVisualManagerWindows7::OnDrawRadioButton`|Esegue l'override`CMFCVisualManager::OnDrawRadioButton`|  
|`CMFCVisualManagerWindows7::OnDrawRibbonApplicationButton`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonApplicationButton](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonapplicationbutton)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonButtonBorder`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonButtonBorder](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonbuttonborder)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonCaption`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonCaption](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribboncaption)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonCaptionButton`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonCaptionButton](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribboncaptionbutton)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonCategory`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonCategory](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribboncategory)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonCategoryTab`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonCategoryTab](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribboncategorytab)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonDefaultPaneButton`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonDefaultPaneButton](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbondefaultpanebutton)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonGalleryButton`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonGalleryButton](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbongallerybutton)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonLaunchButton`|Esegue l'override`CMFCVisualManager::OnDrawRibbonLaunchButton`|  
|`CMFCVisualManagerWindows7::OnDrawRibbonMenuCheckFrame`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonMenuCheckFrame](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonmenucheckframe)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonPanel`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonPanel](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonpanel)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonPanelCaption`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonPanelCaption](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonpanelcaption)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonProgressBar`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonProgressBar](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonprogressbar)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonRecentFilesFrame`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonRecentFilesFrame](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonrecentfilesframe)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonSliderChannel`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonSliderChannel](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonsliderchannel)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonSliderThumb`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonSliderThumb](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonsliderthumb)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonSliderZoomButton`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonSliderZoomButton](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonsliderzoombutton)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonStatusBarPane`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonStatusBarPane](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbonstatusbarpane)|  
|`CMFCVisualManagerWindows7::OnDrawRibbonTabsFrame`|Esegue l'override di [CMFCVisualManager::OnDrawRibbonTabsFrame](../../mfc/reference/cmfcvisualmanager-class.md#ondrawribbontabsframe)|  
|`CMFCVisualManagerWindows7::OnDrawStatusBarSizeBox`|Esegue l'override di [CMFCVisualManagerWindows::OnDrawStatusBarSizeBox](../../mfc/reference/cmfcvisualmanagerwindows-class.md#ondrawstatusbarsizebox)|  
|`CMFCVisualManagerWindows7::OnFillBarBackground`|Esegue l'override di [CMFCVisualManagerWindows::OnFillBarBackground](../../mfc/reference/cmfcvisualmanagerwindows-class.md#onfillbarbackground)|  
|`CMFCVisualManagerWindows7::OnFillButtonInterior`|Esegue l'override di [CMFCVisualManagerWindows::OnFillButtonInterior](../../mfc/reference/cmfcvisualmanagerwindows-class.md#onfillbuttoninterior)|  
|[CMFCVisualManagerWindows7::OnFillMenuImageRect](#onfillmenuimagerect)|Il framework chiama questo metodo quando riempie l'area intorno a immagini delle voci di menu.|  
|`CMFCVisualManagerWindows7::OnFillRibbonButton`|Esegue l'override di [CMFCVisualManager::OnFillRibbonButton](../../mfc/reference/cmfcvisualmanager-class.md#onfillribbonbutton)|  
|`CMFCVisualManagerWindows7::OnFillRibbonQuickAccessToolBarPopup`|Esegue l'override di [CMFCVisualManager::OnFillRibbonQuickAccessToolBarPopup](../../mfc/reference/cmfcvisualmanager-class.md#onfillribbonquickaccesstoolbarpopup)|  
|`CMFCVisualManagerWindows7::OnHighlightMenuItem`|Esegue l'override di [CMFCVisualManagerWindows::OnHighlightMenuItem](../../mfc/reference/cmfcvisualmanagerwindows-class.md#onhighlightmenuitem)|  
|`CMFCVisualManagerWindows7::OnNcActivate`|Esegue l'override di [CMFCVisualManager::OnNcActivate](../../mfc/reference/cmfcvisualmanager-class.md#onncactivate)|  
|`CMFCVisualManagerWindows7::OnNcPaint`|Esegue l'override di [CMFCVisualManager::OnNcPaint](../../mfc/reference/cmfcvisualmanager-class.md#onncpaint)|  
|`CMFCVisualManagerWindows7::OnUpdateSystemColors`|Esegue l'override di [CMFCVisualManagerWindows::OnUpdateSystemColors](../../mfc/reference/cmfcvisualmanagerwindows-class.md#onupdatesystemcolors)|  
|`CMFCVisualManagerWindows7::SetResourceHandle`|Imposta l'handle di risorsa che descrive gli attributi della gestione visual.|  
|`CMFCVisualManagerWindows7::SetStyle`|Imposta la combinazione di colori di `CMFCVisualManagerWindows7` GUI.|  
  
## <a name="remarks"></a>Note  
 Utilizzare il `CMFCVisualManagerWindows7` (classe) per modificare l'aspetto dell'applicazione per simulare un predefinito [!INCLUDE[win7](../../build/includes/win7_md.md)] dell'applicazione. Questa classe potrebbe non essere valida se l'applicazione è in esecuzione una versione di Windows precedenti a [!INCLUDE[win7](../../build/includes/win7_md.md)]. In questo scenario, l'applicazione utilizza il gestore di visualizzazione predefinito definito in [CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md).  
  
 Il CMFCVisualManagerWindows7 eredita più metodi da entrambi il [CMFCVisualManagerWindows classe](../../mfc/reference/cmfcvisualmanagerwindows-class.md) e `CMFCVisualManager` (classe). I metodi elencati nella sezione precedente sono metodi familiarità con la `CMFCVisualManagerWindows7` classe.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCBaseVisualManager](../../mfc/reference/cmfcbasevisualmanager-class.md)  
  
 [CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)  
  
 [CMFCVisualManagerOfficeXP](../../mfc/reference/cmfcvisualmanagerofficexp-class.md)  
  
 [CMFCVisualManagerWindows](../../mfc/reference/cmfcvisualmanagerwindows-class.md)  
  
 `CMFCVisualManagerWindows7`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxvisualmanagerwindows7.h  
  
##  <a name="_dtorcmfcvisualmanagerwindows7"></a>CMFCVisualManagerWindows7:: ~ CMFCVisualManagerWindows7  
 Distruttore predefinito.  
  
```  
virtual ~CMFCVisualManagerWindows7();
```  
  
##  <a name="cmfcvisualmanagerwindows7"></a>CMFCVisualManagerWindows7::CMFCVisualManagerWindows7  
 Costruttore predefinito.  
  
```  
CMFCVisualManagerWindows7();
```  
  
##  <a name="getribboneditbackgroundcolor"></a>CMFCVisualManagerWindows7::GetRibbonEditBackgroundColor  
 Ottiene il colore di sfondo di una casella di modifica della barra multifunzione.  
  
```  
virtual COLORREF GetRibbonEditBackgroundColor (
    CMFCRibbonRichEditCtrl* pEdit,  
    BOOL bIsHighlighted,  
    BOOL bIsPaneHighlighted,  
    BOOL bIsDisabled);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pEdit`  
 Puntatore al controllo di modifica. Questo valore non può essere `NULL`.  
  
 [out] `bIsHighlighted`  
 Restituisce se la casella della barra multifunzione è evidenziata.  
  
 [out] `bIsPaneHighlighted`  
 Restituisce `TRUE` se la barra multifunzione pannello che contiene `pEdit` viene evidenziato.  
  
 [out] `bIsDisabled`  
 Restituisce se `pEdit` è disabilitato.  
  
### <a name="return-value"></a>Valore restituito  
 Il colore di sfondo della casella di modifica `pEdit`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="onfillmenuimagerect"></a>CMFCVisualManagerWindows7::OnFillMenuImageRect  
 Il framework chiama questo metodo quando riempie l'area intorno a un'immagine di voce di menu.  
  
```  
virtual void OnFillMenuImageRect(
    CDC* pDC,  
    CMFCToolBarButton* pButton,  
    CRect rect,  
    CMFCVisualManager::AFX_BUTTON_STATE state);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore al contesto di dispositivo di un pulsante di menu.  
  
 [in] `pButton`  
 Un puntatore a un `CMFCToolBarButton`. Il framework riempie lo sfondo del pulsante.  
  
 [in] `rect`  
 Un rettangolo che specifica i limiti dell'area di immagine del pulsante di menu.  
  
 [in] `state`  
 Lo stato del pulsante.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCVisualManager](../../mfc/reference/cmfcvisualmanager-class.md)   
 [Classe CMFCVisualManagerWindows](../../mfc/reference/cmfcvisualmanagerwindows-class.md)

