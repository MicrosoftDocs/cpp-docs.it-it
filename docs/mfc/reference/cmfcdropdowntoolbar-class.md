---
title: Classe CMFCDropDownToolBar | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCDropDownToolBar
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::AllowShowOnPaneMenu
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::LoadBitmap
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::LoadToolBar
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::OnLButtonUp
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::OnMouseMove
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::OnSendCommand
- AFXDROPDOWNTOOLBAR/CMFCDropDownToolBar::OnUpdateCmdUI
dev_langs:
- C++
helpviewer_keywords:
- CMFCDropDownToolBar class
ms.assetid: 78818ec5-83ce-42fa-a0d4-2d9d5ecc8770
caps.latest.revision: 37
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
ms.openlocfilehash: ba643d67b12ba22bcf9fb54d32f3c329fa2c65a0
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcdropdowntoolbar-class"></a>Classe di CMFCDropDownToolBar
Barra degli strumenti visualizzata quando l'utente tiene premuto un pulsante della barra degli strumenti di primo livello.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCDropDownToolBar : public CMFCToolBar  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCDropDownToolBar::AllowShowOnPaneMenu](#allowshowonpanemenu)|Esegue l'override di `CPane::AllowShowOnPaneMenu`.|  
|[CMFCDropDownToolBar::LoadBitmap](#loadbitmap)|(Esegue l'override di [CMFCToolBar::LoadBitmap](../../mfc/reference/cmfctoolbar-class.md#loadbitmap).)|  
|[CMFCDropDownToolBar::LoadToolBar](#loadtoolbar)|(Esegue l'override di [CMFCToolBar::LoadToolBar](../../mfc/reference/cmfctoolbar-class.md#loadtoolbar).)|  
|[CMFCDropDownToolBar::OnLButtonUp](#onlbuttonup)||  
|[CMFCDropDownToolBar::OnMouseMove](#onmousemove)||  
|[CMFCDropDownToolBar::OnSendCommand](#onsendcommand)|Esegue l'override di `CMFCToolBar::OnSendCommand`.|  
|[CMFCDropDownToolBar::OnUpdateCmdUI](#onupdatecmdui)|(Esegue l'override di [CMFCToolBar::OnUpdateCmdUI](http://msdn.microsoft.com/en-us/571a38ab-2a56-4968-9796-273516126f80).)|  
  
### <a name="remarks"></a>Note  
 Oggetto `CMFCDropDownToolBar` oggetto combina l'aspetto di una barra degli strumenti con il comportamento di un menu di scelta rapida. Quando un utente tiene premuto un pulsante di menu a discesa della barra degli strumenti (vedere [CMFCDropDownToolbarButton classe](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)), viene visualizzata una barra degli strumenti dell'elenco a discesa e l'utente può selezionare un pulsante sulla barra degli strumenti dell'elenco a discesa scorrendo ad esso e rilasciare il pulsante del mouse. Dopo che l'utente seleziona un pulsante sulla barra degli strumenti dell'elenco a discesa, tale pulsante viene visualizzato come pulsante corrente sulla barra degli strumenti principale.  
  
 Una barra degli strumenti dell'elenco a discesa non può essere personalizzato o ancorato, e non dispone di uno stato a comparsa.  
  
 La figura seguente mostra un `CMFCDropDownToolBar` oggetto:  
  
 ![Esempio di CMFCDropDownToolbar](../../mfc/reference/media/cmfcdropdown.png "cmfcdropdown")  
  
 Si crea un `CMFCDropDownToolBar` allo stesso modo, si crea una barra degli strumenti comune dell'oggetto (vedere [CMFCToolBar classe](../../mfc/reference/cmfctoolbar-class.md)).  
  
 Per inserire la barra degli strumenti dell'elenco a discesa in una barra degli strumenti padre:  
  
 1. Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre.  
  
 2. Creare un `CMFCDropDownToolBarButton` oggetto che contiene la barra degli strumenti dell'elenco a discesa (per ulteriori informazioni, vedere [CMFCDropDownToolbarButton::CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md#cmfcdropdowntoolbarbutton)).  
  
 3. Sostituire il pulsante fittizio con il `CMFCDropDownToolBarButton` oggetto utilizzando [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).  
  
 Per ulteriori informazioni sui pulsanti della barra degli strumenti, vedere [procedura dettagliata: inserimento di controlli in barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md). Per un esempio di una barra degli strumenti dell'elenco a discesa, vedere il progetto di esempio VisualStudioDemo.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `Create` metodo la `CMFCDropDownToolBar` classe. Questo frammento di codice fa parte di [esempio dimostrativo di Visual Studio](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo&#29;](../../mfc/codesnippet/cpp/cmfcdropdowntoolbar-class_1.h)]  
[!code-cpp[&#30; NVC_MFC_VisualStudioDemo](../../mfc/codesnippet/cpp/cmfcdropdowntoolbar-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
 [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)  
  
 [CMFCDropDownToolBar](../../mfc/reference/cmfcdropdowntoolbar-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdropdowntoolbar.h  
  
##  <a name="allowshowonpanemenu"></a>CMFCDropDownToolBar::AllowShowOnPaneMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL AllowShowOnPaneMenu() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="loadbitmap"></a>CMFCDropDownToolBar::LoadBitmap  
 Carica le immagini della barra degli strumenti dalle risorse dell'applicazione.  
  
```  
virtual BOOL LoadBitmap(
    UINT uiResID,  
    UINT uiColdResID=0,  
    UINT uiMenuResID=0,  
    BOOL bLocked=FALSE,  
    UINT uiDisabledResID=0,  
    UINT uiMenuDisabledResID=0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiResID`  
 ID risorsa della bitmap che fa riferimento alle immagini "calde" della barra degli strumenti.  
  
 [in] `uiColdResID`  
 ID risorsa della bitmap che fa riferimento alle immagini "fredde" della barra degli strumenti.  
  
 [in] `uiMenuResID`  
 ID risorsa della bitmap che fa riferimento alle immagini "normali" della barra dei menu.  
  
 [in] `bLocked`  
 `TRUE`Per bloccare la barra degli strumenti. in caso contrario `FALSE`.  
  
 [in] `uiDisabledResID`  
 ID risorsa della bitmap che fa riferimento alle immagini disabilitate della barra degli strumenti.  
  
 [in] `uiMenuDisabledResID`  
 ID risorsa della bitmap che fa riferimento alle immagini disabilitate del menu.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Il [CMFCToolBar::LoadToolBarEx](../../mfc/reference/cmfctoolbar-class.md#loadtoolbarex) metodo chiama questo metodo per caricare le immagini associati con la barra degli strumenti. Eseguire l'override di questo metodo per eseguire il caricamento personalizzato delle risorse immagine.  
  
 Chiamare il metodo `LoadBitmapEx` per caricare immagini aggiuntive dopo aver creato la barra degli strumenti.  
  
##  <a name="loadtoolbar"></a>CMFCDropDownToolBar::LoadToolBar  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL LoadToolBar(
    UINT uiResID,  
    UINT uiColdResID = 0,  
    UINT uiMenuResID = 0,
    BOOL = FALSE,  
    UINT uiDisabledResID = 0,  
    UINT uiMenuDisabledResID = 0,  
    UINT uiHotResID = 0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiResID`  
 [in] `uiColdResID`  
 [in] `uiMenuResID`  
 [in] `BOOL`  
 [in] `uiDisabledResID`  
 [in] `uiMenuDisabledResID`  
 [in] `uiHotResID`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="onlbuttonup"></a>CMFCDropDownToolBar::OnLButtonUp  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
afx_msg void OnLButtonUp(
    UINT nFlags,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nFlags`  
 [in] `point`  
  
### <a name="remarks"></a>Note  
  
##  <a name="onmousemove"></a>CMFCDropDownToolBar::OnMouseMove  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
afx_msg void OnMouseMove(
    UINT nFlags,  
    CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nFlags`  
 [in] `point`  
  
### <a name="remarks"></a>Note  
  
##  <a name="onsendcommand"></a>CMFCDropDownToolBar::OnSendCommand  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnSendCommand(const CMFCToolBarButton* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="onupdatecmdui"></a>CMFCDropDownToolBar::OnUpdateCmdUI  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,  
    BOOL bDisableIfNoHndler);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pTarget`  
 [in] `bDisableIfNoHndler`  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)   
 [CMFCToolBar::Create](../../mfc/reference/cmfctoolbar-class.md#create)   
 [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)   
 [Classe CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)   
 [Procedura dettagliata: Inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)




