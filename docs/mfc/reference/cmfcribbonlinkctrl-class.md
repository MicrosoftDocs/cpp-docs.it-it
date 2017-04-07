---
title: Classe CMFCRibbonLinkCtrl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonLinkCtrl
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::CMFCRibbonLinkCtrl
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::CopyFrom
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::GetCompactSize
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::GetLink
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::GetRegularSize
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::GetToolTipText
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::IsDrawTooltipImage
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::OnDraw
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::OnDrawMenuImage
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::OnMouseMove
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::OnSetIcon
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::OpenLink
- AFXRIBBONLINKCTRL/CMFCRibbonLinkCtrl::SetLink
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonLinkCtrl class
ms.assetid: 77ae1941-e0ab-4a9d-911e-1752d34c079b
caps.latest.revision: 22
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
ms.openlocfilehash: 87b6c595475a69eb26c8c2e83789ea6c4394e653
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcribbonlinkctrl-class"></a>Classe CMFCRibbonLinkCtrl
Implementa un collegamento ipertestuale collocato in una barra multifunzione. Il collegamento ipertestuale apre una pagina Web quando si fa clic su di esso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonLinkCtrl : public CMFCRibbonButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonLinkCtrl::CMFCRibbonLinkCtrl](#cmfcribbonlinkctrl)|Costruisce e inizializza un oggetto `CMFCRibbonLinkCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonLinkCtrl::CopyFrom](#copyfrom)|Esegue l'override di `CMFCRibbonButton::CopyFrom`.|  
|[CMFCRibbonLinkCtrl::GetCompactSize](#getcompactsize)|(Esegue l'override di [CMFCRibbonButton::GetCompactSize](../../mfc/reference/cmfcribbonbutton-class.md#getcompactsize).)|  
|[CMFCRibbonLinkCtrl::GetLink](#getlink)|Restituisce il valore del collegamento ipertestuale.|  
|[CMFCRibbonLinkCtrl::GetRegularSize](#getregularsize)|(Esegue l'override di [CMFCRibbonButton::GetRegularSize](../../mfc/reference/cmfcribbonbutton-class.md#getregularsize).)|  
|[CMFCRibbonLinkCtrl::GetToolTipText](#gettooltiptext)|(Esegue l'override di [CMFCRibbonButton::GetToolTipText](../../mfc/reference/cmfcribbonbutton-class.md#gettooltiptext).)|  
|[CMFCRibbonLinkCtrl::IsDrawTooltipImage](#isdrawtooltipimage)|Esegue l'override di `CMFCRibbonButton::IsDrawTooltipImage`.|  
|[CMFCRibbonLinkCtrl::OnDraw](#ondraw)|(Esegue l'override di [CMFCRibbonButton::OnDraw](../../mfc/reference/cmfcribbonbutton-class.md#ondraw).)|  
|[CMFCRibbonLinkCtrl::OnDrawMenuImage](#ondrawmenuimage)|(Esegue l'override di [CMFCRibbonBaseElement::OnDrawMenuImage](../../mfc/reference/cmfcribbonbaseelement-class.md#ondrawmenuimage).)|  
|[CMFCRibbonLinkCtrl::OnMouseMove](#onmousemove)|Esegue l'override di `CMFCRibbonButton::OnMouseMove`.|  
|[CMFCRibbonLinkCtrl::OnSetIcon](#onseticon)||  
|[CMFCRibbonLinkCtrl::OpenLink](#openlink)|Apre la pagina Web specificata nel collegamento ipertestuale.|  
|[CMFCRibbonLinkCtrl::SetLink](#setlink)|Imposta il valore del collegamento ipertestuale.|  
  
## <a name="remarks"></a>Note  
 Dopo aver creato un collegamento ipertestuale, aggiungerlo a un pannello chiamando [CMFCRibbonPanel::Add](../../mfc/reference/cmfcribbonpanel-class.md#add).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md) [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md) [CMFCRibbonLinkCtrl](../../mfc/reference/cmfcribbonlinkctrl-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxRibbonLinkCtrl.h  
  
##  <a name="cmfcribbonlinkctrl"></a>CMFCRibbonLinkCtrl::CMFCRibbonLinkCtrl  
 Costruisce e Inizializza un [CMFCRibbonLinkCtrl](../../mfc/reference/cmfcribbonlinkctrl-class.md) oggetto.  
  
```  
CMFCRibbonLinkCtrl(
    UINT nID,  
    LPCTSTR lpszText,  
    LPCTSTR lpszLink);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
 Specifica l'ID di comando del comando che viene eseguito quando si seleziona il controllo di collegamento.  
  
 [in] `lpszText`  
 Specifica l'etichetta da visualizzare nel controllo di collegamento.  
  
 [in] `lpszLink`  
 Specifica il collegamento ipertestuale associato al controllo di collegamento.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il costruttore della `CMFCRibbonLinkCtrl` classe. Questo frammento di codice fa parte di [esempio barra multifunzione gadget](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_RibbonGadgets n.&1;](../../mfc/reference/codesnippet/cpp/cmfcribbonlinkctrl-class_1.cpp)]  
  
##  <a name="copyfrom"></a>CMFCRibbonLinkCtrl::CopyFrom  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `src`  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcompactsize"></a>CMFCRibbonLinkCtrl::GetCompactSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetCompactSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getlink"></a>CMFCRibbonLinkCtrl::GetLink  
 Restituisce il valore del collegamento ipertestuale.  
  
```  
LPCTSTR GetLink() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore corrente del collegamento ipertestuale.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getregularsize"></a>CMFCRibbonLinkCtrl::GetRegularSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetRegularSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="gettooltiptext"></a>CMFCRibbonLinkCtrl::GetToolTipText  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CString GetToolTipText() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondrawmenuimage"></a>CMFCRibbonLinkCtrl::OnDrawMenuImage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnDrawMenuImage(CDC*, CRect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `CDC*`  
 [in] `CRect`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="isdrawtooltipimage"></a>CMFCRibbonLinkCtrl::IsDrawTooltipImage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsDrawTooltipImage() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondraw"></a>CMFCRibbonLinkCtrl::OnDraw  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
  
### <a name="remarks"></a>Note  
  
##  <a name="onmousemove"></a>CMFCRibbonLinkCtrl::OnMouseMove  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnMouseMove(CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `point`  
  
### <a name="remarks"></a>Note  
  
##  <a name="onseticon"></a>CMFCRibbonLinkCtrl::OnSetIcon  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnSetIcon();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="openlink"></a>CMFCRibbonLinkCtrl::OpenLink  
 Apre la pagina Web specificata nel collegamento ipertestuale.  
  
```  
BOOL OpenLink();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la pagina Web associata è stata aperta correttamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Verrà visualizzata una pagina web utilizzando il collegamento ipertestuale associato di `CMFCRibbonLinkCtrl` oggetto.  
  
##  <a name="setlink"></a>CMFCRibbonLinkCtrl::SetLink  
 Imposta il valore del collegamento ipertestuale.  
  
```  
void SetLink(LPCTSTR lpszLink);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszLink`  
 Specifica il testo del collegamento ipertestuale.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

