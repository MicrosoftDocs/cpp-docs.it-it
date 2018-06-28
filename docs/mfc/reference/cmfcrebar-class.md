---
title: Classe CMFCReBar | Documenti Microsoft
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
ms.openlocfilehash: fcef7bab4fd2b0cd913c0da929534d6964730215
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37037961"
---
# <a name="cmfcrebar-class"></a>Classe CMFCReBar
Oggetto `CMFCReBar` oggetto è una barra di controllo che fornisce layout, persistenza e le informazioni sullo stato per i controlli rebar.  
   [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
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
|[CMFCReBar::OnUpdateCmdUI](#onupdatecmdui)|(Esegue l'override [CBasePane::OnUpdateCmdUI](http://msdn.microsoft.com/en-us/e139f06a-9793-4ee2-bc3d-517389368c77).)|  
|[CMFCReBar::SetPaneAlignment](#setpanealignment)|(Esegue l'override [CBasePane::SetPaneAlignment](../../mfc/reference/cbasepane-class.md#setpanealignment).)|  
  
## <a name="remarks"></a>Note  
 Oggetto `CMFCReBar` oggetto può contenere diverse finestre figlio. Ciò include le caselle di modifica, le barre degli strumenti e caselle di riepilogo. È possibile ridimensionare il controllo rebar a livello di codice oppure l'utente può ridimensionare manualmente il controllo rebar trascinando la barra verticale di ridimensionamento. È inoltre possibile impostare lo sfondo di un oggetto rebar in una bitmap di propria scelta.  
  
 Un oggetto rebar si comporta in modo analogo a un oggetto barra degli strumenti. Un controllo rebar può contenere una o più bande, e ogni band può contenere una barra verticale di ridimensionamento, una bitmap, un'etichetta di testo e una finestra figlio.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi nella `CMFCReBar` classe. Nell'esempio viene illustrato come creare un controllo rebar e aggiungervi una fuori banda. La banda funziona come una barra degli strumenti interno. Questo frammento di codice fa parte il [campione Rebar](../../visual-cpp-samples.md).  
  
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
 Puntatore alla finestra figlio che deve essere inserito un controllo rebar. L'oggetto cui viene fatto riferimento deve avere il **WS_CHILD** stile della finestra.  
  
 [in] *pszText*  
 Specifica il testo da visualizzare nel controllo rebar. Il testo non fa parte della finestra figlio. Piuttosto, cui viene visualizzato il controllo rebar se stesso.  
  
 [in] [out] *pbmp*  
 Specifica la bitmap da visualizzare sullo sfondo del controllo rebar.  
  
 [in] *dwStyle*  
 Contiene lo stile da applicare di fuori banda. Per un elenco completo degli stili fuori banda, vedere la descrizione `fStyle` nella [REBARBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774393) struttura nella documentazione di Windows SDK.  
  
 [in] *clrFore*  
 Rappresenta il colore di primo piano del controllo rebar.  
  
 [in] *clrBack*  
 Rappresenta il colore di sfondo del controllo rebar.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se la banda è stata aggiunta correttamente per il controllo rebar; in caso contrario, `FALSE`.  
  
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
 Specifica lo stile per il controllo rebar. Il valore di stile predefinito è **RBS_BANDBORDERS**, che consente di visualizzare limitare le righe per separare le bande adiacenti del controllo rebar. Per un elenco degli stili validi, vedere [stili del controllo Rebar](http://msdn.microsoft.com/library/windows/desktop/bb774377) nella documentazione di Windows SDK.  
  
 [in] *dwStyle*  
 Lo stile della finestra del controllo rebar. Per un elenco degli stili validi, vedere [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).  
  
 [in] *nID*  
 ID di finestra figlio. del controllo rebar  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se il controllo rebar è stato creato correttamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getrebarctrl"></a>  CMFCReBar::GetReBarCtrl  
 Fornisce accesso diretto alla `CReBarCtrl` il controllo comune sottostante per `CMFCReBar` oggetti.  
  
```  
CReBarCtrl& GetReBarCtrl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a sottostante `CReBarCtrl` oggetto.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per sfruttare la funzionalità controllo comune rebar di Windows durante la personalizzazione del controllo rebar.  
  
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
