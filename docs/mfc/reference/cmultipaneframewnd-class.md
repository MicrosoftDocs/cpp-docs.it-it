---
title: Classe CMultiPaneFrameWnd | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMultiPaneFrameWnd
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::AddPane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::AddRecentPane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::AdjustLayout
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::AdjustPaneFrames
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::CalcExpectedDockedRect
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::CanBeAttached
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::CanBeDockedToPane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::CheckGripperVisibility
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::CloseMiniFrame
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::ConvertToTabbedDocument
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::DockFrame
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::DockPane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::DockRecentPaneToMainFrame
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetCaptionText
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetPaneContainerManager
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetFirstVisiblePane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetPane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetPaneCount
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::GetVisiblePaneCount
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::InsertPane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::LoadState
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::OnDockToRecentPos
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::OnKillRollUpTimer
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::OnPaneRecalcLayout
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::OnSetRollUpTimer
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::OnShowPane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::PaneFromPoint
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::RemoveNonValidPanes
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::RemovePane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::ReplacePane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::SaveState
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::Serialize
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::SetDockState
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::SetLastFocusedPane
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::SetPreDockState
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::StoreRecentDockSiteInfo
- AFXMULTIPANEFRAMEWND/CMultiPaneFrameWnd::StoreRecentTabRelatedInfo
dev_langs:
- C++
helpviewer_keywords:
- CMultiPaneFrameWnd class
ms.assetid: 989a548e-0d70-46b7-a513-8cf740e1be3e
caps.latest.revision: 36
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
ms.openlocfilehash: 4332533097b6e2463c21065ef361969397cacf5e
ms.lasthandoff: 02/24/2017

