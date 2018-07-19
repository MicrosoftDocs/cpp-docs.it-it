---
title: Classe CMFCPropertyPage | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCPropertyPage
- AFXPROPERTYPAGE/CMFCPropertyPage
- AFXPROPERTYPAGE/CMFCPropertyPage::CMFCPropertyPage
dev_langs:
- C++
helpviewer_keywords:
- CMFCPropertyPage [MFC], CMFCPropertyPage
ms.assetid: d279d7f2-2d81-418d-9f23-6147d6e8df09
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2081053f406d9985d722da7d4cd9f3dad56f061c
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37848736"
---
# <a name="cmfcpropertypage-class"></a>Classe CMFCPropertyPage
Il `CMFCPropertyPage` classe supporta la visualizzazione del menu di scelta rapida nella pagina delle proprietà.  
  
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
|`CMFCPropertyPage::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|`CMFCPropertyPage::OnSetActive`|Questa funzione membro viene chiamata dal framework quando la pagina viene scelto dall'utente e diventa la pagina attiva. (Esegue l'override [CPropertyPage:: OnSetActive](../../mfc/reference/cpropertypage-class.md#onsetactive).)|  
|`CMFCPropertyPage::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati per la [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) funzioni di Windows. Per altre informazioni e la sintassi del metodo, vedere [CWnd:: PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage). Esegue l'override`CPropertyPage::PreTranslateMessage`.|  
  
## <a name="remarks"></a>Note  
 Il `CMFCPropertyPage` classe rappresenta singole pagine della finestra delle proprietà, noto anche come finestra di dialogo a schede.  
  
 Usare la `CMFCPropertyPage` classe insieme con il [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md) classe. Per usare i menu nella pagina delle proprietà, sostituire tutte le occorrenze del `CPropertyPage` classe con il `CMFCPropertyPage` classe.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CPropertyPage](../../mfc/reference/cpropertypage-class.md)  
  
 [CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpropertypage.h  
  
##  <a name="cmfcpropertypage"></a>  CMFCPropertyPage::CMFCPropertyPage  
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
 *nIDTemplate*  
 ID risorsa del modello per questa pagina.  
  
 *nIDCaption*  
 ID risorsa dell'etichetta da inserire nella scheda per questa pagina. Se è 0, il nome viene ottenuto dal modello della finestra di dialogo per questa pagina. Il valore predefinito è 0.  
  
 *lpszTemplateName*  
 Punta al nome del modello per questa pagina. Non può essere NULL.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 Per altre informazioni sui parametri del costruttore, vedere [CPropertyPage::CPropertyPage](../../mfc/reference/cpropertypage-class.md#cpropertypage).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md)
