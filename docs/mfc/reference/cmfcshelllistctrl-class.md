---
title: "CMFCShellListCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCShellListCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCShellListCtrl class"
ms.assetid: ad472958-5586-4c50-aadf-1844c30bf6e7
caps.latest.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 32
---
# CMFCShellListCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCShellListCtrl` fornisce la funzionalità del controllo elenco di Windows e la espandere includendo la possibilità di visualizzare un elenco di elementi della shell.  
  
## Sintassi  
  
```  
class CMFCShellListCtrl : public CMFCListCtrl  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCShellListCtrl::DisplayFolder](../Topic/CMFCShellListCtrl::DisplayFolder.md)|Visualizza un elenco di elementi contenuti in una cartella specificata.|  
|[CMFCShellListCtrl::DisplayParentFolder](../Topic/CMFCShellListCtrl::DisplayParentFolder.md)|Visualizza un elenco di elementi contenuti nella cartella che è il padre della cartella attualmente visualizzate.|  
|[CMFCShellListCtrl::EnableShellContextMenu](../Topic/CMFCShellListCtrl::EnableShellContextMenu.md)|Abilita o disabilita il menu di scelta rapida.|  
|[CMFCShellListCtrl::GetCurrentFolder](../Topic/CMFCShellListCtrl::GetCurrentFolder.md)|Recupera il percorso della cartella corrente.|  
|[CMFCShellListCtrl::GetCurrentFolderName](../Topic/CMFCShellListCtrl::GetCurrentFolderName.md)|Recupera il nome della cartella corrente.|  
|[CMFCShellListCtrl::GetCurrentItemIdList](../Topic/CMFCShellListCtrl::GetCurrentItemIdList.md)|Restituisce il PIDL dell'elemento corrente il controllo elenco.|  
|[CMFCShellListCtrl::GetCurrentShellFolder](../Topic/CMFCShellListCtrl::GetCurrentShellFolder.md)|Restituisce un puntatore alla cartella corrente della shell.|  
|[CMFCShellListCtrl::GetItemPath](../Topic/CMFCShellListCtrl::GetItemPath.md)|Restituisce il percorso testuale di un elemento.|  
|[CMFCShellListCtrl::GetItemTypes](../Topic/CMFCShellListCtrl::GetItemTypes.md)|Tipi di elemento della shell di restituisce visualizzati dal controllo elenco.|  
|[CMFCShellListCtrl::IsDesktop](../Topic/CMFCShellListCtrl::IsDesktop.md)|Controllare se la cartella selezionata è la cartella desktop.|  
|[CMFCShellListCtrl::OnCompareItems](../Topic/CMFCShellListCtrl::OnCompareItems.md)|Il framework chiama questo metodo quando si confrontano due elementi.  \(Override [CMFCListCtrl::OnCompareItems](../Topic/CMFCListCtrl::OnCompareItems.md)\).|  
|[CMFCShellListCtrl::OnFormatFileDate](../Topic/CMFCShellListCtrl::OnFormatFileDate.md)|Chiamato quando il framework recupera la data del file visualizzati dal controllo elenco.|  
|[CMFCShellListCtrl::OnFormatFileSize](../Topic/CMFCShellListCtrl::OnFormatFileSize.md)|Chiamato quando il framework converte le dimensioni di un controllo elenco.|  
|[CMFCShellListCtrl::OnGetItemIcon](../Topic/CMFCShellListCtrl::OnGetItemIcon.md)|Chiamato quando il framework recupera l'icona di un elemento di controllo elenco.|  
|[CMFCShellListCtrl::OnGetItemText](../Topic/CMFCShellListCtrl::OnGetItemText.md)|Chiamato quando il framework converte il testo di un elemento di controllo elenco.|  
|[CMFCShellListCtrl::OnSetColumns](../Topic/CMFCShellListCtrl::OnSetColumns.md)|Chiamato dal framework quando imposta i nomi delle colonne.|  
|[CMFCShellListCtrl::Refresh](../Topic/CMFCShellListCtrl::Refresh.md)|Aggiornare e aggiorna il controllo elenco.|  
|[CMFCShellListCtrl::SetItemTypes](../Topic/CMFCShellListCtrl::SetItemTypes.md)|Imposta il tipo di elementi visualizzati dal controllo elenco.|  
  
## Note  
 La classe `CMFCShellListCtrl` estendere la funzionalità [CMFCListCtrl Class](../../mfc/reference/cmfclistctrl-class.md) al programma per elencare gli elementi della shell di Windows.  Il formato di visualizzazione che viene utilizzato come quello di una visualizzazione elenco per una finestra di esplorazione.  
  
 Un oggetto [CMFCShellTreeCtrl](../../mfc/reference/cmfcshelltreectrl-class.md) può essere associato a un oggetto `CMFCShellListCtrl` per creare una finestra di esplorazione completa.  Quindi, selezionare un elemento in `CMFCShellTreeCtrl` modo l'oggetto `CMFCShellListCtrl` per elencare il contenuto dell'elemento selezionato.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come creare un oggetto classe `CMFCShellListCtrl` e come visualizzare la cartella padre della cartella attualmente visualizzate.  Questo frammento di codice fa parte [Esempio explorer](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_Explorer#1](../../mfc/reference/codesnippet/CPP/cmfcshelllistctrl-class_1.h)]  
[!code-cpp[NVC_MFC_Explorer#2](../../mfc/reference/codesnippet/CPP/cmfcshelllistctrl-class_2.cpp)]  
[!code-cpp[NVC_MFC_Explorer#3](../../mfc/reference/codesnippet/CPP/cmfcshelllistctrl-class_3.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CListCtrl](../../mfc/reference/clistctrl-class.md)  
  
 [CMFCListCtrl](../../mfc/reference/cmfclistctrl-class.md)  
  
 [CMFCShellListCtrl](../../mfc/reference/cmfcshelllistctrl-class.md)  
  
## Requisiti  
 **intestazione:** afxshelllistCtrl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCListCtrl Class](../../mfc/reference/cmfclistctrl-class.md)   
 [CMFCShellTreeCtrl Class](../../mfc/reference/cmfcshelltreectrl-class.md)