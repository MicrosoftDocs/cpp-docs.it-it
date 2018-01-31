---
title: Classe CMFCRibbonCustomizeDialog | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonCustomizeDialog
- AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizeDialog
- AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog
dev_langs: C++
helpviewer_keywords: CMFCRibbonCustomizeDialog [MFC], CMFCRibbonCustomizeDialog
ms.assetid: ce67de7f-5eaa-4c75-9b94-f290f36df073
caps.latest.revision: "22"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c674cc127f08109ecf40d99d890b088d55e9c906
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|`CMFCRibbonCustomizeDialog::GetThisClass`|Usato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
  
## <a name="remarks"></a>Note  
 MFC crea un'istanza di questa classe automaticamente se non è stato elaborato il messaggio AFX_WM_ON_RIBBON_CUSTOMIZE o se viene restituito 0 dal gestore del messaggio.  
  
 Se si desidera utilizzare questa classe dell'applicazione per visualizzare la barra multifunzione **Personalizza** finestra di dialogo casella, solo un'istanza e chiamare il `DoModal` metodo.  
  
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
 Un puntatore al `CMFCRibbonBar` che è possibile personalizzare.  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un `CMFCRibbonCustomizeDialog` oggetto.  
  
 [!code-cpp[NVC_MFC_RibbonApp#18](../../mfc/reference/codesnippet/cpp/cmfcribboncustomizedialog-class_1.cpp)]  
  
### <a name="remarks"></a>Note  
 Il costruttore crea un [CMFCRibbonCustomizePropertyPage classe](../../mfc/reference/cmfcribboncustomizepropertypage-class.md) e lo aggiunge alla raccolta di pagine della finestra delle proprietà.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)