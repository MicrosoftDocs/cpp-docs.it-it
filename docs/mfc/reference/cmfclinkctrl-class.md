---
title: Classe CMFCLinkCtrl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- CMFCLinkCtrl
- AFXLINKCTRL/CMFCLinkCtrl
- AFXLINKCTRL/CMFCLinkCtrl::SetURL
- AFXLINKCTRL/CMFCLinkCtrl::SetURLPrefix
- AFXLINKCTRL/CMFCLinkCtrl::SizeToContent
- AFXLINKCTRL/CMFCLinkCtrl::OnDrawFocusRect
dev_langs:
- C++
helpviewer_keywords:
- CMFCLinkCtrl [MFC], SetURL
- CMFCLinkCtrl [MFC], SetURLPrefix
- CMFCLinkCtrl [MFC], SizeToContent
- CMFCLinkCtrl [MFC], OnDrawFocusRect
ms.assetid: 80f3874d-7cc8-410e-9ff1-62a225f5034b
caps.latest.revision: 27
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fc83e5abf09102af8f27b1ee73fc78ed162b9335
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmfclinkctrl-class"></a>Classe CMFCLinkCtrl
La `CMFCLinkCtrl` classe viene visualizzato un pulsante come collegamento ipertestuale e richiama la destinazione del collegamento quando si fa clic sul pulsante.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCLinkCtrl : public CMFCButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCLinkCtrl::SetURL](#seturl)|Consente di visualizzare un URL specificato come testo del pulsante.|  
|[CMFCLinkCtrl::SetURLPrefix](#seturlprefix)|Imposta il protocollo implicito (ad esempio, "http:") dell'URL.|  
|[CMFCLinkCtrl::SizeToContent](#sizetocontent)|Ridimensiona il pulsante per contenere il testo del pulsante o bitmap.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCLinkCtrl::OnDrawFocusRect](#ondrawfocusrect)|Chiamato dal framework prima che venga disegnato il rettangolo di attivazione del pulsante.|  
  
## <a name="remarks"></a>Note  
 Quando si fa clic su un pulsante che viene derivato dal `CMFCLinkCtrl` (classe), il framework passa l'URL del pulsante come parametro per il `ShellExecute` metodo. Il `ShellExecute` metodo consente di aprire la destinazione dell'URL.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come impostare le dimensioni di un `CMFCLinkCtrl` oggetto e come impostare un url e una descrizione comando in un `CMFCLinkCtrl` oggetto. In questo esempio fa parte di [esempio nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#9](../../mfc/reference/codesnippet/cpp/cmfclinkctrl-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#10](../../mfc/reference/codesnippet/cpp/cmfclinkctrl-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 [CMFCButton](../../mfc/reference/cmfcbutton-class.md)  
  
 [CMFCLinkCtrl](../../mfc/reference/cmfclinkctrl-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxlinkctrl.h  
  
##  <a name="ondrawfocusrect"></a>CMFCLinkCtrl::OnDrawFocusRect  
 Chiamato dal framework prima che venga disegnato il rettangolo di attivazione del pulsante.  
  
```  
virtual void OnDrawFocusRect(
    CDC* pDC,  
    const CRect& rectClient);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rectClient`  
 Un rettangolo che limita il controllo collegamento.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo quando si desidera utilizzare il proprio codice per disegnare il rettangolo di attivazione del pulsante.  
  
##  <a name="seturl"></a>CMFCLinkCtrl::SetURL  
 Consente di visualizzare un URL specificato come testo del pulsante.  
  
```  
void SetURL(LPCTSTR lpszURL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszURL`  
 Per visualizzare il testo del pulsante.  
  
### <a name="remarks"></a>Note  
  
##  <a name="seturlprefix"></a>CMFCLinkCtrl::SetURLPrefix  
 Imposta il protocollo implicito (ad esempio, "http:") dell'URL.  
  
```  
void SetURLPrefix(LPCTSTR lpszPrefix);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszPrefix`  
 Il prefisso del protocollo URL.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per impostare il prefisso dell'URL. Il prefisso non viene visualizzato sulla superficie del pulsante, ma è possibile utilizzarlo per consente di passare di destinazione dell'URL.  
  
##  <a name="sizetocontent"></a>CMFCLinkCtrl::SizeToContent  
 Ridimensiona il pulsante per contenere il testo del pulsante o bitmap.  
  
```  
virtual CSize SizeToContent(
    BOOL bVCenter=FALSE,  
    BOOL bHCenter=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bVCenter`  
 `TRUE`al centro il testo del pulsante e bitmap verticalmente tra la parte superiore e inferiore del controllo collegamento. in caso contrario, `FALSE`. Il valore predefinito è `FALSE`.  
  
 [in] `bHCenter`  
 `TRUE`al centro il testo del pulsante e bitmap orizzontalmente tra i lati sinistro e destro del controllo collegamento. in caso contrario, `FALSE`. Il valore predefinito è `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che contiene le nuove dimensioni del controllo collegamento.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CLinkCtrl](../../mfc/reference/clinkctrl-class.md)   
 [Classe CMFCButton](../../mfc/reference/cmfcbutton-class.md)
