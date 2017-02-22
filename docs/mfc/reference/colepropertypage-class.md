---
title: "COlePropertyPage Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COlePropertyPage"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COlePropertyPage class"
  - "controlli personalizzati [MFC], proprietà"
  - "displaying properties"
  - "OLE property pages"
  - "proprietà [C++], visualizzazione"
  - "proprietà (pagine), OLE"
ms.assetid: e9972872-8e6b-4550-905e-d36a274d64dc
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# COlePropertyPage Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzata per visualizzare le proprietà di un controllo personalizzato in un'interfaccia grafica, simile a una finestra di dialogo.  
  
## Sintassi  
  
```  
class AFX_NOVTABLE COlePropertyPage : public CDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COlePropertyPage::COlePropertyPage](../Topic/COlePropertyPage::COlePropertyPage.md)|Costruisce un oggetto `COlePropertyPage`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COlePropertyPage::GetControlStatus](../Topic/COlePropertyPage::GetControlStatus.md)|Indica se l'utente ha modificato il valore del controllo.|  
|[COlePropertyPage::GetObjectArray](../Topic/COlePropertyPage::GetObjectArray.md)|Restituisce la matrice di oggetti modificati dalla pagina delle proprietà.|  
|[COlePropertyPage::GetPageSite](../Topic/COlePropertyPage::GetPageSite.md)|Restituisce un puntatore a interfaccia `IPropertyPageSite` della pagina delle proprietà.|  
|[COlePropertyPage::IgnoreApply](../Topic/COlePropertyPage::IgnoreApply.md)|Determina i controlli non supportano il pulsante dell'applicazione.|  
|[COlePropertyPage::IsModified](../Topic/COlePropertyPage::IsModified.md)|Indica se l'utente ha modificato la pagina delle proprietà.|  
|[COlePropertyPage::OnEditProperty](../Topic/COlePropertyPage::OnEditProperty.md)|Chiamato dal framework quando l'utente modifica una proprietà.|  
|[COlePropertyPage::OnHelp](../Topic/COlePropertyPage::OnHelp.md)|Chiamato dal framework quando i l'utente richiama di.|  
|[COlePropertyPage::OnInitDialog](../Topic/COlePropertyPage::OnInitDialog.md)|Chiamato dal framework quando la pagina delle proprietà inizializzata.|  
|[COlePropertyPage::OnObjectsChanged](../Topic/COlePropertyPage::OnObjectsChanged.md)|Chiamato dal framework quando un altro controllo OLE, con nuove proprietà, viene scelto.|  
|[COlePropertyPage::OnSetPageSite](../Topic/COlePropertyPage::OnSetPageSite.md)|Chiamato dal framework quando la finestra proprietà fornisce il sito della pagina.|  
|[COlePropertyPage::SetControlStatus](../Topic/COlePropertyPage::SetControlStatus.md)|Impostare un flag che indica se l'utente ha modificato il valore del controllo.|  
|[COlePropertyPage::SetDialogResource](../Topic/COlePropertyPage::SetDialogResource.md)|Imposta la finestra di dialogo della pagina delle proprietà.|  
|[COlePropertyPage::SetHelpInfo](../Topic/COlePropertyPage::SetHelpInfo.md)|Imposta il testo breve della pagina delle proprietà, il nome del file della Guida e il relativo contesto della guida.|  
|[COlePropertyPage::SetModifiedFlag](../Topic/COlePropertyPage::SetModifiedFlag.md)|Impostare un flag che indica se l'utente ha modificato la pagina delle proprietà.|  
|[COlePropertyPage::SetPageName](../Topic/COlePropertyPage::SetPageName.md)|Imposta il nome della pagina delle proprietà \(didascalia\).|  
  
## Note  
 Ad esempio, una pagina delle proprietà può includere un controllo di modifica che consente all'utente di visualizzare e modificare la proprietà della barra del titolo del controllo.  
  
 Ogni oggetto personalizzato o proprietà del controllo delle azioni può avere un controllo finestra di dialogo che consente all'utente del controllo visualizzare il valore di proprietà corrente e modificare tale valore se necessario.  
  
 Per ulteriori informazioni su l `COlePropertyPage`, vedere l'articolo [controlli ActiveX: Pagine delle proprietà](../../mfc/mfc-activex-controls-property-pages.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 `COlePropertyPage`  
  
## Requisiti  
 **Header:** afxctl.h  
  
## Vedere anche  
 [Esempi relativi a MFC CIRC3](../../top/visual-cpp-samples.md)   
 [Esempio TESTHELP MFC](../../top/visual-cpp-samples.md)   
 [CDialog Class](../../mfc/reference/cdialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDialog Class](../../mfc/reference/cdialog-class.md)