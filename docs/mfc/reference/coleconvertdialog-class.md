---
title: "COleConvertDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleConvertDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleConvertDialog class"
  - "Converti (finestra di dialogo)"
  - "finestre di dialogo, OLE"
  - "OLE Convert dialog box"
  - "OLE (finestre di dialogo), Convert"
ms.assetid: a7c57714-31e8-4b78-834d-8ddd1b856a1c
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# COleConvertDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per ulteriori informazioni, vedere la struttura [OLEUICONVERT](http://msdn.microsoft.com/library/windows/desktop/ms686657) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Sintassi  
  
```  
class COleConvertDialog : public COleDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleConvertDialog::COleConvertDialog](../Topic/COleConvertDialog::COleConvertDialog.md)|Costruisce un oggetto `COleConvertDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleConvertDialog::DoConvert](../Topic/COleConvertDialog::DoConvert.md)|Esegue la conversione specificata nella finestra di dialogo.|  
|[COleConvertDialog::DoModal](../Topic/COleConvertDialog::DoModal.md)|Visualizzare la finestra di dialogo elemento della modifica OLE.|  
|[COleConvertDialog::GetClassID](../Topic/COleConvertDialog::GetClassID.md)|Ottiene **CLSID** associato all'elemento selezionato.|  
|[COleConvertDialog::GetDrawAspect](../Topic/COleConvertDialog::GetDrawAspect.md)|Specifica se disegnare l'elemento come icona.|  
|[COleConvertDialog::GetIconicMetafile](../Topic/COleConvertDialog::GetIconicMetafile.md)|Ottiene un handle a un metafile associate al form in formato dell'icona di questo elemento.|  
|[COleConvertDialog::GetSelectionType](../Topic/COleConvertDialog::GetSelectionType.md)|Ottiene il tipo di selezione scelto.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleConvertDialog::m\_cv](../Topic/COleConvertDialog::m_cv.md)|Una struttura che controlla il comportamento della finestra di dialogo.|  
  
## Note  
  
> [!NOTE]
>  Il codice generato dalla creazione guidata del contenitore dell'applicazione utilizza questa classe.  
  
 Per ulteriori informazioni sulle finestre di dialogo OLE\- specifiche, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COleConvertDialog`  
  
## Requisiti  
 **Header:** afxodlgs.h  
  
## Vedere anche  
 [COleDialog Class](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleDialog Class](../../mfc/reference/coledialog-class.md)