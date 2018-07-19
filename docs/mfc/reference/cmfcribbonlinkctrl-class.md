---
title: Classe CMFCRibbonLinkCtrl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CMFCRibbonLinkCtrl [MFC], CMFCRibbonLinkCtrl
- CMFCRibbonLinkCtrl [MFC], CopyFrom
- CMFCRibbonLinkCtrl [MFC], GetCompactSize
- CMFCRibbonLinkCtrl [MFC], GetLink
- CMFCRibbonLinkCtrl [MFC], GetRegularSize
- CMFCRibbonLinkCtrl [MFC], GetToolTipText
- CMFCRibbonLinkCtrl [MFC], IsDrawTooltipImage
- CMFCRibbonLinkCtrl [MFC], OnDraw
- CMFCRibbonLinkCtrl [MFC], OnDrawMenuImage
- CMFCRibbonLinkCtrl [MFC], OnMouseMove
- CMFCRibbonLinkCtrl [MFC], OnSetIcon
- CMFCRibbonLinkCtrl [MFC], OpenLink
- CMFCRibbonLinkCtrl [MFC], SetLink
ms.assetid: 77ae1941-e0ab-4a9d-911e-1752d34c079b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 26837b4eda881bdf83e2f34f0c81a1b0e7034ffe
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37851496"
---
# <a name="cmfcribbonlinkctrl-class"></a>Classe CMFCRibbonLinkCtrl
Implementa un collegamento ipertestuale collocato in una barra multifunzione. Il collegamento ipertestuale apre una pagina Web quando si fa clic su di esso.  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
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
|[CMFCRibbonLinkCtrl::CopyFrom](#copyfrom)|Esegue l'override`CMFCRibbonButton::CopyFrom`.|  
|[CMFCRibbonLinkCtrl::GetCompactSize](#getcompactsize)|(Esegue l'override [cmfcribbonbutton:: Getcompactsize](../../mfc/reference/cmfcribbonbutton-class.md#getcompactsize).)|  
|[CMFCRibbonLinkCtrl::GetLink](#getlink)|Restituisce il valore del collegamento ipertestuale.|  
|[CMFCRibbonLinkCtrl::GetRegularSize](#getregularsize)|(Esegue l'override [cmfcribbonbutton:: Getregularsize](../../mfc/reference/cmfcribbonbutton-class.md#getregularsize).)|  
|[CMFCRibbonLinkCtrl::GetToolTipText](#gettooltiptext)|(Esegue l'override [cmfcribbonbutton:: GetToolTipText](../../mfc/reference/cmfcribbonbutton-class.md#gettooltiptext).)|  
|[CMFCRibbonLinkCtrl::IsDrawTooltipImage](#isdrawtooltipimage)|Esegue l'override`CMFCRibbonButton::IsDrawTooltipImage`.|  
|[CMFCRibbonLinkCtrl::OnDraw](#ondraw)|(Esegue l'override [cmfcribbonbutton:: OnDraw](../../mfc/reference/cmfcribbonbutton-class.md#ondraw).)|  
|[CMFCRibbonLinkCtrl::OnDrawMenuImage](#ondrawmenuimage)|(Esegue l'override [cmfcribbonbaseelement:: Ondrawmenuimage](../../mfc/reference/cmfcribbonbaseelement-class.md#ondrawmenuimage).)|  
|[CMFCRibbonLinkCtrl::OnMouseMove](#onmousemove)|Esegue l'override`CMFCRibbonButton::OnMouseMove`.|  
|[CMFCRibbonLinkCtrl::OnSetIcon](#onseticon)||  
|[CMFCRibbonLinkCtrl::OpenLink](#openlink)|Apre la pagina Web specificata nel collegamento ipertestuale.|  
|[CMFCRibbonLinkCtrl::SetLink](#setlink)|Imposta il valore del collegamento ipertestuale.|  
  
## <a name="remarks"></a>Note  
 Dopo aver creato un collegamento ipertestuale, aggiungerlo a un pannello chiamando [cmfcribbonpanel:: Add](../../mfc/reference/cmfcribbonpanel-class.md#add).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md) [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md) [CMFCRibbonLinkCtrl](../../mfc/reference/cmfcribbonlinkctrl-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribbonlinkctrl. H  
  
##  <a name="cmfcribbonlinkctrl"></a>  CMFCRibbonLinkCtrl::CMFCRibbonLinkCtrl  
 Costruisce e Inizializza un [CMFCRibbonLinkCtrl](../../mfc/reference/cmfcribbonlinkctrl-class.md) oggetto.  
  
```  
CMFCRibbonLinkCtrl(
    UINT nID,  
    LPCTSTR lpszText,  
    LPCTSTR lpszLink);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nID*  
 Specifica l'ID di comando del comando che viene eseguito quando si fa clic sul controllo collegamento.  
  
 [in] *lpszText*  
 Specifica l'etichetta da visualizzare nel controllo collegamento.  
  
 [in] *lpszLink*  
 Specifica il collegamento ipertestuale associato al controllo di collegamento.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il costruttore del `CMFCRibbonLinkCtrl` classe. Questo frammento di codice fa parte di [esempio di gadget della barra multifunzione](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_RibbonGadgets#1](../../mfc/reference/codesnippet/cpp/cmfcribbonlinkctrl-class_1.cpp)]  
  
##  <a name="copyfrom"></a>  CMFCRibbonLinkCtrl::CopyFrom  

  
```  
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *src*  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcompactsize"></a>  CMFCRibbonLinkCtrl::GetCompactSize  

  
```  
virtual CSize GetCompactSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pDC*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getlink"></a>  CMFCRibbonLinkCtrl::GetLink  
 Restituisce il valore del collegamento ipertestuale.  
  
```  
LPCTSTR GetLink() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore corrente del collegamento ipertestuale.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getregularsize"></a>  CMFCRibbonLinkCtrl::GetRegularSize  

  
```  
virtual CSize GetRegularSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pDC*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="gettooltiptext"></a>  CMFCRibbonLinkCtrl::GetToolTipText  

  
```  
virtual CString GetToolTipText() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondrawmenuimage"></a>  CMFCRibbonLinkCtrl::OnDrawMenuImage  

  
```  
virtual BOOL OnDrawMenuImage(CDC*, CRect);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *CDC**  
 [in] *CRect*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="isdrawtooltipimage"></a>  CMFCRibbonLinkCtrl::IsDrawTooltipImage  

  
```  
virtual BOOL IsDrawTooltipImage() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="ondraw"></a>  CMFCRibbonLinkCtrl::OnDraw  

  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pDC*  
  
### <a name="remarks"></a>Note  
  
##  <a name="onmousemove"></a>  CMFCRibbonLinkCtrl::OnMouseMove  

  
```  
virtual void OnMouseMove(CPoint point);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *punto*  
  
### <a name="remarks"></a>Note  
  
##  <a name="onseticon"></a>  CMFCRibbonLinkCtrl::OnSetIcon  

  
```  
virtual void OnSetIcon();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="openlink"></a>  CMFCRibbonLinkCtrl::OpenLink  
 Apre la pagina Web specificata nel collegamento ipertestuale.  
  
```  
BOOL OpenLink();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la pagina Web associata è stato aperto correttamente; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Viene aperta una pagina Web usando il collegamento ipertestuale associato il `CMFCRibbonLinkCtrl` oggetto.  
  
##  <a name="setlink"></a>  CMFCRibbonLinkCtrl::SetLink  
 Imposta il valore del collegamento ipertestuale.  
  
```  
void SetLink(LPCTSTR lpszLink);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *lpszLink*  
 Specifica il testo del collegamento ipertestuale.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)
