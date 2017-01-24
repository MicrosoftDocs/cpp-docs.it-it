---
title: "CPropertyPage Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CPropertyPage"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPropertyPage class"
  - "finestre di dialogo, schede"
  - "proprietà (pagine), CPropertyPage class"
  - "finestre di dialogo a schede"
ms.assetid: d9000a21-aa81-4530-85d9-f43432afb4dc
caps.latest.revision: 25
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CPropertyPage Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta le singole pagine di una finestra delle proprietà in caso contrario, note come una finestra di dialogo della scheda.  
  
## Sintassi  
  
```  
class CPropertyPage : public CDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPropertyPage::CPropertyPage](../Topic/CPropertyPage::CPropertyPage.md)|Costruisce un oggetto `CPropertyPage`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPropertyPage::CancelToClose](../Topic/CPropertyPage::CancelToClose.md)|Modifica il pulsante OK per Chiudere leggere e disabilitare il pulsante Annulla, dopo una modifica irreversibile nella pagina della finestra delle proprietà modale.|  
|[CPropertyPage::Construct](../Topic/CPropertyPage::Construct.md)|Costruisce un oggetto `CPropertyPage`.  Utilizzare `Construct` se si desidera specificare i parametri in fase di esecuzione, oppure se si utilizza le matrici.|  
|[CPropertyPage::GetPSP](../Topic/CPropertyPage::GetPSP.md)|Recuperare la struttura di Windows [PROPSHEETPAGE](http://msdn.microsoft.com/library/windows/desktop/bb774548) associata all'oggetto `CPropertyPage`.|  
|[CPropertyPage::OnApply](../Topic/CPropertyPage::OnApply.md)|Chiamato dal framework quando viene ora applicare i pulsanti viene selezionato.|  
|[CPropertyPage::OnCancel](../Topic/CPropertyPage::OnCancel.md)|Chiamato dal framework quando il pulsante di annullamento viene selezionato.|  
|[CPropertyPage::OnKillActive](../Topic/CPropertyPage::OnKillActive.md)|Chiamato dal framework quando la pagina corrente non è più attiva la pagina.  Eseguire qui la convalida dei dati.|  
|[CPropertyPage::OnOK](../Topic/CPropertyPage::OnOK.md)|Chiamato dal framework quando OK, ora applicati, o dal pulsante chiudi viene selezionato.|  
|[CPropertyPage::OnQueryCancel](../Topic/CPropertyPage::OnQueryCancel.md)|Chiamato dal framework quando il pulsante di annullamento viene fatto clic su e prima dell'annullamento è stata eseguita.|  
|[CPropertyPage::OnReset](../Topic/CPropertyPage::OnReset.md)|Chiamato dal framework quando il pulsante di annullamento viene selezionato.|  
|[CPropertyPage::OnSetActive](../Topic/CPropertyPage::OnSetActive.md)|Chiamato dal framework quando la pagina viene eseguita la pagina attiva.|  
|[CPropertyPage::OnWizardBack](../Topic/CPropertyPage::OnWizardBack.md)|Chiamato dal framework quando il pulsante indietro viene selezionato durante l'utilizzo di una finestra delle proprietà di procedura guidata\- tipo.|  
|[CPropertyPage::OnWizardFinish](../Topic/CPropertyPage::OnWizardFinish.md)|Chiamato dal framework quando il pulsante fine viene selezionato durante l'utilizzo di una finestra delle proprietà di procedura guidata\- tipo.|  
|[CPropertyPage::OnWizardNext](../Topic/CPropertyPage::OnWizardNext.md)|Chiamato dal framework quando il pulsante successivo viene selezionato durante l'utilizzo di una finestra delle proprietà di procedura guidata\- tipo.|  
|[CPropertyPage::QuerySiblings](../Topic/CPropertyPage::QuerySiblings.md)|Inoltra il messaggio in ogni pagina delle proprietà.|  
|[CPropertyPage::SetModified](../Topic/CPropertyPage::SetModified.md)|La chiamata per attivare o disattivare l'applicazione verranno spostati.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPropertyPage::m\_psp](../Topic/CPropertyPage::m_psp.md)|La struttura di Windows [PROPSHEETPAGE](http://msdn.microsoft.com/library/windows/desktop/bb774548).  Fornisce l'accesso ai parametri di base della pagina delle proprietà.|  
  
## Note  
 Come con le finestre di dialogo standard, derivare da `CPropertyPage` per ogni pagina nella finestra delle proprietà.  Per utilizzare `CPropertyPage`oggetti derivati da, creare innanzitutto un oggetto [CPropertySheet](../../mfc/reference/cpropertysheet-class.md) quindi creare un oggetto per ogni pagina che viene inserito nella finestra delle proprietà.  Chiamare [CPropertySheet::AddPage](../Topic/CPropertySheet::AddPage.md) per ogni pagina nel foglio quindi visualizzare la finestra delle proprietà chiamando [CPropertySheet::DoModal](../Topic/CPropertySheet::DoModal.md) per una finestra delle proprietà modale, o [CPropertySheet::Create](../Topic/CPropertySheet::Create.md) per una finestra delle proprietà non modale.  
  
 È possibile creare un tipo di finestra di dialogo della scheda chiamato una procedura guidata, costituito da una finestra delle proprietà a una sequenza di pagine delle proprietà che guidano l'utente nei passaggi di un'operazione, come l'impostazione del dispositivo o creare un informazioni.  In una finestra di dialogo della scheda della procedura guidata\- tipo, pagine delle proprietà non sono schede e una sola pagina delle proprietà è visibile per volta.  Inoltre, anziché avere OK e ora applicare i pulsanti, una finestra di dialogo della scheda della procedura guidata\- tipo dispone di un pulsante indietro, un o successivo completa il pulsante e un pulsante Annulla.  
  
 Per ulteriori informazioni sull'impostazione delle proprietà come procedura guidata, vedere [CPropertySheet::SetWizardMode](../Topic/CPropertySheet::SetWizardMode.md).  Per ulteriori informazioni sull'utilizzo degli oggetti `CPropertyPage`, vedere l'articolo [Finestre e le pagine delle proprietà](../../mfc/property-sheets-and-property-pages-in-mfc.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 `CPropertyPage`  
  
## Requisiti  
 **Header:** afxdlgs.h  
  
## Vedere anche  
 [MFC campione CMNCTRL1](../../top/visual-cpp-samples.md)   
 [Esempio CMNCTRL2 MFC](../../top/visual-cpp-samples.md)   
 [Esempio PROPDLG MFC](../../top/visual-cpp-samples.md)   
 [Esempio SNAPVW MFC](../../top/visual-cpp-samples.md)   
 [CDialog Class](../../mfc/reference/cdialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CPropertySheet Class](../../mfc/reference/cpropertysheet-class.md)   
 [CDialog Class](../../mfc/reference/cdialog-class.md)   
 [CPropertySheet::SetWizardMode](../Topic/CPropertySheet::SetWizardMode.md)