---
title: "COleUpdateDialog Class | Microsoft Docs"
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
  - "COleUpdateDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleUpdateDialog class"
  - "collegamenti [C++], aggiornamento"
  - "OLE (finestre di dialogo), Edit Link"
  - "OLE link updating"
  - "Update dialog"
  - "updating OLE links"
ms.assetid: 699ca980-52b1-4cf8-9ab1-ac6767ad5b0e
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleUpdateDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato per un caso speciale di modifica delle interfacce OLE la finestra di dialogo, che deve essere utilizzata quando è necessario aggiornare gli oggetti di lavoro di o incorporati solo di esistente in un documento.  
  
## Sintassi  
  
```  
class COleUpdateDialog : public COleLinksDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleUpdateDialog::COleUpdateDialog](../Topic/COleUpdateDialog::COleUpdateDialog.md)|Costruisce un oggetto `COleUpdateDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleUpdateDialog::DoModal](../Topic/COleUpdateDialog::DoModal.md)|Visualizzare la finestra di dialogo **Tasti di modifica** in una modalità di aggiornamento.|  
  
## Note  
 Per ulteriori informazioni sulle finestre di dialogo OLE\- specifiche, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 [COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)  
  
 `COleUpdateDialog`  
  
## Requisiti  
 **Header:** afxodlgs.h  
  
## Vedere anche  
 [Esempio OCLIENT MFC](../../top/visual-cpp-samples.md)   
 [COleLinksDialog Class](../../mfc/reference/colelinksdialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleLinksDialog Class](../../mfc/reference/colelinksdialog-class.md)