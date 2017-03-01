---
title: Classe CMFCLinkCtrl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCLinkCtrl
dev_langs:
- C++
helpviewer_keywords:
- CMFCLinkCtrl class
ms.assetid: 80f3874d-7cc8-410e-9ff1-62a225f5034b
caps.latest.revision: 27
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 8c926c0ef611470b137d2bb897c012a85645c90c
ms.lasthandoff: 02/24/2017

---
# <a name="cmfclinkctrl-class"></a>Classe CMFCLinkCtrl
La `CMFCLinkCtrl` classe visualizza un pulsante come collegamento ipertestuale e richiama la destinazione del collegamento quando si fa clic sul pulsante.  
  
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
|[CMFCLinkCtrl::OnDrawFocusRect](#ondrawfocusrect)|Chiamato dal framework prima di disegnata il rettangolo di selezione del pulsante.|  
  
## <a name="remarks"></a>Note  
 Quando si fa clic su un pulsante che deriva dal `CMFCLinkCtrl` (classe), il framework passa l'URL del pulsante come parametro per il `ShellExecute` metodo. Il `ShellExecute` metodo consente di aprire la destinazione dell'URL.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come impostare le dimensioni di un `CMFCLinkCtrl` oggetto e come impostare un url e una descrizione comando in un `CMFCLinkCtrl` oggetto. Questo esempio fa parte di [esempio nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[9 NVC_MFC_NewControls](../../mfc/reference/codesnippet/cpp/cmfclinkctrl-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls&#10;](../../mfc/reference/codesnippet/cpp/cmfclinkctrl-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 [CMFCButton](../../mfc/reference/cmfcbutton-class.md)  
  
 [CMFCLinkCtrl](../../mfc/reference/cmfclinkctrl-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxlinkctrl.h  
  
##  <a name="a-nameondrawfocusrecta--cmfclinkctrlondrawfocusrect"></a><a name="ondrawfocusrect"></a>CMFCLinkCtrl::OnDrawFocusRect  
 Chiamato dal framework prima di disegnata il rettangolo di selezione del pulsante.  
  
```  
virtual void OnDrawFocusRect(
    CDC* pDC,  
    const CRect& rectClient);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 [in] `rectClient`  
 Un rettangolo che limita il controllo di collegamento.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo quando si desidera utilizzare il proprio codice per disegnare il rettangolo di attivazione del pulsante.  
  
##  <a name="a-nameseturla--cmfclinkctrlseturl"></a><a name="seturl"></a>CMFCLinkCtrl::SetURL  
 Consente di visualizzare un URL specificato come testo del pulsante.  
  
```  
void SetURL(LPCTSTR lpszURL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszURL`  
 Per visualizzare il testo del pulsante.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameseturlprefixa--cmfclinkctrlseturlprefix"></a><a name="seturlprefix"></a>CMFCLinkCtrl::SetURLPrefix  
 Imposta il protocollo implicito (ad esempio, "http:") dell'URL.  
  
```  
void SetURLPrefix(LPCTSTR lpszPrefix);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszPrefix`  
 Il prefisso del protocollo URL.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per impostare il prefisso URL. Il prefisso non viene visualizzato sulla superficie del pulsante, ma è possibile utilizzare per passare alla destinazione dell'URL.  
  
##  <a name="a-namesizetocontenta--cmfclinkctrlsizetocontent"></a><a name="sizetocontent"></a>CMFCLinkCtrl::SizeToContent  
 Ridimensiona il pulsante per contenere il testo del pulsante o bitmap.  
  
```  
virtual CSize SizeToContent(
    BOOL bVCenter=FALSE,  
    BOOL bHCenter=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bVCenter`  
 `TRUE`al centro il testo del pulsante e bitmap in senso verticale tra la parte superiore e inferiore del controllo di collegamento. in caso contrario, `FALSE`. Il valore predefinito è `FALSE`.  
  
 [in] `bHCenter`  
 `TRUE`al centro il testo del pulsante e bitmap in senso orizzontale tra i lati sinistro e destro del controllo di collegamento. in caso contrario, `FALSE`. Il valore predefinito è `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che contiene la nuova dimensione del controllo di collegamento.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CLinkCtrl](../../mfc/reference/clinkctrl-class.md)   
 [Classe CMFCButton](../../mfc/reference/cmfcbutton-class.md)

