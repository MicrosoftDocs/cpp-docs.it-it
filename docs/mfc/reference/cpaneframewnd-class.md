---
title: Classe CPaneFrameWnd | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CPaneFrameWnd
- AFXPANEFRAMEWND/CPaneFrameWnd
- AFXPANEFRAMEWND/CPaneFrameWnd::AddPane
- AFXPANEFRAMEWND/CPaneFrameWnd::AddRemovePaneFromGlobalList
- AFXPANEFRAMEWND/CPaneFrameWnd::AdjustLayout
- AFXPANEFRAMEWND/CPaneFrameWnd::AdjustPaneFrames
- AFXPANEFRAMEWND/CPaneFrameWnd::CalcBorderSize
- AFXPANEFRAMEWND/CPaneFrameWnd::CalcExpectedDockedRect
- AFXPANEFRAMEWND/CPaneFrameWnd::CanBeAttached
- AFXPANEFRAMEWND/CPaneFrameWnd::CanBeDockedToPane
- AFXPANEFRAMEWND/CPaneFrameWnd::CheckGripperVisibility
- AFXPANEFRAMEWND/CPaneFrameWnd::ConvertToTabbedDocument
- AFXPANEFRAMEWND/CPaneFrameWnd::Create
- AFXPANEFRAMEWND/CPaneFrameWnd::CreateEx
- AFXPANEFRAMEWND/CPaneFrameWnd::DockPane
- AFXPANEFRAMEWND/CPaneFrameWnd::FindFloatingPaneByID
- AFXPANEFRAMEWND/CPaneFrameWnd::FrameFromPoint
- AFXPANEFRAMEWND/CPaneFrameWnd::GetCaptionHeight
- AFXPANEFRAMEWND/CPaneFrameWnd::GetCaptionRect
- AFXPANEFRAMEWND/CPaneFrameWnd::GetCaptionText
- AFXPANEFRAMEWND/CPaneFrameWnd::GetDockingManager
- AFXPANEFRAMEWND/CPaneFrameWnd::GetDockingMode
- AFXPANEFRAMEWND/CPaneFrameWnd::GetFirstVisiblePane
- AFXPANEFRAMEWND/CPaneFrameWnd::GetHotPoint
- AFXPANEFRAMEWND/CPaneFrameWnd::GetPane
- AFXPANEFRAMEWND/CPaneFrameWnd::GetPaneCount
- AFXPANEFRAMEWND/CPaneFrameWnd::GetParent
- AFXPANEFRAMEWND/CPaneFrameWnd::GetPinState
- AFXPANEFRAMEWND/CPaneFrameWnd::GetRecentFloatingRect
- AFXPANEFRAMEWND/CPaneFrameWnd::GetVisiblePaneCount
- AFXPANEFRAMEWND/CPaneFrameWnd::HitTest
- AFXPANEFRAMEWND/CPaneFrameWnd::IsCaptured
- AFXPANEFRAMEWND/CPaneFrameWnd::IsDelayShow
- AFXPANEFRAMEWND/CPaneFrameWnd::IsRollDown
- AFXPANEFRAMEWND/CPaneFrameWnd::IsRollUp
- AFXPANEFRAMEWND/CPaneFrameWnd::KillDockingTimer
- AFXPANEFRAMEWND/CPaneFrameWnd::LoadState
- AFXPANEFRAMEWND/CPaneFrameWnd::OnBeforeDock
- AFXPANEFRAMEWND/CPaneFrameWnd::OnDockToRecentPos
- AFXPANEFRAMEWND/CPaneFrameWnd::OnKillRollUpTimer
- AFXPANEFRAMEWND/CPaneFrameWnd::OnMovePane
- AFXPANEFRAMEWND/CPaneFrameWnd::OnPaneRecalcLayout
- AFXPANEFRAMEWND/CPaneFrameWnd::OnSetRollUpTimer
- AFXPANEFRAMEWND/CPaneFrameWnd::OnShowPane
- AFXPANEFRAMEWND/CPaneFrameWnd::PaneFromPoint
- AFXPANEFRAMEWND/CPaneFrameWnd::Pin
- AFXPANEFRAMEWND/CPaneFrameWnd::RedrawAll
- AFXPANEFRAMEWND/CPaneFrameWnd::RemoveNonValidPanes
- AFXPANEFRAMEWND/CPaneFrameWnd::RemovePane
- AFXPANEFRAMEWND/CPaneFrameWnd::ReplacePane
- AFXPANEFRAMEWND/CPaneFrameWnd::SaveState
- AFXPANEFRAMEWND/CPaneFrameWnd::SetCaptionButtons
- AFXPANEFRAMEWND/CPaneFrameWnd::SetDelayShow
- AFXPANEFRAMEWND/CPaneFrameWnd::SetDockingManager
- AFXPANEFRAMEWND/CPaneFrameWnd::SetDockingTimer
- AFXPANEFRAMEWND/CPaneFrameWnd::SetDockState
- AFXPANEFRAMEWND/CPaneFrameWnd::SetHotPoint
- AFXPANEFRAMEWND/CPaneFrameWnd::SetPreDockState
- AFXPANEFRAMEWND/CPaneFrameWnd::SizeToContent
- AFXPANEFRAMEWND/CPaneFrameWnd::StartTearOff
- AFXPANEFRAMEWND/CPaneFrameWnd::StoreRecentDockSiteInfo
- AFXPANEFRAMEWND/CPaneFrameWnd::StoreRecentTabRelatedInfo
- AFXPANEFRAMEWND/CPaneFrameWnd::OnCheckRollState
- AFXPANEFRAMEWND/CPaneFrameWnd::OnDrawBorder
- AFXPANEFRAMEWND/CPaneFrameWnd::m_bUseSaveBits
dev_langs:
- C++
helpviewer_keywords:
- CPaneFrameWnd [MFC], AddPane
- CPaneFrameWnd [MFC], AddRemovePaneFromGlobalList
- CPaneFrameWnd [MFC], AdjustLayout
- CPaneFrameWnd [MFC], AdjustPaneFrames
- CPaneFrameWnd [MFC], CalcBorderSize
- CPaneFrameWnd [MFC], CalcExpectedDockedRect
- CPaneFrameWnd [MFC], CanBeAttached
- CPaneFrameWnd [MFC], CanBeDockedToPane
- CPaneFrameWnd [MFC], CheckGripperVisibility
- CPaneFrameWnd [MFC], ConvertToTabbedDocument
- CPaneFrameWnd [MFC], Create
- CPaneFrameWnd [MFC], CreateEx
- CPaneFrameWnd [MFC], DockPane
- CPaneFrameWnd [MFC], FindFloatingPaneByID
- CPaneFrameWnd [MFC], FrameFromPoint
- CPaneFrameWnd [MFC], GetCaptionHeight
- CPaneFrameWnd [MFC], GetCaptionRect
- CPaneFrameWnd [MFC], GetCaptionText
- CPaneFrameWnd [MFC], GetDockingManager
- CPaneFrameWnd [MFC], GetDockingMode
- CPaneFrameWnd [MFC], GetFirstVisiblePane
- CPaneFrameWnd [MFC], GetHotPoint
- CPaneFrameWnd [MFC], GetPane
- CPaneFrameWnd [MFC], GetPaneCount
- CPaneFrameWnd [MFC], GetParent
- CPaneFrameWnd [MFC], GetPinState
- CPaneFrameWnd [MFC], GetRecentFloatingRect
- CPaneFrameWnd [MFC], GetVisiblePaneCount
- CPaneFrameWnd [MFC], HitTest
- CPaneFrameWnd [MFC], IsCaptured
- CPaneFrameWnd [MFC], IsDelayShow
- CPaneFrameWnd [MFC], IsRollDown
- CPaneFrameWnd [MFC], IsRollUp
- CPaneFrameWnd [MFC], KillDockingTimer
- CPaneFrameWnd [MFC], LoadState
- CPaneFrameWnd [MFC], OnBeforeDock
- CPaneFrameWnd [MFC], OnDockToRecentPos
- CPaneFrameWnd [MFC], OnKillRollUpTimer
- CPaneFrameWnd [MFC], OnMovePane
- CPaneFrameWnd [MFC], OnPaneRecalcLayout
- CPaneFrameWnd [MFC], OnSetRollUpTimer
- CPaneFrameWnd [MFC], OnShowPane
- CPaneFrameWnd [MFC], PaneFromPoint
- CPaneFrameWnd [MFC], Pin
- CPaneFrameWnd [MFC], RedrawAll
- CPaneFrameWnd [MFC], RemoveNonValidPanes
- CPaneFrameWnd [MFC], RemovePane
- CPaneFrameWnd [MFC], ReplacePane
- CPaneFrameWnd [MFC], SaveState
- CPaneFrameWnd [MFC], SetCaptionButtons
- CPaneFrameWnd [MFC], SetDelayShow
- CPaneFrameWnd [MFC], SetDockingManager
- CPaneFrameWnd [MFC], SetDockingTimer
- CPaneFrameWnd [MFC], SetDockState
- CPaneFrameWnd [MFC], SetHotPoint
- CPaneFrameWnd [MFC], SetPreDockState
- CPaneFrameWnd [MFC], SizeToContent
- CPaneFrameWnd [MFC], StartTearOff
- CPaneFrameWnd [MFC], StoreRecentDockSiteInfo
- CPaneFrameWnd [MFC], StoreRecentTabRelatedInfo
- CPaneFrameWnd [MFC], OnCheckRollState
- CPaneFrameWnd [MFC], OnDrawBorder
- CPaneFrameWnd [MFC], m_bUseSaveBits
ms.assetid: ea3423a3-2763-482e-b763-817036ded10d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e93061da24ac148ac47d96f84d6dfcea67045235
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cpaneframewnd-class"></a>Classe CPaneFrameWnd
[!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
 Implementa una finestra con mini-cornice contenente un riquadro. Il riquadro riempie l'area client della finestra.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CPaneFrameWnd : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPaneFrameWnd::AddPane](#addpane)|Aggiunge un riquadro.|  
|[CPaneFrameWnd::AddRemovePaneFromGlobalList](#addremovepanefromgloballist)|Aggiunge o rimuove un riquadro dall'elenco globale.|  
|[CPaneFrameWnd::AdjustLayout](#adjustlayout)|Regola il layout della finestra con mini-cornice.|  
|[CPaneFrameWnd::AdjustPaneFrames](#adjustpaneframes)||  
|[CPaneFrameWnd::CalcBorderSize](#calcbordersize)|Calcola le dimensioni dei bordi per una finestra con mini-cornice.|  
|[CPaneFrameWnd::CalcExpectedDockedRect](#calcexpecteddockedrect)|Calcolare il rettangolo previsto di una finestra ancorata.|  
|[CPaneFrameWnd::CanBeAttached](#canbeattached)|Determina se il riquadro corrente può essere ancorato a un altro riquadro o a un'altra finestra cornice.|  
|[CPaneFrameWnd::CanBeDockedToPane](#canbedockedtopane)|Determina se la finestra con mini-cornice può essere ancorata a un riquadro.|  
|[CPaneFrameWnd::CheckGripperVisibility](#checkgrippervisibility)||  
|[CPaneFrameWnd::ConvertToTabbedDocument](#converttotabbeddocument)|Converte un riquadro in un documento a schede.|  
|[CPaneFrameWnd::Create](#create)|Crea una finestra con mini-cornice e la associa all'oggetto `CPaneFrameWnd`.|  
|[CPaneFrameWnd::CreateEx](#createex)|Crea una finestra con mini-cornice e la associa all'oggetto `CPaneFrameWnd`.|  
|[CPaneFrameWnd::DockPane](#dockpane)|Ancora il riquadro.|  
|[CPaneFrameWnd::FindFloatingPaneByID](#findfloatingpanebyid)|Trova un riquadro con l'ID di controllo specificato nell'elenco globale dei riquadri mobili.|  
|[CPaneFrameWnd::FrameFromPoint](#framefrompoint)|Trova la finestra con mini-cornice contenente un punto fornito dall'utente.|  
|[CPaneFrameWnd::GetCaptionHeight](#getcaptionheight)|Restituisce l'altezza del titolo della finestra con mini-cornice.|  
|[CPaneFrameWnd::GetCaptionRect](#getcaptionrect)|Calcola il rettangolo delimitatore di un titolo di finestra con mini-cornice.|  
|[CPaneFrameWnd::GetCaptionText](#getcaptiontext)|Restituisce il testo del titolo.|  
|[CPaneFrameWnd::GetDockingManager](#getdockingmanager)||  
|[CPaneFrameWnd::GetDockingMode](#getdockingmode)|Restituisce la modalità di ancoraggio.|  
|[CPaneFrameWnd::GetFirstVisiblePane](#getfirstvisiblepane)|Restituisce il primo riquadro visibile contenuto in una finestra con mini-cornice.|  
|[CPaneFrameWnd::GetHotPoint](#gethotpoint)||  
|[CPaneFrameWnd::GetPane](#getpane)|Restituisce un riquadro contenuto nella finestra con mini-cornice.|  
|[CPaneFrameWnd::GetPaneCount](#getpanecount)|Restituisce il numero di riquadri contenuti in una finestra con mini-cornice.|  
|[CPaneFrameWnd::GetParent](#getparent)||  
|[CPaneFrameWnd::GetPinState](#getpinstate)||  
|[CPaneFrameWnd::GetRecentFloatingRect](#getrecentfloatingrect)||  
|[CPaneFrameWnd::GetVisiblePaneCount](#getvisiblepanecount)|Restituisce il numero di riquadri visibili contenuti in una finestra con mini-cornice.|  
|[CPaneFrameWnd::HitTest](#hittest)|Determina quale parte di una finestra con mini-cornice si trova in un punto specifico.|  
|[CPaneFrameWnd::IsCaptured](#iscaptured)||  
|[CPaneFrameWnd::IsDelayShow](#isdelayshow)||  
|[CPaneFrameWnd::IsRollDown](#isrolldown)|Determina se eseguire il rolldown di una finestra con mini-cornice.|  
|[CPaneFrameWnd::IsRollUp](#isrollup)|Determina se eseguire il rollup di una finestra con mini-cornice.|  
|[CPaneFrameWnd::KillDockingTimer](#killdockingtimer)|Arresta il timer di ancoraggio.|  
|[CPaneFrameWnd::LoadState](#loadstate)|Carica lo stato del riquadro dal Registro di sistema.|  
|[CPaneFrameWnd::OnBeforeDock](#onbeforedock)|Determina se l'ancoraggio è possibile.|  
|[CPaneFrameWnd::OnDockToRecentPos](#ondocktorecentpos)|Ancora la finestra con mini-cornice alla posizione più recente.|  
|[CPaneFrameWnd::OnKillRollUpTimer](#onkillrolluptimer)|Arresta il timer di rollup.|  
|[CPaneFrameWnd::OnMovePane](#onmovepane)|Sposta la finestra con mini-cornice in base a un offset specificato.|  
|[CPaneFrameWnd::OnPaneRecalcLayout](#onpanerecalclayout)|Regola il layout di un riquadro contenuto.|  
|[CPaneFrameWnd::OnSetRollUpTimer](#onsetrolluptimer)|Imposta il timer di rollup.|  
|[CPaneFrameWnd::OnShowPane](#onshowpane)|Chiamata eseguita dal framework quando un riquadro nella finestra con mini-cornice è nascosto o visualizzato.|  
|[CPaneFrameWnd::PaneFromPoint](#panefrompoint)|Restituisce un riquadro contenente un punto fornito dall'utente all'interno di una finestra con mini-cornice.|  
|[CPaneFrameWnd::Pin](#pin)||  
|`CPaneFrameWnd::PreTranslateMessage`|Usato dalla classe [CWinApp](../../mfc/reference/cwinapp-class.md) per convertire i messaggi della finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) .|  
|[CPaneFrameWnd::RedrawAll](#redrawall)|Ridisegna tutte le finestre con mini-cornice.|  
|[CPaneFrameWnd::RemoveNonValidPanes](#removenonvalidpanes)|Chiamata eseguita dal framework per rimuovere i riquadri non validi.|  
|[CPaneFrameWnd::RemovePane](#removepane)|Rimuove un riquadro dalla finestra con mini-cornice.|  
|[CPaneFrameWnd::ReplacePane](#replacepane)|Sostituisce un riquadro con un altro.|  
|[CPaneFrameWnd::SaveState](#savestate)|Salva lo stato del riquadro nel Registro di sistema.|  
|`CPaneFrameWnd::Serialize`|Legge o scrive l'oggetto corrente da o in un archivio.|  
|[CPaneFrameWnd::SetCaptionButtons](#setcaptionbuttons)|Imposta i pulsanti della barra del titolo.|  
|[CPaneFrameWnd::SetDelayShow](#setdelayshow)||  
|[CPaneFrameWnd::SetDockingManager](#setdockingmanager)||  
|[CPaneFrameWnd::SetDockingTimer](#setdockingtimer)|Imposta il timer di ancoraggio.|  
|[CPaneFrameWnd::SetDockState](#setdockstate)|Imposta lo stato di ancoraggio.|  
|[CPaneFrameWnd::SetHotPoint](#sethotpoint)||  
|[CPaneFrameWnd::SetPreDockState](#setpredockstate)|Chiamata eseguita dal framework per impostare lo stato di pre-ancoraggio.|  
|[CPaneFrameWnd::SizeToContent](#sizetocontent)|Regola le dimensioni di una finestra con mini-cornice in modo che siano uguali a quelle di un riquadro contenuto.|  
|[CPaneFrameWnd::StartTearOff](#starttearoff)|Separa un menu.|  
|[CPaneFrameWnd::StoreRecentDockSiteInfo](#storerecentdocksiteinfo)||  
|[CPaneFrameWnd::StoreRecentTabRelatedInfo](#storerecenttabrelatedinfo)||  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPaneFrameWnd::OnCheckRollState](#oncheckrollstate)|Determina se eseguire il rollup o il rolldown di una finestra con mini-cornice.|  
|[CPaneFrameWnd::OnDrawBorder](#ondrawborder)|Disegna i bordi di una finestra con mini-cornice.|  
  
### <a name="data-members"></a>Membri di dati  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CPaneFrameWnd::m_bUseSaveBits](#m_busesavebits)|Specifica se registrare la classe di finestra con lo stile di classe `CS_SAVEBITS`.|  
  
## <a name="remarks"></a>Note  
 Il framework crea automaticamente un oggetto `CPaneFrameWnd` quando un riquadro passa dallo stato ancorato allo stato mobile.  
  
 È possibile spostare una finestra con mini-cornice trascinando il relativo contenuto visibile (ancoraggio immediato) oppure usando un rettangolo di trascinamento (ancoraggio standard). La modalità di ancoraggio del riquadro contenitore della finestra con mini-cornice determina il comportamento del trascinamento della finestra con mini-cornice. Per ulteriori informazioni, vedere [cbasepane:: Getdockingmode](../../mfc/reference/cbasepane-class.md#getdockingmode).  
  
 I pulsanti sulla barra del titolo di una finestra con mini-cornice sono visualizzati in modo conforme allo stile del riquadro contenuto. Se il riquadro può essere chiuso ( [cbasepane:: Canbeclosed](../../mfc/reference/cbasepane-class.md#canbeclosed)), viene visualizzato un pulsante Chiudi. Se il riquadro ha lo stile `AFX_CBRS_AUTO_ROLLUP`, viene visualizzata una puntina.  
  
 Se si deriva una classe da `CPaneFrameWnd`, è necessario indicare al framework come crearla. Creare la classe eseguendo l'override [cpane:: Createdefaultminiframe](../../mfc/reference/cpane-class.md#createdefaultminiframe), o impostare il `CPane::m_pMiniFrameRTC` membro in modo che punti per le informazioni sulla classe di runtime per la classe.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CPaneFrameWnd`   
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpaneframewnd. H  
  
##  <a name="addpane"></a>CPaneFrameWnd::AddPane  
 Aggiunge un riquadro.  
  
```  
virtual void AddPane(CBasePane* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 Il riquadro da aggiungere.  
  
##  <a name="addremovepanefromgloballist"></a>CPaneFrameWnd::AddRemovePaneFromGlobalList  
 Aggiunge o rimuove un riquadro dall'elenco globale.  
  
```  
static BOOL __stdcall AddRemovePaneFromGlobalList(
    CBasePane* pWnd,  
    BOOL bAdd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 Il riquadro per aggiungere o rimuovere.  
  
 [in] `bAdd`  
 Se diverso da zero, aggiungere il riquadro. Se è 0, rimuovere il riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo. in caso contrario 0.  
  
##  <a name="adjustlayout"></a>CPaneFrameWnd::AdjustLayout  
 Regola il layout della finestra con mini-cornice.  
  
```  
virtual void AdjustLayout();
```  
  
##  <a name="adjustpaneframes"></a>CPaneFrameWnd::AdjustPaneFrames  

  
```  
virtual void AdjustPaneFrames();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="calcbordersize"></a>CPaneFrameWnd::CalcBorderSize  
 Calcola le dimensioni dei bordi per una finestra con mini-cornice.  
  
```  
virtual void CalcBorderSize(CRect& rectBorderSize) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `rectBorderSize`  
 Contiene la dimensione, in pixel, del bordo della finestra con mini-cornice.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework per calcolare le dimensioni del bordo di una finestra con mini-cornice. Le dimensioni restituite varia a seconda se una finestra con mini-cornice contiene una barra degli strumenti o una [CDockablePane](../../mfc/reference/cdockablepane-class.md).  
  
##  <a name="calcexpecteddockedrect"></a>CPaneFrameWnd::CalcExpectedDockedRect  
 Calcolare il rettangolo previsto di una finestra ancorata.  
  
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
 Puntatore alla finestra di ancoraggio.  
  
 [in] `ptMouse`  
 Posizione del mouse.  
  
 [out] `rectResult`  
 Rettangolo calcolato.  
  
 [out] `bDrawTab`  
 Se `TRUE`, creare una scheda. Se `FALSE`, non creare una scheda.  
  
 [out] `ppTargetBar`  
 Puntatore al riquadro di destinazione.  
  
### <a name="remarks"></a>Note  
 Questo metodo consente di calcolare il rettangolo che una finestra occuperebbero se un utente trascina la finestra per il punto specificato da `ptMouse` e ancorata sono.  
  
##  <a name="canbeattached"></a>CPaneFrameWnd::CanBeAttached  
 Determina se il riquadro corrente può essere ancorato a un altro riquadro o a un'altra finestra cornice.  
  
```  
virtual BOOL CanBeAttached() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il riquadro può essere ancorato a un altro riquadro o finestra cornice; in caso contrario `FALSE`.  
  
##  <a name="canbedockedtopane"></a>CPaneFrameWnd::CanBeDockedToPane  
 Determina se la finestra con mini-cornice può essere ancorata a un riquadro.  
  
```  
virtual BOOL CanBeDockedToPane(const CDockablePane* pDockingBar) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDockingBar`  
 Un riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la mini-cornice può essere ancorata a `pDockingBar`; in caso contrario, 0.  
  
##  <a name="checkgrippervisibility"></a>CPaneFrameWnd::CheckGripperVisibility  

  
```  
virtual void CheckGripperVisibility();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="converttotabbeddocument"></a>CPaneFrameWnd::ConvertToTabbedDocument  
 Converte un riquadro in un documento a schede.  
  
```  
virtual void ConvertToTabbedDocument();
```  
  
##  <a name="create"></a>CPaneFrameWnd::Create  
 Crea una finestra con mini-cornice e lo collega al [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) oggetto.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszWindowName,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    CCreateContext* pContext = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszWindowName`  
 Specifica il testo da visualizzare nella finestra con mini-cornice.  
  
 [in] `dwStyle`  
 Specifica lo stile della finestra. Per ulteriori informazioni, vedere [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).  
  
 [in] `rect`  
 Specifica le dimensioni iniziali e la posizione della finestra con mini-cornice.  
  
 [in] [out]`pParentWnd`  
 Specifica il frame padre della finestra con mini-cornice. Questo valore non deve essere `NULL`.  
  
 [in] [out]`pContext`  
 Specifica il contesto definito dall'utente.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la finestra è stata creata correttamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Una finestra con mini-cornice viene creata in due passaggi. In primo luogo, il framework crea un `CPaneFrameWnd` oggetto. In secondo luogo, chiama `Create` per creare la mini-cornice di Windows e associarlo al `CPaneFrameWnd` oggetto.  
  
##  <a name="createex"></a>CPaneFrameWnd::CreateEx  
 Crea una finestra con mini-cornice e lo collega al [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md) oggetto.  
  
```  
virtual BOOL CreateEx(
    DWORD dwStyleEx,  
    LPCTSTR lpszWindowName,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    CCreateContext* pContext=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwStyleEx`  
 Specifica lo stile della finestra estesi. Per ulteriori informazioni, vedere [stili finestra estesi](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles)  
  
 [in] `lpszWindowName`  
 Specifica il testo da visualizzare nella finestra con mini-cornice.  
  
 [in] `dwStyle`  
 Specifica lo stile della finestra. Per ulteriori informazioni, vedere [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).  
  
 [in] `rect`  
 Specifica le dimensioni iniziali e la posizione della finestra con mini-cornice.  
  
 [in] [out]`pParentWnd`  
 Specifica il frame padre della finestra con mini-cornice. Questo valore non deve essere `NULL`.  
  
 [in] [out]`pContext`  
 Specifica il contesto definito dall'utente.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la finestra è stata creata correttamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Una finestra con mini-cornice viene creata in due passaggi. In primo luogo, il framework crea un `CPaneFrameWnd` oggetto. In secondo luogo, chiama `Create` per creare la mini-cornice di Windows e associarlo al `CPaneFrameWnd` oggetto.  
  
##  <a name="dockpane"></a>CPaneFrameWnd::DockPane  
 Ancora il riquadro.  
  
```  
virtual CDockablePane* DockPane(BOOL& bWasDocked);
```  
  
### <a name="parameters"></a>Parametri  
 [out] `bWasDocked`  
 `TRUE`Se il riquadro è stato già ancorato; in caso contrario `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 Se l'operazione ha esito positivo, il `CDockablePane` che il riquadro è stato ancorato; in caso contrario `NULL`.  
  
##  <a name="findfloatingpanebyid"></a>CPaneFrameWnd::FindFloatingPaneByID  
 Trova un riquadro con l'ID di controllo specificato nell'elenco globale dei riquadri mobili.  
  
```  
static CBasePane* FindFloatingPaneByID(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
 Rappresenta l'ID di controllo del riquadro da trovare.  
  
### <a name="return-value"></a>Valore restituito  
 Il riquadro con l'ID di controllo specificato. in caso contrario, `NULL`, se non dispone di alcun riquadro l'ID del controllo specificato.  
  
##  <a name="framefrompoint"></a>CPaneFrameWnd::FrameFromPoint  
 Trova la finestra con mini-cornice contenente il punto specificato.  
  
```  
static CPaneFrameWnd* __stdcall FrameFromPoint(
    CPoint pt,  
    int nSensitivity,  
    CPaneFrameWnd* pFrameToExclude = NULL,  
    BOOL bFloatMultiOnly = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pt`  
 Il punto nelle coordinate dello schermo.  
  
 [in] `nSensitivity`  
 Aumentare l'area di ricerca della finestra con mini-cornice da queste dimensioni. Una finestra con mini-cornice soddisfa i criteri di ricerca se il punto specificato rientra nell'area di aumento.  
  
 [in] `pFrameToExclude`  
 Specifica una finestra con mini-cornice da escludere dalla ricerca.  
  
 [in] `bFloatMultiOnly`  
 Se `TRUE`, effettuare la ricerca solo le finestre con mini-cornice con la `CBRS_FLOAT_MULTI` stile. Se `FALSE`, cercare tutte le finestre con mini-cornice.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore alla finestra con mini-cornice contenente `pt`; in caso contrario `NULL`.  
  
##  <a name="getcaptionheight"></a>CPaneFrameWnd::GetCaptionHeight  
 Restituisce l'altezza del titolo della finestra con mini-cornice.  
  
```  
virtual int GetCaptionHeight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza, in pixel, della finestra con mini-cornice.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per determinare l'altezza di una finestra con mini-cornice. Per impostazione predefinita, l'altezza è impostata su `SM_CYSMCAPTION`. Per ulteriori informazioni, vedere [funzione GetSystemMetrics](http://msdn.microsoft.com/library/windows/desktop/ms724385).  
  
##  <a name="getcaptionrect"></a>CPaneFrameWnd::GetCaptionRect  
 Calcola il rettangolo delimitatore di un titolo di finestra con mini-cornice.  
  
```  
virtual void GetCaptionRect(CRect& rectCaption) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `rectCaption`  
 Contiene le dimensioni e posizione del titolo della finestra con mini-cornice, nelle coordinate dello schermo.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework per calcolare il rettangolo di delimitazione di un titolo di una finestra con mini-cornice.  
  
##  <a name="getcaptiontext"></a>CPaneFrameWnd::GetCaptionText  
 Restituisce il testo del titolo.  
  
```  
virtual CString GetCaptionText();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il testo della didascalia della finestra con mini-cornice.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando viene visualizzato il testo della didascalia.  
  
##  <a name="getdockingmanager"></a>CPaneFrameWnd::GetDockingManager  

  
```  
CDockingManager* GetDockingManager() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getdockingmode"></a>CPaneFrameWnd::GetDockingMode  
 Restituisce la modalità di ancoraggio.  
  
```  
virtual AFX_DOCK_TYPE GetDockingMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La modalità di ancoraggio. Uno dei valori seguenti:  
  
- `DT_STANDARD`  
  
- `DT_IMMEDIATE`  
  
- `DT_SMART`  
  
##  <a name="getfirstvisiblepane"></a>CPaneFrameWnd::GetFirstVisiblePane  
 Restituisce il primo riquadro visibile contenuto in una finestra con mini-cornice.  
  
```  
virtual CWnd* GetFirstVisiblePane() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il primo riquadro nella finestra con mini-cornice o `NULL` se la finestra con mini-cornice non contiene alcun riquadri.  
  
##  <a name="gethotpoint"></a>CPaneFrameWnd::GetHotPoint  

  
```  
CPoint GetHotPoint() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpane"></a>CPaneFrameWnd::GetPane  
 Restituisce un riquadro contenuto nella finestra con mini-cornice.  
  
```  
virtual CWnd* GetPane() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Nel riquadro in cui è contenuto nel frame minima, o `NULL` se la finestra con mini-cornice non contiene alcun riquadri.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpanecount"></a>CPaneFrameWnd::GetPaneCount  
 Restituisce il numero di riquadri contenuti in una finestra con mini-cornice.  
  
```  
virtual int GetPaneCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di riquadri nella finestra con mini-cornice. Questo valore può essere zero.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getparent"></a>CPaneFrameWnd::GetParent  

  
```  
CWnd* GetParent();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpinstate"></a>CPaneFrameWnd::GetPinState  

  
```  
BOOL GetPinState() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getrecentfloatingrect"></a>CPaneFrameWnd::GetRecentFloatingRect  

  
```  
CRect GetRecentFloatingRect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getvisiblepanecount"></a>CPaneFrameWnd::GetVisiblePaneCount  
 Restituisce il numero di riquadri visibili contenuti in una finestra con mini-cornice.  
  
```  
virtual int GetVisiblePaneCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di riquadri visibili.  
  
### <a name="remarks"></a>Note  
  
##  <a name="hittest"></a>CPaneFrameWnd::HitTest  
 Determina quale parte di una finestra con mini-cornice si trova in un punto specifico.  
  
```  
virtual LRESULT HitTest(
    CPoint point,  
    BOOL bDetectCaption);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Punto da verificare.  
  
 [in] `bDetectCaption`  
 Se `TRUE`, controllare il punto contro la didascalia. Se `FALSE`, ignorare la didascalia.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|`HTNOWHERE`|Il punto è all'esterno della finestra con mini-cornice.|  
|`HTCLIENT`|Il punto si trova nell'area client.|  
|`HTCAPTION`|Il punto è con la didascalia.|  
|`HTTOP`|Il punto è all'inizio.|  
|`HTTOPLEFT`|Il punto è in alto a sinistra.|  
|`HTTOPRIGHT`|Il punto è in alto a destra.|  
|`HTLEFT`|Il punto è a sinistra.|  
|`HTRIGHT`|Il punto è a destra.|  
|`HTBOTTOM`|Il punto è nella parte inferiore.|  
|`HTBOTTOMLEFT`|Il punto è nella parte inferiore sinistra.|  
|`HTBOTTOMRIGHT`|Il punto è nella parte inferiore destra.|  
  
##  <a name="iscaptured"></a>CPaneFrameWnd::IsCaptured  

  
```  
BOOL IsCaptured() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="isdelayshow"></a>CPaneFrameWnd::IsDelayShow  

  
```  
BOOL IsDelayShow() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="isrolldown"></a>CPaneFrameWnd::IsRollDown  
 Determina se eseguire il rolldown di una finestra con mini-cornice.  
  
```  
virtual BOOL IsRollDown() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se è necessario ripristinare la finestra con mini-cornice verso l'alto. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework per determinare se deve eseguire il rollback di una finestra con mini-cornice verso il basso. La funzionalità di rollup/gallone è abilitata per una finestra con mini-cornice se contiene almeno un riquadro che ha il `AFX_CBRS_AUTO_ROLLUP` flag. Questo flag viene impostato quando viene creato un riquadro. Per ulteriori informazioni, vedere [cbasepane:: CreateEx](../../mfc/reference/cbasepane-class.md#createex).  
  
 Per impostazione predefinita, il framework controlla se il puntatore del mouse è all'interno del rettangolo di delimitazione di finestra con mini-cornice per determinare se la finestra deve essere eseguito il rollback verso il basso. È possibile eseguire l'override di questo comportamento in una classe derivata.  
  
##  <a name="isrollup"></a>CPaneFrameWnd::IsRollUp  
 Determina se eseguire il rollup di una finestra con mini-cornice.  
  
```  
virtual BOOL IsRollUp() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se è necessario eseguire il rollback di finestra con mini-cornice. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework per determinare se una finestra con mini-cornice deve eseguire il rollup. La funzionalità di rollup/gallone è abilitata per una finestra con mini-cornice se contiene almeno un riquadro che ha il `AFX_CBRS_AUTO_ROLLUP` flag. Questo flag viene impostato quando viene creato un riquadro. Per ulteriori informazioni, vedere [cbasepane:: CreateEx](../../mfc/reference/cbasepane-class.md#createex).  
  
 Per impostazione predefinita, il framework controlla se il puntatore del mouse è all'interno del rettangolo di delimitazione di finestra con mini-cornice per determinare se la finestra dispone eseguire il rollup. È possibile eseguire l'override di questo comportamento in una classe derivata.  
  
##  <a name="killdockingtimer"></a>CPaneFrameWnd::KillDockingTimer  
 Arresta il timer di ancoraggio.  
  
```  
void KillDockingTimer();
```  
  
##  <a name="loadstate"></a>CPaneFrameWnd::LoadState  
 Carica lo stato del riquadro dal Registro di sistema.  
  
```  
virtual BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,  
    UINT uiID = (UINT) -1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 Nome del profilo.  
  
 [in] `uiID`  
 L'ID del riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se lo stato del riquadro è stato caricato correttamente. in caso contrario `FALSE`.  
  
##  <a name="m_busesavebits"></a>CPaneFrameWnd::m_bUseSaveBits  
 Specifica se registrare la classe di finestra che ha il `CS_SAVEBITS` stile di classe.  
  
```  
AFX_IMPORT_DATA static BOOL m_bUseSaveBits;  
```  
  
### <a name="remarks"></a>Note  
 Impostare il membro statico `TRUE` per registrare la classe di finestra con mini-cornice contenente il `CS_SAVEBITS` stile. Questo può ridurre lo sfarfallio quando un utente trascina la finestra con mini-cornice.  
  
##  <a name="onbeforedock"></a>CPaneFrameWnd::OnBeforeDock  
 Determina se l'ancoraggio è possibile.  
  
```  
virtual BOOL OnBeforeDock();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se l'ancoraggio è possibile. in caso contrario, `FALSE`.  
  
##  <a name="oncheckrollstate"></a>CPaneFrameWnd::OnCheckRollState  
 Determina se eseguire il rollup o il rolldown di una finestra con mini-cornice.  
  
```  
virtual void OnCheckRollState();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework per determinare se una finestra con mini-cornice deve essere eseguita verso l'alto o verso il basso.  
  
 Per impostazione predefinita, il framework chiama [CPaneFrameWnd::IsRollUp](#isrollup) e [CPaneFrameWnd::IsRollDown](#isrolldown) appena allunga o Ripristina la finestra con mini-cornice. È possibile eseguire l'override di questo metodo in una classe derivata per usare un effetto visivo diverso.  
  
##  <a name="ondocktorecentpos"></a>CPaneFrameWnd::OnDockToRecentPos  
 Ancora la finestra con mini-cornice alla posizione più recente.  
  
```  
virtual void OnDockToRecentPos();
```  
  
##  <a name="ondrawborder"></a>CPaneFrameWnd::OnDrawBorder  
 Disegna i bordi di una finestra con mini-cornice.  
  
```  
virtual void OnDrawBorder(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Il contesto di dispositivo utilizzato per disegnare il bordo.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework per disegnare i bordi della finestra con mini-cornice.  
  
##  <a name="onkillrolluptimer"></a>CPaneFrameWnd::OnKillRollUpTimer  
 Arresta il timer di rollup.  
  
```  
virtual void OnKillRollUpTimer();
```  
  
##  <a name="onmovepane"></a>CPaneFrameWnd::OnMovePane  
 Sposta la finestra con mini-cornice in base a un offset specificato.  
  
```  
virtual void OnMovePane(
    CPane* pBar,  
    CPoint ptOffset);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 Un puntatore a un riquadro (ignorato).  
  
 [in] `ptOffset`  
 Offset da cui si desidera spostare il riquadro.  
  
##  <a name="onpanerecalclayout"></a>CPaneFrameWnd::OnPaneRecalcLayout  
 Regola il layout di un riquadro all'interno di una finestra con mini-cornice.  
  
```  
virtual void OnPaneRecalcLayout();
```  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando è necessario modificare il layout di un riquadro all'interno della finestra con mini-cornice.  
  
 Per impostazione predefinita, il riquadro viene posizionato per coprire l'intera area client della finestra con mini-cornice.  
  
##  <a name="onsetrolluptimer"></a>CPaneFrameWnd::OnSetRollUpTimer  
 Imposta il timer di rollup.  
  
```  
virtual void OnSetRollUpTimer();
```  
  
##  <a name="onshowpane"></a>CPaneFrameWnd::OnShowPane  
 Chiamata eseguita dal framework quando un riquadro nella finestra con mini-cornice è nascosto o visualizzato.  
  
```  
virtual void OnShowPane(
    CDockablePane* pBar,  
    BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 Il riquadro che viene visualizzato o nascosto.  
  
 [in] `bShow`  
 `TRUE`Se viene visualizzato il riquadro; `FALSE` se il riquadro viene nascosto.  
  
### <a name="remarks"></a>Note  
 Chiamato dal framework quando un riquadro nella finestra con mini-cornice viene visualizzato o nascosto. L'implementazione predefinita non esegue alcuna operazione.  
  
##  <a name="pin"></a>CPaneFrameWnd::Pin  

  
```  
void Pin(BOOL bPin = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bPin`  
  
### <a name="remarks"></a>Note  
  
##  <a name="panefrompoint"></a>CPaneFrameWnd::PaneFromPoint  
 Restituisce un riquadro contenente un punto fornito dall'utente all'interno di una finestra con mini-cornice.  
  
```  
virtual CBasePane* PaneFromPoint(
    CPoint point,  
    int nSensitivity,  
    BOOL bCheckVisibility);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
 Il punto di cui l'utente ha fatto clic, nelle coordinate dello schermo.  
  
 [in] `nSensitivity`  
 Questo parametro non viene usato.  
  
 [in] `bCheckVisibility`  
 `TRUE`Per specificare che devono essere restituiti solo i riquadri visibili; in caso contrario, `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 Nel riquadro in cui l'utente ha fatto clic o `NULL` se è non presente alcun riquadro in un percorso.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per ottenere un riquadro che contiene il punto specificato.  
  
##  <a name="redrawall"></a>CPaneFrameWnd::RedrawAll  
 Ridisegna tutte le finestre con mini-cornice.  
  
```  
static void RedrawAll();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo aggiorna tutte le finestre con mini-cornice chiamando [CWnd::RedrawWindow](../../mfc/reference/cwnd-class.md#redrawwindow) per ogni finestra.  
  
##  <a name="removenonvalidpanes"></a>CPaneFrameWnd::RemoveNonValidPanes  
 Chiamata eseguita dal framework per rimuovere i riquadri non validi.  
  
```  
virtual void RemoveNonValidPanes();
```  
  
##  <a name="removepane"></a>CPaneFrameWnd::RemovePane  
 Rimuove un riquadro dalla finestra con mini-cornice.  
  
```  
virtual void RemovePane(
    CBasePane* pWnd,  
    BOOL bDestroy = FALSE,  
    BOOL bNoDelayedDestroy = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 Puntatore al riquadro da rimuovere.  
  
 [in] `bDestroy`  
 Specifica che cosa accade alla finestra con mini-cornice. Se `bDestroy` è `TRUE`, questo metodo elimina la finestra con mini-cornice immediatamente. Se è `FALSE`, questo metodo elimina la finestra con mini-cornice dopo un certo ritardo.  
  
 [in] `bNoDelayedDestroy`  
 Se `TRUE`, ritardata distruzione è disabilitata. Se `FALSE`, ritardata eliminazione è abilitata.  
  
### <a name="remarks"></a>Note  
 Il framework può determinare l'eliminazione di windows con mini-cornice immediatamente o dopo un certo ritardo. Se si desidera ritardare la distruzione di finestre con mini-cornice, passare `FALSE` nel `bNoDelayedDestroy` parametro. Eliminazione posticipata si verifica quando il framework elabora i `AFX_WM_CHECKEMPTYMINIFRAME` messaggio.  
  
##  <a name="replacepane"></a>CPaneFrameWnd::ReplacePane  
 Sostituisce un riquadro con un altro.  
  
```  
virtual void ReplacePane(
    CBasePane* pBarOrg,  
    CBasePane* pBarReplaceWith);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBarOrg`  
 Puntatore al riquadro originale.  
  
 [in] `pBarReplaceWith`  
 Puntatore al riquadro che sostituisce il riquadro originale.  
  
##  <a name="savestate"></a>CPaneFrameWnd::SaveState  
 Salva lo stato del riquadro nel Registro di sistema.  
  
```  
virtual BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,  
    UINT uiID = (UINT) -1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 Nome del profilo.  
  
 [in] `uiID`  
 L'ID del riquadro.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se lo stato del riquadro è stato salvato correttamente. in caso contrario `FALSE`.  
  
##  <a name="setcaptionbuttons"></a>CPaneFrameWnd::SetCaptionButtons  
 Imposta i pulsanti della barra del titolo.  
  
```  
virtual void SetCaptionButtons(DWORD dwButtons);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `dwButtons`  
 Combinazione OR bit per bit dei valori seguenti:  
  
- `AFX_CAPTION_BTN_CLOSE`  
  
- `AFX_CAPTION_BTN_PIN`  
  
- `AFX_CAPTION_BTN_MENU`  
  
- `AFX_CAPTION_BTN_CUSTOMIZE`  
  
##  <a name="setdelayshow"></a>CPaneFrameWnd::SetDelayShow  

  
```  
void SetDelayShow(BOOL bDelayShow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bDelayShow`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setdockingmanager"></a>CPaneFrameWnd::SetDockingManager  

  
```  
void SetDockingManager(CDockingManager* pManager);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pManager`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setdockingtimer"></a>CPaneFrameWnd::SetDockingTimer  
 Imposta il timer di ancoraggio.  
  
```  
void SetDockingTimer(UINT nTimeOut);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nTimeOut`  
 Valore di timeout in millisecondi.  
  
##  <a name="setdockstate"></a>CPaneFrameWnd::SetDockState  
 Imposta lo stato di ancoraggio.  
  
```  
virtual void SetDockState(CDockingManager* pDockManager);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDockManager`  
 Puntatore a un gestore di ancoraggio.  
  
##  <a name="sethotpoint"></a>CPaneFrameWnd::SetHotPoint  

  
```  
void SetHotPoint(CPoint& ptNew);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `ptNew`  
  
### <a name="remarks"></a>Note  
  
##  <a name="setpredockstate"></a>CPaneFrameWnd::SetPreDockState  
 Chiamata eseguita dal framework per impostare lo stato di pre-ancoraggio.  
  
```  
virtual BOOL SetPreDockState(
    AFX_PREDOCK_STATE preDockState,  
    CBasePane* pBarToDock = NULL,  
    AFX_DOCK_METHOD dockMethod = DM_MOUSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `preDockState`  
 Valori possibili:  
  
- `PDS_NOTHING`,  
  
- `PDS_DOCK_REGULAR`,  
  
- `PDS_DOCK_TO_TAB`  
  
 [in] `pBarToDock`  
 Puntatore al riquadro per ancorare.  
  
 [in] `dockMethod`  
 Il metodo di ancoraggio. (Questo parametro viene ignorato).  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la finestra con mini-cornice è ancorata; `FALSE` se è ancorata.  
  
##  <a name="sizetocontent"></a>CPaneFrameWnd::SizeToContent  
 Regola le dimensioni di una finestra con mini-cornice in modo che è equivalente a un riquadro contenuto.  
  
```  
virtual void SizeToContent();
```  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per modificare le dimensioni di una finestra con mini-cornice per la dimensione di un riquadro contenuto.  
  
##  <a name="starttearoff"></a>CPaneFrameWnd::StartTearOff  
 Separa un menu.  
  
```  
BOOL StartTearOff(CMFCPopu* pMenu);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pMenu`  
 Un puntatore a un menu.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se il metodo riesce. In caso contrario, `FALSE`.  
  
##  <a name="storerecentdocksiteinfo"></a>CPaneFrameWnd::StoreRecentDockSiteInfo  

  
```  
virtual void StoreRecentDockSiteInfo(CPane* pBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
  
### <a name="remarks"></a>Note  
  
##  <a name="storerecenttabrelatedinfo"></a>CPaneFrameWnd::StoreRecentTabRelatedInfo  

  
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
 [Classe CWnd](../../mfc/reference/cwnd-class.md)
