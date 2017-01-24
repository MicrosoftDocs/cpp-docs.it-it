---
title: "COleBusyDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleBusyDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleBusyDialog class"
  - "Server Busy dialog box"
  - "Server Not Responding dialog box"
ms.assetid: c881a532-9672-4c41-b51b-5ce4a7246a6b
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleBusyDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato per il server OLE non rispondere o finestre di dialogo in seguito server.  
  
## Sintassi  
  
```  
class COleBusyDialog : public COleDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleBusyDialog::COleBusyDialog](../Topic/COleBusyDialog::COleBusyDialog.md)|Costruisce un oggetto `COleBusyDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleBusyDialog::DoModal](../Topic/COleBusyDialog::DoModal.md)|Visualizzare la finestra di dialogo occupata del server OLE.|  
|[COleBusyDialog::GetSelectionType](../Topic/COleBusyDialog::GetSelectionType.md)|Determina la scelta effettuata nella finestra di dialogo.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleBusyDialog::m\_bz](../Topic/COleBusyDialog::m_bz.md)|Struttura di tipo **OLEUIBUSY** che controlla il comportamento della finestra di dialogo.|  
  
## Note  
 Creare un oggetto di classe `COleBusyDialog` quando si desidera chiamare queste finestre di dialogo.  Dopo che un oggetto `COleBusyDialog` è stato creato, è possibile utilizzare la struttura [m\_bz](../Topic/COleBusyDialog::m_bz.md) per inizializzare i valori o gli stati dei controlli nella finestra di dialogo.  La struttura `m_bz` è di tipo **OLEUIBUSY**.  Per ulteriori informazioni sull'utilizzo di questa classe della finestra di dialogo, vedere la funzione membro [DoModal](../Topic/COleBusyDialog::DoModal.md).  
  
> [!NOTE]
>  Il codice generato dalla creazione guidata del contenitore dell'applicazione utilizza questa classe.  
  
 Per ulteriori informazioni, vedere la struttura [OLEUIBUSY](http://msdn.microsoft.com/library/windows/desktop/ms682493) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni sulle finestre di dialogo OLE\- specifiche, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COleBusyDialog`  
  
## Requisiti  
 **Header:** afxodlgs.h  
  
## Vedere anche  
 [COleDialog Class](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleDialog Class](../../mfc/reference/coledialog-class.md)