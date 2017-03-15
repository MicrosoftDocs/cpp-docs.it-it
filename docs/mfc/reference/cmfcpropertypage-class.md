---
title: Classe CMFCPropertyPage | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCPropertyPage
dev_langs:
- C++
helpviewer_keywords:
- CMFCPropertyPage::PreTranslateMessage method
- CMFCPropertyPage::CreateObject method
- CMFCPropertyPage class
- CMFCPropertyPage::OnSetActive method
ms.assetid: d279d7f2-2d81-418d-9f23-6147d6e8df09
caps.latest.revision: 30
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
ms.openlocfilehash: 0e9cdfa8a98c034839fac119c828cf1b92a1867a
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcpropertypage-class"></a>Classe CMFCPropertyPage
La `CMFCPropertyPage` classe supporta la visualizzazione del menu di scelta rapida in una pagina delle proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCPropertyPage : public CPropertyPage  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPropertyPage::CMFCPropertyPage](#cmfcpropertypage)|Costruisce un oggetto `CMFCPropertyPage`.|  
|`CMFCPropertyPage::~CMFCPropertyPage`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCPropertyPage::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|`CMFCPropertyPage::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|`CMFCPropertyPage::OnSetActive`|Questa funzione membro viene chiamata dal framework quando la pagina viene scelto dall'utente e diventa la pagina attiva. (Esegue l'override di [CPropertyPage:: OnSetActive](../../mfc/reference/cpropertypage-class.md#onsetactive).)|  
|`CMFCPropertyPage::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati per il [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) funzioni di Windows. Per ulteriori informazioni e la sintassi del metodo, vedere [CWnd:: PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage). Esegue l'override di `CPropertyPage::PreTranslateMessage`.|  
  
## <a name="remarks"></a>Note  
 La `CMFCPropertyPage` classe rappresenta singole pagine di una finestra delle proprietà, altrimenti nota come finestra di dialogo a schede.  
  
 Utilizzare il `CMFCPropertyPage` classe con il [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md) (classe). Per utilizzare i menu nella pagina delle proprietà, sostituire tutte le occorrenze di `CPropertyPage` classe con la `CMFCPropertyPage` classe.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CPropertyPage](../../mfc/reference/cpropertypage-class.md)  
  
 [CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpropertypage.h  
  
##  <a name="a-namecmfcpropertypagea--cmfcpropertypagecmfcpropertypage"></a><a name="cmfcpropertypage"></a>CMFCPropertyPage::CMFCPropertyPage  
 Costruisce un oggetto `CMFCPropertyPage`.  
  
```  
CMFCPropertyPage(
    UINT nIDTemplate,  
    UINT nIDCaption=0);

 
CMFCPropertyPage(
    LPCTSTR lpszTemplateName,  
    UINT nIDCaption=0);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDTemplate`  
 ID di risorsa del modello per questa pagina.  
  
 `nIDCaption`  
 ID di risorsa dell'etichetta da inserire nella scheda della pagina. Se è 0, il nome viene ottenuto dal modello di finestra di dialogo per questa pagina. Il valore predefinito è 0.  
  
 `lpszTemplateName`  
 Punta al nome del modello per questa pagina. Non può essere `NULL`.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sui parametri del costruttore, vedere [CPropertyPage::CPropertyPage](../../mfc/reference/cpropertypage-class.md#cpropertypage).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe di CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md)