---
# <a name="cmultipaneframewnd-class"></a>Classe CMultiPaneFrameWnd
Il `CMultiPaneFrameWnd` classe estende [CPaneFrameWnd classe](../../mfc/reference/cpaneframewnd-class.md). Può supportare più riquadri. Anziché un singolo handle incorporato in una barra di controllo, `CMultiPaneFrameWnd` contiene un [CPaneContainerManager classe](../../mfc/reference/cpanecontainermanager-class.md) oggetto che consente all'utente di ancorare un `CMultiPaneFrameWnd` a un altro e in modo dinamico creare più finestre a schede, a virgola mobile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMultiPaneFrameWnd : public CPaneFrameWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMultiPaneFrameWnd::AddPane](#addpane)|Aggiunge un riquadro. (Esegue l'override di [CPaneFrameWnd::AddPane](../../mfc/reference/cpaneframewnd-class.md#addpane).)|  
|[CMultiPaneFrameWnd::AddRecentPane](#addrecentpane)||  
|[CMultiPaneFrameWnd::AdjustLayout](#adjustlayout)|Regola il layout della finestra con mini-cornice. (Esegue l'override di [CPaneFrameWnd::AdjustLayout](../../mfc/reference/cpaneframewnd-class.md#adjustlayout).)|  
|[CMultiPaneFrameWnd::AdjustPaneFrames](#adjustpaneframes)|(Esegue l'override di [CPaneFrameWnd::AdjustPaneFrames](../../mfc/reference/cpaneframewnd-class.md#adjustpaneframes).)|  
|[CMultiPaneFrameWnd::CalcExpectedDockedRect](#calcexpecteddockedrect)|Calcola il rettangolo previsto di una finestra ancorata. (Esegue l'override di [CPaneFrameWnd::CalcExpectedDockedRect](../../mfc/reference/cpaneframewnd-class.md#calcexpecteddockedrect).)|  
|[CMultiPaneFrameWnd::CanBeAttached](#canbeattached)|Determina se il riquadro corrente può essere ancorata a un'altra finestra del riquadro o frame. (Esegue l'override di [CPaneFrameWnd::CanBeAttached](../../mfc/reference/cpaneframewnd-class.md#canbeattached).)|  
|[CMultiPaneFrameWnd::CanBeDockedToPane](#canbedockedtopane)|Determina se la finestra con mini-cornice può essere ancorata a un riquadro. (Esegue l'override di [CPaneFrameWnd::CanBeDockedToPane](../../mfc/reference/cpaneframewnd-class.md#canbedockedtopane).)|  
|[CMultiPaneFrameWnd::CheckGripperVisibility](#checkgrippervisibility)|(Esegue l'override di [CPaneFrameWnd::CheckGripperVisibility](../../mfc/reference/cpaneframewnd-class.md#checkgrippervisibility).)|  
|[CMultiPaneFrameWnd::CloseMiniFrame](#closeminiframe)|Esegue l'override di `CPaneFrameWnd::CloseMiniFrame`.|  
|[CMultiPaneFrameWnd::ConvertToTabbedDocument](#converttotabbeddocument)|Converte un riquadro in un documento a schede. (Esegue l'override di [CPaneFrameWnd::ConvertToTabbedDocument](../../mfc/reference/cpaneframewnd-class.md#converttotabbeddocument).)|  
|[CMultiPaneFrameWnd::DockFrame](#dockframe)||  
|[CMultiPaneFrameWnd::DockPane](#dockpane)|Ancora il riquadro. (Esegue l'override di [CPaneFrameWnd::DockPane](../../mfc/reference/cpaneframewnd-class.md#dockpane).)|  
|[CMultiPaneFrameWnd::DockRecentPaneToMainFrame](#dockrecentpanetomainframe)||  
|[CMultiPaneFrameWnd::GetCaptionText](#getcaptiontext)|Restituisce il testo del titolo. (Esegue l'override di [CPaneFrameWnd::GetCaptionText](../../mfc/reference/cpaneframewnd-class.md#getcaptiontext).)|  
|[CMultiPaneFrameWnd::GetPaneContainerManager](#getpanecontainermanager)|Restituisce un riferimento all'oggetto manager contenitore interno.|  
|[CMultiPaneFrameWnd::GetFirstVisiblePane](#getfirstvisiblepane)|Restituisce il primo riquadro visibile contenuto in una finestra con mini-cornice. (Esegue l'override di [CPaneFrameWnd::GetFirstVisiblePane](../../mfc/reference/cpaneframewnd-class.md#getfirstvisiblepane).)|  
|[CMultiPaneFrameWnd::GetPane](#getpane)|Restituisce un riquadro contenuto nella finestra con mini-cornice. (Esegue l'override di [CPaneFrameWnd::GetPane](../../mfc/reference/cpaneframewnd-class.md#getpane).)|  
|[CMultiPaneFrameWnd::GetPaneCount](#getpanecount)|Restituisce il numero di riquadri contenuti in una finestra con mini-cornice. (Esegue l'override di [CPaneFrameWnd::GetPaneCount](../../mfc/reference/cpaneframewnd-class.md#getpanecount).)|  
|[CMultiPaneFrameWnd::GetVisiblePaneCount](#getvisiblepanecount)|Restituisce il numero di riquadri visibili contenuti in una finestra con mini-cornice. (Esegue l'override di [CPaneFrameWnd::GetVisiblePaneCount](../../mfc/reference/cpaneframewnd-class.md#getvisiblepanecount).)|  
|[CMultiPaneFrameWnd::InsertPane](#insertpane)||  
|[CMultiPaneFrameWnd::LoadState](#loadstate)|Carica lo stato del riquadro dal Registro di sistema. (Esegue l'override di [CPaneFrameWnd::LoadState](../../mfc/reference/cpaneframewnd-class.md#loadstate).)|  
|[CMultiPaneFrameWnd::OnDockToRecentPos](#ondocktorecentpos)|Ancora la finestra con mini-cornice alla posizione più recente. (Esegue l'override di [CPaneFrameWnd::OnDockToRecentPos](../../mfc/reference/cpaneframewnd-class.md#ondocktorecentpos).)|  
|[CMultiPaneFrameWnd::OnKillRollUpTimer](#onkillrolluptimer)|Arresta il timer di rollup. (Esegue l'override di [CPaneFrameWnd::OnKillRollUpTimer](../../mfc/reference/cpaneframewnd-class.md#onkillrolluptimer).)|  
|[CMultiPaneFrameWnd::OnPaneRecalcLayout](#onpanerecalclayout)|Consente di modificare il layout di un riquadro all'interno di una finestra con mini-cornice. (Esegue l'override di [CPaneFrameWnd::OnPaneRecalcLayout](../../mfc/reference/cpaneframewnd-class.md#onpanerecalclayout).)|  
|[CMultiPaneFrameWnd::OnSetRollUpTimer](#onsetrolluptimer)|Imposta il timer di rollup. (Esegue l'override di [CPaneFrameWnd::OnSetRollUpTimer](../../mfc/reference/cpaneframewnd-class.md#onsetrolluptimer).)|  
|[CMultiPaneFrameWnd::OnShowPane](#onshowpane)|Chiamata eseguita dal framework quando un riquadro nella finestra con mini-cornice è nascosto o visualizzato. (Esegue l'override di [CPaneFrameWnd::OnShowPane](../../mfc/reference/cpaneframewnd-class.md#onshowpane).)|  
|[CMultiPaneFrameWnd::PaneFromPoint](#panefrompoint)|Restituisce un riquadro contenente un punto fornito dall'utente all'interno di una finestra con mini-cornice. (Esegue l'override di [CPaneFrameWnd::PaneFromPoint](../../mfc/reference/cpaneframewnd-class.md#panefrompoint).)|  
|[CMultiPaneFrameWnd::RemoveNonValidPanes](#removenonvalidpanes)|Chiamata eseguita dal framework per rimuovere i riquadri non validi. (Esegue l'override di [CPaneFrameWnd::RemoveNonValidPanes](../../mfc/reference/cpaneframewnd-class.md#removenonvalidpanes).)|  
|[CMultiPaneFrameWnd::RemovePane](#removepane)|Rimuove un riquadro dalla finestra con mini-cornice. (Esegue l'override di [CPaneFrameWnd::RemovePane](../../mfc/reference/cpaneframewnd-class.md#removepane).)|  
|[CMultiPaneFrameWnd::ReplacePane](#replacepane)|Sostituisce un riquadro con un altro. (Esegue l'override di [CPaneFrameWnd::ReplacePane](../../mfc/reference/cpaneframewnd-class.md#replacepane).)|  
|[CMultiPaneFrameWnd::SaveState](#savestate)|Salva lo stato del riquadro nel Registro di sistema. (Esegue l'override di [CPaneFrameWnd::SaveState](../../mfc/reference/cpaneframewnd-class.md#savestate).)|  
|[CMultiPaneFrameWnd::Serialize](#serialize)|Esegue l'override di `CPaneFrameWnd::Serialize`.|  
|[CMultiPaneFrameWnd::SetDockState](#setdockstate)|Imposta lo stato di ancoraggio. (Esegue l'override di [CPaneFrameWnd::SetDockState](../../mfc/reference/cpaneframewnd-class.md#setdockstate).)|  
|[CMultiPaneFrameWnd::SetLastFocusedPane](#setlastfocusedpane)||  
|[CMultiPaneFrameWnd::SetPreDockState](#setpredockstate)|Imposta lo stato predocking. (Esegue l'override di [CPaneFrameWnd::SetPreDockState](../../mfc/reference/cpaneframewnd-class.md#setpredockstate).)|  
|[CMultiPaneFrameWnd::StoreRecentDockSiteInfo](#storerecentdocksiteinfo)|(Esegue l'override di [CPaneFrameWnd::StoreRecentDockSiteInfo](../../mfc/reference/cpaneframewnd-class.md#storerecentdocksiteinfo).)|  
|[CMultiPaneFrameWnd::StoreRecentTabRelatedInfo](#storerecenttabrelatedinfo)|(Esegue l'override di [CPaneFrameWnd::StoreRecentTabRelatedInfo](../../mfc/reference/cpaneframewnd-class.md#storerecenttabrelatedinfo).)|  
  
## <a name="remarks"></a>Note  
 La maggior parte dei metodi in questa classe esegue l'override di metodi di [CPaneFrameWnd classe](../../mfc/reference/cpaneframewnd-class.md) (classe).  
  
 Se viene utilizzato un riquadro di `AFX_CBRS_AUTO_ROLLUP` lo stile e l'utente tale riquadro viene ancorato a una finestra cornice a più riquadri, l'utente può distribuire la finestra indipendentemente dalle impostazioni di stile di altri riquadri ancorati.  
  
 Il framework crea automaticamente un `CMultiPaneFrameWnd` oggetto quando l'utente scorre un riquadro che utilizza il `CBRS_FLOAT_MULTI` stile.  
  
 Per informazioni sulla derivazione di una classe dalla classe di `CPaneFrameWnd` classi e crea in modo dinamico, vedere [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come recuperare un puntatore a un `CMultiPaneFrameWnd` oggetto. Questo frammento di codice fa parte di [esempio impostare dimensioni riquadro](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_SetPaneSize n.&4;](../../mfc/reference/codesnippet/cpp/cmultipaneframewnd-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)  
  
 [CMultiPaneFrameWnd](../../mfc/reference/cmultipaneframewnd-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxMultiPaneFrameWnd.h  
  
##  <a name="addpane"></a>CMultiPaneFrameWnd::AddPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AddPane(CBasePane* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
  
### <a name="remarks"></a>Note  
  
##  <a name="addrecentpane"></a>CMultiPaneFrameWnd::AddRecentPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL AddRecentPane(CDockablePane* pBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="adjustlayout"></a>CMultiPaneFrameWnd::AdjustLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AdjustLayout();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="adjustpaneframes"></a>CMultiPaneFrameWnd::AdjustPaneFrames  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void AdjustPaneFrames();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="calcexpecteddockedrect"></a>CMultiPaneFrameWnd::CalcExpectedDockedRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void CalcExpectedDockedRect(
    CWnd* pWndToDock,  
    CPoint ptMouse,  
    CRect& rectResult,  
    BOOL& bDrawTab,  
    CDockablePane** ppTargetBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndToDock`  
 [in] `ptMouse`  
 [in] `rectResult`  
 [in] `bDrawTab`  
 [in] `ppTargetBar`  
  
### <a name="remarks"></a>Note  
  
##  <a name="canbeattached"></a>CMultiPaneFrameWnd::CanBeAttached  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL CanBeAttached() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="canbedockedtopane"></a>CMultiPaneFrameWnd::CanBeDockedToPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL CanBeDockedToPane(const CDockablePane* pDockingBar) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDockingBar`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="checkgrippervisibility"></a>CMultiPaneFrameWnd::CheckGripperVisibility  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void CheckGripperVisibility();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="closeminiframe"></a>CMultiPaneFrameWnd::CloseMiniFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void CloseMiniFrame();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="converttotabbeddocument"></a>CMultiPaneFrameWnd::ConvertToTabbedDocument  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ConvertToTabbedDocument();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="dockframe"></a>CMultiPaneFrameWnd::DockFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DockFrame(
    CPaneFrameWnd* pDockedFrame,  
    AFX_DOCK_METHOD dockMethod);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDockedFrame`  
 [in] `dockMethod`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="dockpane"></a>CMultiPaneFrameWnd::DockPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DockPane(CDockablePane* pDockedBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDockedBar`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="dockrecentpanetomainframe"></a>CMultiPaneFrameWnd::DockRecentPaneToMainFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void DockRecentPaneToMainFrame(CDockablePane* pBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcaptiontext"></a>CMultiPaneFrameWnd::GetCaptionText  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CString GetCaptionText();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getfirstvisiblepane"></a>CMultiPaneFrameWnd::GetFirstVisiblePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CWnd* GetFirstVisiblePane() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpane"></a>CMultiPaneFrameWnd::GetPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CWnd* GetPane() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpanecontainermanager"></a>CMultiPaneFrameWnd::GetPaneContainerManager  
 Restituisce un riferimento all'oggetto manager contenitore interno.  
  
```  
CPaneContainerManager& GetPaneContainerManager();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto di gestione interna contenitore.  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere utilizzato per accedere interno [CPaneContainerManager classe](../../mfc/reference/cpanecontainermanager-class.md) oggetto.  
  
##  <a name="getpanecount"></a>CMultiPaneFrameWnd::GetPaneCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetPaneCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getvisiblepanecount"></a>CMultiPaneFrameWnd::GetVisiblePaneCount  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetVisiblePaneCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="insertpane"></a>CMultiPaneFrameWnd::InsertPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL InsertPane(
    CBasePane* pControlBar,  
    CBasePane* pTarget,  
    BOOL bAfter);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pControlBar`  
 [in] `pTarget`  
 [in] `bAfter`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="loadstate"></a>CMultiPaneFrameWnd::LoadState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,  
    UINT uiID = (UINT) -1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 [in] `uiID`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondocktorecentpos"></a>CMultiPaneFrameWnd::OnDockToRecentPos  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDockToRecentPos();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="onkillrolluptimer"></a>CMultiPaneFrameWnd::OnKillRollUpTimer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnKillRollUpTimer();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="onpanerecalclayout"></a>CMultiPaneFrameWnd::OnPaneRecalcLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnPaneRecalcLayout();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="onsetrolluptimer"></a>CMultiPaneFrameWnd::OnSetRollUpTimer  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnSetRollUpTimer();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="onshowpane"></a>CMultiPaneFrameWnd::OnShowPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnShowPane(
    CDockablePane* pBar,  
    BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 [in] `bShow`  
  
### <a name="remarks"></a>Note  
  
##  <a name="panefrompoint"></a>CMultiPaneFrameWnd::PaneFromPoint  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CBasePane* PaneFromPoint(
    CPoint point,  
    int nSensitivity,  
    BOOL bCheckVisibility);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 [in] `nSensitivity`  
 [in] `bCheckVisibility`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="removenonvalidpanes"></a>CMultiPaneFrameWnd::RemoveNonValidPanes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RemoveNonValidPanes();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="removepane"></a>CMultiPaneFrameWnd::RemovePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RemovePane(
    CBasePane* pBar,  
    BOOL bDestroy = FALSE,  
    BOOL bNoDelayedDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 [in] `bDestroy`  
 [in] `bNoDelayedDestroy`  
  
### <a name="remarks"></a>Note  
  
##  <a name="replacepane"></a>CMultiPaneFrameWnd::ReplacePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ReplacePane(
    CBasePane* pBarOrg,  
    CBasePane* pBarReplaceWith);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBarOrg`  
 [in] `pBarReplaceWith`  
  
### <a name="remarks"></a>Note  
  
##  <a name="savestate"></a>CMultiPaneFrameWnd::SaveState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,  
    UINT uiID = (UINT) -1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 [in] `uiID`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="serialize"></a>CMultiPaneFrameWnd::Serialize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `ar`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setdockstate"></a>CMultiPaneFrameWnd::SetDockState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SetDockState(CDockingManager* pDockManager);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDockManager`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setlastfocusedpane"></a>CMultiPaneFrameWnd::SetLastFocusedPane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetLastFocusedPane(HWND hwnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `hwnd`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setpredockstate"></a>CMultiPaneFrameWnd::SetPreDockState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL SetPreDockState(
    AFX_PREDOCK_STATE preDockState,  
    CBasePane* pBarToDock = NULL,  
    AFX_DOCK_METHOD dockMethod = DM_MOUSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `preDockState`  
 [in] `pBarToDock`  
 [in] `dockMethod`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="storerecentdocksiteinfo"></a>CMultiPaneFrameWnd::StoreRecentDockSiteInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void StoreRecentDockSiteInfo(CPane* pBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
  
### <a name="remarks"></a>Note  
  
##  <a name="storerecenttabrelatedinfo"></a>CMultiPaneFrameWnd::StoreRecentTabRelatedInfo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void StoreRecentTabRelatedInfo(
    CDockablePane* pDockingBar,  
    CDockablePane* pTabbedBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDockingBar`  
 [in] `pTabbedBar`  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)

