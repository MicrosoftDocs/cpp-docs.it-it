---
title: "COleLinksDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleLinksDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleLinksDialog class"
  - "finestre di dialogo, OLE"
  - "Edit Links dialog box"
  - "OLE Edit Links dialog box"
ms.assetid: fb2eb638-2809-46db-ac74-392a732affc7
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# COleLinksDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato per la modifica delle interfacce OLE la finestra di dialogo.  
  
## Sintassi  
  
```  
class COleLinksDialog : public COleDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleLinksDialog::COleLinksDialog](../Topic/COleLinksDialog::COleLinksDialog.md)|Costruisce un oggetto `COleLinksDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleLinksDialog::DoModal](../Topic/COleLinksDialog::DoModal.md)|Verrà visualizzata la finestra di dialogo dei collegamenti di modifica OLE.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleLinksDialog::m\_el](../Topic/COleLinksDialog::m_el.md)|Una struttura di tipo **OLEUIEDITLINKS** che controlla il comportamento della finestra di dialogo.|  
  
## Note  
 Creare un oggetto di classe `COleLinksDialog` quando si desidera chiamare questa finestra di dialogo.  Dopo che un oggetto `COleLinksDialog` è stato creato, è possibile utilizzare la struttura [m\_el](../Topic/COleLinksDialog::m_el.md) per inizializzare i valori o gli stati dei controlli nella finestra di dialogo.  La struttura `m_el` è di tipo **OLEUIEDITLINKS**.  Per ulteriori informazioni sull'utilizzo di questa classe della finestra di dialogo, vedere la funzione membro [DoModal](../Topic/COleLinksDialog::DoModal.md).  
  
> [!NOTE]
>  Il codice generato dalla creazione guidata del contenitore dell'applicazione utilizza questa classe.  
  
 Per ulteriori informazioni, vedere la struttura [OLEUIEDITLINKS](http://msdn.microsoft.com/library/windows/desktop/ms678492) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni sulle finestre di dialogo OLE\- specifiche, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COleLinksDialog`  
  
## Requisiti  
 **Header:** afxodlgs.h  
  
## Vedere anche  
 [COleDialog Class](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleDialog Class](../../mfc/reference/coledialog-class.md)