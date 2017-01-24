---
title: "COlePropertiesDialog Class | Microsoft Docs"
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
  - "COlePropertiesDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COlePropertiesDialog class"
  - "finestre di dialogo, OLE"
  - "Object Properties dialog box"
  - "OLE (documenti), modifica di proprietà"
  - "OLE Object Properties dialog box"
  - "proprietà (pagine), OLE"
ms.assetid: a54dbc89-1447-4329-bd01-00e98ec9e935
caps.latest.revision: 23
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COlePropertiesDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula la finestra di dialogo comuni delle proprietà degli oggetti OLE di Windows.  
  
## Sintassi  
  
```  
  
class COlePropertiesDialog : public COleDialog  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COlePropertiesDialog::COlePropertiesDialog](../Topic/COlePropertiesDialog::COlePropertiesDialog.md)|Costruisce un oggetto `COlePropertiesDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COlePropertiesDialog::DoModal](../Topic/COlePropertiesDialog::DoModal.md)|Visualizzare la finestra di dialogo e sarà all'utente di effettuare una selezione.|  
|[COlePropertiesDialog::OnApplyScale](../Topic/COlePropertiesDialog::OnApplyScale.md)|Chiamato dal framework quando il ridimensionamento dell'elemento del documento è stato modificato.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COlePropertiesDialog::m\_gp](../Topic/COlePropertiesDialog::m_gp.md)|Una struttura utilizzata per inizializzare la pagina "generale" di un oggetto `COlePropertiesDialog`.|  
|[COlePropertiesDialog::m\_lp](../Topic/COlePropertiesDialog::m_lp.md)|Una struttura utilizzata per inizializzare la pagina "di collegamento" di un oggetto `COlePropertiesDialog`.|  
|[COlePropertiesDialog::m\_op](../Topic/COlePropertiesDialog::m_op.md)|Una struttura utilizzata per inizializzare l'oggetto `COlePropertiesDialog`.|  
|[COlePropertiesDialog::m\_psh](../Topic/COlePropertiesDialog::m_psh.md)|Una struttura utilizzata per aggiungere ulteriori pagine delle proprietà personalizzata.|  
|[COlePropertiesDialog::m\_vp](../Topic/COlePropertiesDialog::m_vp.md)|Una struttura utilizzata per personalizzare la pagina di "visualizzazione" di un oggetto `COlePropertiesDialog`.|  
  
## Note  
 Le finestre di dialogo comuni delle proprietà degli oggetti OLE consentono di visualizzare e modificare le proprietà di un OLE documenti l'elemento in modo coerente con gli standard di Windows.  Queste proprietà includono, tra l'altro, le informazioni sul file rappresentato dall'elemento del documento, le opzioni per la visualizzazione della rappresentazione in scala di immagine icona e e le informazioni sul collegamento dell'elemento \(se l'elemento è connessi\).  
  
 Per utilizzare un oggetto `COlePropertiesDialog`, creare innanzitutto l'oggetto utilizzando il costruttore `COlePropertiesDialog`.  Dopo la finestra di dialogo è stata creata, chiamare la funzione membro `DoModal` per visualizzare la finestra di dialogo e per consentire di modificare le proprietà dell'elemento.  `DoModal` restituisce se l'utente ha scelto OK \(**IDOK**\) o sul pulsante di annullamento \(**IDCANCEL**\).  Oltre a OK e ai pulsanti cancel, esiste un pulsante dell'applicazione.  Quando l'utente seleziona applicare, le modifiche apportate alle proprietà degli elementi del documento si applicano all'elemento e la propria immagine viene aggiornata automaticamente, ma rimane attivo di.  
  
 Il membro dati [m\_psh](../Topic/COlePropertiesDialog::m_psh.md) è un puntatore a una struttura **PROPSHEETHEADER** e in molti casi non è necessario accedervi in modo esplicito.  Un'eccezione è quando sono necessarie le pagine delle proprietà aggiuntive oltre il generale predefinito, visualizzare e collegare le pagine.  In questo caso, è possibile modificare il membro dati `m_psh` per includere le pagine personalizzate prima di chiamare la funzione membro `DoModal`.  
  
 Per ulteriori informazioni sulle finestre di dialogo OLE, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COlePropertiesDialog`  
  
## Requisiti  
 **Header:** afxodlgs.h  
  
## Vedere anche  
 [MFC campione CIRC](../../top/visual-cpp-samples.md)   
 [COleDialog Class](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleDialog Class](../../mfc/reference/coledialog-class.md)   
 [CPropertyPage Class](../../mfc/reference/cpropertypage-class.md)