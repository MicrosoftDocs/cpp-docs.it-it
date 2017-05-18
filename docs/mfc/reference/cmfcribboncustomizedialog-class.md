---
title: Classe CMFCRibbonCustomizeDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonCustomizeDialog
- AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizeDialog
- AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonCustomizeDialog class
- CMFCRibbonCustomizeDialog class, destructor
- ~CMFCRibbonCustomizeDialog destructor
- GetThisClass method
ms.assetid: ce67de7f-5eaa-4c75-9b94-f290f36df073
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: d27247f89901adad1778313cdde6fe206a569f0d
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcribboncustomizedialog-class"></a>Classe CMFCRibbonCustomizeDialog
Visualizza la barra multifunzione **Personalizza** pagina.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonCustomizeDialog : public CMFCPropertySheet  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog](#cmfcribboncustomizedialog)|Costruisce un oggetto `CMFCRibbonCustomizeDialog`.|  
|`CMFCRibbonCustomizeDialog::~CMFCRibbonCustomizeDialog`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCRibbonCustomizeDialog::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
  
## <a name="remarks"></a>Note  
 MFC crea un'istanza di questa classe automaticamente se non è stato elaborato il messaggio AFX_WM_ON_RIBBON_CUSTOMIZE o se viene restituito 0 dal gestore dei messaggi.  
  
 Se si desidera utilizzare questa classe nell'applicazione per visualizzare la barra multifunzione **Personalizza** finestra di dialogo casella, solo un'istanza e chiamare il `DoModal` metodo.  
  
 Poiché questa classe è derivata da [classe CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md), è possibile aggiungere pagine personalizzate utilizzando il `CMFCPropertySheet` API.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CPropertySheet](../../mfc/reference/cpropertysheet-class.md)  
  
 [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md)  
  
 [CMFCRibbonCustomizeDialog](../../mfc/reference/cmfcribboncustomizedialog-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribboncustomizedialog.h  
  
##  <a name="cmfcribboncustomizedialog"></a>CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog  
 Costruisce un oggetto `CMFCRibbonCustomizeDialog`.  
  
```  
CMFCRibbonCustomizeDialog(
    CWnd* pWndParent,  
    CMFCRibbonBar* pRibbon);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParent`  
 Puntatore alla finestra padre (in genere la cornice principale).  
  
 [in] `pRibbon`  
 Un puntatore per il `CMFCRibbonBar` che è possibile personalizzare.  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un `CMFCRibbonCustomizeDialog` oggetto.  
  
 [!code-cpp[NVC_MFC_RibbonApp&#18;](../../mfc/reference/codesnippet/cpp/cmfcribboncustomizedialog-class_1.cpp)]  
  
### <a name="remarks"></a>Note  
 Il costruttore crea un [CMFCRibbonCustomizePropertyPage classe](../../mfc/reference/cmfcribboncustomizepropertypage-class.md) e lo aggiunge alla raccolta di pagine della finestra delle proprietà.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)

