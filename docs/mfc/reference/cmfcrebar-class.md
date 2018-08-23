---
title: Classe CMFCReBar | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCReBar
- AFXREBAR/CMFCReBar
- AFXREBAR/CMFCReBar::AddBar
- AFXREBAR/CMFCReBar::CalcFixedLayout
- AFXREBAR/CMFCReBar::CanFloat
- AFXREBAR/CMFCReBar::Create
- AFXREBAR/CMFCReBar::EnableDocking
- AFXREBAR/CMFCReBar::GetReBarBandInfoSize
- AFXREBAR/CMFCReBar::GetReBarCtrl
- AFXREBAR/CMFCReBar::OnShowControlBarMenu
- AFXREBAR/CMFCReBar::OnToolHitTest
- AFXREBAR/CMFCReBar::OnUpdateCmdUI
- AFXREBAR/CMFCReBar::SetPaneAlignment
dev_langs:
- C++
helpviewer_keywords:
- CMFCReBar [MFC], AddBar
- CMFCReBar [MFC], CalcFixedLayout
- CMFCReBar [MFC], CanFloat
- CMFCReBar [MFC], Create
- CMFCReBar [MFC], EnableDocking
- CMFCReBar [MFC], GetReBarBandInfoSize
- CMFCReBar [MFC], GetReBarCtrl
- CMFCReBar [MFC], OnShowControlBarMenu
- CMFCReBar [MFC], OnToolHitTest
- CMFCReBar [MFC], OnUpdateCmdUI
- CMFCReBar [MFC], SetPaneAlignment
ms.assetid: 02a60e29-6224-49c1-9e74-e0a7d9f8d023
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c8af155401492e97be6a9e3a80b72c8c4e7fbd9e
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42539817"
---
# <a name="cmfcrebar-class"></a>Classe CMFCReBar
Oggetto `CMFCReBar` oggetto è una barra di controllo che fornisce layout, persistenza e le informazioni sullo stato per i controlli rebar.  
   Per altre informazioni, vedere il codice sorgente disponibile nel **VC\\atlmfc\\src\\mfc** cartella di installazione di Visual Studio.  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCReBar : public CPane  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCReBar::AddBar](#addbar)|Aggiunge una banda di un controllo rebar.|  
|[CMFCReBar::CalcFixedLayout](#calcfixedlayout)|(Esegue l'override [cbasepane:: Calcfixedlayout](../../mfc/reference/cbasepane-class.md#calcfixedlayout).)|  
|[CMFCReBar::CanFloat](#canfloat)|(Esegue l'override [CBasePane::CanFloat](../../mfc/reference/cbasepane-class.md#canfloat).)|  
|[CMFCReBar::Create](#create)|Crea il controllo rebar e lo collega al `CMFCReBar` oggetto.|  
|[CMFCReBar::EnableDocking](#enabledocking)|(Esegue l'override [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#enabledocking).)|  
|[CMFCReBar::GetReBarBandInfoSize](#getrebarbandinfosize)||  
|[CMFCReBar::GetReBarCtrl](#getrebarctrl)|Fornisce accesso diretto alla sottostante [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) controllo comune.|  
|[CMFCReBar::OnShowControlBarMenu](#onshowcontrolbarmenu)|(Esegue l'override [cpane:: Onshowcontrolbarmenu](../../mfc/reference/cpane-class.md#onshowcontrolbarmenu).)|  
|[CMFCReBar::OnToolHitTest](#ontoolhittest)|(Esegue l'override [CWnd::OnToolHitTest](../../mfc/reference/cwnd-class.md#ontoolhittest).)|  
|[CMFCReBar::OnUpdateCmdUI](#onupdatecmdui)|(Esegue l'override [CBasePane::OnUpdateCmdUI](http://msdn.microsoft.com/e139f06a-9793-4ee2-bc3d-517389368c77).)|  
|[CMFCReBar::SetPaneAlignment](#setpanealignment)|(Esegue l'override [CBasePane::SetPaneAlignment](../../mfc/reference/cbasepane-class.md#setpanealignment).)|  
  
## <a name="remarks"></a>Note  
 Oggetto `CMFCReBar` oggetto può contenere una varietà di finestre figlio. Ciò include le caselle di modifica, le barre degli strumenti e le caselle di riepilogo. È possibile ridimensionare il controllo rebar a livello di codice, o l'utente può ridimensionare manualmente il controllo rebar trascinando la barra gripper. È anche possibile impostare lo sfondo di un oggetto rebar in una bitmap di propria scelta.  
  
 Un oggetto rebar si comporta in modo analogo a un oggetto della barra degli strumenti. Un controllo rebar può contenere uno o più bande, e ogni fuori banda può contenere una barra gripper, una bitmap, un'etichetta di testo e una finestra figlio.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi nel `CMFCReBar` classe. Nell'esempio viene illustrato come creare un controllo rebar e aggiungervi una fuori banda. La banda funziona come una barra degli strumenti interno. Questo frammento di codice fa parte di [Rebar campione](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_RebarTest#1](../../mfc/reference/codesnippet/cpp/cmfcrebar-class_1.h)]  
[!code-cpp[NVC_MFC_RebarTest#2](../../mfc/reference/codesnippet/cpp/cmfcrebar-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md) [CCmdTarget](../../mfc/reference/ccmdtarget-class.md) [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md) [CPane](../../mfc/reference/cpane-class.md) [CMFCReBar](../../mfc/reference/cmfcrebar-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxRebar.h  
  
##  <a name="addbar"></a>  CMFCReBar::AddBar  
 Aggiunge una banda di un controllo rebar.  
  
```  
BOOL AddBar(
    CWnd* pBar,  
    LPCTSTR pszText = NULL,  
    CBitmap* pbmp = NULL,  
    DWORD dwStyle = RBBS_GRIPPERALWAYS | RBBS_FIXEDBMP);

BOOL AddBar(
    CWnd* pBar,  
    COLORREF clrFore,  
    COLORREF clrBack,  
    LPCTSTR pszText = NULL,  
    DWORD dwStyle = RBBS_GRIPPERALWAYS);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out] *pBar*  
 Puntatore alla finestra figlio che deve essere inserito nel controllo rebar. L'oggetto di riferimento deve avere il **WS_CHILD** stile della finestra.  
  
 [in] *pszText*  
 Specifica il testo da visualizzare sul controllo rebar. Il testo non fa parte della finestra figlio. Piuttosto, viene visualizzato nel controllo rebar stesso.  
  
 [in] [out] *pbmp*  
 Specifica la bitmap da visualizzare sullo sfondo del controllo rebar.  
  
 [in] *dwStyle*  
 Contiene lo stile da applicare di fuori banda. Per un elenco completo degli stili fuori banda, vedere la descrizione per la `fStyle` nella [REBARBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774393) struttura nella documentazione di Windows SDK.  
  
 [in] *clrFore*  
 Rappresenta il colore di primo piano del controllo rebar.  
  
 [in] *clrBack*  
 Rappresenta il colore di sfondo del controllo rebar.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la banda è stato aggiunto al controllo rebar; in caso contrario, FALSE.  
  
##  <a name="create"></a>  CMFCReBar::Create  
 Crea il controllo rebar e lo collega al [CMFCReBar](../../mfc/reference/cmfcrebar-class.md) oggetto.  
  
```  
BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwCtrlStyle = RBS_BANDBORDERS,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_TOP,  
    UINT nID = AFX_IDW_REBAR);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out] *pParentWnd*  
 Puntatore alla finestra padre di questo controllo rebar.  
  
 [in] *dwCtrlStyle*  
 Specifica lo stile del controllo rebar. Il valore di stile di visualizzazione predefinito è **RBS_BANDBORDERS**, che consente di visualizzare limitare le righe per separare le bande adiacenti nel controllo rebar. Per un elenco degli stili validi, vedere [stili del controllo Rebar](http://msdn.microsoft.com/library/windows/desktop/bb774377) nella documentazione di Windows SDK.  
  
 [in] *dwStyle*  
 Lo stile della finestra del controllo rebar. Per un elenco degli stili validi, vedere [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).  
  
 [in] *nID*  
 ID finestra figlio del controllo rebar  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il controllo rebar è stato creato correttamente. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getrebarctrl"></a>  CMFCReBar::GetReBarCtrl  
 Fornisce accesso diretto alla `CReBarCtrl` il controllo comune sottostante per `CMFCReBar` oggetti.  
  
```  
CReBarCtrl& GetReBarCtrl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto sottostante `CReBarCtrl` oggetto.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per sfruttare la funzionalità controllo comune rebar di Windows quando si personalizza il controllo rebar.  
  
##  <a name="calcfixedlayout"></a>  CMFCReBar::CalcFixedLayout  

  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bStretch*  
 [in] *bHorz*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="canfloat"></a>  CMFCReBar::CanFloat  

  
```  
virtual BOOL CanFloat() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="enabledocking"></a>  CMFCReBar::EnableDocking  

  
```  
void EnableDocking(DWORD dwDockStyle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *dwDockStyle*  
  
### <a name="remarks"></a>Note  
  
##  <a name="getrebarbandinfosize"></a>  CMFCReBar::GetReBarBandInfoSize  

  
```  
UINT GetReBarBandInfoSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="onshowcontrolbarmenu"></a>  CMFCReBar::OnShowControlBarMenu  

  
```  
virtual BOOL OnShowControlBarMenu(CPoint);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *CPoint*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="ontoolhittest"></a>  CMFCReBar::OnToolHitTest  

  
```  
virtual INT_PTR OnToolHitTest(
    CPoint point,  
    TOOLINFO* pTI) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] *punto*  
 [in] *pTI*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="onupdatecmdui"></a>  CMFCReBar::OnUpdateCmdUI  

  
```  
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,  
    BOOL bDisableIfNoHndler);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pTarget*  
 [in] *bDisableIfNoHndler*  
  
### <a name="remarks"></a>Note  
  
##  <a name="setpanealignment"></a>  CMFCReBar::SetPaneAlignment  

  
```  
virtual void SetPaneAlignment(DWORD dwAlignment);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *dwAlignment*  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CReBarCtrl (classe)](../../mfc/reference/crebarctrl-class.md)   
 [Classe CPane](../../mfc/reference/cpane-class.md)
