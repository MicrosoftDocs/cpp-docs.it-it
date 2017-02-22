---
title: "CMFCPropertyPage Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCPropertyPage"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPropertyPage class"
  - "CMFCPropertyPage::CreateObject method"
  - "CMFCPropertyPage::OnSetActive method"
  - "CMFCPropertyPage::PreTranslateMessage method"
ms.assetid: d279d7f2-2d81-418d-9f23-6147d6e8df09
caps.latest.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 32
---
# CMFCPropertyPage Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCPropertyPage` supporta la visualizzazione di menu di scelta rapida a una pagina delle proprietà.  
  
## Sintassi  
  
```  
class CMFCPropertyPage : public CPropertyPage  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPropertyPage::CMFCPropertyPage](../Topic/CMFCPropertyPage::CMFCPropertyPage.md)|Costruisce un oggetto `CMFCPropertyPage`.|  
|`CMFCPropertyPage::~CMFCPropertyPage`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCPropertyPage::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|`CMFCPropertyPage::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|`CMFCPropertyPage::OnSetActive`|Questa funzione membro viene chiamata dal framework quando la pagina viene scelta dall'utente e diventa la pagina attiva.  \(Override [CPropertyPage::OnSetActive](../Topic/CPropertyPage::OnSetActive.md)\).|  
|`CMFCPropertyPage::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni Windows [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) e [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955).  Per ulteriori sintassi del metodo e informazioni, vedere [CWnd::PreTranslateMessage](../Topic/CWnd::PreTranslateMessage.md).  \(Override `CPropertyPage::PreTranslateMessage`\).|  
  
## Note  
 La classe `CMFCPropertyPage` rappresenta le singole pagine di una finestra delle proprietà in caso contrario, note come una finestra di dialogo della scheda.  
  
 Utilizzare la classe `CMFCPropertyPage` insieme alla classe [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md).  Per utilizzare i menu a una pagina delle proprietà, sostituire tutte le occorrenze della classe `CPropertyPage` alla classe `CMFCPropertyPage`.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CPropertyPage](../../mfc/reference/cpropertypage-class.md)  
  
 [CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md)  
  
## Requisiti  
 **intestazione:** afxpropertypage.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCPropertySheet Class](../../mfc/reference/cmfcpropertysheet-class.md)