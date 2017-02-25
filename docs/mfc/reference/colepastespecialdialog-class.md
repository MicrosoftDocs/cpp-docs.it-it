---
title: "COlePasteSpecialDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COlePasteSpecialDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COlePasteSpecialDialog class"
  - "finestre di dialogo, Paste Special"
  - "OLE Paste Special dialog box"
  - "Paste Special dialog box"
ms.assetid: 0e82ef9a-9bbe-457e-8240-42c86a0534f7
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# COlePasteSpecialDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato per la finestra di dialogo di incollare speciale OLE.  
  
## Sintassi  
  
```  
  
class COlePasteSpecialDialog : public COleDialog  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COlePasteSpecialDialog::COlePasteSpecialDialog](../Topic/COlePasteSpecialDialog::COlePasteSpecialDialog.md)|Costruisce un oggetto `COlePasteSpecialDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COlePasteSpecialDialog::AddFormat](../Topic/COlePasteSpecialDialog::AddFormat.md)|Aggiunge i formati personalizzati all'elenco di formati che l'applicazione può incollare.|  
|[COlePasteSpecialDialog::AddLinkEntry](../Topic/COlePasteSpecialDialog::AddLinkEntry.md)|Aggiunge una nuova voce all'elenco di formati degli Appunti supportati.|  
|[COlePasteSpecialDialog::AddStandardFormats](../Topic/COlePasteSpecialDialog::AddStandardFormats.md)|Aggiunge **CF\_BITMAP**, **CF\_DIB**, `CF_METAFILEPICT`e facoltativamente `CF_LINKSOURCE`elenco di formati che l'applicazione può incollare.|  
|[COlePasteSpecialDialog::CreateItem](../Topic/COlePasteSpecialDialog::CreateItem.md)|Crea l'elemento nel documento contenitore mediante il formato specificato.|  
|[COlePasteSpecialDialog::DoModal](../Topic/COlePasteSpecialDialog::DoModal.md)|Verrà visualizzata la finestra di dialogo incollare speciale OLE.|  
|[COlePasteSpecialDialog::GetDrawAspect](../Topic/COlePasteSpecialDialog::GetDrawAspect.md)|Indica se visualizzare l'elemento come icona o meno.|  
|[COlePasteSpecialDialog::GetIconicMetafile](../Topic/COlePasteSpecialDialog::GetIconicMetafile.md)|Ottiene un handle a un metafile associate al form in formato dell'icona di questo elemento.|  
|[COlePasteSpecialDialog::GetPasteIndex](../Topic/COlePasteSpecialDialog::GetPasteIndex.md)|Ottiene l'indice delle opzioni di incolla disponibili che è stato scelto dall'utente.|  
|[COlePasteSpecialDialog::GetSelectionType](../Topic/COlePasteSpecialDialog::GetSelectionType.md)|Ottiene il tipo di selezione scelto.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COlePasteSpecialDialog::m\_ps](../Topic/COlePasteSpecialDialog::m_ps.md)|Una struttura di tipo **OLEUIPASTESPECIAL** che controlla la funzione della finestra di dialogo.|  
  
## Note  
 Creare un oggetto di classe `COlePasteSpecialDialog` quando si desidera chiamare questa finestra di dialogo.  Dopo che un oggetto `COlePasteSpecialDialog` è stato creato, è possibile utilizzare le funzioni membro [AddStandardFormats](../Topic/COlePasteSpecialDialog::AddStandardFormats.md) e [AddFormat](../Topic/COlePasteSpecialDialog::AddFormat.md) per aggiungere i formati degli Appunti nella finestra di dialogo.  È inoltre possibile utilizzare la struttura [m\_ps](../Topic/COlePasteSpecialDialog::m_ps.md) per inizializzare i valori o gli stati dei controlli nella finestra di dialogo.  La struttura `m_ps` è di tipo **OLEUIPASTESPECIAL**.  
  
 Per ulteriori informazioni, vedere la struttura [OLEUIPASTESPECIAL](http://msdn.microsoft.com/library/windows/desktop/ms692434) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni sulle finestre di dialogo OLE\- specifiche, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COlePasteSpecialDialog`  
  
## Requisiti  
 **Header:** afxodlgs.h  
  
## Vedere anche  
 [Esempio OCLIENT MFC](../../top/visual-cpp-samples.md)   
 [COleDialog Class](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleDialog Class](../../mfc/reference/coledialog-class.md)